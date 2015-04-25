#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableList`1/Builder<System.Object>
struct Builder_t5537;
// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1<System.Object>
struct ImmutableList_1_t5534;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Action`1<System.Object>
struct Action_1_t5075;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Comparison`1<System.Object>
struct Comparison_1_t4556;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_106.h"

// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::.ctor(System.Collections.Immutable.ImmutableList`1<T>)
 void Builder__ctor_m22274_gshared (Builder_t5537 * __this, ImmutableList_1_t5534 * ___list, MethodInfo* method);
#define Builder__ctor_m22274(__this, ___list, method) (void)Builder__ctor_m22274_gshared((Builder_t5537 *)__this, (ImmutableList_1_t5534 *)___list, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::get_Count()
 int32_t Builder_get_Count_m22275_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_get_Count_m22275(__this, method) (int32_t)Builder_get_Count_m22275_gshared((Builder_t5537 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22276_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22276(__this, method) (bool)Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22276_gshared((Builder_t5537 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::get_Version()
 int32_t Builder_get_Version_m22277_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_get_Version_m22277(__this, method) (int32_t)Builder_get_Version_m22277_gshared((Builder_t5537 *)__this, method)
// System.Collections.Immutable.ImmutableList`1/Node<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::get_Root()
 Node_t5535 * Builder_get_Root_m22278_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_get_Root_m22278(__this, method) (Node_t5535 *)Builder_get_Root_m22278_gshared((Builder_t5537 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::set_Root(System.Collections.Immutable.ImmutableList`1/Node<T>)
 void Builder_set_Root_m22279_gshared (Builder_t5537 * __this, Node_t5535 * ___value, MethodInfo* method);
#define Builder_set_Root_m22279(__this, ___value, method) (void)Builder_set_Root_m22279_gshared((Builder_t5537 *)__this, (Node_t5535 *)___value, method)
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::get_Item(System.Int32)
 Object_t * Builder_get_Item_m22280_gshared (Builder_t5537 * __this, int32_t ___index, MethodInfo* method);
#define Builder_get_Item_m22280(__this, ___index, method) (Object_t *)Builder_get_Item_m22280_gshared((Builder_t5537 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::set_Item(System.Int32,T)
 void Builder_set_Item_m22281_gshared (Builder_t5537 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Builder_set_Item_m22281(__this, ___index, ___value, method) (void)Builder_set_Item_m22281_gshared((Builder_t5537 *)__this, (int32_t)___index, (Object_t *)___value, method)
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.Immutable.IOrderedCollection<T>.get_Item(System.Int32)
 Object_t * Builder_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m22282_gshared (Builder_t5537 * __this, int32_t ___index, MethodInfo* method);
#define Builder_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m22282(__this, ___index, method) (Object_t *)Builder_System_Collections_Immutable_IOrderedCollectionU3CTU3E_get_Item_m22282_gshared((Builder_t5537 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::IndexOf(T)
 int32_t Builder_IndexOf_m22283_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_IndexOf_m22283(__this, ___item, method) (int32_t)Builder_IndexOf_m22283_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Insert(System.Int32,T)
 void Builder_Insert_m22284_gshared (Builder_t5537 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define Builder_Insert_m22284(__this, ___index, ___item, method) (void)Builder_Insert_m22284_gshared((Builder_t5537 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::RemoveAt(System.Int32)
 void Builder_RemoveAt_m22285_gshared (Builder_t5537 * __this, int32_t ___index, MethodInfo* method);
#define Builder_RemoveAt_m22285(__this, ___index, method) (void)Builder_RemoveAt_m22285_gshared((Builder_t5537 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Add(T)
 void Builder_Add_m22286_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Add_m22286(__this, ___item, method) (void)Builder_Add_m22286_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Clear()
 void Builder_Clear_m22287_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_Clear_m22287(__this, method) (void)Builder_Clear_m22287_gshared((Builder_t5537 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Contains(T)
 bool Builder_Contains_m22288_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Contains_m22288(__this, ___item, method) (bool)Builder_Contains_m22288_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Remove(T)
 bool Builder_Remove_m22289_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Remove_m22289(__this, ___item, method) (bool)Builder_Remove_m22289_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.ImmutableList`1/Enumerator<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::GetEnumerator()
 Enumerator_t5538  Builder_GetEnumerator_m22290 (Builder_t5537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22291_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22291(__this, method) (Object_t*)Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22291_gshared((Builder_t5537 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m22292_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_IEnumerable_GetEnumerator_m22292(__this, method) (Object_t *)Builder_System_Collections_IEnumerable_GetEnumerator_m22292_gshared((Builder_t5537 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::ForEach(System.Action`1<T>)
 void Builder_ForEach_m22293_gshared (Builder_t5537 * __this, Action_1_t5075 * ___action, MethodInfo* method);
#define Builder_ForEach_m22293(__this, ___action, method) (void)Builder_ForEach_m22293_gshared((Builder_t5537 *)__this, (Action_1_t5075 *)___action, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::CopyTo(T[])
 void Builder_CopyTo_m22294_gshared (Builder_t5537 * __this, ObjectU5BU5D_t126* ___array, MethodInfo* method);
#define Builder_CopyTo_m22294(__this, ___array, method) (void)Builder_CopyTo_m22294_gshared((Builder_t5537 *)__this, (ObjectU5BU5D_t126*)___array, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::CopyTo(T[],System.Int32)
 void Builder_CopyTo_m22295_gshared (Builder_t5537 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_CopyTo_m22295(__this, ___array, ___arrayIndex, method) (void)Builder_CopyTo_m22295_gshared((Builder_t5537 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void Builder_CopyTo_m22296_gshared (Builder_t5537 * __this, int32_t ___index, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method);
#define Builder_CopyTo_m22296(__this, ___index, ___array, ___arrayIndex, ___count, method) (void)Builder_CopyTo_m22296_gshared((Builder_t5537 *)__this, (int32_t)___index, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, (int32_t)___count, method)
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::GetRange(System.Int32,System.Int32)
 ImmutableList_1_t5534 * Builder_GetRange_m22297_gshared (Builder_t5537 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define Builder_GetRange_m22297(__this, ___index, ___count, method) (ImmutableList_1_t5534 *)Builder_GetRange_m22297_gshared((Builder_t5537 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Exists(System.Predicate`1<T>)
 bool Builder_Exists_m22298_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_Exists_m22298(__this, ___match, method) (bool)Builder_Exists_m22298_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Find(System.Predicate`1<T>)
 Object_t * Builder_Find_m22299_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_Find_m22299(__this, ___match, method) (Object_t *)Builder_Find_m22299_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindAll(System.Predicate`1<T>)
 ImmutableList_1_t5534 * Builder_FindAll_m22300_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindAll_m22300(__this, ___match, method) (ImmutableList_1_t5534 *)Builder_FindAll_m22300_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindIndex(System.Predicate`1<T>)
 int32_t Builder_FindIndex_m22301_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindIndex_m22301(__this, ___match, method) (int32_t)Builder_FindIndex_m22301_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m22302_gshared (Builder_t5537 * __this, int32_t ___startIndex, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindIndex_m22302(__this, ___startIndex, ___match, method) (int32_t)Builder_FindIndex_m22302_gshared((Builder_t5537 *)__this, (int32_t)___startIndex, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindIndex_m22303_gshared (Builder_t5537 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindIndex_m22303(__this, ___startIndex, ___count, ___match, method) (int32_t)Builder_FindIndex_m22303_gshared((Builder_t5537 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// T System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindLast(System.Predicate`1<T>)
 Object_t * Builder_FindLast_m22304_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindLast_m22304(__this, ___match, method) (Object_t *)Builder_FindLast_m22304_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindLastIndex(System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m22305_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindLastIndex_m22305(__this, ___match, method) (int32_t)Builder_FindLastIndex_m22305_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindLastIndex(System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m22306_gshared (Builder_t5537 * __this, int32_t ___startIndex, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindLastIndex_m22306(__this, ___startIndex, ___match, method) (int32_t)Builder_FindLastIndex_m22306_gshared((Builder_t5537 *)__this, (int32_t)___startIndex, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::FindLastIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t Builder_FindLastIndex_m22307_gshared (Builder_t5537 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_FindLastIndex_m22307(__this, ___startIndex, ___count, ___match, method) (int32_t)Builder_FindLastIndex_m22307_gshared((Builder_t5537 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t4554 *)___match, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::IndexOf(T,System.Int32)
 int32_t Builder_IndexOf_m22308_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___index, MethodInfo* method);
#define Builder_IndexOf_m22308(__this, ___item, ___index, method) (int32_t)Builder_IndexOf_m22308_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___index, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::IndexOf(T,System.Int32,System.Int32)
 int32_t Builder_IndexOf_m22309_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___index, int32_t ___count, MethodInfo* method);
#define Builder_IndexOf_m22309(__this, ___item, ___index, ___count, method) (int32_t)Builder_IndexOf_m22309_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___index, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_IndexOf_m22310_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___index, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Builder_IndexOf_m22310(__this, ___item, ___index, ___count, ___equalityComparer, method) (int32_t)Builder_IndexOf_m22310_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___index, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::LastIndexOf(T)
 int32_t Builder_LastIndexOf_m22311_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_LastIndexOf_m22311(__this, ___item, method) (int32_t)Builder_LastIndexOf_m22311_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::LastIndexOf(T,System.Int32)
 int32_t Builder_LastIndexOf_m22312_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___startIndex, MethodInfo* method);
#define Builder_LastIndexOf_m22312(__this, ___item, ___startIndex, method) (int32_t)Builder_LastIndexOf_m22312_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___startIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::LastIndexOf(T,System.Int32,System.Int32)
 int32_t Builder_LastIndexOf_m22313_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method);
#define Builder_LastIndexOf_m22313(__this, ___item, ___startIndex, ___count, method) (int32_t)Builder_LastIndexOf_m22313_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_LastIndexOf_m22314_gshared (Builder_t5537 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Builder_LastIndexOf_m22314(__this, ___item, ___startIndex, ___count, ___equalityComparer, method) (int32_t)Builder_LastIndexOf_m22314_gshared((Builder_t5537 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::TrueForAll(System.Predicate`1<T>)
 bool Builder_TrueForAll_m22315_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_TrueForAll_m22315(__this, ___match, method) (bool)Builder_TrueForAll_m22315_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_AddRange_m22316_gshared (Builder_t5537 * __this, Object_t* ___items, MethodInfo* method);
#define Builder_AddRange_m22316(__this, ___items, method) (void)Builder_AddRange_m22316_gshared((Builder_t5537 *)__this, (Object_t*)___items, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 void Builder_InsertRange_m22317_gshared (Builder_t5537 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method);
#define Builder_InsertRange_m22317(__this, ___index, ___items, method) (void)Builder_InsertRange_m22317_gshared((Builder_t5537 *)__this, (int32_t)___index, (Object_t*)___items, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::RemoveAll(System.Predicate`1<T>)
 int32_t Builder_RemoveAll_m22318_gshared (Builder_t5537 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define Builder_RemoveAll_m22318(__this, ___match, method) (int32_t)Builder_RemoveAll_m22318_gshared((Builder_t5537 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Reverse()
 void Builder_Reverse_m22319_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_Reverse_m22319(__this, method) (void)Builder_Reverse_m22319_gshared((Builder_t5537 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Reverse(System.Int32,System.Int32)
 void Builder_Reverse_m22320_gshared (Builder_t5537 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define Builder_Reverse_m22320(__this, ___index, ___count, method) (void)Builder_Reverse_m22320_gshared((Builder_t5537 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Sort()
 void Builder_Sort_m22321_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_Sort_m22321(__this, method) (void)Builder_Sort_m22321_gshared((Builder_t5537 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Sort(System.Comparison`1<T>)
 void Builder_Sort_m22322_gshared (Builder_t5537 * __this, Comparison_1_t4556 * ___comparison, MethodInfo* method);
#define Builder_Sort_m22322(__this, ___comparison, method) (void)Builder_Sort_m22322_gshared((Builder_t5537 *)__this, (Comparison_1_t4556 *)___comparison, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m22323_gshared (Builder_t5537 * __this, Object_t* ___comparer, MethodInfo* method);
#define Builder_Sort_m22323(__this, ___comparer, method) (void)Builder_Sort_m22323_gshared((Builder_t5537 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m22324_gshared (Builder_t5537 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method);
#define Builder_Sort_m22324(__this, ___index, ___count, ___comparer, method) (void)Builder_Sort_m22324_gshared((Builder_t5537 *)__this, (int32_t)___index, (int32_t)___count, (Object_t*)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::BinarySearch(T)
 int32_t Builder_BinarySearch_m22325_gshared (Builder_t5537 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_BinarySearch_m22325(__this, ___item, method) (int32_t)Builder_BinarySearch_m22325_gshared((Builder_t5537 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m22326_gshared (Builder_t5537 * __this, Object_t * ___item, Object_t* ___comparer, MethodInfo* method);
#define Builder_BinarySearch_m22326(__this, ___item, ___comparer, method) (int32_t)Builder_BinarySearch_m22326_gshared((Builder_t5537 *)__this, (Object_t *)___item, (Object_t*)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
 int32_t Builder_BinarySearch_m22327_gshared (Builder_t5537 * __this, int32_t ___index, int32_t ___count, Object_t * ___item, Object_t* ___comparer, MethodInfo* method);
#define Builder_BinarySearch_m22327(__this, ___index, ___count, ___item, ___comparer, method) (int32_t)Builder_BinarySearch_m22327_gshared((Builder_t5537 *)__this, (int32_t)___index, (int32_t)___count, (Object_t *)___item, (Object_t*)___comparer, method)
// System.Collections.Immutable.ImmutableList`1<T> System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::ToImmutable()
 ImmutableList_1_t5534 * Builder_ToImmutable_m22328_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_ToImmutable_m22328(__this, method) (ImmutableList_1_t5534 *)Builder_ToImmutable_m22328_gshared((Builder_t5537 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t Builder_System_Collections_IList_Add_m22329_gshared (Builder_t5537 * __this, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_Add_m22329(__this, ___value, method) (int32_t)Builder_System_Collections_IList_Add_m22329_gshared((Builder_t5537 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.Clear()
 void Builder_System_Collections_IList_Clear_m22330_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_IList_Clear_m22330(__this, method) (void)Builder_System_Collections_IList_Clear_m22330_gshared((Builder_t5537 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.Contains(System.Object)
 bool Builder_System_Collections_IList_Contains_m22331_gshared (Builder_t5537 * __this, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_Contains_m22331(__this, ___value, method) (bool)Builder_System_Collections_IList_Contains_m22331_gshared((Builder_t5537 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t Builder_System_Collections_IList_IndexOf_m22332_gshared (Builder_t5537 * __this, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_IndexOf_m22332(__this, ___value, method) (int32_t)Builder_System_Collections_IList_IndexOf_m22332_gshared((Builder_t5537 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Builder_System_Collections_IList_Insert_m22333_gshared (Builder_t5537 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_Insert_m22333(__this, ___index, ___value, method) (void)Builder_System_Collections_IList_Insert_m22333_gshared((Builder_t5537 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool Builder_System_Collections_IList_get_IsFixedSize_m22334_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_IList_get_IsFixedSize_m22334(__this, method) (bool)Builder_System_Collections_IList_get_IsFixedSize_m22334_gshared((Builder_t5537 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool Builder_System_Collections_IList_get_IsReadOnly_m22335_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_IList_get_IsReadOnly_m22335(__this, method) (bool)Builder_System_Collections_IList_get_IsReadOnly_m22335_gshared((Builder_t5537 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.Remove(System.Object)
 void Builder_System_Collections_IList_Remove_m22336_gshared (Builder_t5537 * __this, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_Remove_m22336(__this, ___value, method) (void)Builder_System_Collections_IList_Remove_m22336_gshared((Builder_t5537 *)__this, (Object_t *)___value, method)
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Builder_System_Collections_IList_get_Item_m22337_gshared (Builder_t5537 * __this, int32_t ___index, MethodInfo* method);
#define Builder_System_Collections_IList_get_Item_m22337(__this, ___index, method) (Object_t *)Builder_System_Collections_IList_get_Item_m22337_gshared((Builder_t5537 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Builder_System_Collections_IList_set_Item_m22338_gshared (Builder_t5537 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IList_set_Item_m22338(__this, ___index, ___value, method) (void)Builder_System_Collections_IList_set_Item_m22338_gshared((Builder_t5537 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Builder_System_Collections_ICollection_CopyTo_m22339_gshared (Builder_t5537 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_ICollection_CopyTo_m22339(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_ICollection_CopyTo_m22339_gshared((Builder_t5537 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Builder_System_Collections_ICollection_get_IsSynchronized_m22340_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_IsSynchronized_m22340(__this, method) (bool)Builder_System_Collections_ICollection_get_IsSynchronized_m22340_gshared((Builder_t5537 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableList`1/Builder<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Builder_System_Collections_ICollection_get_SyncRoot_m22341_gshared (Builder_t5537 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_SyncRoot_m22341(__this, method) (Object_t *)Builder_System_Collections_ICollection_get_SyncRoot_m22341_gshared((Builder_t5537 *)__this, method)
