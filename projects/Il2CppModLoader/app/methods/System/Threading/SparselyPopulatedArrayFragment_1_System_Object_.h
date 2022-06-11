#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Threading::SparselyPopulatedArrayFragment_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02775470, app::Object *, get_Item, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Length, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F4490, app::SparselyPopulatedArrayFragment_1_System_Object_ *, get_Prev, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_1, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHOD(0x027753F0, void, ctor_2, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr, int32_t size, app::SparselyPopulatedArrayFragment_1_System_Object_ * prev))
    IL2CPP_REGISTER_METHOD(0x027754B0, app::Object *, SafeAtomicRemove, (app::SparselyPopulatedArrayFragment_1_System_Object_ * this_ptr, int32_t index, app::Object * expected_element))
}