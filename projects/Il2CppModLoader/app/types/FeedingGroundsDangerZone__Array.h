#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerZone__Array {
        namespace {
            inline app::FeedingGroundsDangerZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsDangerZone__Array__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsDangerZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerZone__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerZone[]");
        }
        inline app::FeedingGroundsDangerZone__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerZone__Array>(get_class());
        }
    } // namespace FeedingGroundsDangerZone__Array
} // namespace app::classes::types
