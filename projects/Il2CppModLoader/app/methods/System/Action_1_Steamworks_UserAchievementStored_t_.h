#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Action_1_Steamworks_UserAchievementStored_t_ {
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_Steamworks_UserAchievementStored_t_ * this_ptr, app::UserAchievementStored_t obj))
    IL2CPP_REGISTER_METHODINFO(0x04729D88, Action_1_Steamworks_UserAchievementStored_t__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Steamworks_UserAchievementStored_t_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04792C50, Action_1_Steamworks_UserAchievementStored_t___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A04200, app::IAsyncResult *, BeginInvoke, (app::Action_1_Steamworks_UserAchievementStored_t_ * this_ptr, app::UserAchievementStored_t obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Steamworks_UserAchievementStored_t_ * this_ptr, app::IAsyncResult * result))
}