#pragma once
#include <stdint.h>
// System.Collections.Generic.SortedSet`1<System.Int32>
struct SortedSet_1_t5588;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Int32>>
struct Stack_1_t5597;
// System.Collections.Generic.SortedSet`1/Node<System.Int32>
struct Node_t5587;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>
struct Enumerator_t5592 
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::tree
	SortedSet_1_t5588 * ___tree_0;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::version
	int32_t ___version_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::stack
	Stack_1_t5597 * ___stack_2;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::current
	Node_t5587 * ___current_3;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::reverse
	bool ___reverse_5;
};
struct Enumerator_t5592_StaticFields{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>::dummyNode
	Node_t5587 * ___dummyNode_4;
};
