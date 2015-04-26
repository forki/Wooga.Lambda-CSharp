#pragma once

// UnityEngine.AnimationCurve
struct AnimationCurve_t51;
struct AnimationCurve_t51_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t157;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m454 (AnimationCurve_t51 * __this, KeyframeU5BU5D_t157* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m3760 (AnimationCurve_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m3761 (AnimationCurve_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m3762 (AnimationCurve_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
 float AnimationCurve_Evaluate_m459 (AnimationCurve_t51 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
 Keyframe_t158  AnimationCurve_get_Item_m457 (AnimationCurve_t51 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
 int32_t AnimationCurve_get_length_m456 (AnimationCurve_t51 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
 Keyframe_t158  AnimationCurve_GetKey_Internal_m3763 (AnimationCurve_t51 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m3764 (AnimationCurve_t51 * __this, KeyframeU5BU5D_t157* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t51_marshal(const AnimationCurve_t51& unmarshaled, AnimationCurve_t51_marshaled& marshaled);
void AnimationCurve_t51_marshal_back(const AnimationCurve_t51_marshaled& marshaled, AnimationCurve_t51& unmarshaled);
void AnimationCurve_t51_marshal_cleanup(AnimationCurve_t51_marshaled& marshaled);
