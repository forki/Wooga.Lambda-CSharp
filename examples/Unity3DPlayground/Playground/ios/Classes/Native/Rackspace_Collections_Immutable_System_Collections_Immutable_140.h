#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641  : public Object_t
{
	// T System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_key
	KeyValuePair_2_t4473  ____key_1;
	// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_frozen
	bool ____frozen_2;
	// System.Byte System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_height
	uint8_t ____height_3;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_count
	int32_t ____count_4;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_left
	Node_t5641 * ____left_5;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::_right
	Node_t5641 * ____right_6;
};
struct Node_t5641_StaticFields{
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EmptyNode
	Node_t5641 * ___EmptyNode_0;
};
