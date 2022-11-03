#include <constants.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/app/methods/GetAbilityOnCondition.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/DesiredPlayerAbilityState.h>
#include <Modloader/interception_macros.h>

#include <interop/csharp_bridge.h>

namespace {
    bool is_tree(app::AbilityType__Enum tree) {
        return tree_abilities.find(tree) != tree_abilities.end();
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::DesiredPlayerAbilityState, bool, IsFulfilled, (app::DesiredPlayerAbilityState * this_ptr)) {
        if (is_tree(this_ptr->fields.Ability))
            return csharp_bridge::is_tree_activated(this_ptr->fields.Ability);
        else
            return next::Moon::uberSerializationWisp::DesiredPlayerAbilityState::IsFulfilled(this_ptr);
    }

    IL2CPP_INTERCEPT(GetAbilityOnCondition, void, AssignAbility, (app::GetAbilityOnCondition * this_ptr)) {
        auto ability = this_ptr->fields.Ability->fields.Ability;
        if (is_tree(ability)) {
            uber_states::UberState(UberStateGroup::Tree, static_cast<int>(ability)).set(1);
            csharp_bridge::on_tree(ability);
            // Update PlayerDescriptorUberState
            uber_states::UberState(static_cast<UberStateGroup>(3440), 37811).apply();
        }
    }
} // namespace
