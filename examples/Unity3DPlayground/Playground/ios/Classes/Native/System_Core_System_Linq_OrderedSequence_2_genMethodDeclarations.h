#pragma once

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t3230;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3189;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1075;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3192;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t3231;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
 void OrderedSequence_2__ctor_m13797_gshared (OrderedSequence_2_t3230 * __this, Object_t* ___source, Func_2_t1075 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method);
#define OrderedSequence_2__ctor_m13797(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m13797_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, (Func_2_t1075 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
 SortContext_1_t3231 * OrderedSequence_2_CreateContext_m13798_gshared (OrderedSequence_2_t3230 * __this, SortContext_1_t3231 * ___current, MethodInfo* method);
#define OrderedSequence_2_CreateContext_m13798(__this, ___current, method) (SortContext_1_t3231 *)OrderedSequence_2_CreateContext_m13798_gshared((OrderedSequence_2_t3230 *)__this, (SortContext_1_t3231 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
 Object_t* OrderedSequence_2_Sort_m13799_gshared (OrderedSequence_2_t3230 * __this, Object_t* ___source, MethodInfo* method);
#define OrderedSequence_2_Sort_m13799(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m13799_gshared((OrderedSequence_2_t3230 *)__this, (Object_t*)___source, method)
