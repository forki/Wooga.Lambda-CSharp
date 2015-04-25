#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708;
// System.Object
struct Object_t;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t5711;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708  : public Object_t
{
	// TKey System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_key
	Object_t * ____key_1;
	// TValue System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_value
	Object_t * ____value_2;
	// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_frozen
	bool ____frozen_3;
	// System.Byte System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_height
	uint8_t ____height_4;
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_left
	Node_t5708 * ____left_5;
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::_right
	Node_t5708 * ____right_6;
};
struct Node_t5708_StaticFields{
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::EmptyNode
	Node_t5708 * ___EmptyNode_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TKey> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t5711 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1_7;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_t5711 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate3_8;
};
