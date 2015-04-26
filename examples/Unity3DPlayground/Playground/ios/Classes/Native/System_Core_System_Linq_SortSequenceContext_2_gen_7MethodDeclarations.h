#pragma once

// System.Linq.SortSequenceContext`2<System.Byte,System.Byte>
struct SortSequenceContext_2_t4302;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_t4287;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t4292;
// System.Linq.SortContext`1<System.Byte>
struct SortContext_1_t4299;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Byte,System.Byte>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
 void SortSequenceContext_2__ctor_m20932 (SortSequenceContext_2_t4302 * __this, Func_2_t4287 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4299 * ___child_context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.SortSequenceContext`2<System.Byte,System.Byte>::Initialize(TElement[])
 void SortSequenceContext_2_Initialize_m20933 (SortSequenceContext_2_t4302 * __this, ByteU5BU5D_t1071* ___elements, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Linq.SortSequenceContext`2<System.Byte,System.Byte>::Compare(System.Int32,System.Int32)
 int32_t SortSequenceContext_2_Compare_m20934 (SortSequenceContext_2_t4302 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method) IL2CPP_METHOD_ATTR;
