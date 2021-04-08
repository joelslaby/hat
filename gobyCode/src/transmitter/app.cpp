#include <goby/middleware/marshalling/protobuf.h>
#include <goby/zeromq/application/single_thread.h>

#include "config.pb.h"
#include "distress_signal.pb.h"
#include "hat/groups.h"

using goby::glog;
namespace si = boost::units::si;
using ApplicationBase = goby::zeromq::SingleThreadApplication<hat::config::Transmitter>;

namespace hat 
{
    namespace apps 
    {
	class Transmitter : public ApplicationBase 
	{
	    public:
		Transmitter() : ApplicationBase(1.0 * si::hertz) {}
		int num = 0; 

	    private:
		void loop() override;
	};
    }
}

int main(int argc, char* argv[])
{
    return goby::run<hat::apps::Transmitter>(goby::middleware::ProtobufConfigurator<hat::config::Transmitter>(argc, argv));
}

void hat::apps::Transmitter::loop()
{
    hat::protobuf::DistressSignal distress_signal_msg;
    distress_signal_msg.set_state(hat::protobuf::DistressSignal::SAFE);
    distress_signal_msg.set_tag_id(1);
    distress_signal_msg.set_transmission_num(num);
    glog.is_verbose() && glog << "Swimmer Status: " << distress_signal_msg.ShortDebugString() << std::endl;

    intervehicle().publish<hat::groups::distress_signal>(distress_signal_msg);

    num += 1;
}
	    

	    
