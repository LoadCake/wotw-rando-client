#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0475AF58, Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * this_ptr, app::AsyncGPUReadbackRequest obj))
    IL2CPP_REGISTER_METHOD(0x02C0C4F0, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * this_ptr, app::AsyncGPUReadbackRequest obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_
