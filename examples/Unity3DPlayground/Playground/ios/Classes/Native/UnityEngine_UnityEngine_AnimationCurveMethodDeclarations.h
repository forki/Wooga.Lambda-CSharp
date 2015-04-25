#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t45;
struct AnimationCurve_t45_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t134;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m422 (AnimationCurve_t45 * __this, KeyframeU5BU5D_t134* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m5873 (AnimationCurve_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m5874 (AnimationCurve_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m5875 (AnimationCurve_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
 float AnimationCurve_Evaluate_m427 (AnimationCurve_t45 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
 Keyframe_t135  AnimationCurve_get_Item_m425 (AnimationCurve_t45 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
 int32_t AnimationCurve_get_length_m424 (AnimationCurve_t45 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
 Keyframe_t135  AnimationCurve_GetKey_Internal_m5876 (AnimationCurve_t45 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m5877 (AnimationCurve_t45 * __this, KeyframeU5BU5D_t134* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t45_marshal(const AnimationCurve_t45& unmarshaled, AnimationCurve_t45_marshaled& marshaled);
void AnimationCurve_t45_marshal_back(const AnimationCurve_t45_marshaled& marshaled, AnimationCurve_t45& unmarshaled);
void AnimationCurve_t45_marshal_cleanup(AnimationCurve_t45_marshaled& marshaled);
