#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_LightPriority_Layer_.h>
#include <Modloader/app/structs/IEnumerable_1_LightPriority_Layer_.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_LightPriority_Layer_ {
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor, (app::HashSet_1_LightPriority_Layer_ * this_ptr, app::IEnumerable_1_LightPriority_Layer_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04744C00, HashSet_1_LightPriority_Layer___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (app::HashSet_1_LightPriority_Layer_ * this_ptr, app::LightPriority_Layer__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0478CFA8, HashSet_1_LightPriority_Layer__Contains__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_LightPriority_Layer_
