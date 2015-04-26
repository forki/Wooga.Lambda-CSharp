#pragma once
// System.Linq.OrderedEnumerable`1<System.String>
struct OrderedEnumerable_1_t4369;
// System.Func`2<System.String,System.String>
struct Func_2_t4367;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t3038;
// System.Linq.OrderedEnumerable`1<System.String>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_9.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.String,System.String>
struct OrderedSequence_2_t4370  : public OrderedEnumerable_1_t4369
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.String,System.String>::parent
	OrderedEnumerable_1_t4369 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.String,System.String>::selector
	Func_2_t4367 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.String,System.String>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.String,System.String>::direction
	int32_t ___direction_4;
};
