#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::EntityWeightUtils {
    IL2CPP_REGISTER_METHOD(0x00CA6690, app::Vector2, ClampInitialDrownSpeed, (app::Vector2 platform_local_speed, app::EntityWeightData_EntityWeightSettings settings))
}