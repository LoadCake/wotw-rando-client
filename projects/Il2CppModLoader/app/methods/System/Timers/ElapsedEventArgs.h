#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Timers::ElapsedEventArgs {
    IL2CPP_REGISTER_METHOD(0x02A7AE30, void, ctor, (app::ElapsedEventArgs * this_ptr, app::DateTime time))
}