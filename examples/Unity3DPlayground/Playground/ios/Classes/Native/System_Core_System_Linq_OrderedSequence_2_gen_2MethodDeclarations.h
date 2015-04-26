#pragma once

// System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct OrderedSequence_2_t3296;
// System.Collections.Generic.IEnumerable`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct IEnumerable_1_t3288;
// System.Func`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct Func_2_t3287;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct IComparer_1_t3292;
// System.Linq.SortContext`1<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>
struct SortContext_1_t3297;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"
#define OrderedSequence_2__ctor_m14296(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m13797_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, (Func_2_t1075 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::CreateContext(System.Linq.SortContext`1<TElement>)
#define OrderedSequence_2_CreateContext_m14297(__this, ___current, method) (SortContext_1_t3297 *)OrderedSequence_2_CreateContext_m13798_gshared((OrderedSequence_2_t3230 *)__this, (SortContext_1_t3231 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Control.Concurrent.Async`1<System.Object>,Wooga.Lambda.Control.Concurrent.Async`1<System.Object>>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#define OrderedSequence_2_Sort_m14298(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m13799_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, method)
