#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DirectionalLightMaskModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::DirectionalLightMaskModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B93C30, void, SetProperties, (app::DirectionalLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B93D20, void, ctor, (app::DirectionalLightMaskModifier * this_ptr))
}