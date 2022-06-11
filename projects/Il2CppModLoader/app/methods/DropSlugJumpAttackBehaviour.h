#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::DropSlugJumpAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE5270, void, OnEntityInitialized, (app::DropSlugJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE5320, void, OnEnter, (app::DropSlugJumpAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecute, (app::DropSlugJumpAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BE53D0, void, ctor, (app::DropSlugJumpAttackBehaviour * this_ptr))
}