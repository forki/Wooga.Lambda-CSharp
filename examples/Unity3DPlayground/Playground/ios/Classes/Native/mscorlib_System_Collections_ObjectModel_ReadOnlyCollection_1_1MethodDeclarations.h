#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4551;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t4571;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.String[]
struct StringU5BU5D_t127;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4502;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m15289(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m15166_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15290(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15167_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15291(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15168_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15292(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15169_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15293(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15170_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15294(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15171_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15295(__this, ___index, method) (String_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15172_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15296(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15173_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15297(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15174_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15298(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15175_gshared((ReadOnlyCollection_1_t4558 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15299(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15176_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m15300(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m15177_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m15301(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m15178_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m15302(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m15179_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15303(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15180_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m15304(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m15181_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m15305(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m15182_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15306(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15183_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15307(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15184_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15308(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15185_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15309(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15186_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15310(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15187_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m15311(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m15188_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m15312(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m15189_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::Contains(T)
#define ReadOnlyCollection_1_Contains_m15313(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m15190_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m15314(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m15191_gshared((ReadOnlyCollection_1_t4558 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m15315(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m15192_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m15316(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m15193_gshared((ReadOnlyCollection_1_t4558 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
#define ReadOnlyCollection_1_get_Count_m15317(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m15194_gshared((ReadOnlyCollection_1_t4558 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m15318(__this, ___index, method) (String_t*)ReadOnlyCollection_1_get_Item_m15195_gshared((ReadOnlyCollection_1_t4558 *)__this, (int32_t)___index, method)
