#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_WindSegment_ {
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_WindSegment_ * this_ptr, app::WindSegment * item))
    IL2CPP_REGISTER_METHODINFO(0x04761260, List_1_WindSegment__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WindSegment *, get_Item, (app::List_1_WindSegment_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04722BA0, List_1_WindSegment__get_Item__MethodInfo)
}