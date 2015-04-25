#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t4572;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.String[]
struct StringU5BU5D_t127;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4502;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t4571;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m15319(__this, method) (void)Collection_1__ctor_m15196_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15320(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15197_gshared((Collection_1_t4562 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m15321(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m15198_gshared((Collection_1_t4562 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m15322(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m15199_gshared((Collection_1_t4562 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m15323(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m15200_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m15324(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m15201_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m15325(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m15202_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m15326(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m15203_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m15327(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m15204_gshared((Collection_1_t4562 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m15328(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m15205_gshared((Collection_1_t4562 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m15329(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m15206_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m15330(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m15207_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m15331(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m15208_gshared((Collection_1_t4562 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m15332(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m15209_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m15333(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m15210_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m15334(__this, ___item, method) (void)Collection_1_Add_m15211_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m15335(__this, method) (void)Collection_1_Clear_m15212_gshared((Collection_1_t4562 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m15336(__this, method) (void)Collection_1_ClearItems_m15213_gshared((Collection_1_t4562 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m15337(__this, ___item, method) (bool)Collection_1_Contains_m15214_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m15338(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m15215_gshared((Collection_1_t4562 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m15339(__this, method) (Object_t*)Collection_1_GetEnumerator_m15216_gshared((Collection_1_t4562 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m15340(__this, ___item, method) (int32_t)Collection_1_IndexOf_m15217_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m15341(__this, ___index, ___item, method) (void)Collection_1_Insert_m15218_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m15342(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m15219_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m15343(__this, ___item, method) (bool)Collection_1_Remove_m15220_gshared((Collection_1_t4562 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m15344(__this, ___index, method) (void)Collection_1_RemoveAt_m15221_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m15345(__this, ___index, method) (void)Collection_1_RemoveItem_m15222_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m15346(__this, method) (int32_t)Collection_1_get_Count_m15223_gshared((Collection_1_t4562 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m15347(__this, ___index, method) (String_t*)Collection_1_get_Item_m15224_gshared((Collection_1_t4562 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m15348(__this, ___index, ___value, method) (void)Collection_1_set_Item_m15225_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m15349(__this, ___index, ___item, method) (void)Collection_1_SetItem_m15226_gshared((Collection_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m15350(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m15227_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m15351(__this/* static, unused */, ___item, method) (String_t*)Collection_1_ConvertItem_m15228_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m15352(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m15229_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m15353(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m15230_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m15354(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m15231_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
