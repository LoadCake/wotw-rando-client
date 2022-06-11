#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::FlutteringShotDownBehaviour_LandState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FlutteringShotDownBehaviour_LandState * this_ptr, app::FlutteringShotDownBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x01483DE0, void, OnEnter, (app::FlutteringShotDownBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FlutteringShotDownBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014840F0, void, OnExit, (app::FlutteringShotDownBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014842E0, void, OnLandTimelineEnded, (app::FlutteringShotDownBehaviour_LandState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047784C0, FlutteringShotDownBehaviour_LandState_OnLandTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, (app::FlutteringShotDownBehaviour_LandState * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHODINFO(0x04716858, FlutteringShotDownBehaviour_LandState_ProcessRootMotion__MethodInfo)
}