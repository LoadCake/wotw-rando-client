#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WoodenGateDamageAction {
    IL2CPP_REGISTER_METHOD(0x0057E950, void, Perform, (app::WoodenGateDamageAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WoodenGateDamageAction * this_ptr))
}