#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TriggeredActionSequence {
    IL2CPP_REGISTER_METHOD(0x00B14620, void, Trigger, (app::TriggeredActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B146F0, void, ctor, (app::TriggeredActionSequence * this_ptr))
}