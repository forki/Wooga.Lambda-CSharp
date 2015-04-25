#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t5729;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t2944;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
 void NodeHelper__ctor_m24247_gshared (NodeHelper_t5729 * __this, Object_t* ___cmp, MethodInfo* method);
#define NodeHelper__ctor_m24247(__this, ___cmp, method) (void)NodeHelper__ctor_m24247_gshared((NodeHelper_t5729 *)__this, (Object_t*)___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.cctor()
 void NodeHelper__cctor_m24248_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define NodeHelper__cctor_m24248(__this/* static, unused */, method) (void)NodeHelper__cctor_m24248_gshared((Object_t *)__this/* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
 int32_t NodeHelper_Compare_m24249_gshared (NodeHelper_t5729 * __this, Object_t * ___key, Node_t2944 * ___node, MethodInfo* method);
#define NodeHelper_Compare_m24249(__this, ___key, ___node, method) (int32_t)NodeHelper_Compare_m24249_gshared((NodeHelper_t5729 *)__this, (Object_t *)___key, (Node_t2944 *)___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::CreateNode(TKey)
 Node_t2944 * NodeHelper_CreateNode_m24250_gshared (NodeHelper_t5729 * __this, Object_t * ___key, MethodInfo* method);
#define NodeHelper_CreateNode_m24250(__this, ___key, method) (Node_t2944 *)NodeHelper_CreateNode_m24250_gshared((NodeHelper_t5729 *)__this, (Object_t *)___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
 NodeHelper_t5729 * NodeHelper_GetHelper_m24251_gshared (Object_t * __this/* static, unused */, Object_t* ___cmp, MethodInfo* method);
#define NodeHelper_GetHelper_m24251(__this/* static, unused */, ___cmp, method) (NodeHelper_t5729 *)NodeHelper_GetHelper_m24251_gshared((Object_t *)__this/* static, unused */, (Object_t*)___cmp, method)
