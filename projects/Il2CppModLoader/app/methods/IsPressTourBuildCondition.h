#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IsPressTourBuildCondition {
    IL2CPP_REGISTER_METHOD(0x00647440, bool, Validate, (app::IsPressTourBuildCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsPressTourBuildCondition * this_ptr))
}