#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t167;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t168;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t4782;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t4783;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t4784;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t4785;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t4781;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t4786;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t4787;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t4788;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
#define List_1__ctor_m1755(__this, method) (void)List_1__ctor_m15061_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16756(__this, ___collection, method) (void)List_1__ctor_m15063_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m16757(__this, ___capacity, method) (void)List_1__ctor_m15065_gshared((List_1_t400 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m16758(__this/* static, unused */, method) (void)List_1__cctor_m15067_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16759(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15069_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16760(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m15071_gshared((List_1_t400 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16761(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m15073_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16762(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m15075_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16763(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m15077_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16764(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m15079_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16765(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m15081_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16766(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m15083_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16767(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15085_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16768(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m15087_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16769(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m15089_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16770(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m15091_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16771(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m15093_gshared((List_1_t400 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16772(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m15095_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16773(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m15097_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m16774(__this, ___item, method) (void)List_1_Add_m15098_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16775(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m15100_gshared((List_1_t400 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16776(__this, ___collection, method) (void)List_1_AddCollection_m15102_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16777(__this, ___enumerable, method) (void)List_1_AddEnumerable_m15104_gshared((List_1_t400 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16778(__this, ___collection, method) (void)List_1_AddRange_m15106_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m16779(__this, method) (ReadOnlyCollection_1_t4785 *)List_1_AsReadOnly_m15108_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m16780(__this, method) (void)List_1_Clear_m15110_gshared((List_1_t400 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m16781(__this, ___item, method) (bool)List_1_Contains_m15112_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16782(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m15114_gshared((List_1_t400 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m16783(__this, ___match, method) (BaseInputModule_t168 *)List_1_Find_m15116_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16784(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m15118_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16785(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m15120_gshared((List_1_t400 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
 Enumerator_t4789  List_1_GetEnumerator_m16786 (List_1_t167 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m16787(__this, ___item, method) (int32_t)List_1_IndexOf_m15123_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16788(__this, ___start, ___delta, method) (void)List_1_Shift_m15125_gshared((List_1_t400 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16789(__this, ___index, method) (void)List_1_CheckIndex_m15127_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m16790(__this, ___index, ___item, method) (void)List_1_Insert_m15129_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16791(__this, ___collection, method) (void)List_1_CheckCollection_m15131_gshared((List_1_t400 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m16792(__this, ___item, method) (bool)List_1_Remove_m15133_gshared((List_1_t400 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16793(__this, ___match, method) (int32_t)List_1_RemoveAll_m15135_gshared((List_1_t400 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m1760(__this, ___index, method) (void)List_1_RemoveAt_m15137_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m16794(__this, method) (void)List_1_Reverse_m15139_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m16795(__this, method) (void)List_1_Sort_m15141_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m16796(__this, ___comparer, method) (void)List_1_Sort_m15143_gshared((List_1_t400 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16797(__this, ___comparison, method) (void)List_1_Sort_m15145_gshared((List_1_t400 *)__this, (Comparison_1_t4556 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m16798(__this, method) (BaseInputModuleU5BU5D_t4781*)List_1_ToArray_m15146_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m16799(__this, method) (void)List_1_TrimExcess_m15148_gshared((List_1_t400 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m16800(__this, method) (int32_t)List_1_get_Capacity_m15150_gshared((List_1_t400 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16801(__this, ___value, method) (void)List_1_set_Capacity_m15152_gshared((List_1_t400 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m1758(__this, method) (int32_t)List_1_get_Count_m15153_gshared((List_1_t400 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m1759(__this, ___index, method) (BaseInputModule_t168 *)List_1_get_Item_m15155_gshared((List_1_t400 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m16802(__this, ___index, ___value, method) (void)List_1_set_Item_m15157_gshared((List_1_t400 *)__this, (int32_t)___index, (Object_t *)___value, method)
