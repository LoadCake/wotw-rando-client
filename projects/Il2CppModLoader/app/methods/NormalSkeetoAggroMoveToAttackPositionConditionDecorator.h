#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
    IL2CPP_REGISTER_METHOD(0x0060C060, app::BehaviourStatus__Enum, OnExecute, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C0F0, float, GetUtility, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C160, bool, CheckCondition, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::NormalSkeetoAggroMoveToAttackPositionConditionDecorator * this_ptr))
}