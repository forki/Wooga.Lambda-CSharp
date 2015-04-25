#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.TreeWalkPredicate`1<System.Object>
struct TreeWalkPredicate_1_t5498;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedSet`1/Node<System.Object>
struct Node_t5497;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.TreeWalkPredicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void TreeWalkPredicate_1__ctor_m21859_gshared (TreeWalkPredicate_1_t5498 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method);
#define TreeWalkPredicate_1__ctor_m21859(__this, ___object, ___method, method) (void)TreeWalkPredicate_1__ctor_m21859_gshared((TreeWalkPredicate_1_t5498 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Boolean System.Collections.Generic.TreeWalkPredicate`1<System.Object>::Invoke(System.Collections.Generic.SortedSet`1/Node<T>)
 bool TreeWalkPredicate_1_Invoke_m21860_gshared (TreeWalkPredicate_1_t5498 * __this, Node_t5497 * ___node, MethodInfo* method);
#define TreeWalkPredicate_1_Invoke_m21860(__this, ___node, method) (bool)TreeWalkPredicate_1_Invoke_m21860_gshared((TreeWalkPredicate_1_t5498 *)__this, (Node_t5497 *)___node, method)
// System.IAsyncResult System.Collections.Generic.TreeWalkPredicate`1<System.Object>::BeginInvoke(System.Collections.Generic.SortedSet`1/Node<T>,System.AsyncCallback,System.Object)
 Object_t * TreeWalkPredicate_1_BeginInvoke_m21861_gshared (TreeWalkPredicate_1_t5498 * __this, Node_t5497 * ___node, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method);
#define TreeWalkPredicate_1_BeginInvoke_m21861(__this, ___node, ___callback, ___object, method) (Object_t *)TreeWalkPredicate_1_BeginInvoke_m21861_gshared((TreeWalkPredicate_1_t5498 *)__this, (Node_t5497 *)___node, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Collections.Generic.TreeWalkPredicate`1<System.Object>::EndInvoke(System.IAsyncResult)
 bool TreeWalkPredicate_1_EndInvoke_m21862_gshared (TreeWalkPredicate_1_t5498 * __this, Object_t * ___result, MethodInfo* method);
#define TreeWalkPredicate_1_EndInvoke_m21862(__this, ___result, method) (bool)TreeWalkPredicate_1_EndInvoke_m21862_gshared((TreeWalkPredicate_1_t5498 *)__this, (Object_t *)___result, method)
