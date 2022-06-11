#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::pooling::UberPoolScenePrewarmer {
    IL2CPP_REGISTER_METHOD(0x00F310D0, void, Awake, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F311F0, void, LoadInstancesIntoPool, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F31380, void, OnDestroy, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::UberPoolScenePrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F31510, void, OnUpdate, (app::UberPoolScenePrewarmer * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00F31620, void, ctor, (app::UberPoolScenePrewarmer * this_ptr))
}