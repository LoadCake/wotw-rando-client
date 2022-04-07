#pragma once

#include <json/json.hpp>

enum class Action
{
    MainMenuSaveCopy,
    MainMenuSaveDelete,
    Interact,
    Jump,
    Ability1,
    Ability2,
    Ability3,
    Glide,
    Grab,
    Dash,
    Burrow,
    Bash,
    Grapple,
    DialogueAdvance,
    DialogueOption1,
    DialogueOption2,
    DialogueOption3,
    DialogueExit,
    OpenMapsShardsInventory,
    OpenWeaponWheel,
    PauseScreen,
    LiveSignIn,
    MapZoomIn,
    MapZoomOut,
    MenuSelect,
    MenuBack,
    MenuClose,
    MenuDown,
    MenuUp,
    MenuLeft,
    MenuRight,
    MenuPageLeft,
    MenuPageRight,
    LeaderboardCycleFilter,
    MapFilter,
    MapDetails,
    MapFocusOri,
    MapFocusObjective,

    RANDO_ACTIONS_START,

    OpenRandoWheel,
    QuickBuy,

    // Legacy actions.
    Binding1,
    Binding2,
    Binding3,
    Binding4,
    Binding5,
    Reload,
    ShowLastPickup,
    ShowProgressWithHints,
    WarpCredits,

    ToggleCursorLock,
    ToggleAlwaysShowKeystones,
    ToggleAutoaim,

    ShowDevFlag,
    ToggleDebug,
    PrintCoordinates,
    ClearMessages,
    TeleportCheat,
    UnlockSpoilers,
    TogglePickupNamesOnSpoiler,
    ForceExit,

    // Passthrough actions. Used by the Launcher
    ToggleBingoBoardOverlay,

    TOTAL
};

NLOHMANN_JSON_SERIALIZE_ENUM(Action, {
    { Action::MainMenuSaveCopy, "MainMenuSaveCopy" },
    { Action::MainMenuSaveDelete, "MainMenuSaveDelete" },
    { Action::Interact, "Interact" },
    { Action::Jump, "Jump" },
    { Action::Ability1, "Ability1" },
    { Action::Ability2, "Ability2" },
    { Action::Ability3, "Ability3" },
    { Action::Glide, "Glide" },
    { Action::Grab, "Grab" },
    { Action::Dash, "Dash" },
    { Action::Burrow, "Burrow" },
    { Action::Bash, "Bash" },
    { Action::Grapple, "Grapple" },
    { Action::DialogueAdvance, "DialogueAdvance" },
    { Action::DialogueOption1, "DialogueOption1" },
    { Action::DialogueOption2, "DialogueOption2" },
    { Action::DialogueOption3, "DialogueOption3" },
    { Action::DialogueExit, "DialogueExit" },
    { Action::OpenMapsShardsInventory, "OpenMapsShardsInventory" },
    { Action::OpenWeaponWheel, "OpenWeaponWheel" },
    { Action::PauseScreen, "PauseScreen" },
    { Action::LiveSignIn, "LiveSignIn" },
    { Action::MapZoomIn, "MapZoomIn" },
    { Action::MapZoomOut, "MapZoomOut" },
    { Action::MenuSelect, "MenuSelect" },
    { Action::MenuBack, "MenuBack" },
    { Action::MenuClose, "MenuClose" },
    { Action::MenuDown, "MenuDown" },
    { Action::MenuUp, "MenuUp" },
    { Action::MenuLeft, "MenuLeft" },
    { Action::MenuRight, "MenuRight" },
    { Action::MenuPageLeft, "MenuPageLeft" },
    { Action::MenuPageRight, "MenuPageRight" },
    { Action::LeaderboardCycleFilter, "LeaderboardCycleFilter" },
    { Action::MapFilter, "MapFilter" },
    { Action::MapDetails, "MapDetails" },
    { Action::MapFocusOri, "MapFocusOri" },
    { Action::MapFocusObjective, "MapFocusObjective" },
    { Action::OpenRandoWheel, "OpenRandoWheel" },
    { Action::QuickBuy, "QuickBuy" },
    { Action::Binding1, "Binding1" },
    { Action::Binding2, "Binding2" },
    { Action::Binding3, "Binding3" },
    { Action::Binding4, "Binding4" },
    { Action::Binding5, "Binding5" },
    { Action::Reload, "Reload" },
    { Action::ShowLastPickup, "ShowLastPickup" },
    { Action::ShowProgressWithHints, "ShowProgressWithHints" },
    { Action::WarpCredits, "WarpCredits" },
    { Action::ToggleCursorLock, "ToggleCursorLock" },
    { Action::ToggleAlwaysShowKeystones, "ToggleAlwaysShowKeystones" },
    { Action::ToggleAutoaim, "ToggleAutoaim" },
    { Action::ShowDevFlag, "ShowDevFlag" },
    { Action::ToggleDebug, "ToggleDebug" },
    { Action::PrintCoordinates, "PrintCoordinates" },
    { Action::ClearMessages, "ClearMessages" },
    { Action::TeleportCheat, "TeleportCheat" },
    { Action::UnlockSpoilers, "UnlockSpoilers" },
    { Action::TogglePickupNamesOnSpoiler, "TogglePickupNamesOnSpoiler" },
    { Action::ForceExit, "ForceExit" },
    { Action::ToggleBingoBoardOverlay, "ToggleBingoBoardOverlay" },
});