#pragma once

// UnityEngine.GUIStyle
struct GUIStyle_t1142;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1160;
// UnityEngine.RectOffset
struct RectOffset_t378;
// UnityEngine.Font
struct Font_t265;
// UnityEngine.GUIContent
struct GUIContent_t466;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIStyle::.ctor()
 void GUIStyle__ctor_m3359 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m3360 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m3361 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m3362 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m3363 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m3364 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m3365 (GUIStyle_t1142 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t1160 * GUIStyle_get_normal_m3366 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t37 GUIStyle_GetStyleStatePtr_m3367 (GUIStyle_t1142 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t378 * GUIStyle_get_margin_m3368 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t378 * GUIStyle_get_padding_m3369 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t37 GUIStyle_GetRectOffsetPtr_m3370 (GUIStyle_t1142 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m3371 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m3372 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m3373 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m3374 (GUIStyle_t1142 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m3375 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m3376 (GUIStyle_t1142 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m3377 (Object_t * __this/* static, unused */, IntPtr_t37 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m3378 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m3379 (Object_t * __this/* static, unused */, Font_t265 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t1142 * GUIStyle_get_none_m3380 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t25  GUIStyle_GetCursorPixelPosition_m3381 (GUIStyle_t1142 * __this, Rect_t281  ___position, GUIContent_t466 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m3382 (Object_t * __this/* static, unused */, IntPtr_t37 ___target, Rect_t281  ___position, GUIContent_t466 * ___content, int32_t ___cursorStringIndex, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m3383 (Object_t * __this/* static, unused */, IntPtr_t37 ___target, Rect_t281 * ___position, GUIContent_t466 * ___content, int32_t ___cursorStringIndex, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t25  GUIStyle_CalcSize_m3384 (GUIStyle_t1142 * __this, GUIContent_t466 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m3385 (Object_t * __this/* static, unused */, IntPtr_t37 ___target, GUIContent_t466 * ___content, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m3386 (GUIStyle_t1142 * __this, GUIContent_t466 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m3387 (Object_t * __this/* static, unused */, IntPtr_t37 ___target, GUIContent_t466 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m3388 (GUIStyle_t1142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
