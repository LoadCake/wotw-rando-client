#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::AutoResetEvent {
    IL2CPP_REGISTER_METHOD(0x027D8430, void, ctor, (app::AutoResetEvent * this_ptr, bool initial_state))
}