#pragma once
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>
struct OrderedEnumerable_1_t3409;
// System.Func`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>
struct Func_2_t3400;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>
struct IComparer_1_t3406;
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_5.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>
struct OrderedSequence_2_t3410  : public OrderedEnumerable_1_t3409
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>::parent
	OrderedEnumerable_1_t3409 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>::selector
	Func_2_t3400 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>,Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.Unit>>::direction
	int32_t ___direction_4;
};
