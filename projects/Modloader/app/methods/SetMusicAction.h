#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetMusicAction {
    IL2CPP_REGISTER_METHOD(0x005A2F00, void, Perform, (app::SetMusicAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetMusicAction * this_ptr))
} // namespace app::classes::SetMusicAction
