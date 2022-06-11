#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::OriSpeechSounds {
    IL2CPP_REGISTER_METHOD(0x00440050, void, Awake, (app::OriSpeechSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004402E0, void, Start, (app::OriSpeechSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004402E0, void, OnNextMessage, (app::OriSpeechSounds * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C188, OriSpeechSounds_OnNextMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004402F0, void, OnMessageScreenHide, (app::OriSpeechSounds * this_ptr, app::MessageBox_HideAction__Enum action))
    IL2CPP_REGISTER_METHODINFO(0x04783050, OriSpeechSounds_OnMessageScreenHide__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00440300, void, PlayOriSpeech, (app::OriSpeechSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00440720, void, StopOriSpeech, (app::OriSpeechSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00440A20, app::OriSpeechSounds_EmotionSounds *, GetSoundSetForEmotion, (app::OriSpeechSounds * this_ptr, app::EmotionType__Enum emotion))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OriSpeechSounds * this_ptr))
}