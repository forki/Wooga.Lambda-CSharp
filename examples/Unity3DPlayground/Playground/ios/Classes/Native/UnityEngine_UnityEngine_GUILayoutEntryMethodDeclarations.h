#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2510;
// UnityEngine.GUIStyle
struct GUIStyle_t2502;
// UnityEngine.RectOffset
struct RectOffset_t373;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2509;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUILayoutEntry__ctor_m5347 (GUILayoutEntry_t2510 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t2502 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
 void GUILayoutEntry__cctor_m5348 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
 GUIStyle_t2502 * GUILayoutEntry_get_style_m5349 (GUILayoutEntry_t2510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
 void GUILayoutEntry_set_style_m5350 (GUILayoutEntry_t2510 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
 RectOffset_t373 * GUILayoutEntry_get_margin_m5351 (GUILayoutEntry_t2510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
 void GUILayoutEntry_CalcWidth_m5352 (GUILayoutEntry_t2510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
 void GUILayoutEntry_CalcHeight_m5353 (GUILayoutEntry_t2510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
 void GUILayoutEntry_SetHorizontal_m5354 (GUILayoutEntry_t2510 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
 void GUILayoutEntry_SetVertical_m5355 (GUILayoutEntry_t2510 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutEntry_ApplyStyleSettings_m5356 (GUILayoutEntry_t2510 * __this, GUIStyle_t2502 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutEntry_ApplyOptions_m5357 (GUILayoutEntry_t2510 * __this, GUILayoutOptionU5BU5D_t2509* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
 String_t* GUILayoutEntry_ToString_m5358 (GUILayoutEntry_t2510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
