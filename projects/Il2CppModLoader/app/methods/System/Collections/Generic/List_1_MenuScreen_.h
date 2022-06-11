#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_MenuScreen_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MenuScreen_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473EB00, List_1_MenuScreen__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MenuScreen *, get_Item, (app::List_1_MenuScreen_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04758CD0, List_1_MenuScreen__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MenuScreen_ * this_ptr, app::MenuScreen * item))
    IL2CPP_REGISTER_METHODINFO(0x04785FC8, List_1_MenuScreen__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_MenuScreen_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04741F20, List_1_MenuScreen__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MenuScreen_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EF50, List_1_MenuScreen___ctor__MethodInfo)
}