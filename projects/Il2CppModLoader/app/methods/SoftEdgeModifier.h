#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SoftEdgeModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::SoftEdgeModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00EE3410, void, SetProperties, (app::SoftEdgeModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE34D0, void, ctor, (app::SoftEdgeModifier * this_ptr))
}