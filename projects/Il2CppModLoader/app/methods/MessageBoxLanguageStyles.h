#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MessageBoxLanguageStyles {
    IL2CPP_REGISTER_METHOD(0x01592690, app::TextStyleCollection *, get_Current, (app::MessageBoxLanguageStyles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01592750, app::TextStyleCollection *, GetStyle, (app::MessageBoxLanguageStyles * this_ptr, app::Language__Enum language))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::MessageBoxLanguageStyles * this_ptr))
}