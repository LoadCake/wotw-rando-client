#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Tuple_2_Object_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_Item1, (app::Tuple_2_Object_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::Int32Enum__Enum, get_Item2, (app::Tuple_2_Object_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A66D80, void, ctor, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::Object * item1, app::Int32Enum__Enum item2))
    IL2CPP_REGISTER_METHOD(0x02A66DA0, bool, Equals, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A66E80, bool, IStructuralEquatable_Equals, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::Object * other, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A67010, int32_t, IComparable_CompareTo, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A670F0, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::Object * other, app::IComparer * comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476AB30, Tuple_2_Object_Int32Enum__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A67300, int32_t, GetHashCode, (app::Tuple_2_Object_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A673D0, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A674E0, app::String *, ToString, (app::Tuple_2_Object_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A67660, app::String *, ITupleInternal_ToString, (app::Tuple_2_Object_Int32Enum_ * this_ptr, app::StringBuilder * sb))
}