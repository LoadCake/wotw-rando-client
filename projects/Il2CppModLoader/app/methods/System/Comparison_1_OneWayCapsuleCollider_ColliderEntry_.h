#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Comparison_1_OneWayCapsuleCollider_ColliderEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_ * this_ptr, app::OneWayCapsuleCollider_ColliderEntry x, app::OneWayCapsuleCollider_ColliderEntry y))
    IL2CPP_REGISTER_METHOD(0x02C7B490, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_ * this_ptr, app::OneWayCapsuleCollider_ColliderEntry x, app::OneWayCapsuleCollider_ColliderEntry y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_OneWayCapsuleCollider_ColliderEntry_ * this_ptr, app::IAsyncResult * result))
}