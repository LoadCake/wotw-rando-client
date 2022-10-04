#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICullingCategoryManager__Class** type_info;
        inline app::ICullingCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Class>(type_info, "Moon.Rendering", "ICullingCategoryManager");
        }
        inline app::ICullingCategoryManager__Array* create_array(int size) {
            return il2cpp::array_new<app::ICullingCategoryManager__Array>(get_class(), size);
        }
    } // namespace ICullingCategoryManager
} // namespace app::classes::types
