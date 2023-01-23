#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventPayload.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object___Array.h>

namespace app::classes::System::Diagnostics::Tracing::EventPayload {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::EventPayload * this_ptr, app::List_1_System_String_* payload_names, app::List_1_System_Object_* payload_values))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ICollection_1_System_String_*, get_Keys, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ICollection_1_System_Object_*, get_Values, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174C6A0, app::Object*, get_Item, (app::EventPayload * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0474B1E0, EventPayload_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174C8F0, void, set_Item, (app::EventPayload * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04707200, EventPayload_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174C940, void, Add_1, (app::EventPayload * this_ptr, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04796B10, EventPayload_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174C990, void, Add_2, (app::EventPayload * this_ptr, app::KeyValuePair_2_System_String_System_Object_ payload_entry))
    IL2CPP_REGISTER_METHODINFO(0x04744BF8, EventPayload_Add_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174C9E0, void, Clear, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715258, EventPayload_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174CA30, bool, Contains, (app::EventPayload * this_ptr, app::KeyValuePair_2_System_String_System_Object_ entry))
    IL2CPP_REGISTER_METHOD(0x0174CAC0, bool, ContainsKey, (app::EventPayload * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04716520, EventPayload_ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174CCA0, int32_t, get_Count, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174CD30, app::IEnumerator_1_KeyValuePair_2_System_String_System_Object_*, GetEnumerator, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174CE80, app::IEnumerator*, IEnumerable_GetEnumerator, (app::EventPayload * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174CF10, void, CopyTo, (app::EventPayload * this_ptr, app::KeyValuePair_2_System_String_System_Object___Array* payload_entries, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0476F4C8, EventPayload_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174CF60, bool, Remove_1, (app::EventPayload * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04705990, EventPayload_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174CFB0, bool, Remove_2, (app::EventPayload * this_ptr, app::KeyValuePair_2_System_String_System_Object_ entry))
    IL2CPP_REGISTER_METHODINFO(0x04799698, EventPayload_Remove_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174D000, bool, TryGetValue, (app::EventPayload * this_ptr, app::String* key, app::Object** value))
    IL2CPP_REGISTER_METHODINFO(0x047310D0, EventPayload_TryGetValue__MethodInfo)
} // namespace app::classes::System::Diagnostics::Tracing::EventPayload
