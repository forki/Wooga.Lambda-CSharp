#pragma once

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3682;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3065;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
 void UnityEvent_1__ctor_m16937_gshared (UnityEvent_1_t3682 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m16937(__this, method) (void)UnityEvent_1__ctor_m16937_gshared((UnityEvent_1_t3682 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m16939_gshared (UnityEvent_1_t3682 * __this, UnityAction_1_t3065 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m16939(__this, ___call, method) (void)UnityEvent_1_AddListener_m16939_gshared((UnityEvent_1_t3682 *)__this, (UnityAction_1_t3065 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m16941_gshared (UnityEvent_1_t3682 * __this, UnityAction_1_t3065 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m16941(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m16941_gshared((UnityEvent_1_t3682 *)__this, (UnityAction_1_t3065 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t1265 * UnityEvent_1_FindMethod_Impl_m16942_gshared (UnityEvent_1_t3682 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16942(__this, ___name, ___targetObj, method) (MethodInfo_t1265 *)UnityEvent_1_FindMethod_Impl_m16942_gshared((UnityEvent_1_t3682 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m16943_gshared (UnityEvent_1_t3682 * __this, Object_t * ___target, MethodInfo_t1265 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16943(__this, ___target, ___theFunction, method) (BaseInvokableCall_t1264 *)UnityEvent_1_GetDelegate_m16943_gshared((UnityEvent_1_t3682 *)__this, (Object_t *)___target, (MethodInfo_t1265 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t1264 * UnityEvent_1_GetDelegate_m16944_gshared (Object_t * __this/* static, unused */, UnityAction_1_t3065 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16944(__this/* static, unused */, ___action, method) (BaseInvokableCall_t1264 *)UnityEvent_1_GetDelegate_m16944_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t3065 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
 void UnityEvent_1_Invoke_m16945_gshared (UnityEvent_1_t3682 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m16945(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m16945_gshared((UnityEvent_1_t3682 *)__this, (Object_t *)___arg0, method)
