#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Int64[]
struct Int64U5BU5D_t3401;
// System.Collections.IComparer
struct IComparer_t925;
// System.Array/Swapper
struct Swapper_t3400;
// System.Double[]
struct DoubleU5BU5D_t3402;
// System.Char[]
struct CharU5BU5D_t311;

// System.Void System.Array::.ctor()
 void Array__ctor_m9592 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
 Object_t * Array_System_Collections_IList_get_Item_m9593 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Array_System_Collections_IList_set_Item_m9594 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
 int32_t Array_System_Collections_IList_Add_m9595 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
 void Array_System_Collections_IList_Clear_m9596 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
 bool Array_System_Collections_IList_Contains_m9597 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
 int32_t Array_System_Collections_IList_IndexOf_m9598 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
 void Array_System_Collections_IList_Insert_m9599 (Array_t * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
 void Array_System_Collections_IList_Remove_m9600 (Array_t * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
 void Array_System_Collections_IList_RemoveAt_m9601 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
 int32_t Array_System_Collections_ICollection_get_Count_m9602 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
 int32_t Array_InternalArray__ICollection_get_Count_m9603 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
 bool Array_InternalArray__ICollection_get_IsReadOnly_m9604 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
 void Array_InternalArray__ICollection_Clear_m9605 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
 void Array_InternalArray__RemoveAt_m9606 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
 int32_t Array_get_Length_m2933 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
 int64_t Array_get_LongLength_m9607 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
 int32_t Array_get_Rank_m7664 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
 int32_t Array_GetRank_m9608 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
 int32_t Array_GetLength_m9609 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
 int64_t Array_GetLongLength_m9610 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
 int32_t Array_GetLowerBound_m9611 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
 Object_t * Array_GetValue_m9612 (Array_t * __this, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
 void Array_SetValue_m9613 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t156* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
 Object_t * Array_GetValueImpl_m9614 (Array_t * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
 void Array_SetValueImpl_m9615 (Array_t * __this, Object_t * ___value, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 bool Array_FastCopy_m9616 (Object_t * __this/* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstanceImpl_m9617 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t156* ___lengths, Int32U5BU5D_t156* ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
 bool Array_get_IsSynchronized_m9618 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
 Object_t * Array_get_SyncRoot_m9619 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
 bool Array_get_IsFixedSize_m9620 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
 bool Array_get_IsReadOnly_m9621 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
 Object_t * Array_GetEnumerator_m7883 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
 int32_t Array_GetUpperBound_m9622 (Array_t * __this, int32_t ___dimension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
 Object_t * Array_GetValue_m2935 (Array_t * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
 Object_t * Array_GetValue_m9623 (Array_t * __this, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
 Object_t * Array_GetValue_m9624 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
 Object_t * Array_GetValue_m9625 (Array_t * __this, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
 Object_t * Array_GetValue_m9626 (Array_t * __this, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
 Object_t * Array_GetValue_m9627 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
 void Array_SetValue_m9628 (Array_t * __this, Object_t * ___value, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
 void Array_SetValue_m9629 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
 void Array_SetValue_m9630 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
 void Array_SetValue_m7661 (Array_t * __this, Object_t * ___value, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
 void Array_SetValue_m9631 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
 void Array_SetValue_m9632 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
 Array_t * Array_CreateInstance_m9633 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m9634 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
 Array_t * Array_CreateInstance_m9635 (Object_t * __this/* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
 Array_t * Array_CreateInstance_m9636 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t156* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
 Array_t * Array_CreateInstance_m9637 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int32U5BU5D_t156* ___lengths, Int32U5BU5D_t156* ___lowerBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
 Int32U5BU5D_t156* Array_GetIntArray_m9638 (Object_t * __this/* static, unused */, Int64U5BU5D_t3401* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
 Array_t * Array_CreateInstance_m9639 (Object_t * __this/* static, unused */, Type_t * ___elementType, Int64U5BU5D_t3401* ___lengths, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
 Object_t * Array_GetValue_m9640 (Array_t * __this, Int64U5BU5D_t3401* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
 void Array_SetValue_m9641 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t3401* ___indices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
 int32_t Array_BinarySearch_m9642 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m9643 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
 int32_t Array_BinarySearch_m9644 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_BinarySearch_m9645 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
 int32_t Array_DoBinarySearch_m9646 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
 void Array_Clear_m8811 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
 void Array_ClearInternal_m9647 (Object_t * __this/* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
 Object_t * Array_Clone_m7693 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
 void Array_Copy_m9648 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_Copy_m9649 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
 void Array_Copy_m9650 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
 void Array_Copy_m9651 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
 int32_t Array_IndexOf_m9652 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_IndexOf_m9653 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_IndexOf_m9654 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
 void Array_Initialize_m9655 (Array_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
 int32_t Array_LastIndexOf_m9656 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
 int32_t Array_LastIndexOf_m9657 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
 int32_t Array_LastIndexOf_m9658 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
 Swapper_t3400 * Array_get_swapper_m9659 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
 void Array_Reverse_m8805 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
 void Array_Reverse_m8869 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
 void Array_Sort_m9660 (Object_t * __this/* static, unused */, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
 void Array_Sort_m9661 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
 void Array_Sort_m9662 (Object_t * __this/* static, unused */, Array_t * ___array, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
 void Array_Sort_m9663 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
 void Array_Sort_m9664 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
 void Array_Sort_m9665 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m9666 (Object_t * __this/* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_Sort_m9667 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
 void Array_int_swapper_m9668 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
 void Array_obj_swapper_m9669 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
 void Array_slow_swapper_m9670 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
 void Array_double_swapper_m9671 (Array_t * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
 int32_t Array_new_gap_m9672 (Object_t * __this/* static, unused */, int32_t ___gap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m9673 (Object_t * __this/* static, unused */, DoubleU5BU5D_t3402* ___array, int32_t ___start, int32_t ___size, Swapper_t3400 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m9674 (Object_t * __this/* static, unused */, Int32U5BU5D_t156* ___array, int32_t ___start, int32_t ___size, Swapper_t3400 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
 void Array_combsort_m9675 (Object_t * __this/* static, unused */, CharU5BU5D_t311* ___array, int32_t ___start, int32_t ___size, Swapper_t3400 * ___swap_items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
 void Array_qsort_m9676 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
 void Array_swap_m9677 (Object_t * __this/* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
 int32_t Array_compare_m9678 (Object_t * __this/* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
 void Array_CopyTo_m7882 (Array_t * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
 void Array_CopyTo_m9679 (Array_t * __this, Array_t * ___array, int64_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
 void Array_ConstrainedCopy_m9680 (Object_t * __this/* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
