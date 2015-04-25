#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1<System.Int32>
struct ImmutableList_1_t158;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Int32>
struct Node_t4697;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4389;
// System.Collections.Immutable.IImmutableList`1<System.Int32>
struct IImmutableList_1_t4698;
// System.Collections.Immutable.ImmutableList`1/Builder<System.Int32>
struct Builder_t4699;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1061;
// System.Comparison`1<System.Int32>
struct Comparison_1_t4702;
// System.Action`1<System.Int32>
struct Action_1_t4703;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4704;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_90.h"

// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::.ctor()
 void ImmutableList_1__ctor_m16055 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::.ctor(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void ImmutableList_1__ctor_m16056 (ImmutableList_1_t158 * __this, Node_t4697 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Clear()
 ImmutableList_1_t158 * ImmutableList_1_Clear_m16057 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::BinarySearch(T)
 int32_t ImmutableList_1_BinarySearch_m16058 (ImmutableList_1_t158 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
 int32_t ImmutableList_1_BinarySearch_m16059 (ImmutableList_1_t158 * __this, int32_t ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t ImmutableList_1_BinarySearch_m16060 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, int32_t ___item, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::get_IsEmpty()
 bool ImmutableList_1_get_IsEmpty_m16061 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.Clear()
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Clear_m16062 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::get_Count()
 int32_t ImmutableList_1_get_Count_m16063 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableList_1_System_Collections_ICollection_get_SyncRoot_m16064 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableList_1_System_Collections_ICollection_get_IsSynchronized_m16065 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Int32>::get_Item(System.Int32)
 int32_t ImmutableList_1_get_Item_m16066 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IOrderedCollection<T>.get_Item(System.Int32)
 int32_t ImmutableList_1_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m16067 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Builder<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::ToBuilder()
 Builder_t4699 * ImmutableList_1_ToBuilder_m16068 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Add(T)
 ImmutableList_1_t158 * ImmutableList_1_Add_m16069 (ImmutableList_1_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_AddRange_m16070 (ImmutableList_1_t158 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Insert(System.Int32,T)
 ImmutableList_1_t158 * ImmutableList_1_Insert_m16071 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_InsertRange_m16072 (ImmutableList_1_t158 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Remove(T)
 ImmutableList_1_t158 * ImmutableList_1_Remove_m16073 (ImmutableList_1_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_Remove_m16074 (ImmutableList_1_t158 * __this, int32_t ___value, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
 ImmutableList_1_t158 * ImmutableList_1_RemoveRange_m16075 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_RemoveRange_m16076 (ImmutableList_1_t158 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_RemoveRange_m16077 (ImmutableList_1_t158 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::RemoveAt(System.Int32)
 ImmutableList_1_t158 * ImmutableList_1_RemoveAt_m16078 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_RemoveAll_m16079 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::SetItem(System.Int32,T)
 ImmutableList_1_t158 * ImmutableList_1_SetItem_m16080 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Replace(T,T)
 ImmutableList_1_t158 * ImmutableList_1_Replace_m16081 (ImmutableList_1_t158 * __this, int32_t ___oldValue, int32_t ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_Replace_m16082 (ImmutableList_1_t158 * __this, int32_t ___oldValue, int32_t ___newValue, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Reverse()
 ImmutableList_1_t158 * ImmutableList_1_Reverse_m16083 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Reverse(System.Int32,System.Int32)
 ImmutableList_1_t158 * ImmutableList_1_Reverse_m16084 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Sort()
 ImmutableList_1_t158 * ImmutableList_1_Sort_m16085 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Sort(System.Comparison`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_Sort_m16086 (ImmutableList_1_t158 * __this, Comparison_1_t4702 * ___comparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_Sort_m16087 (ImmutableList_1_t158 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_Sort_m16088 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::ForEach(System.Action`1<T>)
 void ImmutableList_1_ForEach_m16089 (ImmutableList_1_t158 * __this, Action_1_t4703 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::CopyTo(T[])
 void ImmutableList_1_CopyTo_m16090 (ImmutableList_1_t158 * __this, Int32U5BU5D_t156* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::CopyTo(T[],System.Int32)
 void ImmutableList_1_CopyTo_m16091 (ImmutableList_1_t158 * __this, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void ImmutableList_1_CopyTo_m16092 (ImmutableList_1_t158 * __this, int32_t ___index, Int32U5BU5D_t156* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::GetRange(System.Int32,System.Int32)
 ImmutableList_1_t158 * ImmutableList_1_GetRange_m16093 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::Exists(System.Predicate`1<T>)
 bool ImmutableList_1_Exists_m16094 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Int32>::Find(System.Predicate`1<T>)
 int32_t ImmutableList_1_Find_m16095 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_FindAll_m16096 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindIndex(System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m16097 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m16098 (ImmutableList_1_t158 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindIndex_m16099 (ImmutableList_1_t158 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Int32>::FindLast(System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLast_m16100 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindLastIndex(System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m16101 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m16102 (ImmutableList_1_t158 * __this, int32_t ___startIndex, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t ImmutableList_1_FindLastIndex_m16103 (ImmutableList_1_t158 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableList_1_IndexOf_m16104 (ImmutableList_1_t158 * __this, int32_t ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableList_1_LastIndexOf_m16105 (ImmutableList_1_t158 * __this, int32_t ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::TrueForAll(System.Predicate`1<T>)
 bool ImmutableList_1_TrueForAll_m16106 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::Contains(T)
 bool ImmutableList_1_Contains_m16107 (ImmutableList_1_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::IndexOf(T)
 int32_t ImmutableList_1_IndexOf_m16108 (ImmutableList_1_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.Add(T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Add_m16109 (ImmutableList_1_t158 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_AddRange_m16110 (ImmutableList_1_t158 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.Insert(System.Int32,T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Insert_m16111 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_InsertRange_m16112 (ImmutableList_1_t158 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Remove_m16113 (ImmutableList_1_t158 * __this, int32_t ___value, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.RemoveAll(System.Predicate`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAll_m16114 (ImmutableList_1_t158 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m16115 (ImmutableList_1_t158 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Int32,System.Int32)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m16116 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.RemoveAt(System.Int32)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAt_m16117 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.SetItem(System.Int32,T)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_SetItem_m16118 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Immutable.IImmutableList<T>.Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableList_1_System_Collections_Immutable_IImmutableListU3CTU3E_Replace_m16119 (ImmutableList_1_t158 * __this, int32_t ___oldValue, int32_t ___newValue, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16120 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableList_1_System_Collections_IEnumerable_GetEnumerator_m16121 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_Insert_m16122 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m16123 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 int32_t ImmutableList_1_System_Collections_Generic_IListU3CTU3E_get_Item_m16124 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ImmutableList_1_System_Collections_Generic_IListU3CTU3E_set_Item_m16125 (ImmutableList_1_t158 * __this, int32_t ___index, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
 void ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16126 (ImmutableList_1_t158 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Clear()
 void ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m16127 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16128 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ImmutableList_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m16129 (ImmutableList_1_t158 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableList_1_System_Collections_ICollection_CopyTo_m16130 (ImmutableList_1_t158 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.Add(System.Object)
 int32_t ImmutableList_1_System_Collections_IList_Add_m16131 (ImmutableList_1_t158 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.RemoveAt(System.Int32)
 void ImmutableList_1_System_Collections_IList_RemoveAt_m16132 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.Clear()
 void ImmutableList_1_System_Collections_IList_Clear_m16133 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.Contains(System.Object)
 bool ImmutableList_1_System_Collections_IList_Contains_m16134 (ImmutableList_1_t158 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
 int32_t ImmutableList_1_System_Collections_IList_IndexOf_m16135 (ImmutableList_1_t158 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ImmutableList_1_System_Collections_IList_Insert_m16136 (ImmutableList_1_t158 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
 bool ImmutableList_1_System_Collections_IList_get_IsFixedSize_m16137 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
 bool ImmutableList_1_System_Collections_IList_get_IsReadOnly_m16138 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.Remove(System.Object)
 void ImmutableList_1_System_Collections_IList_Remove_m16139 (ImmutableList_1_t158 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ImmutableList_1_System_Collections_IList_get_Item_m16140 (ImmutableList_1_t158 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ImmutableList_1_System_Collections_IList_set_Item_m16141 (ImmutableList_1_t158 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::GetEnumerator()
 Enumerator_t4705  ImmutableList_1_GetEnumerator_m16142 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::get_Root()
 Node_t4697 * ImmutableList_1_get_Root_m16143 (ImmutableList_1_t158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::WrapNode(System.Collections.Immutable.ImmutableList`1/Node<T>)
 ImmutableList_1_t158 * ImmutableList_1_WrapNode_m16144 (Object_t * __this/* static, unused */, Node_t4697 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableList`1<System.Int32>::TryCastToImmutableList(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableList`1<T>&)
 bool ImmutableList_1_TryCastToImmutableList_m16145 (Object_t * __this/* static, unused */, Object_t* ___sequence, ImmutableList_1_t158 ** ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::Wrap(System.Collections.Immutable.ImmutableList`1/Node<T>)
 ImmutableList_1_t158 * ImmutableList_1_Wrap_m16146 (ImmutableList_1_t158 * __this, Node_t4697 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1<System.Int32>::FillFromEmpty(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t158 * ImmutableList_1_FillFromEmpty_m16147 (ImmutableList_1_t158 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableList`1<System.Int32>::.cctor()
 void ImmutableList_1__cctor_m16148 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
