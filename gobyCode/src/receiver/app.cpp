#include <goby/middleware/marshalling/protobuf.h>
#include <goby/zeromq/application/single_thread.h>

#include "config.pb.h"
#include "distress_signal.pb.h"
#include "hat/groups.h"

#include <fstream>
#include <ctime>

using goby::glog;
namespace si = boost::units::si;
using ApplicationBase = goby::zeromq::SingleThreadApplication<hat::config::Receiver>;

namespace hat 
{
    namespace apps 
    {
	class Receiver : public ApplicationBase 
	{
	    public:
		Receiver(); 
		std::string filename = "received_signal.txt";
		std::fstream file_out;

	};
    }
}

int main(int argc, char* argv[])
{
    return goby::run<hat::apps::Receiver>(goby::middleware::ProtobufConfigurator<hat::config::Receiver>(argc, argv));
}

hat::apps::Receiver::Receiver()
{

    file_out.open(filename, std::ios_base::out);
    
    //runs when a transmission is received
    auto on_distress_signal = [this](const hat::protobuf::DistressSignal& distress_signal_msg) {
        glog.is_verbose() && glog << "Received Signal: " << distress_signal_msg.ShortDebugString() << std::endl;

	// writes received message under current time to a file
	file_out << distress_signal_msg.ShortDebugString() << " received_time: " << time(NULL) << std::endl;
    };

    // subscribes to DistressSignal messages 
    goby::middleware::protobuf::TransporterConfig subscriber_cfg;
    subscriber_cfg.mutable_intervehicle()->add_publisher_id(1);
    goby::middleware::Subscriber<hat::protobuf::DistressSignal> distress_signal_subscriber(subscriber_cfg);

    intervehicle().subscribe<hat::groups::distress_signal, hat::protobuf::DistressSignal>(on_distress_signal, distress_signal_subscriber);
}
