#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::UberStateSaveFileHandler {
    IL2CPP_REGISTER_METHOD(0x01B6D260, void, Save_1, (app::UberStateSaveFileHandler * this_ptr, app::UberStateValueStore * uber_state_value_store, app::String * path))
    IL2CPP_REGISTER_METHOD(0x01B6D390, void, Save_2, (app::UberStateSaveFileHandler * this_ptr, app::Byte__Array * bytes, app::String * path))
    IL2CPP_REGISTER_METHOD(0x01B6D480, app::UberStateValueStore *, LoadWithStatus, (app::UberStateSaveFileHandler * this_ptr, app::String * path, app::UberStateSaveFileHandler_LoadStatus__Enum * status))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberStateSaveFileHandler * this_ptr))
}