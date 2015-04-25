#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>
struct SecureObjectPool_2_t4706;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>
struct Builder_t4699;
// System.Collections.Immutable.ImmutableList`1/Node<System.Int32>
struct Node_t4697;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>>
struct SecurePooledObject_1_t4707;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
struct Enumerator_t4705 
{
	// System.Collections.Immutable.ImmutableList`1/Builder<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_builder
	Builder_t4699 * ____builder_1;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_poolUserId
	int32_t ____poolUserId_2;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_startIndex
	int32_t ____startIndex_3;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_count
	int32_t ____count_4;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_remainingCount
	int32_t ____remainingCount_5;
	// System.Boolean System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_reversed
	bool ____reversed_6;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_root
	Node_t4697 * ____root_7;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<T>>>> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_stack
	SecurePooledObject_1_t4707 * ____stack_8;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_current
	Node_t4697 * ____current_9;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::_enumeratingBuilderVersion
	int32_t ____enumeratingBuilderVersion_10;
};
struct Enumerator_t4705_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<T>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<T>> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>::s_EnumeratingStacks
	SecureObjectPool_2_t4706 * ___s_EnumeratingStacks_0;
};
