#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::Demos::HitReactionTrigger {
    IL2CPP_REGISTER_METHOD(0x0221F770, void, Update, (app::HitReactionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221FAC0, void, OnGUI, (app::HitReactionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::HitReactionTrigger * this_ptr))
}