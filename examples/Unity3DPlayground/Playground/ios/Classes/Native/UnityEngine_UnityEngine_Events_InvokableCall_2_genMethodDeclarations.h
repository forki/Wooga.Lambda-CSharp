#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t6247;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_2__ctor_m27607_gshared (InvokableCall_2_t6247 * __this, Object_t * ___target, MethodInfo_t2624 * ___theFunction, MethodInfo* method);
#define InvokableCall_2__ctor_m27607(__this, ___target, ___theFunction, method) (void)InvokableCall_2__ctor_m27607_gshared((InvokableCall_2_t6247 *)__this, (Object_t *)___target, (MethodInfo_t2624 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
 void InvokableCall_2_Invoke_m27608_gshared (InvokableCall_2_t6247 * __this, ObjectU5BU5D_t126* ___args, MethodInfo* method);
#define InvokableCall_2_Invoke_m27608(__this, ___args, method) (void)InvokableCall_2_Invoke_m27608_gshared((InvokableCall_2_t6247 *)__this, (ObjectU5BU5D_t126*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_2_Find_m27609_gshared (InvokableCall_2_t6247 * __this, Object_t * ___targetObj, MethodInfo_t2624 * ___method, MethodInfo* method);
#define InvokableCall_2_Find_m27609(__this, ___targetObj, ___method, method) (bool)InvokableCall_2_Find_m27609_gshared((InvokableCall_2_t6247 *)__this, (Object_t *)___targetObj, (MethodInfo_t2624 *)___method, method)
