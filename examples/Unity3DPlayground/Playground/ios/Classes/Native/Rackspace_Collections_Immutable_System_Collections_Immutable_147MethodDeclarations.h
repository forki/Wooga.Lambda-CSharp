#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Builder_t5644;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ImmutableList_1_t5649;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Action_1_t5665;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t5646;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t5633;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t5647;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t5648;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_141.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Immutable.ImmutableList`1<T>)
 void Builder__ctor_m23288 (Builder_t5644 * __this, ImmutableList_1_t5649 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
 int32_t Builder_get_Count_m23289 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23290 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Version()
 int32_t Builder_get_Version_m23291 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Root()
 Node_t5641 * Builder_get_Root_m23292 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Root(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Builder_set_Root_m23293 (Builder_t5644 * __this, Node_t5641 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
 KeyValuePair_2_t4473  Builder_get_Item_m23294 (Builder_t5644 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
 void Builder_set_Item_m23295 (Builder_t5644 * __this, int32_t ___index, KeyValuePair_2_t4473  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Immutable.IOrderedCollection<T>.get_Item(System.Int32)
 KeyValuePair_2_t4473  Builder_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m23296 (Builder_t5644 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
 int32_t Builder_IndexOf_m23297 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
 void Builder_Insert_m23298 (Builder_t5644 * __this, int32_t ___index, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
 void Builder_RemoveAt_m23299 (Builder_t5644 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
 void Builder_Add_m23300 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
 void Builder_Clear_m23301 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
 bool Builder_Contains_m23302 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
 bool Builder_Remove_m23303 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
 Enumerator_t5650  Builder_GetEnumerator_m23304 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23305 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m23306 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ForEach(System.Action`1<T>)
 void Builder_ForEach_m23307 (Builder_t5644 * __this, Action_1_t5665 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[])
 void Builder_CopyTo_m23308 (Builder_t5644 * __this, KeyValuePair_2U5BU5D_t4466* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
 void Builder_CopyTo_m23309 (Builder_t5644 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Builder_CopyTo_m23310 (Builder_t5644 * __this, int32_t ___index, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
 ImmutableList_1_t5649 * Builder_GetRange_m23311 (Builder_t5644 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Exists(System.Predicate`1<T>)
 bool Builder_Exists_m23312 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
 KeyValuePair_2_t4473  Builder_Find_m23313 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t5649 * Builder_FindAll_m23314 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Predicate`1<T>)
 int32_t Builder_FindIndex_m23315 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m23316 (Builder_t5644 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m23317 (Builder_t5644 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLast(System.Predicate`1<T>)
 KeyValuePair_2_t4473  Builder_FindLast_m23318 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m23319 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m23320 (Builder_t5644 * __this, int32_t ___startIndex, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m23321 (Builder_t5644 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Int32)
 int32_t Builder_IndexOf_m23322 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Int32,System.Int32)
 int32_t Builder_IndexOf_m23323 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_IndexOf_m23324 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T)
 int32_t Builder_LastIndexOf_m23325 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T,System.Int32)
 int32_t Builder_LastIndexOf_m23326 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T,System.Int32,System.Int32)
 int32_t Builder_LastIndexOf_m23327 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_LastIndexOf_m23328 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrueForAll(System.Predicate`1<T>)
 bool Builder_TrueForAll_m23329 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_AddRange_m23330 (Builder_t5644 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void Builder_InsertRange_m23331 (Builder_t5644 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
 int32_t Builder_RemoveAll_m23332 (Builder_t5644 * __this, Predicate_1_t5646 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
 void Builder_Reverse_m23333 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse(System.Int32,System.Int32)
 void Builder_Reverse_m23334 (Builder_t5644 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
 void Builder_Sort_m23335 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
 void Builder_Sort_m23336 (Builder_t5644 * __this, Comparison_1_t5647 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m23337 (Builder_t5644 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m23338 (Builder_t5644 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(T)
 int32_t Builder_BinarySearch_m23339 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m23340 (Builder_t5644 * __this, KeyValuePair_2_t4473  ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m23341 (Builder_t5644 * __this, int32_t ___index, int32_t ___count, KeyValuePair_2_t4473  ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToImmutable()
 ImmutableList_1_t5649 * Builder_ToImmutable_m23342 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
 int32_t Builder_System_Collections_IList_Add_m23343 (Builder_t5644 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Clear()
 void Builder_System_Collections_IList_Clear_m23344 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
 bool Builder_System_Collections_IList_Contains_m23345 (Builder_t5644 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
 int32_t Builder_System_Collections_IList_IndexOf_m23346 (Builder_t5644 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Builder_System_Collections_IList_Insert_m23347 (Builder_t5644 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
 bool Builder_System_Collections_IList_get_IsFixedSize_m23348 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
 bool Builder_System_Collections_IList_get_IsReadOnly_m23349 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
 void Builder_System_Collections_IList_Remove_m23350 (Builder_t5644 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Builder_System_Collections_IList_get_Item_m23351 (Builder_t5644 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Builder_System_Collections_IList_set_Item_m23352 (Builder_t5644 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Builder_System_Collections_ICollection_CopyTo_m23353 (Builder_t5644 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
 bool Builder_System_Collections_ICollection_get_IsSynchronized_m23354 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Builder_System_Collections_ICollection_get_SyncRoot_m23355 (Builder_t5644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
