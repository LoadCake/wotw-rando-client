#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ServerObjTester {
    IL2CPP_REGISTER_METHOD(0x00AC0020, void, Start, (app::ServerObjTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ServerObjTester * this_ptr))
}