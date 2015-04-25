#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>
struct SecureObjectPool_2_t5821;
// System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>
struct Builder_t5819;
// System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>
struct Node_t5818;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>>
struct SecurePooledObject_1_t5822;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>
struct Enumerator_t5820 
{
	// System.Collections.Immutable.ImmutableSortedSet`1/Builder<T> System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_builder
	Builder_t5819 * ____builder_1;
	// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_poolUserId
	int32_t ____poolUserId_2;
	// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_reverse
	bool ____reverse_3;
	// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_root
	Node_t5818 * ____root_4;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<T>>>> System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_stack
	SecurePooledObject_1_t5822 * ____stack_5;
	// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_current
	Node_t5818 * ____current_6;
	// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::_enumeratingBuilderVersion
	int32_t ____enumeratingBuilderVersion_7;
};
struct Enumerator_t5820_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<T>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<T>> System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>::s_enumeratingStacks
	SecureObjectPool_2_t5821 * ___s_enumeratingStacks_0;
};
