#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.SortedSet`1/Node<System.Int32>
struct Node_t5587;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4389;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.SortedSet`1<System.Int32>
struct SortedSet_1_t5588  : public Object_t
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::root
	Node_t5587 * ___root_10;
	// System.Collections.Generic.IComparer`1<T> System.Collections.Generic.SortedSet`1<System.Int32>::comparer
	Object_t* ___comparer_11;
	// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::count
	int32_t ___count_12;
	// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::version
	int32_t ___version_13;
	// System.Object System.Collections.Generic.SortedSet`1<System.Int32>::_syncRoot
	Object_t * ____syncRoot_14;
};
