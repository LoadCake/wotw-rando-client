#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::JsonBuilder_Object {
    IL2CPP_REGISTER_METHOD(0x00245440, void, ctor, (app::JsonBuilder_Object__Boxed * this_ptr, int32_t ident, app::JsonBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x00245450, void, Dispose, (app::JsonBuilder_Object__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FB58, JsonBuilder_Object_Dispose__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00245460, app::JsonBuilder_Slot, Slot, (app::JsonBuilder_Object__Boxed * this_ptr, app::String * property_name))
    IL2CPP_REGISTER_METHODINFO(0x04709968, JsonBuilder_Object_Slot__MethodInfo)
}