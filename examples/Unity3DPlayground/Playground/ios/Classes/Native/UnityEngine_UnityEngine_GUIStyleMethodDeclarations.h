#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t2502;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2520;
// UnityEngine.RectOffset
struct RectOffset_t373;
// UnityEngine.Font
struct Font_t260;
// UnityEngine.GUIContent
struct GUIContent_t461;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIStyle::.ctor()
 void GUIStyle__ctor_m5471 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m5472 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m5473 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m5474 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m5475 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m5476 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m5477 (GUIStyle_t2502 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t2520 * GUIStyle_get_normal_m5478 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t31 GUIStyle_GetStyleStatePtr_m5479 (GUIStyle_t2502 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t373 * GUIStyle_get_margin_m5480 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t373 * GUIStyle_get_padding_m5481 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t31 GUIStyle_GetRectOffsetPtr_m5482 (GUIStyle_t2502 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m5483 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m5484 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m5485 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m5486 (GUIStyle_t2502 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m5487 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m5488 (GUIStyle_t2502 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m5489 (Object_t * __this/* static, unused */, IntPtr_t31 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m5490 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m5491 (Object_t * __this/* static, unused */, Font_t260 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t2502 * GUIStyle_get_none_m5492 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t25  GUIStyle_GetCursorPixelPosition_m5493 (GUIStyle_t2502 * __this, Rect_t276  ___position, GUIContent_t461 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m5494 (Object_t * __this/* static, unused */, IntPtr_t31 ___target, Rect_t276  ___position, GUIContent_t461 * ___content, int32_t ___cursorStringIndex, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5495 (Object_t * __this/* static, unused */, IntPtr_t31 ___target, Rect_t276 * ___position, GUIContent_t461 * ___content, int32_t ___cursorStringIndex, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t25  GUIStyle_CalcSize_m5496 (GUIStyle_t2502 * __this, GUIContent_t461 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m5497 (Object_t * __this/* static, unused */, IntPtr_t31 ___target, GUIContent_t461 * ___content, Vector2_t25 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m5498 (GUIStyle_t2502 * __this, GUIContent_t461 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m5499 (Object_t * __this/* static, unused */, IntPtr_t31 ___target, GUIContent_t461 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m5500 (GUIStyle_t2502 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
