#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PlayerInputRebinding_KeyBindingSettings {
    IL2CPP_REGISTER_METHOD(0x01426320, app::IEnumerable_1_PlayerInputRebinding_PlayerInputKey_ *, GetKeysIterator, (app::PlayerInputRebinding_KeyBindingSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014264B0, void, ctor, (app::PlayerInputRebinding_KeyBindingSettings * this_ptr))
}