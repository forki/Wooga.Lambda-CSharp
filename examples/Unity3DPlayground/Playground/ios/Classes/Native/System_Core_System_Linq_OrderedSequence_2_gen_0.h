#pragma once
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Data.Unit>
struct OrderedEnumerable_1_t3237;
// System.Func`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>
struct Func_2_t3219;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Data.Unit>
struct IComparer_1_t3224;
// System.Linq.OrderedEnumerable`1<Wooga.Lambda.Data.Unit>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_0.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>
struct OrderedSequence_2_t3238  : public OrderedEnumerable_1_t3237
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>::parent
	OrderedEnumerable_1_t3237 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>::selector
	Func_2_t3219 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<Wooga.Lambda.Data.Unit,Wooga.Lambda.Data.Unit>::direction
	int32_t ___direction_4;
};
