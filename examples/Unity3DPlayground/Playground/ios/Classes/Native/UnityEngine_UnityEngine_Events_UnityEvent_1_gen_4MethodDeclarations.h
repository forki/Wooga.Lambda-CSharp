#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t350;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t5285;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
 void UnityEvent_1__ctor_m2327 (UnityEvent_1_t350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m20742 (UnityEvent_1_t350 * __this, UnityAction_1_t5285 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m20743 (UnityEvent_1_t350 * __this, UnityAction_1_t5285 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t2624 * UnityEvent_1_FindMethod_Impl_m2328 (UnityEvent_1_t350 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t2623 * UnityEvent_1_GetDelegate_m2329 (UnityEvent_1_t350 * __this, Object_t * ___target, MethodInfo_t2624 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t2623 * UnityEvent_1_GetDelegate_m20744 (Object_t * __this/* static, unused */, UnityAction_1_t5285 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
 void UnityEvent_1_Invoke_m2330 (UnityEvent_1_t350 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
