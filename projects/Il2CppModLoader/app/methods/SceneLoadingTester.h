#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SceneLoadingTester {
    IL2CPP_REGISTER_METHOD(0x00BA98B0, int32_t, get_ColorPropertyID, (app::SceneLoadingTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA9920, void, ctor, (app::SceneLoadingTester * this_ptr))
}