#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BeautifyEffect::Demo2 {
    IL2CPP_REGISTER_METHOD(0x0317B530, void, Start, (app::Demo2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317B540, void, OnGUI, (app::Demo2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317BB60, void, Update, (app::Demo2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317BC40, void, UpdateDemoMode, (app::Demo2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Demo2 * this_ptr))
}