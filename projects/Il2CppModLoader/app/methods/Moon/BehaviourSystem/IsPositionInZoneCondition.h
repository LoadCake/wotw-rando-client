#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::IsPositionInZoneCondition {
    IL2CPP_REGISTER_METHOD(0x00CBA440, app::String *, get_Info, (app::IsPositionInZoneCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBA580, bool, OnCheck, (app::IsPositionInZoneCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::IsPositionInZoneCondition * this_ptr))
}