#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::PickUp2Handed {
    IL2CPP_REGISTER_METHOD(0x0222B500, void, OnGUI, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222B6D0, void, Start, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222BAD0, void, OnPause, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x04787850, PickUp2Handed_OnPause__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0222BD80, void, OnStart, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x04799008, PickUp2Handed_OnStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0222BF40, void, OnDrop, (app::PickUp2Handed * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object))
    IL2CPP_REGISTER_METHODINFO(0x04774B40, PickUp2Handed_OnDrop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0222C0D0, void, LateUpdate, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222C5D0, bool, get_holding, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222C600, void, OnDestroy, (app::PickUp2Handed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222CA30, void, ctor, (app::PickUp2Handed * this_ptr))
}