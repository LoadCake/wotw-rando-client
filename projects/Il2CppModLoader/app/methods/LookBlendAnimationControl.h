#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LookBlendAnimationControl {
    IL2CPP_REGISTER_METHOD(0x009ED040, app::Sensor *, get_Sensor, (app::LookBlendAnimationControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ED110, void, FixedUpdate, (app::LookBlendAnimationControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LookBlendAnimationControl * this_ptr))
}