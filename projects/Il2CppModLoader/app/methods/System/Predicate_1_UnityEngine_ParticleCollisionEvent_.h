#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Predicate_1_UnityEngine_ParticleCollisionEvent_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_ParticleCollisionEvent_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288E030, bool, Invoke, (app::Predicate_1_UnityEngine_ParticleCollisionEvent_ * this_ptr, app::ParticleCollisionEvent obj))
    IL2CPP_REGISTER_METHOD(0x02A55880, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_UnityEngine_ParticleCollisionEvent_ * this_ptr, app::ParticleCollisionEvent obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_ParticleCollisionEvent_ * this_ptr, app::IAsyncResult * result))
}