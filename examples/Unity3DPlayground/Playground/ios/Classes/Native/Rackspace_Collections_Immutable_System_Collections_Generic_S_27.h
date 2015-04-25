#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.SortedSet`1/Node<System.Object>
struct Node_t5497;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495  : public Object_t
{
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::root
	Node_t5497 * ___root_10;
	// System.Collections.Generic.IComparer`1<T> System.Collections.Generic.SortedSet`1<System.Object>::comparer
	Object_t* ___comparer_11;
	// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::count
	int32_t ___count_12;
	// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::version
	int32_t ___version_13;
	// System.Object System.Collections.Generic.SortedSet`1<System.Object>::_syncRoot
	Object_t * ____syncRoot_14;
};
