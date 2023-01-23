#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_LocalDataStoreSlot_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_LocalDataStoreSlot_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_LocalDataStoreSlot_ * this_ptr, app::String* key, app::LocalDataStoreSlot* value))
    IL2CPP_REGISTER_METHODINFO(0x0475B270, Dictionary_2_System_String_System_LocalDataStoreSlot__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_LocalDataStoreSlot_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0472A4A8, Dictionary_2_System_String_System_LocalDataStoreSlot__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_LocalDataStoreSlot_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F860, Dictionary_2_System_String_System_LocalDataStoreSlot___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_LocalDataStoreSlot_
