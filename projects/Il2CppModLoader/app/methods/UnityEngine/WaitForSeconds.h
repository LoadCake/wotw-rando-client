#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::WaitForSeconds {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, (app::WaitForSeconds * this_ptr, float seconds))
}