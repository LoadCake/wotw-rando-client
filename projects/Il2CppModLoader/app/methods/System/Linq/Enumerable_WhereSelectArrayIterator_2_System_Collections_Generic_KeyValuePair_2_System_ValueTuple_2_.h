#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectArrayIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x02894D90, void, ctor, (app::Enumerable_WhereSelectArrayIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ * this_ptr, app::KeyValuePair_2_System_Object_System_ValueTuple_2___Array * source, app::Func_2_System_Collections_Generic_KeyValuePair_2_Boolean__5 * predicate, app::Func_2_System_Collections_Generic_KeyValuePair_2_ValueTuple_2_Int32_Object_ * selector))
    IL2CPP_REGISTER_METHOD(0x02894E00, app::Enumerable_Iterator_1_System_ValueTuple_2_ *, Clone, (app::Enumerable_WhereSelectArrayIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02894F30, bool, MoveNext, (app::Enumerable_WhereSelectArrayIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02895050, app::IEnumerable_1_System_ValueTuple_2__4 *, Where, (app::Enumerable_WhereSelectArrayIterator_2_System_Collections_Generic_KeyValuePair_2_System_ValueTuple_2_ * this_ptr, app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * predicate))
}