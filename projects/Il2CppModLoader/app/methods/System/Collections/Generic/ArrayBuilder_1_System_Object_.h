#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::ArrayBuilder_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00239DF0, int32_t, get_Capacity, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Count, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00239E00, app::Object *, get_Item, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00239DE0, void, ctor, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x00239E40, void, Add, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x00239E50, app::Object__Array *, ToArray, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00239F50, void, UncheckedAdd, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x00239F90, void, EnsureCapacity, (app::ArrayBuilder_1_System_Object___Boxed * this_ptr, int32_t minimum))
}