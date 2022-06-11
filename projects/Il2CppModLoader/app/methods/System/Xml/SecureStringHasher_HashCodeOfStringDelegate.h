#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Xml::SecureStringHasher_HashCodeOfStringDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SecureStringHasher_HashCodeOfStringDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (app::SecureStringHasher_HashCodeOfStringDelegate * this_ptr, app::String * s, int32_t s_len, int64_t additional_entropy))
    IL2CPP_REGISTER_METHOD(0x01C8AD70, app::IAsyncResult *, BeginInvoke, (app::SecureStringHasher_HashCodeOfStringDelegate * this_ptr, app::String * s, int32_t s_len, int64_t additional_entropy, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::SecureStringHasher_HashCodeOfStringDelegate * this_ptr, app::IAsyncResult * result))
}