#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeFindHandle {
    IL2CPP_REGISTER_METHOD(0x02172280, void, ctor, (app::SafeFindHandle * this_ptr, void * preexisting_handle))
    IL2CPP_REGISTER_METHOD(0x023B6490, bool, ReleaseHandle, (app::SafeFindHandle * this_ptr))
}