#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AkCallbackManager_EventCallbackPackage {
    IL2CPP_REGISTER_METHOD(0x026D4880, app::AkCallbackManager_EventCallbackPackage *, Create, (app::AkCallbackManager_EventCallback * in_cb, app::Object * in_cookie, uint32_t * io__flags))
    IL2CPP_REGISTER_METHOD(0x026D4AA0, void, Finalize, (app::AkCallbackManager_EventCallbackPackage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkCallbackManager_EventCallbackPackage * this_ptr))
}