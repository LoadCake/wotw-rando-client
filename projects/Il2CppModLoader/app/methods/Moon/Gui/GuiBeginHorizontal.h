#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Gui::GuiBeginHorizontal {
    IL2CPP_REGISTER_METHOD(0x01988C20, void, ctor_1, (app::GuiBeginHorizontal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01988CA0, void, ctor_2, (app::GuiBeginHorizontal * this_ptr, app::GUILayoutOption__Array * layout_options))
    IL2CPP_REGISTER_METHOD(0x01988CB0, void, ctor_3, (app::GuiBeginHorizontal * this_ptr, app::GUIStyle * gui_style, app::GUILayoutOption__Array * layout_options))
    IL2CPP_REGISTER_METHOD(0x01988D70, void, Dispose, (app::GuiBeginHorizontal * this_ptr))
}