#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GetReplay {
    IL2CPP_REGISTER_METHOD(0x02E91860, void, ctor, (app::GetReplay * this_ptr, app::String * site_id, app::String * player_id))
}