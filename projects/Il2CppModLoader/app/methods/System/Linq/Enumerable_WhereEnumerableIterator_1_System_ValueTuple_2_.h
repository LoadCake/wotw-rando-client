#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ {
    IL2CPP_REGISTER_METHOD(0x02893370, void, ctor, (app::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ * this_ptr, app::IEnumerable_1_System_ValueTuple_2__4 * source, app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x028933C0, app::Enumerable_Iterator_1_System_ValueTuple_2_ *, Clone, (app::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028934F0, void, Dispose, (app::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028935B0, bool, MoveNext, (app::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02893770, app::IEnumerable_1_System_ValueTuple_2__4 *, Where, (app::Enumerable_WhereEnumerableIterator_1_System_ValueTuple_2_ * this_ptr, app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * predicate))
}