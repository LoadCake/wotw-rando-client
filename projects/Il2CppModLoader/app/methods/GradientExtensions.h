#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GradientExtensions {
    IL2CPP_REGISTER_METHOD(0x02556EB0, app::Gradient *, MultiplyColor, (app::Gradient * target, app::Color color))
    IL2CPP_REGISTER_METHOD(0x02557060, app::Gradient *, OverrideColor, (app::Gradient * target, app::Color color))
}