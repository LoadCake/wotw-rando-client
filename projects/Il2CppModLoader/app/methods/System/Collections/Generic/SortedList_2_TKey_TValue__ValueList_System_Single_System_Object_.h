#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::SortedList_2_TKey_TValue__ValueList_System_Single_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::SortedList_2_System_Single_System_Object_ * dictionary))
    IL2CPP_REGISTER_METHOD(0x004F0AC0, int32_t, get_Count, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAE1A0, app::Object *, ICollection_get_SyncRoot, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAE230, void, Add, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHODINFO(0x04734EE8, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAE290, void, Clear, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790620, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AD0810, bool, Contains, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02CAD520, void, CopyTo, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02CAE2F0, void, ICollection_CopyTo, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047730F8, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAE470, void, Insert, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, int32_t index, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04753F40, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAA4B0, app::Object *, get_Item, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CAE4D0, void, set_Item, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, int32_t index, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04773620, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAA540, app::IEnumerator *, IEnumerable_GetEnumerator, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CAD7D0, int32_t, IndexOf, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02CAE530, bool, Remove, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0475E818, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAE590, void, RemoveAt, (app::SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047232B0, SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__RemoveAt__MethodInfo)
}