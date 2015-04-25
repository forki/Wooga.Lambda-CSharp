#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>
struct Builder_t5819;
// System.Object
struct Object_t;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>
struct Node_t5818;
// System.Collections.Immutable.ImmutableSortedSet`1<System.Object>
struct ImmutableSortedSet_1_t5817;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Array
struct Array_t;
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_215.h"

// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::.ctor(System.Collections.Immutable.ImmutableSortedSet`1<T>)
 void Builder__ctor_m24868_gshared (Builder_t5819 * __this, ImmutableSortedSet_1_t5817 * ___set, MethodInfo* method);
#define Builder__ctor_m24868(__this, ___set, method) (void)Builder__ctor_m24868_gshared((Builder_t5819 *)__this, (ImmutableSortedSet_1_t5817 *)___set, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Count()
 int32_t Builder_get_Count_m24869_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_Count_m24869(__this, method) (int32_t)Builder_get_Count_m24869_gshared((Builder_t5819 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24870_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24870(__this, method) (bool)Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24870_gshared((Builder_t5819 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Item(System.Int32)
 Object_t * Builder_get_Item_m24871_gshared (Builder_t5819 * __this, int32_t ___index, MethodInfo* method);
#define Builder_get_Item_m24871(__this, ___index, method) (Object_t *)Builder_get_Item_m24871_gshared((Builder_t5819 *)__this, (int32_t)___index, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Max()
 Object_t * Builder_get_Max_m24872_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_Max_m24872(__this, method) (Object_t *)Builder_get_Max_m24872_gshared((Builder_t5819 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Min()
 Object_t * Builder_get_Min_m24873_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_Min_m24873(__this, method) (Object_t *)Builder_get_Min_m24873_gshared((Builder_t5819 *)__this, method)
// System.Collections.Generic.IComparer`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_KeyComparer()
 Object_t* Builder_get_KeyComparer_m24874_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_KeyComparer_m24874(__this, method) (Object_t*)Builder_get_KeyComparer_m24874_gshared((Builder_t5819 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::set_KeyComparer(System.Collections.Generic.IComparer`1<T>)
 void Builder_set_KeyComparer_m24875_gshared (Builder_t5819 * __this, Object_t* ___value, MethodInfo* method);
#define Builder_set_KeyComparer_m24875(__this, ___value, method) (void)Builder_set_KeyComparer_m24875_gshared((Builder_t5819 *)__this, (Object_t*)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Version()
 int32_t Builder_get_Version_m24876_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_Version_m24876(__this, method) (int32_t)Builder_get_Version_m24876_gshared((Builder_t5819 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Node<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::get_Root()
 Node_t5818 * Builder_get_Root_m24877_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_get_Root_m24877(__this, method) (Node_t5818 *)Builder_get_Root_m24877_gshared((Builder_t5819 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::set_Root(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 void Builder_set_Root_m24878_gshared (Builder_t5819 * __this, Node_t5818 * ___value, MethodInfo* method);
#define Builder_set_Root_m24878(__this, ___value, method) (void)Builder_set_Root_m24878_gshared((Builder_t5819 *)__this, (Node_t5818 *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Add(T)
 bool Builder_Add_m24879_gshared (Builder_t5819 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Add_m24879(__this, ___item, method) (bool)Builder_Add_m24879_gshared((Builder_t5819 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_ExceptWith_m24880_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_ExceptWith_m24880(__this, ___other, method) (void)Builder_ExceptWith_m24880_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_IntersectWith_m24881_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IntersectWith_m24881(__this, ___other, method) (void)Builder_IntersectWith_m24881_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsProperSubsetOf_m24882_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsProperSubsetOf_m24882(__this, ___other, method) (bool)Builder_IsProperSubsetOf_m24882_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsProperSupersetOf_m24883_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsProperSupersetOf_m24883(__this, ___other, method) (bool)Builder_IsProperSupersetOf_m24883_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsSubsetOf_m24884_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsSubsetOf_m24884(__this, ___other, method) (bool)Builder_IsSubsetOf_m24884_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsSupersetOf_m24885_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsSupersetOf_m24885(__this, ___other, method) (bool)Builder_IsSupersetOf_m24885_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_Overlaps_m24886_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_Overlaps_m24886(__this, ___other, method) (bool)Builder_Overlaps_m24886_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_SetEquals_m24887_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_SetEquals_m24887(__this, ___other, method) (bool)Builder_SetEquals_m24887_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_SymmetricExceptWith_m24888_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_SymmetricExceptWith_m24888(__this, ___other, method) (void)Builder_SymmetricExceptWith_m24888_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_UnionWith_m24889_gshared (Builder_t5819 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_UnionWith_m24889(__this, ___other, method) (void)Builder_UnionWith_m24889_gshared((Builder_t5819 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24890_gshared (Builder_t5819 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24890(__this, ___item, method) (void)Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24890_gshared((Builder_t5819 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Clear()
 void Builder_Clear_m24891_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_Clear_m24891(__this, method) (void)Builder_Clear_m24891_gshared((Builder_t5819 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Contains(T)
 bool Builder_Contains_m24892_gshared (Builder_t5819 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Contains_m24892(__this, ___item, method) (bool)Builder_Contains_m24892_gshared((Builder_t5819 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24893_gshared (Builder_t5819 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24893(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24893_gshared((Builder_t5819 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Remove(T)
 bool Builder_Remove_m24894_gshared (Builder_t5819 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Remove_m24894(__this, ___item, method) (bool)Builder_Remove_m24894_gshared((Builder_t5819 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::GetEnumerator()
 Enumerator_t5820  Builder_GetEnumerator_m24895 (Builder_t5819 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24896_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24896(__this, method) (Object_t*)Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24896_gshared((Builder_t5819 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m24897_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_System_Collections_IEnumerable_GetEnumerator_m24897(__this, method) (Object_t *)Builder_System_Collections_IEnumerable_GetEnumerator_m24897_gshared((Builder_t5819 *)__this, method)
// System.Collections.Generic.IEnumerable`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::Reverse()
 Object_t* Builder_Reverse_m24898_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_Reverse_m24898(__this, method) (Object_t*)Builder_Reverse_m24898_gshared((Builder_t5819 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::ToImmutable()
 ImmutableSortedSet_1_t5817 * Builder_ToImmutable_m24899_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_ToImmutable_m24899(__this, method) (ImmutableSortedSet_1_t5817 *)Builder_ToImmutable_m24899_gshared((Builder_t5819 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Builder_System_Collections_ICollection_CopyTo_m24900_gshared (Builder_t5819 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_ICollection_CopyTo_m24900(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_ICollection_CopyTo_m24900_gshared((Builder_t5819 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Builder_System_Collections_ICollection_get_IsSynchronized_m24901_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_IsSynchronized_m24901(__this, method) (bool)Builder_System_Collections_ICollection_get_IsSynchronized_m24901_gshared((Builder_t5819 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Builder_System_Collections_ICollection_get_SyncRoot_m24902_gshared (Builder_t5819 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_SyncRoot_m24902(__this, method) (Object_t *)Builder_System_Collections_ICollection_get_SyncRoot_m24902_gshared((Builder_t5819 *)__this, method)
