#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Array_InternalEnumerator_1_System_Resources_ResourceLocator_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr, app::Array * array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019D3A0, app::ResourceLocator, get_Current, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047121D8, Array_InternalEnumerator_1_System_Resources_ResourceLocator__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0019D3D0, app::Object *, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_System_Resources_ResourceLocator___Boxed * this_ptr))
}