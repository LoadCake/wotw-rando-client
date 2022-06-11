#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CameraSystem {
    IL2CPP_REGISTER_METHOD(0x00B1EA80, void, Awake, (app::CameraSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B1EB30, void, Start, (app::CameraSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::CameraSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, (app::CameraSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B201D0, void, SampleCameras, (app::CameraSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraSystem * this_ptr))
}