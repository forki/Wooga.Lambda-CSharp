#pragma once
#include <stdint.h>
// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Object>>
struct Stack_1_t5506;
// System.Collections.Generic.SortedSet`1/Node<System.Object>
struct Node_t5497;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.SortedSet`1/Enumerator<System.Object>
struct Enumerator_t5501 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::tree
	SortedSet_1_t5495 * ___tree_0;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::version
	int32_t ___version_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::stack
	Stack_1_t5506 * ___stack_2;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::current
	Node_t5497 * ___current_3;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::reverse
	bool ___reverse_5;
};
struct Enumerator_t5501_StaticFields{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Object>::dummyNode
	Node_t5497 * ___dummyNode_4;
};
