#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_List_1_System_String___Boxed.h>
#include <Modloader/app/structs/List_1_System_String_.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_List_1_System_String__ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Key, (app::KeyValuePair_2_System_String_List_1_System_String___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E7E8, KeyValuePair_2_System_String_List_1_System_String__get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::List_1_System_String_*, get_Value, (app::KeyValuePair_2_System_String_List_1_System_String___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738950, KeyValuePair_2_System_String_List_1_System_String__get_Value__MethodInfo)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_List_1_System_String__
