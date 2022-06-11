#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DestroyOnMenuOpen {
    IL2CPP_REGISTER_METHOD(0x00B8C6C0, void, Awake, (app::DestroyOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8C850, void, OnDestroy, (app::DestroyOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8C9E0, void, OnMenuOpen, (app::DestroyOnMenuOpen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04769108, DestroyOnMenuOpen_OnMenuOpen__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyOnMenuOpen * this_ptr))
}