#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t6249;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t2624;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_3__ctor_m27614_gshared (InvokableCall_3_t6249 * __this, Object_t * ___target, MethodInfo_t2624 * ___theFunction, MethodInfo* method);
#define InvokableCall_3__ctor_m27614(__this, ___target, ___theFunction, method) (void)InvokableCall_3__ctor_m27614_gshared((InvokableCall_3_t6249 *)__this, (Object_t *)___target, (MethodInfo_t2624 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
 void InvokableCall_3_Invoke_m27615_gshared (InvokableCall_3_t6249 * __this, ObjectU5BU5D_t126* ___args, MethodInfo* method);
#define InvokableCall_3_Invoke_m27615(__this, ___args, method) (void)InvokableCall_3_Invoke_m27615_gshared((InvokableCall_3_t6249 *)__this, (ObjectU5BU5D_t126*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_3_Find_m27616_gshared (InvokableCall_3_t6249 * __this, Object_t * ___targetObj, MethodInfo_t2624 * ___method, MethodInfo* method);
#define InvokableCall_3_Find_m27616(__this, ___targetObj, ___method, method) (bool)InvokableCall_3_Find_m27616_gshared((InvokableCall_3_t6249 *)__this, (Object_t *)___targetObj, (MethodInfo_t2624 *)___method, method)
