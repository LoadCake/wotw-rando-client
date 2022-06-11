#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter {
    IL2CPP_REGISTER_METHOD(0x0018F210, bool, get_IsCompleted, (app::YieldAwaitable_YieldAwaiter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0018F220, void, OnCompleted, (app::YieldAwaitable_YieldAwaiter__Boxed * this_ptr, app::Action * continuation))
    IL2CPP_REGISTER_METHOD(0x0018F2C0, void, UnsafeOnCompleted, (app::YieldAwaitable_YieldAwaiter__Boxed * this_ptr, app::Action * continuation))
    IL2CPP_REGISTER_METHOD(0x01A932C0, void, QueueContinuation, (app::Action * continuation, bool flow_context))
    IL2CPP_REGISTER_METHODINFO(0x0477A7E8, YieldAwaitable_YieldAwaiter_QueueContinuation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A93560, void, RunAction, (app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x04769088, YieldAwaitable_YieldAwaiter_RunAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00002890, void, GetResult, (app::YieldAwaitable_YieldAwaiter__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93610, void, cctor, ())
}