#pragma once
// System.Linq.OrderedEnumerable`1<System.Byte>
struct OrderedEnumerable_1_t4297;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_t4287;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t4292;
// System.Linq.OrderedEnumerable`1<System.Byte>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_7.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.Byte,System.Byte>
struct OrderedSequence_2_t4298  : public OrderedEnumerable_1_t4297
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Byte,System.Byte>::parent
	OrderedEnumerable_1_t4297 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Byte,System.Byte>::selector
	Func_2_t4287 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Byte,System.Byte>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Byte,System.Byte>::direction
	int32_t ___direction_4;
};
