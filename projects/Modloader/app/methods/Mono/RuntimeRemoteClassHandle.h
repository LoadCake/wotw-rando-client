#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::RuntimeRemoteClassHandle {
    IL2CPP_REGISTER_METHOD(0x001DE360, app::RuntimeClassHandle, get_ProxyClass, (app::RuntimeRemoteClassHandle__Boxed * this_ptr))
}
