#pragma once
// System.Linq.OrderedEnumerable`1<System.Threading.WaitHandle>
struct OrderedEnumerable_1_t3365;
// System.Func`2<System.Threading.WaitHandle,System.Threading.WaitHandle>
struct Func_2_t3354;
// System.Collections.Generic.IComparer`1<System.Threading.WaitHandle>
struct IComparer_1_t3360;
// System.Linq.OrderedEnumerable`1<System.Threading.WaitHandle>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_4.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>
struct OrderedSequence_2_t3366  : public OrderedEnumerable_1_t3365
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::parent
	OrderedEnumerable_1_t3365 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::selector
	Func_2_t3354 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::direction
	int32_t ___direction_4;
};
