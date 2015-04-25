#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t123;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// UnityEngine.AnimationState
struct AnimationState_t2564;
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Boolean UnityEngine.Animation::Play()
 bool Animation_Play_m391 (Animation_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
 bool Animation_Play_m5882 (Animation_t123 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
 bool Animation_PlayDefaultAnimation_m5883 (Animation_t123 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
 Object_t * Animation_GetEnumerator_m5884 (Animation_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
 AnimationState_t2564 * Animation_GetStateAtIndex_m5885 (Animation_t123 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
 int32_t Animation_GetStateCount_m5886 (Animation_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
