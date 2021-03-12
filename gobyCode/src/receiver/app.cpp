#include <goby/middleware/marshalling/protobuf.h>
#include <goby/zeromq/application/single_thread.h>

#include "config.pb.h"
#include "distress_signal.pb.h"
#include "hat/groups.h"

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

	};
    }
}

int main(int argc, char* argv[])
{
    return goby::run<hat::apps::Receiver>(goby::middleware::ProtobufConfigurator<hat::config::Receiver>(argc, argv));
}

hat::apps::Receiver::Receiver()
{
    auto on_distress_signal = [](const hat::protobuf::DistressSignal& distress_signal_msg) {
        glog.is_verbose() && glog << "Received Signal: " << distress_signal_msg.ShortDebugString() << std::endl;

	// Insert what we should do with the message
    };

    interprocess().subscribe<hat::groups::distress_signal>(on_distress_signal);}
	    
