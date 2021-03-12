#ifndef HAT_SRC_GROUPS_H
#define HAT_SRC_GROUPS_H

#include "goby/middleware/group.h"

namespace hat {
    namespace groups {
	constexpr goby::middleware::Group distress_signal{"hat::distress_signal", goby::middleware::Group::broadcast_group};
	constexpr goby::middleware::Group gps_loc{"hat::gps_loc", 1};
    }
}

#endif
