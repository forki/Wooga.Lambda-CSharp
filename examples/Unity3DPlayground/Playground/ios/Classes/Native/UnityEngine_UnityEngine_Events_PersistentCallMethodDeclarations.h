#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t2632;
// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2622;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t2633;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m6102 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t30 * PersistentCall_get_target_m6103 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m6104 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m6105 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t2622 * PersistentCall_get_arguments_m6106 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m6107 (PersistentCall_t2632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t2623 * PersistentCall_GetRuntimeCall_m6108 (PersistentCall_t2632 * __this, UnityEventBase_t2633 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t2623 * PersistentCall_GetObjectCall_m6109 (Object_t * __this/* static, unused */, Object_t30 * ___target, MethodInfo_t2624 * ___method, ArgumentCache_t2622 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
