#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Predicate_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_AttachPrefabsToLiannaTongue_TonguePoints_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_AttachPrefabsToLiannaTongue_TonguePoints_ * this_ptr, app::AttachPrefabsToLiannaTongue_TonguePoints obj))
    IL2CPP_REGISTER_METHOD(0x0288BE20, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_AttachPrefabsToLiannaTongue_TonguePoints_ * this_ptr, app::AttachPrefabsToLiannaTongue_TonguePoints obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_AttachPrefabsToLiannaTongue_TonguePoints_ * this_ptr, app::IAsyncResult * result))
}