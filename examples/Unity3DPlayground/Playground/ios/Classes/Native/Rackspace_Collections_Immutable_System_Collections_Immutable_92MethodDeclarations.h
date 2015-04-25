#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>
struct Builder_t4699;
// System.Collections.Immutable.ImmutableList`1/Node<System.Int32>
struct Node_t4697;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1<System.Int32>
struct ImmutableList_1_t158;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4704;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Action`1<System.Int32>
struct Action_1_t4703;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1061;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;
// System.Comparison`1<System.Int32>
struct Comparison_1_t4702;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4389;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_90.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::.ctor(System.Collections.Immutable.ImmutableList`1<T>)
 void Builder__ctor_m16234 (Builder_t4699 * __this, ImmutableList_1_t158 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::get_Count()
 int32_t Builder_get_Count_m16235 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16236 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::get_Version()
 int32_t Builder_get_Version_m16237 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::get_Root()
 Node_t4697 * Builder_get_Root_m16238 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::set_Root(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Builder_set_Root_m16239 (Builder_t4699 * __this, Node_t4697 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::get_Item(System.Int32)
 int32_t Builder_get_Item_m16240 (Builder_t4699 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::set_Item(System.Int32,T)
 void Builder_set_Item_m16241 (Builder_t4699 * __this, int32_t ___index, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.Immutable.IOrderedCollection<T>.get_Item(System.Int32)
 int32_t Builder_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m16242 (Builder_t4699 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::IndexOf(T)
 int32_t Builder_IndexOf_m16243 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Insert(System.Int32,T)
 void Builder_Insert_m16244 (Builder_t4699 * __this, int32_t ___index, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::RemoveAt(System.Int32)
 void Builder_RemoveAt_m16245 (Builder_t4699 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Add(T)
 void Builder_Add_m16246 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Clear()
 void Builder_Clear_m16247 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Contains(T)
 bool Builder_Contains_m16248 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Remove(T)
 bool Builder_Remove_m16249 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::GetEnumerator()
 Enumerator_t4705  Builder_GetEnumerator_m16250 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16251 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m16252 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::ForEach(System.Action`1<T>)
 void Builder_ForEach_m16253 (Builder_t4699 * __this, Action_1_t4703 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::CopyTo(T[])
 void Builder_CopyTo_m16254 (Builder_t4699 * __this, Int32U5BU5D_t156* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::CopyTo(T[],System.Int32)
 void Builder_CopyTo_m16255 (Builder_t4699 * __this, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Builder_CopyTo_m16256 (Builder_t4699 * __this, int32_t ___index, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::GetRange(System.Int32,System.Int32)
 ImmutableList_1_t158 * Builder_GetRange_m16257 (Builder_t4699 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Exists(System.Predicate`1<T>)
 bool Builder_Exists_m16258 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Find(System.Predicate`1<T>)
 int32_t Builder_Find_m16259 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t158 * Builder_FindAll_m16260 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindIndex(System.Predicate`1<T>)
 int32_t Builder_FindIndex_m16261 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m16262 (Builder_t4699 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m16263 (Builder_t4699 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindLast(System.Predicate`1<T>)
 int32_t Builder_FindLast_m16264 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindLastIndex(System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m16265 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m16266 (Builder_t4699 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m16267 (Builder_t4699 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::IndexOf(T,System.Int32)
 int32_t Builder_IndexOf_m16268 (Builder_t4699 * __this, int32_t ___item, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::IndexOf(T,System.Int32,System.Int32)
 int32_t Builder_IndexOf_m16269 (Builder_t4699 * __this, int32_t ___item, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_IndexOf_m16270 (Builder_t4699 * __this, int32_t ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::LastIndexOf(T)
 int32_t Builder_LastIndexOf_m16271 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::LastIndexOf(T,System.Int32)
 int32_t Builder_LastIndexOf_m16272 (Builder_t4699 * __this, int32_t ___item, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::LastIndexOf(T,System.Int32,System.Int32)
 int32_t Builder_LastIndexOf_m16273 (Builder_t4699 * __this, int32_t ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_LastIndexOf_m16274 (Builder_t4699 * __this, int32_t ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::TrueForAll(System.Predicate`1<T>)
 bool Builder_TrueForAll_m16275 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_AddRange_m16276 (Builder_t4699 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void Builder_InsertRange_m16277 (Builder_t4699 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::RemoveAll(System.Predicate`1<T>)
 int32_t Builder_RemoveAll_m16278 (Builder_t4699 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Reverse()
 void Builder_Reverse_m16279 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Reverse(System.Int32,System.Int32)
 void Builder_Reverse_m16280 (Builder_t4699 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Sort()
 void Builder_Sort_m16281 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Sort(System.Comparison`1<T>)
 void Builder_Sort_m16282 (Builder_t4699 * __this, Comparison_1_t4702 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m16283 (Builder_t4699 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m16284 (Builder_t4699 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::BinarySearch(T)
 int32_t Builder_BinarySearch_m16285 (Builder_t4699 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m16286 (Builder_t4699 * __this, int32_t ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m16287 (Builder_t4699 * __this, int32_t ___index, int32_t ___count, int32_t ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::ToImmutable()
 ImmutableList_1_t158 * Builder_ToImmutable_m16288 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.Add(System.Object)
 int32_t Builder_System_Collections_IList_Add_m16289 (Builder_t4699 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.Clear()
 void Builder_System_Collections_IList_Clear_m16290 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.Contains(System.Object)
 bool Builder_System_Collections_IList_Contains_m16291 (Builder_t4699 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.IndexOf(System.Object)
 int32_t Builder_System_Collections_IList_IndexOf_m16292 (Builder_t4699 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Builder_System_Collections_IList_Insert_m16293 (Builder_t4699 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.get_IsFixedSize()
 bool Builder_System_Collections_IList_get_IsFixedSize_m16294 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.get_IsReadOnly()
 bool Builder_System_Collections_IList_get_IsReadOnly_m16295 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.Remove(System.Object)
 void Builder_System_Collections_IList_Remove_m16296 (Builder_t4699 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Builder_System_Collections_IList_get_Item_m16297 (Builder_t4699 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Builder_System_Collections_IList_set_Item_m16298 (Builder_t4699 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Builder_System_Collections_ICollection_CopyTo_m16299 (Builder_t4699 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool Builder_System_Collections_ICollection_get_IsSynchronized_m16300 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Builder_System_Collections_ICollection_get_SyncRoot_m16301 (Builder_t4699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
