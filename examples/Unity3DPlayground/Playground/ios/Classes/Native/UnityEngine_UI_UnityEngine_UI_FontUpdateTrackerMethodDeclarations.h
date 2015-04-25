#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t263;
// UnityEngine.UI.Text
struct Text_t264;
// UnityEngine.Font
struct Font_t260;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
 void FontUpdateTracker__cctor_m923 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_TrackText_m924 (Object_t * __this/* static, unused */, Text_t264 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
 void FontUpdateTracker_RebuildForFont_m925 (Object_t * __this/* static, unused */, Font_t260 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_UntrackText_m926 (Object_t * __this/* static, unused */, Text_t264 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
