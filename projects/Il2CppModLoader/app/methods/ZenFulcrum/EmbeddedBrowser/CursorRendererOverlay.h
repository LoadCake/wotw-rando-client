#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::CursorRendererOverlay {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CursorChange, (app::CursorRendererOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD24A0, void, OnGUI, (app::CursorRendererOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010415D0, void, ctor, (app::CursorRendererOverlay * this_ptr))
}