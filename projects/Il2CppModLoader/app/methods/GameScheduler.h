#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GameScheduler {
    IL2CPP_REGISTER_METHOD(0x003F9340, void, DebugPrintDelegates, (app::GameScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FA220, void, ctor, (app::GameScheduler * this_ptr))
}