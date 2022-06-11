#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LoremasterUISlot {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ReplaySetting *, get_ReplaySetting, (app::LoremasterUISlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F3530, void, SetSetting, (app::LoremasterUISlot * this_ptr, app::ReplaySetting * replay))
    IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (app::LoremasterUISlot * this_ptr, bool selected))
    IL2CPP_REGISTER_METHOD(0x009F3960, void, SetItemContext, (app::LoremasterUISlot * this_ptr, app::Object * context, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x009F3A30, void, OnItemContextDirty, (app::LoremasterUISlot * this_ptr, app::Object * grid_context))
    IL2CPP_REGISTER_METHOD(0x009F3A40, void, OnPressed, (app::LoremasterUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774D70, LoremasterUISlot_OnPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F3C90, void, OnHighlighted, (app::LoremasterUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759340, LoremasterUISlot_OnHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0083A0A0, void, OnUnhighlighted, (app::LoremasterUISlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DC00, LoremasterUISlot_OnUnhighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LoremasterUISlot * this_ptr))
}