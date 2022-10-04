#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IListenerSyncProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IListenerSyncProcessor__Class** type_info;
        inline app::IListenerSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::IListenerSyncProcessor__Class>(type_info, "Moon.Wwise", "IListenerSyncProcessor");
        }
    } // namespace IListenerSyncProcessor
} // namespace app::classes::types
