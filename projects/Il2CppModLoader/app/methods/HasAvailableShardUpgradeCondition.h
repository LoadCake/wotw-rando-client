#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::HasAvailableShardUpgradeCondition {
    IL2CPP_REGISTER_METHOD(0x0109DA10, bool, Validate, (app::HasAvailableShardUpgradeCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasAvailableShardUpgradeCondition * this_ptr))
}