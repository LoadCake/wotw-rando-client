#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::StackGuard {
    IL2CPP_REGISTER_METHOD(0x0232FB80, bool, TryBeginInliningScope, (app::StackGuard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232FB90, void, EndInliningScope, (app::StackGuard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckForSufficientStack, (app::StackGuard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StackGuard * this_ptr))
}