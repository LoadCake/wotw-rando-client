#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TimeScaleDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x010F0780, void, ctor, (app::TimeScaleDebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x010F0890, void, OnSelectedFixedUpdate, (app::TimeScaleDebugMenuItem * this_ptr))
}