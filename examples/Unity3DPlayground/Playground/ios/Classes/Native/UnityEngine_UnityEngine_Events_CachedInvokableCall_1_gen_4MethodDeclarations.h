#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t4428;
// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
 void CachedInvokableCall_1__ctor_m14313_gshared (CachedInvokableCall_1_t4428 * __this, Object_t30 * ___target, MethodInfo_t2624 * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m14313(__this, ___target, ___theFunction, ___argument, method) (void)CachedInvokableCall_1__ctor_m14313_gshared((CachedInvokableCall_1_t4428 *)__this, (Object_t30 *)___target, (MethodInfo_t2624 *)___theFunction, (Object_t *)___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
 void CachedInvokableCall_1_Invoke_m14315_gshared (CachedInvokableCall_1_t4428 * __this, ObjectU5BU5D_t126* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m14315(__this, ___args, method) (void)CachedInvokableCall_1_Invoke_m14315_gshared((CachedInvokableCall_1_t4428 *)__this, (ObjectU5BU5D_t126*)___args, method)
