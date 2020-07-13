#include <macros.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>
#include <uber_states/state_applier.h>

namespace
{
    bool is_day = true;
    bool disable_has_ability_overwrite = false;

    IL2CPP_INTERCEPT(, CleverMenuItemSelectionManager, app::CleverMenuItem*, get_CleverMenuItemUnderCursor, (app::CleverMenuItemSelectionManager* this_ptr)) {
        disable_has_ability_overwrite = true;
        auto ret = CleverMenuItemSelectionManager::get_CleverMenuItemUnderCursor(this_ptr);
        disable_has_ability_overwrite = false;
        return ret;
    }

    IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
        if (this_ptr->fields.Ability == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return SeinAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(, HasAbilityCondition, bool, Validate, (app::HasAbilityCondition* this_ptr, app::IContext* context)) {
        if (!disable_has_ability_overwrite && this_ptr->fields.AbilityType == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return HasAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_BINDING(, HasAbilityUberStateCondition, app::AbilityType__Enum, get_AbilityType, (app::HasAbilityUberStateCondition* this_ptr));
    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, get_HasAbility, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return HasAbilityUberStateCondition::get_HasAbility(this_ptr);
    }

    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, Validate, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
        {
            auto booleans = this_ptr->fields._.Data->fields.Booleans;
            return booleans->fields._items->vector[0] == is_day;
        }
        else
            return HasAbilityUberStateCondition::Validate(this_ptr);
    }

    void initialize_day_night_logic()
    {
       // night -> day
        //uber_states::register_applier_redirect(-1926205078, -598230906);
        //uber_states::register_applier_redirect(1819061226, -1052258879);
        //uber_states::register_applier_redirect(-1605692968, -1815347985);
        //uber_states::register_applier_redirect(-949591271, -1834135337);
        //uber_states::register_applier_redirect(-76384365, 1340727368);
        //uber_states::register_applier_redirect(1361521887, -1375966924);
        //uber_states::register_applier_redirect(-1643391836, 288338807);
        //uber_states::register_applier_redirect(1819061226, -1052258879);
        //uber_states::register_applier_redirect(787945376, 1001861749);
        //uber_states::register_applier_redirect(1361521887, -1375966924);

        // Cutscene rain
        uber_states::register_applier_intercept({ -480342150, 907153171 }, [](auto, auto, auto) -> int32_t {
            return is_day ? 907153171 : -480342150;
        });

        // Remove regen tree water.
        uber_states::register_applier_intercept(-1643391836, [](app::NewSetupStateController* this_ptr, auto, auto) -> int32_t {
            auto modifiers = this_ptr->fields.StateHolder->fields.Modifiers->fields;
            for (auto i = 0; i < modifiers._size; ++i)
            {
                auto item = modifiers._items->vector[i];
                // #nightTime
                if (item->fields.ModifierGUID == 0x39b90803)
                {
                    if (item->fields.Target != nullptr &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                    {
                        auto target = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);
                        auto children = il2cpp::unity::get_children(target);
                        for (auto child : children)
                        {
                            auto name = il2cpp::unity::get_object_name(child);
                            if (name != "radialGlow" &&
                                name != "glows" &&
                                name != "fogs" &&
                                name != "masks" &&
                                name != "soundNightState")
                                il2cpp::unity::destroy_object(child);
                        }
                    }

                    break;
                }
            }

            return -1643391836;
        });

        // howl: notDefeated -> defeated
        //uber_states::register_applier_redirect(1234021711, 620462779);
    }

    IL2CPP_INTERCEPT(, SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition* this_ptr)) {
        return is_day;
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(, SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition* this_ptr)) {
        override_has_ability = true;
        SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
        override_has_ability = false;
    }

    IL2CPP_INTERCEPT(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability && ability == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return PlayerAbilities::HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}

INJECT_C_DLLEXPORT void set_ori_time(bool day) {
    is_day = day;
}
