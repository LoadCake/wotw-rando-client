#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RestoreCheckpointAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x0090B740, void, OnStartPlayback, (app::RestoreCheckpointAnimatorEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0090B7F0, void, ctor, (app::RestoreCheckpointAnimatorEntity * this_ptr))
}