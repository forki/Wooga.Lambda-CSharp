#pragma once
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
struct OrderedEnumerable_1_t3267;
// System.Func`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
struct Func_2_t3260;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
struct IComparer_1_t3265;
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_1.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>
struct OrderedSequence_2_t3268  : public OrderedEnumerable_1_t3267
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::parent
	OrderedEnumerable_1_t3267 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::selector
	Func_2_t3260 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.Unit>>::direction
	int32_t ___direction_4;
};
