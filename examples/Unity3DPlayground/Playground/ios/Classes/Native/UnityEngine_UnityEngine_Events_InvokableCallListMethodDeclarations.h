#pragma once

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1277;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1264;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Object[]
struct ObjectU5BU5D_t149;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m3998 (InvokableCallList_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m3999 (InvokableCallList_t1277 * __this, BaseInvokableCall_t1264 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m4000 (InvokableCallList_t1277 * __this, BaseInvokableCall_t1264 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m4001 (InvokableCallList_t1277 * __this, Object_t * ___targetObj, MethodInfo_t1265 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m4002 (InvokableCallList_t1277 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m4003 (InvokableCallList_t1277 * __this, ObjectU5BU5D_t149* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
