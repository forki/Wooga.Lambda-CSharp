#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535  : public Object_t
{
	// T System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_key
	Object_t * ____key_1;
	// System.Boolean System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_frozen
	bool ____frozen_2;
	// System.Byte System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_height
	uint8_t ____height_3;
	// System.Int32 System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_count
	int32_t ____count_4;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_left
	Node_t5535 * ____left_5;
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::_right
	Node_t5535 * ____right_6;
};
struct Node_t5535_StaticFields{
	// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Node<System.Object>::EmptyNode
	Node_t5535 * ___EmptyNode_0;
};
