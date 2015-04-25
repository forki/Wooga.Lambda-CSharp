#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t4985;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Comparison`1<System.Object>
struct Comparison_1_t4556;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m18370_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m18370(__this, method) (void)IndexedSet_1__ctor_m18370_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18372_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18372(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18372_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m18373_gshared (IndexedSet_1_t4985 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m18373(__this, ___item, method) (void)IndexedSet_1_Add_m18373_gshared((IndexedSet_1_t4985 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m18374_gshared (IndexedSet_1_t4985 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m18374(__this, ___item, method) (bool)IndexedSet_1_Remove_m18374_gshared((IndexedSet_1_t4985 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m18376_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m18376(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m18376_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m18377_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m18377(__this, method) (void)IndexedSet_1_Clear_m18377_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m18379_gshared (IndexedSet_1_t4985 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m18379(__this, ___item, method) (bool)IndexedSet_1_Contains_m18379_gshared((IndexedSet_1_t4985 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m18381_gshared (IndexedSet_1_t4985 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m18381(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m18381_gshared((IndexedSet_1_t4985 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m18382_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m18382(__this, method) (int32_t)IndexedSet_1_get_Count_m18382_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m18384_gshared (IndexedSet_1_t4985 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m18384(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m18384_gshared((IndexedSet_1_t4985 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m18386_gshared (IndexedSet_1_t4985 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m18386(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m18386_gshared((IndexedSet_1_t4985 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m18388_gshared (IndexedSet_1_t4985 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m18388(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m18388_gshared((IndexedSet_1_t4985 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m18390_gshared (IndexedSet_1_t4985 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m18390(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m18390_gshared((IndexedSet_1_t4985 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m18391_gshared (IndexedSet_1_t4985 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m18391(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m18391_gshared((IndexedSet_1_t4985 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m18393_gshared (IndexedSet_1_t4985 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m18393(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m18393_gshared((IndexedSet_1_t4985 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m18394_gshared (IndexedSet_1_t4985 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m18394(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m18394_gshared((IndexedSet_1_t4985 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m18395_gshared (IndexedSet_1_t4985 * __this, Comparison_1_t4556 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m18395(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m18395_gshared((IndexedSet_1_t4985 *)__this, (Comparison_1_t4556 *)___sortLayoutFunction, method)
