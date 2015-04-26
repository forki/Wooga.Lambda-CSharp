#pragma once

// UnityEngine.Input
struct Input_t123;
// UnityEngine.Touch[]
struct TouchU5BU5D_t125;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void UnityEngine.Input::.cctor()
 void Input__cctor_m3644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
 float Input_GetAxis_m357 (Object_t * __this/* static, unused */, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
 float Input_GetAxisRaw_m356 (Object_t * __this/* static, unused */, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
 bool Input_GetButton_m358 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
 bool Input_GetButtonDown_m359 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
 bool Input_GetButtonUp_m360 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
 bool Input_GetMouseButton_m467 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
 bool Input_GetMouseButtonDown_m472 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
 bool Input_GetMouseButtonUp_m1870 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
 Vector3_t10  Input_get_mousePosition_m362 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
 Vector2_t25  Input_get_mouseScrollDelta_m1871 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_mousePresent()
 bool Input_get_mousePresent_m1888 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
 Vector3_t10  Input_get_acceleration_m363 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
 TouchU5BU5D_t125* Input_get_touches_m373 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
 Touch_t126  Input_GetTouch_m1905 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
 int32_t Input_get_touchCount_m372 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_touchSupported()
 bool Input_get_touchSupported_m1904 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
 void Input_set_imeCompositionMode_m2228 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
 String_t* Input_get_compositionString_m2144 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
 void Input_INTERNAL_set_compositionCursorPos_m3645 (Object_t * __this/* static, unused */, Vector2_t25 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
 void Input_set_compositionCursorPos_m2216 (Object_t * __this/* static, unused */, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
