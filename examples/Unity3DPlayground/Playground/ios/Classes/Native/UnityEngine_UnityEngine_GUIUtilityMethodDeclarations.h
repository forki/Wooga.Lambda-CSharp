#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t2515;
// System.String
struct String_t;
// UnityEngine.GUISkin
struct GUISkin_t2498;
// System.Exception
struct Exception_t115;

// System.Void UnityEngine.GUIUtility::.cctor()
 void GUIUtility__cctor_m5375 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
 String_t* GUIUtility_get_systemCopyBuffer_m5376 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
 void GUIUtility_set_systemCopyBuffer_m5377 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
 GUISkin_t2498 * GUIUtility_GetDefaultSkin_m5378 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
 GUISkin_t2498 * GUIUtility_Internal_GetDefaultSkin_m5379 (Object_t * __this/* static, unused */, int32_t ___skinMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
 void GUIUtility_BeginGUI_m5380 (Object_t * __this/* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
 void GUIUtility_Internal_ExitGUI_m5381 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
 void GUIUtility_EndGUI_m5382 (Object_t * __this/* static, unused */, int32_t ___layoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
 bool GUIUtility_EndGUIFromException_m5383 (Object_t * __this/* static, unused */, Exception_t115 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
 void GUIUtility_CheckOnGUI_m5384 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
 int32_t GUIUtility_Internal_GetGUIDepth_m5385 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
