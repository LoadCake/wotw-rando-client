#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::EntityDeathEvent {
    IL2CPP_REGISTER_METHOD(0x0121E360, void, ctor, (app::EntityDeathEvent * this_ptr, app::Entity * entity, app::DamageResult damage_result))
}