#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>
struct ImmutableSortedDictionary_2_t5707;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t4470;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t975;
// System.Collections.Immutable.IImmutableDictionary`2<System.Object,System.Object>
struct IImmutableDictionary_2_t5631;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5709;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t5633;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t976;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_167.h"

// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 void ImmutableSortedDictionary_2__ctor_m23772_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define ImmutableSortedDictionary_2__ctor_m23772(__this, ___keyComparer, ___valueComparer, method) (void)ImmutableSortedDictionary_2__ctor_m23772_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Int32,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 void ImmutableSortedDictionary_2__ctor_m23773_gshared (ImmutableSortedDictionary_2_t5707 * __this, Node_t5708 * ___root, int32_t ___count, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define ImmutableSortedDictionary_2__ctor_m23773(__this, ___root, ___count, ___keyComparer, ___valueComparer, method) (void)ImmutableSortedDictionary_2__ctor_m23773_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Node_t5708 *)___root, (int32_t)___count, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Clear()
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_Clear_m23774_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_Clear_m23774(__this, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_Clear_m23774_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_ValueComparer()
 Object_t* ImmutableSortedDictionary_2_get_ValueComparer_m23775_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_ValueComparer_m23775(__this, method) (Object_t*)ImmutableSortedDictionary_2_get_ValueComparer_m23775_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_IsEmpty()
 bool ImmutableSortedDictionary_2_get_IsEmpty_m23776_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_IsEmpty_m23776(__this, method) (bool)ImmutableSortedDictionary_2_get_IsEmpty_m23776_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_Count()
 int32_t ImmutableSortedDictionary_2_get_Count_m23777_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_Count_m23777(__this, method) (int32_t)ImmutableSortedDictionary_2_get_Count_m23777_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_Keys()
 Object_t* ImmutableSortedDictionary_2_get_Keys_m23778_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_Keys_m23778(__this, method) (Object_t*)ImmutableSortedDictionary_2_get_Keys_m23778_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_Values()
 Object_t* ImmutableSortedDictionary_2_get_Values_m23779_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_Values_m23779(__this, method) (Object_t*)ImmutableSortedDictionary_2_get_Values_m23779_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.Clear()
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Clear_m23780_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Clear_m23780(__this, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Clear_m23780_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23781_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23781(__this, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23781_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23782_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23782(__this, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23782_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23783_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23783(__this, method) (bool)ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23783_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.IComparer`1<TKey> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_KeyComparer()
 Object_t* ImmutableSortedDictionary_2_get_KeyComparer_m23784_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_KeyComparer_m23784(__this, method) (Object_t*)ImmutableSortedDictionary_2_get_KeyComparer_m23784_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_Root()
 Node_t5708 * ImmutableSortedDictionary_2_get_Root_m23785_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_Root_m23785(__this, method) (Node_t5708 *)ImmutableSortedDictionary_2_get_Root_m23785_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// TValue System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::get_Item(TKey)
 Object_t * ImmutableSortedDictionary_2_get_Item_m23786_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_get_Item_m23786(__this, ___key, method) (Object_t *)ImmutableSortedDictionary_2_get_Item_m23786_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Item(TKey)
 Object_t * ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m23787_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m23787(__this, ___key, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Item_m23787_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.set_Item(TKey,TValue)
 void ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m23788_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m23788(__this, ___key, ___value, method) (void)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_set_Item_m23788_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::ToBuilder()
 Builder_t5709 * ImmutableSortedDictionary_2_ToBuilder_m23789_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_ToBuilder_m23789(__this, method) (Builder_t5709 *)ImmutableSortedDictionary_2_ToBuilder_m23789_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_Add_m23790_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_Add_m23790(__this, ___key, ___value, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_Add_m23790_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::SetItem(TKey,TValue)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_SetItem_m23791_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_SetItem_m23791(__this, ___key, ___value, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_SetItem_m23791_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::SetItems(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_SetItems_m23792_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___items, MethodInfo* method);
#define ImmutableSortedDictionary_2_SetItems_m23792(__this, ___items, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_SetItems_m23792_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___items, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_AddRange_m23793_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___items, MethodInfo* method);
#define ImmutableSortedDictionary_2_AddRange_m23793(__this, ___items, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_AddRange_m23793_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___items, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Remove(TKey)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_Remove_m23794_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_Remove_m23794(__this, ___value, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_Remove_m23794_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::RemoveRange(System.Collections.Generic.IEnumerable`1<TKey>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_RemoveRange_m23795_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___keys, MethodInfo* method);
#define ImmutableSortedDictionary_2_RemoveRange_m23795(__this, ___keys, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_RemoveRange_m23795_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___keys, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::WithComparers(System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_WithComparers_m23796_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define ImmutableSortedDictionary_2_WithComparers_m23796(__this, ___keyComparer, ___valueComparer, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_WithComparers_m23796_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::WithComparers(System.Collections.Generic.IComparer`1<TKey>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_WithComparers_m23797_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___keyComparer, MethodInfo* method);
#define ImmutableSortedDictionary_2_WithComparers_m23797(__this, ___keyComparer, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_WithComparers_m23797_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___keyComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::ContainsValue(TValue)
 bool ImmutableSortedDictionary_2_ContainsValue_m23798_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_ContainsValue_m23798(__this, ___value, method) (bool)ImmutableSortedDictionary_2_ContainsValue_m23798_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.Add(TKey,TValue)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Add_m23799_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Add_m23799(__this, ___key, ___value, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Add_m23799_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.SetItem(TKey,TValue)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItem_m23800_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItem_m23800(__this, ___key, ___value, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItem_m23800_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.SetItems(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItems_m23801_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___items, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItems_m23801(__this, ___items, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_SetItems_m23801_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___items, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_AddRange_m23802_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___pairs, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_AddRange_m23802(__this, ___pairs, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_AddRange_m23802_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___pairs, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.RemoveRange(System.Collections.Generic.IEnumerable`1<TKey>)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_RemoveRange_m23803_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___keys, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_RemoveRange_m23803(__this, ___keys, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_RemoveRange_m23803_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___keys, method)
// System.Collections.Immutable.IImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Immutable.IImmutableDictionary<TKey,TValue>.Remove(TKey)
 Object_t* ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Remove_m23804_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Remove_m23804(__this, ___key, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Immutable_IImmutableDictionaryU3CTKeyU2CTValueU3E_Remove_m23804_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
 bool ImmutableSortedDictionary_2_ContainsKey_m23805_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_ContainsKey_m23805(__this, ___key, method) (bool)ImmutableSortedDictionary_2_ContainsKey_m23805_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool ImmutableSortedDictionary_2_Contains_m23806 (ImmutableSortedDictionary_2_t5707 * __this, KeyValuePair_2_t4473  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool ImmutableSortedDictionary_2_TryGetValue_m23807_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_TryGetValue_m23807(__this, ___key, ___value, method) (bool)ImmutableSortedDictionary_2_TryGetValue_m23807_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::TryGetKey(TKey,TKey&)
 bool ImmutableSortedDictionary_2_TryGetKey_m23808_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___equalKey, Object_t ** ___actualKey, MethodInfo* method);
#define ImmutableSortedDictionary_2_TryGetKey_m23808(__this, ___equalKey, ___actualKey, method) (bool)ImmutableSortedDictionary_2_TryGetKey_m23808_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___equalKey, (Object_t **)___actualKey, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey,TValue)
 void ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m23809_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m23809(__this, ___key, ___value, method) (void)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Add_m23809_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey)
 bool ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m23810_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m23810(__this, ___key, method) (bool)ImmutableSortedDictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_Remove_m23810_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23811 (ImmutableSortedDictionary_2_t5707 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear()
 void ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m23812_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m23812(__this, method) (void)ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Clear_m23812_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23813 (ImmutableSortedDictionary_2_t5707 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23814_gshared (ImmutableSortedDictionary_2_t5707 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23814(__this, ___array, ___arrayIndex, method) (void)ImmutableSortedDictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23814_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (KeyValuePair_2U5BU5D_t4466*)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
 bool ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m23815_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m23815(__this, method) (bool)ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsFixedSize_m23815_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
 bool ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsReadOnly_m23816_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsReadOnly_m23816(__this, method) (bool)ImmutableSortedDictionary_2_System_Collections_IDictionary_get_IsReadOnly_m23816_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.ICollection System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
 Object_t * ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Keys_m23817_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Keys_m23817(__this, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Keys_m23817_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.ICollection System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
 Object_t * ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Values_m23818_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Values_m23818(__this, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Values_m23818_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void ImmutableSortedDictionary_2_System_Collections_IDictionary_Add_m23819_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_Add_m23819(__this, ___key, ___value, method) (void)ImmutableSortedDictionary_2_System_Collections_IDictionary_Add_m23819_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
 bool ImmutableSortedDictionary_2_System_Collections_IDictionary_Contains_m23820_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_Contains_m23820(__this, ___key, method) (bool)ImmutableSortedDictionary_2_System_Collections_IDictionary_Contains_m23820_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Collections.IDictionaryEnumerator System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * ImmutableSortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m23821_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m23821(__this, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_IDictionary_GetEnumerator_m23821_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void ImmutableSortedDictionary_2_System_Collections_IDictionary_Remove_m23822_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_Remove_m23822(__this, ___key, method) (void)ImmutableSortedDictionary_2_System_Collections_IDictionary_Remove_m23822_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Object System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Item_m23823_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Item_m23823(__this, ___key, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_IDictionary_get_Item_m23823_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void ImmutableSortedDictionary_2_System_Collections_IDictionary_set_Item_m23824_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_set_Item_m23824(__this, ___key, ___value, method) (void)ImmutableSortedDictionary_2_System_Collections_IDictionary_set_Item_m23824_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Clear()
 void ImmutableSortedDictionary_2_System_Collections_IDictionary_Clear_m23825_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IDictionary_Clear_m23825(__this, method) (void)ImmutableSortedDictionary_2_System_Collections_IDictionary_Clear_m23825_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableSortedDictionary_2_System_Collections_ICollection_CopyTo_m23826_gshared (ImmutableSortedDictionary_2_t5707 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_ICollection_CopyTo_m23826(__this, ___array, ___index, method) (void)ImmutableSortedDictionary_2_System_Collections_ICollection_CopyTo_m23826_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Object System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableSortedDictionary_2_System_Collections_ICollection_get_SyncRoot_m23827_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_ICollection_get_SyncRoot_m23827(__this, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_ICollection_get_SyncRoot_m23827_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableSortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_m23828_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_m23828(__this, method) (bool)ImmutableSortedDictionary_2_System_Collections_ICollection_get_IsSynchronized_m23828_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* ImmutableSortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23829_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23829(__this, method) (Object_t*)ImmutableSortedDictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23829_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableSortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23830_gshared (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method);
#define ImmutableSortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23830(__this, method) (Object_t *)ImmutableSortedDictionary_2_System_Collections_IEnumerable_GetEnumerator_m23830_gshared((ImmutableSortedDictionary_2_t5707 *)__this, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::GetEnumerator()
 Enumerator_t5710  ImmutableSortedDictionary_2_GetEnumerator_m23831 (ImmutableSortedDictionary_2_t5707 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Wrap(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Int32,System.Collections.Generic.IComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_Wrap_m23832_gshared (Object_t * __this/* static, unused */, Node_t5708 * ___root, int32_t ___count, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define ImmutableSortedDictionary_2_Wrap_m23832(__this/* static, unused */, ___root, ___count, ___keyComparer, ___valueComparer, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_Wrap_m23832_gshared((Object_t *)__this/* static, unused */, (Node_t5708 *)___root, (int32_t)___count, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::TryCastToImmutableMap(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue>&)
 bool ImmutableSortedDictionary_2_TryCastToImmutableMap_m23833_gshared (Object_t * __this/* static, unused */, Object_t* ___sequence, ImmutableSortedDictionary_2_t5707 ** ___other, MethodInfo* method);
#define ImmutableSortedDictionary_2_TryCastToImmutableMap_m23833(__this/* static, unused */, ___sequence, ___other, method) (bool)ImmutableSortedDictionary_2_TryCastToImmutableMap_m23833_gshared((Object_t *)__this/* static, unused */, (Object_t*)___sequence, (ImmutableSortedDictionary_2_t5707 **)___other, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Boolean,System.Boolean)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_AddRange_m23834_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___items, bool ___overwriteOnCollision, bool ___avoidToSortedMap, MethodInfo* method);
#define ImmutableSortedDictionary_2_AddRange_m23834(__this, ___items, ___overwriteOnCollision, ___avoidToSortedMap, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_AddRange_m23834_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___items, (bool)___overwriteOnCollision, (bool)___avoidToSortedMap, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::Wrap(System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue>,System.Int32)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_Wrap_m23835_gshared (ImmutableSortedDictionary_2_t5707 * __this, Node_t5708 * ___root, int32_t ___adjustedCountIfDifferentRoot, MethodInfo* method);
#define ImmutableSortedDictionary_2_Wrap_m23835(__this, ___root, ___adjustedCountIfDifferentRoot, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_Wrap_m23835_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Node_t5708 *)___root, (int32_t)___adjustedCountIfDifferentRoot, method)
// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::FillFromEmpty(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Boolean)
 ImmutableSortedDictionary_2_t5707 * ImmutableSortedDictionary_2_FillFromEmpty_m23836_gshared (ImmutableSortedDictionary_2_t5707 * __this, Object_t* ___items, bool ___overwriteOnCollision, MethodInfo* method);
#define ImmutableSortedDictionary_2_FillFromEmpty_m23836(__this, ___items, ___overwriteOnCollision, method) (ImmutableSortedDictionary_2_t5707 *)ImmutableSortedDictionary_2_FillFromEmpty_m23836_gshared((ImmutableSortedDictionary_2_t5707 *)__this, (Object_t*)___items, (bool)___overwriteOnCollision, method)
// System.Void System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>::.cctor()
 void ImmutableSortedDictionary_2__cctor_m23837_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableSortedDictionary_2__cctor_m23837(__this/* static, unused */, method) (void)ImmutableSortedDictionary_2__cctor_m23837_gshared((Object_t *)__this/* static, unused */, method)
