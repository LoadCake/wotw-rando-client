#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Verlet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::Verlet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::Verlet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Verlet * this_ptr))
}