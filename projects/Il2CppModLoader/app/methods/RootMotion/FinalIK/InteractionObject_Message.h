#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionObject_Message {
    IL2CPP_REGISTER_METHOD(0x02A0DF40, void, Send, (app::InteractionObject_Message * this_ptr, app::Transform * t))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteractionObject_Message * this_ptr))
}