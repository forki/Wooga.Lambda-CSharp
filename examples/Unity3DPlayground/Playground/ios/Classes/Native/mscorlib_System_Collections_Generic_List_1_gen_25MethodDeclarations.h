#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t2634;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2632;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>
struct IEnumerable_1_t6256;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t6257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>
struct ICollection_1_t6258;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
struct ReadOnlyCollection_1_t6259;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t6255;
// System.Predicate`1<UnityEngine.Events.PersistentCall>
struct Predicate_1_t6260;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>
struct IComparer_1_t6261;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t6262;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m6308(__this, method) (void)List_1__ctor_m15061_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27646(__this, ___collection, method) (void)List_1__ctor_m15063_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m27647(__this, ___capacity, method) (void)List_1__ctor_m15065_gshared((List_1_t400 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m27648(__this/* static, unused */, method) (void)List_1__cctor_m15067_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27649(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15069_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27650(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15071_gshared((List_1_t400 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27651(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15073_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27652(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15075_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27653(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15077_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27654(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15079_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27655(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15081_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27656(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15083_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27657(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15085_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27658(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15087_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27659(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15089_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27660(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15091_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27661(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15093_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27662(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15095_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27663(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15097_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m27664(__this, ___item, method) (void)List_1_Add_m15098_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27665(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15100_gshared((List_1_t400 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27666(__this, ___collection, method) (void)List_1_AddCollection_m15102_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27667(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15104_gshared((List_1_t400 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27668(__this, ___collection, method) (void)List_1_AddRange_m15106_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
#define List_1_AsReadOnly_m27669(__this, method) (ReadOnlyCollection_1_t6259 *)List_1_AsReadOnly_m15108_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m27670(__this, method) (void)List_1_Clear_m15110_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m27671(__this, ___item, method) (bool)List_1_Contains_m15112_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27672(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15114_gshared((List_1_t400 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m27673(__this, ___match, method) (PersistentCall_t2632 *)List_1_Find_m15116_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27674(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15118_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27675(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15120_gshared((List_1_t400 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
 Enumerator_t2742  List_1_GetEnumerator_m6309 (List_1_t2634 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m27676(__this, ___item, method) (int32_t)List_1_IndexOf_m15123_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27677(__this, ___start, ___delta, method) (void)List_1_Shift_m15125_gshared((List_1_t400 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27678(__this, ___index, method) (void)List_1_CheckIndex_m15127_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m27679(__this, ___index, ___item, method) (void)List_1_Insert_m15129_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27680(__this, ___collection, method) (void)List_1_CheckCollection_m15131_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m27681(__this, ___item, method) (bool)List_1_Remove_m15133_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27682(__this, ___match, method) (int32_t)List_1_RemoveAll_m15135_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27683(__this, ___index, method) (void)List_1_RemoveAt_m15137_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
#define List_1_Reverse_m27684(__this, method) (void)List_1_Reverse_m15139_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
#define List_1_Sort_m27685(__this, method) (void)List_1_Sort_m15141_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27686(__this, ___comparer, method) (void)List_1_Sort_m15143_gshared((List_1_t400 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27687(__this, ___comparison, method) (void)List_1_Sort_m15145_gshared((List_1_t400 *)__this, (Comparison_1_t4556 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m27688(__this, method) (PersistentCallU5BU5D_t6255*)List_1_ToArray_m15146_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
#define List_1_TrimExcess_m27689(__this, method) (void)List_1_TrimExcess_m15148_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m27690(__this, method) (int32_t)List_1_get_Capacity_m15150_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27691(__this, ___value, method) (void)List_1_set_Capacity_m15152_gshared((List_1_t400 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m27692(__this, method) (int32_t)List_1_get_Count_m15153_gshared((List_1_t400 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m27693(__this, ___index, method) (PersistentCall_t2632 *)List_1_get_Item_m15155_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m27694(__this, ___index, ___value, method) (void)List_1_set_Item_m15157_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
