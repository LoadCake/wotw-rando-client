#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::DefaultParameterValueAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DefaultParameterValueAttribute * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_Value, (app::DefaultParameterValueAttribute * this_ptr))
}