#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Larva {
    IL2CPP_REGISTER_METHOD(0x00F05EF0, void, Awake, (app::Larva * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F06080, void, OnDestroy, (app::Larva * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F06210, void, OnGameSerializeLoad, (app::Larva * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A898, Larva_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Larva * this_ptr))
}