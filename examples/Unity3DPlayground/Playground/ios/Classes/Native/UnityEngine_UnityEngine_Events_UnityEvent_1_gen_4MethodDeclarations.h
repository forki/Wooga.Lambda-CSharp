#pragma once

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t355;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t4066;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
 void UnityEvent_1__ctor_m2333 (UnityEvent_1_t355 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m19708 (UnityEvent_1_t355 * __this, UnityAction_1_t4066 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m19709 (UnityEvent_1_t355 * __this, UnityAction_1_t4066 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t1265 * UnityEvent_1_FindMethod_Impl_m2334 (UnityEvent_1_t355 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m2335 (UnityEvent_1_t355 * __this, Object_t * ___target, MethodInfo_t1265 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m19710 (Object_t * __this/* static, unused */, UnityAction_1_t4066 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
 void UnityEvent_1_Invoke_m2336 (UnityEvent_1_t355 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
