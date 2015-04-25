#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>
struct SecureObjectPool_2_t5714;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5709;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>>
struct SecurePooledObject_1_t5715;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5710 
{
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_builder
	Builder_t5709 * ____builder_1;
	// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_poolUserId
	int32_t ____poolUserId_2;
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_root
	Node_t5708 * ____root_3;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>>>> System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_stack
	SecurePooledObject_1_t5715 * ____stack_4;
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_current
	Node_t5708 * ____current_5;
	// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::_enumeratingBuilderVersion
	int32_t ____enumeratingBuilderVersion_6;
};
struct Enumerator_t5710_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<TKey,TValue>> System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>::s_enumeratingStacks
	SecureObjectPool_2_t5714 * ___s_enumeratingStacks_0;
};
