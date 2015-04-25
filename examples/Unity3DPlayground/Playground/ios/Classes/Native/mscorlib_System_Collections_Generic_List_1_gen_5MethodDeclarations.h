#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t400;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t4470;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4558;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Comparison`1<System.Object>
struct Comparison_1_t4556;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
 void List_1__ctor_m15061_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1__ctor_m15061(__this, method) (void)List_1__ctor_m15061_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m15063_gshared (List_1_t400 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m15063(__this, ___collection, method) (void)List_1__ctor_m15063_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
 void List_1__ctor_m15065_gshared (List_1_t400 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m15065(__this, ___capacity, method) (void)List_1__ctor_m15065_gshared((List_1_t400 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
 void List_1__cctor_m15067_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m15067(__this/* static, unused */, method) (void)List_1__cctor_m15067_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15069_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15069(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15069_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m15071_gshared (List_1_t400 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15071(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15071_gshared((List_1_t400 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15073_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15073(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15073_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m15075_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15075(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15075_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m15077_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15077(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15077_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m15079_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15079(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15079_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m15081_gshared (List_1_t400 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15081(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15081_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m15083_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15083(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15083_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15085_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15085(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15085_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m15087_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15087(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15087_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15089_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15089(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15089_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m15091_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15091(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15091_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m15093_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15093(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15093_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m15095_gshared (List_1_t400 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15095(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15095_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m15097_gshared (List_1_t400 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15097(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15097_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
 void List_1_Add_m15098_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m15098(__this, ___item, method) (void)List_1_Add_m15098_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m15100_gshared (List_1_t400 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15100(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15100_gshared((List_1_t400 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m15102_gshared (List_1_t400 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15102(__this, ___collection, method) (void)List_1_AddCollection_m15102_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m15104_gshared (List_1_t400 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15104(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15104_gshared((List_1_t400 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m15106_gshared (List_1_t400 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15106(__this, ___collection, method) (void)List_1_AddRange_m15106_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
 ReadOnlyCollection_1_t4558 * List_1_AsReadOnly_m15108_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15108(__this, method) (ReadOnlyCollection_1_t4558 *)List_1_AsReadOnly_m15108_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
 void List_1_Clear_m15110_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_Clear_m15110(__this, method) (void)List_1_Clear_m15110_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m15112_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m15112(__this, ___item, method) (bool)List_1_Contains_m15112_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m15114_gshared (List_1_t400 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15114(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15114_gshared((List_1_t400 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
 Object_t * List_1_Find_m15116_gshared (List_1_t400 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define List_1_Find_m15116(__this, ___match, method) (Object_t *)List_1_Find_m15116_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m15118_gshared (Object_t * __this/* static, unused */, Predicate_1_t4554 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15118(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15118_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m15120_gshared (List_1_t400 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4554 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15120(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15120_gshared((List_1_t400 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
 Enumerator_t4560  List_1_GetEnumerator_m15158 (List_1_t400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m15123_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m15123(__this, ___item, method) (int32_t)List_1_IndexOf_m15123_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m15125_gshared (List_1_t400 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15125(__this, ___start, ___delta, method) (void)List_1_Shift_m15125_gshared((List_1_t400 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m15127_gshared (List_1_t400 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15127(__this, ___index, method) (void)List_1_CheckIndex_m15127_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
 void List_1_Insert_m15129_gshared (List_1_t400 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m15129(__this, ___index, ___item, method) (void)List_1_Insert_m15129_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m15131_gshared (List_1_t400 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15131(__this, ___collection, method) (void)List_1_CheckCollection_m15131_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
 bool List_1_Remove_m15133_gshared (List_1_t400 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m15133(__this, ___item, method) (bool)List_1_Remove_m15133_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m15135_gshared (List_1_t400 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15135(__this, ___match, method) (int32_t)List_1_RemoveAll_m15135_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m15137_gshared (List_1_t400 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15137(__this, ___index, method) (void)List_1_RemoveAt_m15137_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
 void List_1_Reverse_m15139_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_Reverse_m15139(__this, method) (void)List_1_Reverse_m15139_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
 void List_1_Sort_m15141_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_Sort_m15141(__this, method) (void)List_1_Sort_m15141_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
 void List_1_Sort_m15143_gshared (List_1_t400 * __this, Object_t* ___comparer, MethodInfo* method);
#define List_1_Sort_m15143(__this, ___comparer, method) (void)List_1_Sort_m15143_gshared((List_1_t400 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m15145_gshared (List_1_t400 * __this, Comparison_1_t4556 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15145(__this, ___comparison, method) (void)List_1_Sort_m15145_gshared((List_1_t400 *)__this, (Comparison_1_t4556 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
 ObjectU5BU5D_t126* List_1_ToArray_m15146_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_ToArray_m15146(__this, method) (ObjectU5BU5D_t126*)List_1_ToArray_m15146_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
 void List_1_TrimExcess_m15148_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15148(__this, method) (void)List_1_TrimExcess_m15148_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
 int32_t List_1_get_Capacity_m15150_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_get_Capacity_m15150(__this, method) (int32_t)List_1_get_Capacity_m15150_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m15152_gshared (List_1_t400 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m15152(__this, ___value, method) (void)List_1_set_Capacity_m15152_gshared((List_1_t400 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m15153_gshared (List_1_t400 * __this, MethodInfo* method);
#define List_1_get_Count_m15153(__this, method) (int32_t)List_1_get_Count_m15153_gshared((List_1_t400 *)__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m15155_gshared (List_1_t400 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m15155(__this, ___index, method) (Object_t *)List_1_get_Item_m15155_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m15157_gshared (List_1_t400 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m15157(__this, ___index, ___value, method) (void)List_1_set_Item_m15157_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
