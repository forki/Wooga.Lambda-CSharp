#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t301;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t5191;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;

// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m2106(__this, method) (void)UnityEvent_1__ctor_m17817_gshared((UnityEvent_1_t4902 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m20096(__this, ___call, method) (void)UnityEvent_1_AddListener_m17819_gshared((UnityEvent_1_t4902 *)__this, (UnityAction_1_t4430 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m20097(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m17821_gshared((UnityEvent_1_t4902 *)__this, (UnityAction_1_t4430 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.String>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2107(__this, ___name, ___targetObj, method) (MethodInfo_t2624 *)UnityEvent_1_FindMethod_Impl_m17822_gshared((UnityEvent_1_t4902 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2108(__this, ___target, ___theFunction, method) (BaseInvokableCall_t2623 *)UnityEvent_1_GetDelegate_m17823_gshared((UnityEvent_1_t4902 *)__this, (Object_t *)___target, (MethodInfo_t2624 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.String>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m2109(__this/* static, unused */, ___action, method) (BaseInvokableCall_t2623 *)UnityEvent_1_GetDelegate_m17824_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t4430 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
#define UnityEvent_1_Invoke_m2179(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m17825_gshared((UnityEvent_1_t4902 *)__this, (Object_t *)___arg0, method)
