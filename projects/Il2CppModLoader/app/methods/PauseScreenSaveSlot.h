#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PauseScreenSaveSlot {
    IL2CPP_REGISTER_METHOD(0x0044BFB0, void, OnEnable, (app::PauseScreenSaveSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PauseScreenSaveSlot * this_ptr))
}