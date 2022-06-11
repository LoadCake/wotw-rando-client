#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LegacySwarmEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00A3B640, app::LegacyEntity *, Instantiate, (app::LegacySwarmEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3BAD0, void, OnChildComponentSpawned, (app::LegacySwarmEnemyPlaceholder * this_ptr, app::LegacySwarmEnemy * swarm_enemy))
    IL2CPP_REGISTER_METHOD(0x00A3BBF0, void, OnChildComponentDestroy, (app::LegacySwarmEnemyPlaceholder * this_ptr, app::LegacySwarmEnemy * swarm_enemy))
    IL2CPP_REGISTER_METHOD(0x00A3BCE0, bool, get_NeedsToRespawn, (app::LegacySwarmEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3BD80, void, ctor, (app::LegacySwarmEnemyPlaceholder * this_ptr))
}