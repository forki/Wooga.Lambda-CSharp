#pragma once

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t335;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t3996;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
 void UnityEvent_1__ctor_m2249 (UnityEvent_1_t335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m19190 (UnityEvent_1_t335 * __this, UnityAction_1_t3996 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m19191 (UnityEvent_1_t335 * __this, UnityAction_1_t3996 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t1265 * UnityEvent_1_FindMethod_Impl_m2250 (UnityEvent_1_t335 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m2251 (UnityEvent_1_t335 * __this, Object_t * ___target, MethodInfo_t1265 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m19192 (Object_t * __this/* static, unused */, UnityAction_1_t3996 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
 void UnityEvent_1_Invoke_m2261 (UnityEvent_1_t335 * __this, Vector2_t25  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
