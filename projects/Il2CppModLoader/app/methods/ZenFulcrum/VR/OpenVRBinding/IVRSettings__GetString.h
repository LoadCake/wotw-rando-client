#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__GetString {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSettings_GetString * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE79E0, void, Invoke, (app::IVRSettings_GetString * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::StringBuilder * pch_value, uint32_t un_value_len, app::EVRSettingsError__Enum * pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE80C0, app::IAsyncResult *, BeginInvoke, (app::IVRSettings_GetString * this_ptr, app::String * pch_section, app::String * pch_settings_key, app::StringBuilder * pch_value, uint32_t un_value_len, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSettings_GetString * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result))
}