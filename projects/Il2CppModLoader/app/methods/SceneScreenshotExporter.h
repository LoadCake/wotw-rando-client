#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SceneScreenshotExporter {
    IL2CPP_REGISTER_METHOD(0x00BBA740, void, OnDrawGizmosSelected, (app::SceneScreenshotExporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BBACD0, app::Rect, get_Bounds, (app::SceneScreenshotExporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::SceneScreenshotExporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BBAF40, void, ctor, (app::SceneScreenshotExporter * this_ptr))
}