#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WindShaftController {
    IL2CPP_REGISTER_METHOD(0x00578CD0, void, Awake, (app::WindShaftController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00578D60, void, OnDestroy, (app::WindShaftController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00578DE0, app::WindSegment *, FindPrevious, (app::WindShaftController * this_ptr, app::WindSegment * wind_segment))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WindShaftController * this_ptr))
}