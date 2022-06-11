#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::MechSpider {
    IL2CPP_REGISTER_METHOD(0x02222FA0, void, Update, (app::MechSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02224470, app::Vector3, GetLegCentroid, (app::MechSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022246B0, app::Vector3, GetLegsPlaneNormal, (app::MechSpider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02224BB0, void, ctor, (app::MechSpider * this_ptr))
}