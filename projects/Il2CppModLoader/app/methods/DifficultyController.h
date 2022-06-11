#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DifficultyController {
    IL2CPP_REGISTER_METHOD(0x00B91B70, void, Awake, (app::DifficultyController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B91D10, void, OnDestroy, (app::DifficultyController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B91EA0, void, Serialize, (app::DifficultyController * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x00B91FE0, void, OnGameReset, (app::DifficultyController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E1F0, DifficultyController_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B91FF0, void, ChangeDifficulty, (app::DifficultyController * this_ptr, app::DifficultyMode__Enum easy))
    IL2CPP_REGISTER_METHOD(0x00B920C0, void, SetDifficulty, (app::DifficultyController * this_ptr, app::DifficultyMode__Enum difficulty))
    IL2CPP_REGISTER_METHOD(0x00B920F0, void, ctor, (app::DifficultyController * this_ptr))
}