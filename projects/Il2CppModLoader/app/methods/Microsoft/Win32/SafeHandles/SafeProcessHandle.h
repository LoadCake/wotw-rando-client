#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeProcessHandle {
    IL2CPP_REGISTER_METHOD(0x02172280, void, ctor_1, (app::SafeProcessHandle * this_ptr, void * handle))
    IL2CPP_REGISTER_METHOD(0x021722B0, void, ctor_2, (app::SafeProcessHandle * this_ptr, void * existing_handle, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x021722E0, bool, ReleaseHandle, (app::SafeProcessHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02172300, void, cctor, ())
}