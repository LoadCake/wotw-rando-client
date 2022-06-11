#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ShowPagesAction {
    IL2CPP_REGISTER_METHOD(0x005C51A0, void, Perform, (app::ShowPagesAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005C59B0, void, OnFinishedReading, (app::ShowPagesAction * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x0477A628, ShowPagesAction_OnFinishedReading__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005C5D00, void, Stop, (app::ShowPagesAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C5DB0, bool, get_IsPerforming, (app::ShowPagesAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C5E50, void, ctor, (app::ShowPagesAction * this_ptr))
}