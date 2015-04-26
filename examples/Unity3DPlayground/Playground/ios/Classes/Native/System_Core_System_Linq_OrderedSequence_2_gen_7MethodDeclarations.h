#pragma once

// System.Linq.OrderedSequence`2<System.Byte,System.Byte>
struct OrderedSequence_2_t4298;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t4288;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_t4287;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t4292;
// System.Linq.SortContext`1<System.Byte>
struct SortContext_1_t4299;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
 void OrderedSequence_2__ctor_m20919 (OrderedSequence_2_t4298 * __this, Object_t* ___source, Func_2_t4287 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Byte,System.Byte>::CreateContext(System.Linq.SortContext`1<TElement>)
 SortContext_1_t4299 * OrderedSequence_2_CreateContext_m20920 (OrderedSequence_2_t4298 * __this, SortContext_1_t4299 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Byte,System.Byte>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
 Object_t* OrderedSequence_2_Sort_m20921 (OrderedSequence_2_t4298 * __this, Object_t* ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
