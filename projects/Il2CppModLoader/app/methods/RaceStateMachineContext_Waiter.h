#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RaceStateMachineContext_Waiter {
    IL2CPP_REGISTER_METHOD(0x0071BBD0, void, ctor, (app::RaceStateMachineContext_Waiter * this_ptr, float timeleft, app::RaceStateMachineContext * context))
    IL2CPP_REGISTER_METHOD(0x0071BBE0, bool, get_Finished, (app::RaceStateMachineContext_Waiter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0071BBF0, bool, UpdateAndCheckIfFinished, (app::RaceStateMachineContext_Waiter * this_ptr))
}