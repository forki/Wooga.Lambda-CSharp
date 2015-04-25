#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5732;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t2944;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
 void Node__ctor_m24077_gshared (Node_t5732 * __this, Object_t * ___key, MethodInfo* method);
#define Node__ctor_m24077(__this, ___key, method) (void)Node__ctor_m24077_gshared((Node_t5732 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
 void Node__ctor_m24078_gshared (Node_t5732 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Node__ctor_m24078(__this, ___key, ___value, method) (void)Node__ctor_m24078_gshared((Node_t5732 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m24079_gshared (Node_t5732 * __this, Node_t2944 * ___other, MethodInfo* method);
#define Node_SwapValue_m24079(__this, ___other, method) (void)Node_SwapValue_m24079_gshared((Node_t5732 *)__this, (Node_t2944 *)___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
 KeyValuePair_2_t4473  Node_AsKV_m24080 (Node_t5732 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
 DictionaryEntry_t1199  Node_AsDE_m24081_gshared (Node_t5732 * __this, MethodInfo* method);
#define Node_AsDE_m24081(__this, method) (DictionaryEntry_t1199 )Node_AsDE_m24081_gshared((Node_t5732 *)__this, method)
