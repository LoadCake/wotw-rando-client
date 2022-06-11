#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::LegacyActivateAnimator {
    IL2CPP_REGISTER_METHOD(0x015C9FE0, void, OnStartPlay, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CA020, void, OnStopPlay, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CA070, void, CacheOriginals, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CA4B0, void, SampleValue, (app::LegacyActivateAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x015CA840, void, RestoreToOriginalState, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01130790, float, get_Duration, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_OriginalActivation, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::LegacyActivateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CABF0, void, ctor, (app::LegacyActivateAnimator * this_ptr))
}