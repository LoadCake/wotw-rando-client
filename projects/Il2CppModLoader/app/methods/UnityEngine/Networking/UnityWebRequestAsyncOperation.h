#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Networking::UnityWebRequestAsyncOperation {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnityWebRequestAsyncOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_webRequest, (app::UnityWebRequestAsyncOperation * this_ptr, app::UnityWebRequest * value))
}