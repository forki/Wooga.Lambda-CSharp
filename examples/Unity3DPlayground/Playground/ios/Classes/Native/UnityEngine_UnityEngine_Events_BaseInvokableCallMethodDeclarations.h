#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2623;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Delegate
struct Delegate_t447;

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
 void BaseInvokableCall__ctor_m6096 (BaseInvokableCall_t2623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
 void BaseInvokableCall__ctor_m6097 (BaseInvokableCall_t2623 * __this, Object_t * ___target, MethodInfo_t2624 * ___function, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
 bool BaseInvokableCall_AllowInvoke_m6098 (Object_t * __this/* static, unused */, Delegate_t447 * ___delegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
