#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::Demos::FBBIKSettings_Limb {
    IL2CPP_REGISTER_METHOD(0x02219AB0, void, Apply, (app::FBBIKSettings_Limb * this_ptr, app::FullBodyBipedChain__Enum chain, app::IKSolverFullBodyBiped* solver))
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, (app::FBBIKSettings_Limb * this_ptr))
} // namespace app::classes::RootMotion::Demos::FBBIKSettings_Limb
