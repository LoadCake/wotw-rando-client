#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZapTrail {
    IL2CPP_REGISTER_METHOD(0x01C603B0, void, Zap, (app::ZapTrail * this_ptr, app::Transform * start_position, app::Transform * end_position))
    IL2CPP_REGISTER_METHOD(0x01C60530, void, FixedUpdate, (app::ZapTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113FD00, void, ctor, (app::ZapTrail * this_ptr))
}