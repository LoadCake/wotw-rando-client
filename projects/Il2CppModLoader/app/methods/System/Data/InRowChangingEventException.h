#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::InRowChangingEventException {
    IL2CPP_REGISTER_METHOD(0x01E39B40, void, ctor_1, (app::InRowChangingEventException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0472DA68, InRowChangingEventException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E39B90, void, ctor_2, (app::InRowChangingEventException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E39C20, void, ctor_3, (app::InRowChangingEventException * this_ptr, app::String * s))
}