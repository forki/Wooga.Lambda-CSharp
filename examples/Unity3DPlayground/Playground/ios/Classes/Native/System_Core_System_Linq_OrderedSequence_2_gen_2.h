#pragma once
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct OrderedEnumerable_1_t3295;
// System.Func`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct Func_2_t3287;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct IComparer_1_t3292;
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_2.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct OrderedSequence_2_t3296  : public OrderedEnumerable_1_t3295
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::parent
	OrderedEnumerable_1_t3295 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::selector
	Func_2_t3287 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::direction
	int32_t ___direction_4;
};
