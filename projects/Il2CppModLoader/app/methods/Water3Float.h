#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Water3Float {
    IL2CPP_REGISTER_METHOD(0x02D75770, void, Start, (app::Water3Float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D758D0, void, Update, (app::Water3Float * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Water3Float * this_ptr))
}