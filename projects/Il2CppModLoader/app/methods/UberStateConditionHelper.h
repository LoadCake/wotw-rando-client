#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UberStateConditionHelper {
    IL2CPP_REGISTER_METHOD(0x03149800, app::Type__Array *, get_AllConditionTypes, ())
    IL2CPP_REGISTER_METHOD(0x03149900, void, BuildConditionTypeData, ())
    IL2CPP_REGISTER_METHOD(0x0314A080, app::Dictionary_2_UberStateConditionType_System_Type_ *, get_ConditionTypes, ())
    IL2CPP_REGISTER_METHOD(0x0314A180, app::Type *, GetConditionType, (app::UberStateConditionType__Enum condition_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}