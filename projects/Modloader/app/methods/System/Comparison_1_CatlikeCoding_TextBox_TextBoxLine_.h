#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B85BA0, int32_t, Invoke, (app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_ * this_ptr, app::TextBoxLine x, app::TextBoxLine y))
    IL2CPP_REGISTER_METHOD(0x02B86300, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_ * this_ptr, app::TextBoxLine x, app::TextBoxLine y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_
