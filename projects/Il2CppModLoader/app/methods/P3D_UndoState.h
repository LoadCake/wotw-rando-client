#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::P3D_UndoState {
    IL2CPP_REGISTER_METHOD(0x0309D4B0, void, ctor, (app::P3D_UndoState * this_ptr, app::Texture2D * new_texture))
    IL2CPP_REGISTER_METHOD(0x0309D5E0, void, Perform, (app::P3D_UndoState * this_ptr))
}