#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BeautifyEffect::FreeCameraMove {
    IL2CPP_REGISTER_METHOD(0x0317C200, void, Start, (app::FreeCameraMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317C380, void, Update, (app::FreeCameraMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317D440, void, ctor, (app::FreeCameraMove * this_ptr))
}