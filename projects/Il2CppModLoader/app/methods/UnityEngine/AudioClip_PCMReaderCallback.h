#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::AudioClip_PCMReaderCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AudioClip_PCMReaderCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::AudioClip_PCMReaderCallback * this_ptr, app::Single__Array * data))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::AudioClip_PCMReaderCallback * this_ptr, app::Single__Array * data, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AudioClip_PCMReaderCallback * this_ptr, app::IAsyncResult * result))
}