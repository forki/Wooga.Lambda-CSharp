#pragma once

// System.Linq.OrderedSequence`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct OrderedSequence_2_t4259;
// System.Collections.Generic.IEnumerable`1<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct IEnumerable_1_t4252;
// System.Func`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct Func_2_t4250;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct IComparer_1_t4255;
// System.Linq.SortContext`1<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct SortContext_1_t4260;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
 void OrderedSequence_2__ctor_m20659 (OrderedSequence_2_t4259 * __this, Object_t* ___source, Func_2_t4250 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::CreateContext(System.Linq.SortContext`1<TElement>)
 SortContext_1_t4260 * OrderedSequence_2_CreateContext_m20660 (OrderedSequence_2_t4259 * __this, SortContext_1_t4260 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
 Object_t* OrderedSequence_2_Sort_m20661 (OrderedSequence_2_t4259 * __this, Object_t* ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
