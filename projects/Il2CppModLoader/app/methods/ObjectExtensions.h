#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x0060E640, bool, Owns_1, (app::Object_1 * owner, app::Component_1 * item))
    IL2CPP_REGISTER_METHOD(0x0060E7B0, bool, Owns_2, (app::Object_1 * owner, app::GameObject * item))
}