#pragma once

// System.Linq.SortSequenceContext`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct SortSequenceContext_2_t4263;
// System.Func`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct Func_2_t4250;
// System.Collections.Generic.IComparer`1<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct IComparer_1_t4255;
// System.Linq.SortContext`1<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>
struct SortContext_1_t4260;
// Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>[]
struct ImmutableTuple_2U5BU5D_t4249;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
 void SortSequenceContext_2__ctor_m20672 (SortSequenceContext_2_t4263 * __this, Func_2_t4250 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4260 * ___child_context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.SortSequenceContext`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::Initialize(TElement[])
 void SortSequenceContext_2_Initialize_m20673 (SortSequenceContext_2_t4263 * __this, ImmutableTuple_2U5BU5D_t4249* ___elements, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.SortSequenceContext`2<Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>,Wooga.Lambda.Data.ImmutableTuple`2<System.Object,System.Object>>::Compare(System.Int32,System.Int32)
 int32_t SortSequenceContext_2_Compare_m20674 (SortSequenceContext_2_t4263 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method) IL2CPP_METHOD_ATTR;
