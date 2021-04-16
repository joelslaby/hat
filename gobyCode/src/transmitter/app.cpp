#include <goby/middleware/marshalling/protobuf.h>
#include <goby/zeromq/application/single_thread.h>

#include "config.pb.h"
#include "distress_signal.pb.h"
#include "hat/groups.h"

#define PERIODS_PER_DAY 864000000000

using goby::glog;
namespace si = boost::units::si;
using ApplicationBase = goby::zeromq::SingleThreadApplication<hat::config::Transmitter>;
using goby::time::SystemClock;

namespace hat 
{
    namespace apps 
    {
	class Transmitter : public ApplicationBase 
	{
	    public:
		Transmitter() : ApplicationBase(0.05 * si::hertz) {} //match frequency to TDMA cycle
		int num = 0; 
		SystemClock::time_point tp;
		SystemClock::duration dtn;

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
    tp = SystemClock::now();
    dtn = tp.time_since_epoch();
    distress_signal_msg.set_transmit_time(dtn.count()%PERIODS_PER_DAY);
    intervehicle().publish<hat::groups::distress_signal>(distress_signal_msg);

    glog.is_verbose() && glog << "Time since epoch: " << dtn.count() << std::endl;
    glog.is_verbose() && glog << distress_signal_msg.ShortDebugString() << std::endl;

    num += 1;
}
	    

	    
