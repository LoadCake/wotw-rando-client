#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::GCFinalizerTablePrewarm_ObjWithFinalizer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GCFinalizerTablePrewarm_ObjWithFinalizer * this_ptr, app::GCFinalizerTablePrewarm * owner))
    IL2CPP_REGISTER_METHOD(0x00F5F930, void, Finalize, (app::GCFinalizerTablePrewarm_ObjWithFinalizer * this_ptr))
}