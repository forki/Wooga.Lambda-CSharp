#pragma once

// System.Linq.OrderedSequence`2<Wooga.Lambda.Network.HttpHeader,Wooga.Lambda.Network.HttpHeader>
struct OrderedSequence_2_t4328;
// System.Collections.Generic.IEnumerable`1<Wooga.Lambda.Network.HttpHeader>
struct IEnumerable_1_t4320;
// System.Func`2<Wooga.Lambda.Network.HttpHeader,Wooga.Lambda.Network.HttpHeader>
struct Func_2_t4319;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Network.HttpHeader>
struct IComparer_1_t4324;
// System.Linq.SortContext`1<Wooga.Lambda.Network.HttpHeader>
struct SortContext_1_t4329;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<Wooga.Lambda.Network.HttpHeader,Wooga.Lambda.Network.HttpHeader>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
 void OrderedSequence_2__ctor_m21141 (OrderedSequence_2_t4328 * __this, Object_t* ___source, Func_2_t4319 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Network.HttpHeader,Wooga.Lambda.Network.HttpHeader>::CreateContext(System.Linq.SortContext`1<TElement>)
 SortContext_1_t4329 * OrderedSequence_2_CreateContext_m21142 (OrderedSequence_2_t4328 * __this, SortContext_1_t4329 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<Wooga.Lambda.Network.HttpHeader,Wooga.Lambda.Network.HttpHeader>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
 Object_t* OrderedSequence_2_Sort_m21143 (OrderedSequence_2_t4328 * __this, Object_t* ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
