#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Predicate_1_Motvin_Collections_ChainLevelAndCount_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288C090, bool, Invoke, (app::Predicate_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::ChainLevelAndCount obj))
    IL2CPP_REGISTER_METHOD(0x02A4F580, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::ChainLevelAndCount obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::IAsyncResult * result))
}