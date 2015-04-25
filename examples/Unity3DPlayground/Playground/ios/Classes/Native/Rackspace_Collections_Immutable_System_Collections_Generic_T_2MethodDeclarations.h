#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.TreeWalkPredicate`1<System.Int32>
struct TreeWalkPredicate_1_t5589;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedSet`1/Node<System.Int32>
struct Node_t5587;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.TreeWalkPredicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
 void TreeWalkPredicate_1__ctor_m22799 (TreeWalkPredicate_1_t5589 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.TreeWalkPredicate`1<System.Int32>::Invoke(System.Collections.Generic.SortedSet`1/Node<T>)
 bool TreeWalkPredicate_1_Invoke_m22800 (TreeWalkPredicate_1_t5589 * __this, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.TreeWalkPredicate`1<System.Int32>::BeginInvoke(System.Collections.Generic.SortedSet`1/Node<T>,System.AsyncCallback,System.Object)
 Object_t * TreeWalkPredicate_1_BeginInvoke_m22801 (TreeWalkPredicate_1_t5589 * __this, Node_t5587 * ___node, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.TreeWalkPredicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
 bool TreeWalkPredicate_1_EndInvoke_m22802 (TreeWalkPredicate_1_t5589 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
