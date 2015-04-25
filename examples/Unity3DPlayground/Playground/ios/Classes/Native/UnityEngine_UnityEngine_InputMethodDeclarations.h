#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Input
struct Input_t117;
// UnityEngine.Touch[]
struct TouchU5BU5D_t119;
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
 void Input__cctor_m5756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
 float Input_GetAxis_m352 (Object_t * __this/* static, unused */, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
 float Input_GetAxisRaw_m351 (Object_t * __this/* static, unused */, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButton(System.String)
 bool Input_GetButton_m353 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
 bool Input_GetButtonDown_m354 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
 bool Input_GetButtonUp_m355 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
 bool Input_GetMouseButton_m435 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
 bool Input_GetMouseButtonDown_m440 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
 bool Input_GetMouseButtonUp_m1863 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
 Vector3_t10  Input_get_mousePosition_m357 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
 Vector2_t25  Input_get_mouseScrollDelta_m1864 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_mousePresent()
 bool Input_get_mousePresent_m1882 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
 Vector3_t10  Input_get_acceleration_m358 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
 TouchU5BU5D_t119* Input_get_touches_m368 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
 Touch_t120  Input_GetTouch_m1899 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
 int32_t Input_get_touchCount_m367 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_touchSupported()
 bool Input_get_touchSupported_m1898 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
 void Input_set_imeCompositionMode_m2222 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
 String_t* Input_get_compositionString_m2138 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
 void Input_INTERNAL_set_compositionCursorPos_m5757 (Object_t * __this/* static, unused */, Vector2_t25 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
 void Input_set_compositionCursorPos_m2210 (Object_t * __this/* static, unused */, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
