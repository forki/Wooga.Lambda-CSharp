#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t2571;
struct AnimatorTransitionInfo_t2571_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
 bool AnimatorTransitionInfo_IsName_m5896 (AnimatorTransitionInfo_t2571 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
 bool AnimatorTransitionInfo_IsUserName_m5897 (AnimatorTransitionInfo_t2571 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
 int32_t AnimatorTransitionInfo_get_fullPathHash_m5898 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
 int32_t AnimatorTransitionInfo_get_nameHash_m5899 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
 int32_t AnimatorTransitionInfo_get_userNameHash_m5900 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
 float AnimatorTransitionInfo_get_normalizedTime_m5901 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
 bool AnimatorTransitionInfo_get_anyState_m5902 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
 bool AnimatorTransitionInfo_get_entry_m5903 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
 bool AnimatorTransitionInfo_get_exit_m5904 (AnimatorTransitionInfo_t2571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t2571_marshal(const AnimatorTransitionInfo_t2571& unmarshaled, AnimatorTransitionInfo_t2571_marshaled& marshaled);
void AnimatorTransitionInfo_t2571_marshal_back(const AnimatorTransitionInfo_t2571_marshaled& marshaled, AnimatorTransitionInfo_t2571& unmarshaled);
void AnimatorTransitionInfo_t2571_marshal_cleanup(AnimatorTransitionInfo_t2571_marshaled& marshaled);
