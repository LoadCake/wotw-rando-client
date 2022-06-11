#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::ConstraintRotationOffset {
    IL2CPP_REGISTER_METHOD(0x02052770, void, UpdateConstraint, (app::ConstraintRotationOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ConstraintRotationOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::ConstraintRotationOffset * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02052C40, bool, get_RotationChanged, (app::ConstraintRotationOffset * this_ptr))
}