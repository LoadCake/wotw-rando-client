#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::InitializationEventAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::InitializationEventAttribute * this_ptr, app::String * event_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_EventName, (app::InitializationEventAttribute * this_ptr))
}