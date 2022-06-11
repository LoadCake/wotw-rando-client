#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::HorizontalPlatformMovementSettings_SpeedSet {
    IL2CPP_REGISTER_METHOD(0x00B605F0, void, CopyFrom, (app::HorizontalPlatformMovementSettings_SpeedSet * this_ptr, app::HorizontalPlatformMovementSettings_SpeedSet * speed_set))
    IL2CPP_REGISTER_METHOD(0x00B60620, void, ApplySpeedMultiplier, (app::HorizontalPlatformMovementSettings_SpeedSet * this_ptr, app::HorizontalPlatformMovementSettings_SpeedMultiplierSet * speed_multiplier_set))
    IL2CPP_REGISTER_METHOD(0x00B60670, void, ctor, (app::HorizontalPlatformMovementSettings_SpeedSet * this_ptr))
}