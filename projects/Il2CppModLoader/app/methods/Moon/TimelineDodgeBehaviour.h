#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::TimelineDodgeBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecute, (app::TimelineDodgeBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::TimelineDodgeBehaviour * this_ptr))
}