#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <game/player.h>
#include <interop/csharp_bridge.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <randomizer/render/shaders.h>
#include <uber_states/uber_state_interface.h>

using namespace modloader;
using namespace modloader::win;

namespace {
    struct BoundingRect {
        float left, right, bottom, top, front, back;
    };

    bool in_rect(BoundingRect const& rect, float x, float y, float z) {
        return !(
                x < rect.left ||
                x > rect.right ||
                y < rect.bottom ||
                y > rect.top ||
                z < rect.front ||
                z > rect.back
        );
    }

    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter * this_ptr));
    IL2CPP_BINDING(, SeinCharacter, void, set_Position, (app::SeinCharacter * this_ptr, app::Vector3 value));

    // Hardcoded position, front of entrance to Shriek fight.
    const app::Vector3 goal_reset_position = { 515.189453, -3745.529785, 0.0 };
    // Hardcoded bounding rectangle, area right before Shriek fight.
    const BoundingRect goal_rect = {
        535.0f,
        650.0f,
        -3620.0f,
        -3550.0f,
        -1.0f,
        1.0f
    };

    IL2CPP_BINDING(, GameplayCamera, void, MoveCameraToTargetInstantly, (app::GameplayCamera * this_ptr, bool updateTargetPosition));

    bool set_camera_next_update = false;
    uber_states::UberState goal_modes_complete(UberStateGroup::GameState, 11);
    IL2CPP_INTERCEPT(, SeinCharacter, void, FixedUpdate, (app::SeinCharacter * this_ptr)) {
        if (!goal_modes_complete.get<bool>()) {
            auto cameras = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras");
            if (set_camera_next_update) {
                if (cameras != nullptr && cameras->static_fields->Current != nullptr) {
                    // We need to do this on the next frame to allow state to update without causing flickering.
                    auto camera = cameras->static_fields->Current;
                    GameplayCamera::MoveCameraToTargetInstantly(camera, true);
                } else {
                    warn("goal mode tp", "failed to refocus camera");
                }
                set_camera_next_update = false;
            }

            SeinCharacter::FixedUpdate(this_ptr);
            auto position = SeinCharacter::get_Position(this_ptr);
            if (in_rect(goal_rect, position.x, position.y, position.z)) {
                SeinCharacter::set_Position(this_ptr, goal_reset_position);
                csharp_bridge::on_goal_mode_fail();
                set_camera_next_update = true;
            }
        } else
            SeinCharacter::FixedUpdate(this_ptr);
    }

    void report_player_position(std::string const& command, std::vector<console::CommandParam> const& params) {
        const auto sein = game::player::sein();
        if (sein != nullptr) {
            const auto position = SeinCharacter::get_Position(sein);
            console::console_send(format("sein pos: {%f, %f, %f}", position.x, position.y, position.z));
        } else
            console::console_send("sein not available.");
    }

    void add_goal_commands() {
        console::register_command({ "debug", "report_player_position" }, report_player_position);
    }

    CALL_ON_INIT(add_goal_commands);
} // namespace
