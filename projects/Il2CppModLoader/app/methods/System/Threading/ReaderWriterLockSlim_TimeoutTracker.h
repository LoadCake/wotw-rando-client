#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::ReaderWriterLockSlim_TimeoutTracker {
    IL2CPP_REGISTER_METHOD(0x00240600, void, ctor, (app::ReaderWriterLockSlim_TimeoutTracker__Boxed * this_ptr, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHODINFO(0x047882B8, ReaderWriterLockSlim_TimeoutTracker__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00240610, int32_t, get_RemainingMilliseconds, (app::ReaderWriterLockSlim_TimeoutTracker__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00240620, bool, get_IsExpired, (app::ReaderWriterLockSlim_TimeoutTracker__Boxed * this_ptr))
}