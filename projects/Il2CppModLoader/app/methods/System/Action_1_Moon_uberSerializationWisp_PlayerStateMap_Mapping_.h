#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Action_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FD8B0, void, Invoke, (app::Action_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping obj))
    IL2CPP_REGISTER_METHOD(0x02A02EA0, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::IAsyncResult * result))
}