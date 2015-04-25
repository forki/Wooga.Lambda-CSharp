#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t2500;
// UnityEngine.GUISkin
struct GUISkin_t2498;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2497;
// UnityEngine.GUIStyle
struct GUIStyle_t2502;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.GUI::.cctor()
 void GUI__cctor_m5326 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m5327 (Object_t * __this/* static, unused */, DateTime_t2501  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m5328 (Object_t * __this/* static, unused */, GUISkin_t2498 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t2498 * GUI_get_skin_m5329 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m5330 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m5331 (Object_t * __this/* static, unused */, WindowFunction_t2497 * ___func, int32_t ___id, GUISkin_t2498 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t2502 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
