#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ShopkeeperUISubItem {
    IL2CPP_REGISTER_METHOD(0x005C3260, void, Update, (app::ShopkeeperUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3270, void, SetItemContext, (app::ShopkeeperUISubItem * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x005C3260, void, OnItemContextDirty, (app::ShopkeeperUISubItem * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x005C3310, void, SetItem, (app::ShopkeeperUISubItem * this_ptr, app::ShopkeeperItem * upgrade_item, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x005C3320, void, UpdateIcon, (app::ShopkeeperUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3260, void, UpdateUpgradeItemProperties, (app::ShopkeeperUISubItem * this_ptr, app::Object * grid_context, bool initialize))
    IL2CPP_REGISTER_METHOD(0x005C3410, void, UpdateItem, (app::ShopkeeperUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShopkeeperUISubItem * this_ptr))
}