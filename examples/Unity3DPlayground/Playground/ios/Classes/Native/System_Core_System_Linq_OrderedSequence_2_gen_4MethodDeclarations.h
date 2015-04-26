#pragma once

// System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>
struct OrderedSequence_2_t3366;
// System.Collections.Generic.IEnumerable`1<System.Threading.WaitHandle>
struct IEnumerable_1_t3356;
// System.Func`2<System.Threading.WaitHandle,System.Threading.WaitHandle>
struct Func_2_t3354;
// System.Collections.Generic.IComparer`1<System.Threading.WaitHandle>
struct IComparer_1_t3360;
// System.Linq.SortContext`1<System.Threading.WaitHandle>
struct SortContext_1_t3367;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"
#define OrderedSequence_2__ctor_m14788(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m13797_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, (Func_2_t1075 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::CreateContext(System.Linq.SortContext`1<TElement>)
#define OrderedSequence_2_CreateContext_m14789(__this, ___current, method) (SortContext_1_t3367 *)OrderedSequence_2_CreateContext_m13798_gshared((OrderedSequence_2_t3230 *)__this, (SortContext_1_t3231 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Threading.WaitHandle,System.Threading.WaitHandle>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#define OrderedSequence_2_Sort_m14790(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m13799_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, method)
