#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ImmutableList_1_t5649;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t5648;
// System.Collections.Immutable.IImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IImmutableList_1_t5666;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Builder_t5644;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t5633;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5646;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5647;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Action_1_t5665;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_141.h"

// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
 void ImmutableList_1__ctor_m23360 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void ImmutableList_1__ctor_m23361 (ImmutableList_1_t5649 * __this, Node_t5641 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
 ImmutableList_1_t5649 * ImmutableList_1_Clear_m23362 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(T)
 int32_t ImmutableList_1_BinarySearch_m23363 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
 int32_t ImmutableList_1_BinarySearch_m23364 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t ImmutableList_1_BinarySearch_m23365 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, KeyValuePair_2_t4473  ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsEmpty()
 bool ImmutableList_1_get_IsEmpty_m23366 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.Clear()
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Clear_m23367 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
 int32_t ImmutableList_1_get_Count_m23368 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableList_1_System_Collections_ICollection_get_SyncRoot_m23369 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableList_1_System_Collections_ICollection_get_IsSynchronized_m23370 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
 KeyValuePair_2_t4473  ImmutableList_1_get_Item_m23371 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IOrderedCollection<T>.get_Item(System.Int32)
 KeyValuePair_2_t4473  ImmutableList_1_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m23372 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Builder<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToBuilder()
 Builder_t5644 * ImmutableList_1_ToBuilder_m23373 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
 ImmutableList_1_t5649 * ImmutableList_1_Add_m23374 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_AddRange_m23375 (ImmutableList_1_t5649 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
 ImmutableList_1_t5649 * ImmutableList_1_Insert_m23376 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_InsertRange_m23377 (ImmutableList_1_t5649 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
 ImmutableList_1_t5649 * ImmutableList_1_Remove_m23378 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Remove_m23379 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
 ImmutableList_1_t5649 * ImmutableList_1_RemoveRange_m23380 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_RemoveRange_m23381 (ImmutableList_1_t5649 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_RemoveRange_m23382 (ImmutableList_1_t5649 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
 ImmutableList_1_t5649 * ImmutableList_1_RemoveAt_m23383 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_RemoveAll_m23384 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetItem(System.Int32,T)
 ImmutableList_1_t5649 * ImmutableList_1_SetItem_m23385 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Replace(T,T)
 ImmutableList_1_t5649 * ImmutableList_1_Replace_m23386 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___oldValue, KeyValuePair_2_t4473  ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Replace_m23387 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___oldValue, KeyValuePair_2_t4473  ___newValue, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
 ImmutableList_1_t5649 * ImmutableList_1_Reverse_m23388 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse(System.Int32,System.Int32)
 ImmutableList_1_t5649 * ImmutableList_1_Reverse_m23389 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
 ImmutableList_1_t5649 * ImmutableList_1_Sort_m23390 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Sort_m23391 (ImmutableList_1_t5649 * __this, Comparison_1_t5647 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Sort_m23392 (ImmutableList_1_t5649 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Sort_m23393 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ForEach(System.Action`1<T>)
 void ImmutableList_1_ForEach_m23394 (ImmutableList_1_t5649 * __this, Action_1_t5665 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[])
 void ImmutableList_1_CopyTo_m23395 (ImmutableList_1_t5649 * __this, KeyValuePair_2U5BU5D_t4466* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
 void ImmutableList_1_CopyTo_m23396 (ImmutableList_1_t5649 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void ImmutableList_1_CopyTo_m23397 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
 ImmutableList_1_t5649 * ImmutableList_1_GetRange_m23398 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Exists(System.Predicate`1<T>)
 bool ImmutableList_1_Exists_m23399 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t4473  ImmutableList_1_Find_m23400 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_FindAll_m23401 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m23402 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m23403 (ImmutableList_1_t5649 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m23404 (ImmutableList_1_t5649 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLast(System.Predicate`1<T>)
 KeyValuePair_2_t4473  ImmutableList_1_FindLast_m23405 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m23406 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m23407 (ImmutableList_1_t5649 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m23408 (ImmutableList_1_t5649 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableList_1_IndexOf_m23409 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableList_1_LastIndexOf_m23410 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrueForAll(System.Predicate`1<T>)
 bool ImmutableList_1_TrueForAll_m23411 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
 bool ImmutableList_1_Contains_m23412 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
 int32_t ImmutableList_1_IndexOf_m23413 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.Add(T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Add_m23414 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_AddRange_m23415 (ImmutableList_1_t5649 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.Insert(System.Int32,T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Insert_m23416 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_InsertRange_m23417 (ImmutableList_1_t5649 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Remove_m23418 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___value, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.RemoveAll(System.Predicate`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAll_m23419 (ImmutableList_1_t5649 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m23420 (ImmutableList_1_t5649 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Int32,System.Int32)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m23421 (ImmutableList_1_t5649 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.RemoveAt(System.Int32)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAt_m23422 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.SetItem(System.Int32,T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_SetItem_m23423 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IImmutableList<T>.Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Replace_m23424 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___oldValue, KeyValuePair_2_t4473  ___newValue, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23425 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableList_1_System_Collections_IEnumerable_GetEnumerator_m23426 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_Insert_m23427 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m23428 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 KeyValuePair_2_t4473  ImmutableList_1_System_Collections_Generic_IListU3CTU3E_get_Item_m23429 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_set_Item_m23430 (ImmutableList_1_t5649 * __this, int32_t ___index, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Add(T)
 void ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m23431 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Clear()
 void ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m23432 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23433 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m23434 (ImmutableList_1_t5649 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableList_1_System_Collections_ICollection_CopyTo_m23435 (ImmutableList_1_t5649 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
 int32_t ImmutableList_1_System_Collections_IList_Add_m23436 (ImmutableList_1_t5649 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.RemoveAt(System.Int32)
 void ImmutableList_1_System_Collections_IList_RemoveAt_m23437 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Clear()
 void ImmutableList_1_System_Collections_IList_Clear_m23438 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
 bool ImmutableList_1_System_Collections_IList_Contains_m23439 (ImmutableList_1_t5649 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
 int32_t ImmutableList_1_System_Collections_IList_IndexOf_m23440 (ImmutableList_1_t5649 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ImmutableList_1_System_Collections_IList_Insert_m23441 (ImmutableList_1_t5649 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
 bool ImmutableList_1_System_Collections_IList_get_IsFixedSize_m23442 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
 bool ImmutableList_1_System_Collections_IList_get_IsReadOnly_m23443 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
 void ImmutableList_1_System_Collections_IList_Remove_m23444 (ImmutableList_1_t5649 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ImmutableList_1_System_Collections_IList_get_Item_m23445 (ImmutableList_1_t5649 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ImmutableList_1_System_Collections_IList_set_Item_m23446 (ImmutableList_1_t5649 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
 Enumerator_t5650  ImmutableList_1_GetEnumerator_m23447 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Root()
 Node_t5641 * ImmutableList_1_get_Root_m23448 (ImmutableList_1_t5649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::WrapNode(System.Collections.Immutable.ImmutableList`1/Node<T>)
 ImmutableList_1_t5649 * ImmutableList_1_WrapNode_m23449 (Object_t * __this/* static, unused */, Node_t5641 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryCastToImmutableList(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableList`1<T>&)
 bool ImmutableList_1_TryCastToImmutableList_m23450 (Object_t * __this/* static, unused */, Object_t* ___sequence, ImmutableList_1_t5649 ** ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Wrap(System.Collections.Immutable.ImmutableList`1/Node<T>)
 ImmutableList_1_t5649 * ImmutableList_1_Wrap_m23451 (ImmutableList_1_t5649 * __this, Node_t5641 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FillFromEmpty(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t5649 * ImmutableList_1_FillFromEmpty_m23452 (ImmutableList_1_t5649 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
 void ImmutableList_1__cctor_m23453 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
