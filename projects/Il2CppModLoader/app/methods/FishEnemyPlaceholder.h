#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::FishEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0126B520, app::LegacyEntity *, Instantiate, (app::FishEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126BB00, void, ctor, (app::FishEnemyPlaceholder * this_ptr))
}