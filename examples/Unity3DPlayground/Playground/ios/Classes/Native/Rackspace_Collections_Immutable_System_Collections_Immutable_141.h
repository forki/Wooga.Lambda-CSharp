#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct SecureObjectPool_2_t5651;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Builder_t5644;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>>
struct SecurePooledObject_1_t5652;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t5650 
{
	// System.Collections.Immutable.ImmutableList`1/Builder<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_builder
	Builder_t5644 * ____builder_1;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_poolUserId
	int32_t ____poolUserId_2;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_startIndex
	int32_t ____startIndex_3;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_count
	int32_t ____count_4;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_remainingCount
	int32_t ____remainingCount_5;
	// System.Boolean System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_reversed
	bool ____reversed_6;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_root
	Node_t5641 * ____root_7;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<T>>>> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_stack
	SecurePooledObject_1_t5652 * ____stack_8;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_current
	Node_t5641 * ____current_9;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_enumeratingBuilderVersion
	int32_t ____enumeratingBuilderVersion_10;
};
struct Enumerator_t5650_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<T>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<T>> System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::s_EnumeratingStacks
	SecureObjectPool_2_t5651 * ___s_EnumeratingStacks_0;
};
