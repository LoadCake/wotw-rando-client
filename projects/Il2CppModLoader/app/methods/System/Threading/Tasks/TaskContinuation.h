#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0233BFA0, void, InlineIfPossibleOrElseQueue, (app::Task * task, bool needs_protection))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TaskContinuation * this_ptr))
}