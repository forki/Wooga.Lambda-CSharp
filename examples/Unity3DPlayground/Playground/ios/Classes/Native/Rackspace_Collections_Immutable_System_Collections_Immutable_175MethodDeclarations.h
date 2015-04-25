#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5632;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t4470;
// System.Collections.ICollection
struct ICollection_t975;
// System.Object
struct Object_t;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>
struct ImmutableDictionary_2_t5627;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t976;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t5633;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_132.h"
// System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_133.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableDictionary`2/MutationResult<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_134.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::.ctor(System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue>)
 void Builder__ctor_m24270_gshared (Builder_t5632 * __this, ImmutableDictionary_2_t5627 * ___map, MethodInfo* method);
#define Builder__ctor_m24270(__this, ___map, method) (void)Builder__ctor_m24270_gshared((Builder_t5632 *)__this, (ImmutableDictionary_2_t5627 *)___map, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_KeyComparer()
 Object_t* Builder_get_KeyComparer_m24271_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_KeyComparer_m24271(__this, method) (Object_t*)Builder_get_KeyComparer_m24271_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::set_KeyComparer(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Builder_set_KeyComparer_m24272_gshared (Builder_t5632 * __this, Object_t* ___value, MethodInfo* method);
#define Builder_set_KeyComparer_m24272(__this, ___value, method) (void)Builder_set_KeyComparer_m24272_gshared((Builder_t5632 *)__this, (Object_t*)___value, method)
// System.Collections.Generic.IEqualityComparer`1<TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_ValueComparer()
 Object_t* Builder_get_ValueComparer_m24273_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_ValueComparer_m24273(__this, method) (Object_t*)Builder_get_ValueComparer_m24273_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::set_ValueComparer(System.Collections.Generic.IEqualityComparer`1<TValue>)
 void Builder_set_ValueComparer_m24274_gshared (Builder_t5632 * __this, Object_t* ___value, MethodInfo* method);
#define Builder_set_ValueComparer_m24274(__this, ___value, method) (void)Builder_set_ValueComparer_m24274_gshared((Builder_t5632 *)__this, (Object_t*)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Count()
 int32_t Builder_get_Count_m24275_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_Count_m24275(__this, method) (int32_t)Builder_get_Count_m24275_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24276_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24276(__this, method) (bool)Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24276_gshared((Builder_t5632 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Keys()
 Object_t* Builder_get_Keys_m24277_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_Keys_m24277(__this, method) (Object_t*)Builder_get_Keys_m24277_gshared((Builder_t5632 *)__this, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24278_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24278(__this, method) (Object_t*)Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24278_gshared((Builder_t5632 *)__this, method)
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Values()
 Object_t* Builder_get_Values_m24279_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_Values_m24279(__this, method) (Object_t*)Builder_get_Values_m24279_gshared((Builder_t5632 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24280_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24280(__this, method) (Object_t*)Builder_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24280_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
 bool Builder_System_Collections_IDictionary_get_IsFixedSize_m24281_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IDictionary_get_IsFixedSize_m24281(__this, method) (bool)Builder_System_Collections_IDictionary_get_IsFixedSize_m24281_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
 bool Builder_System_Collections_IDictionary_get_IsReadOnly_m24282_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IDictionary_get_IsReadOnly_m24282(__this, method) (bool)Builder_System_Collections_IDictionary_get_IsReadOnly_m24282_gshared((Builder_t5632 *)__this, method)
// System.Collections.ICollection System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
 Object_t * Builder_System_Collections_IDictionary_get_Keys_m24283_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IDictionary_get_Keys_m24283(__this, method) (Object_t *)Builder_System_Collections_IDictionary_get_Keys_m24283_gshared((Builder_t5632 *)__this, method)
// System.Collections.ICollection System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
 Object_t * Builder_System_Collections_IDictionary_get_Values_m24284_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IDictionary_get_Values_m24284(__this, method) (Object_t *)Builder_System_Collections_IDictionary_get_Values_m24284_gshared((Builder_t5632 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Builder_System_Collections_ICollection_get_SyncRoot_m24285_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_SyncRoot_m24285(__this, method) (Object_t *)Builder_System_Collections_ICollection_get_SyncRoot_m24285_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Builder_System_Collections_ICollection_get_IsSynchronized_m24286_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_ICollection_get_IsSynchronized_m24286(__this, method) (bool)Builder_System_Collections_ICollection_get_IsSynchronized_m24286_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Builder_System_Collections_IDictionary_Add_m24287_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IDictionary_Add_m24287(__this, ___key, ___value, method) (void)Builder_System_Collections_IDictionary_Add_m24287_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
 bool Builder_System_Collections_IDictionary_Contains_m24288_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_System_Collections_IDictionary_Contains_m24288(__this, ___key, method) (bool)Builder_System_Collections_IDictionary_Contains_m24288_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Collections.IDictionaryEnumerator System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Builder_System_Collections_IDictionary_GetEnumerator_m24289_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IDictionary_GetEnumerator_m24289(__this, method) (Object_t *)Builder_System_Collections_IDictionary_GetEnumerator_m24289_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void Builder_System_Collections_IDictionary_Remove_m24290_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_System_Collections_IDictionary_Remove_m24290(__this, ___key, method) (void)Builder_System_Collections_IDictionary_Remove_m24290_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Object System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Builder_System_Collections_IDictionary_get_Item_m24291_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_System_Collections_IDictionary_get_Item_m24291(__this, ___key, method) (Object_t *)Builder_System_Collections_IDictionary_get_Item_m24291_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Builder_System_Collections_IDictionary_set_Item_m24292_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Builder_System_Collections_IDictionary_set_Item_m24292(__this, ___key, ___value, method) (void)Builder_System_Collections_IDictionary_set_Item_m24292_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Builder_System_Collections_ICollection_CopyTo_m24293_gshared (Builder_t5632 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_ICollection_CopyTo_m24293(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_ICollection_CopyTo_m24293_gshared((Builder_t5632 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Version()
 int32_t Builder_get_Version_m24294_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_Version_m24294(__this, method) (int32_t)Builder_get_Version_m24294_gshared((Builder_t5632 *)__this, method)
// System.Collections.Immutable.ImmutableDictionary`2/MutationInput<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Origin()
 MutationInput_t5635  Builder_get_Origin_m24295 (Builder_t5632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Root()
 SortedInt32KeyNode_1_t5629 * Builder_get_Root_m24296_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_get_Root_m24296(__this, method) (SortedInt32KeyNode_1_t5629 *)Builder_get_Root_m24296_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::set_Root(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>)
 void Builder_set_Root_m24297_gshared (Builder_t5632 * __this, SortedInt32KeyNode_1_t5629 * ___value, MethodInfo* method);
#define Builder_set_Root_m24297(__this, ___value, method) (void)Builder_set_Root_m24297_gshared((Builder_t5632 *)__this, (SortedInt32KeyNode_1_t5629 *)___value, method)
// TValue System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::get_Item(TKey)
 Object_t * Builder_get_Item_m24298_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_get_Item_m24298(__this, ___key, method) (Object_t *)Builder_get_Item_m24298_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::set_Item(TKey,TValue)
 void Builder_set_Item_m24299_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Builder_set_Item_m24299(__this, ___key, ___value, method) (void)Builder_set_Item_m24299_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 void Builder_AddRange_m24300_gshared (Builder_t5632 * __this, Object_t* ___items, MethodInfo* method);
#define Builder_AddRange_m24300(__this, ___items, method) (void)Builder_AddRange_m24300_gshared((Builder_t5632 *)__this, (Object_t*)___items, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::RemoveRange(System.Collections.Generic.IEnumerable`1<TKey>)
 void Builder_RemoveRange_m24301_gshared (Builder_t5632 * __this, Object_t* ___keys, MethodInfo* method);
#define Builder_RemoveRange_m24301(__this, ___keys, method) (void)Builder_RemoveRange_m24301_gshared((Builder_t5632 *)__this, (Object_t*)___keys, method)
// System.Collections.Immutable.ImmutableDictionary`2/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::GetEnumerator()
 Enumerator_t5636  Builder_GetEnumerator_m24302 (Builder_t5632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::GetValueOrDefault(TKey)
 Object_t * Builder_GetValueOrDefault_m24303_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_GetValueOrDefault_m24303(__this, ___key, method) (Object_t *)Builder_GetValueOrDefault_m24303_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::GetValueOrDefault(TKey,TValue)
 Object_t * Builder_GetValueOrDefault_m24304_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t * ___defaultValue, MethodInfo* method);
#define Builder_GetValueOrDefault_m24304(__this, ___key, ___defaultValue, method) (Object_t *)Builder_GetValueOrDefault_m24304_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t *)___defaultValue, method)
// System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::ToImmutable()
 ImmutableDictionary_2_t5627 * Builder_ToImmutable_m24305_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_ToImmutable_m24305(__this, method) (ImmutableDictionary_2_t5627 *)Builder_ToImmutable_m24305_gshared((Builder_t5632 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Add(TKey,TValue)
 void Builder_Add_m24306_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Builder_Add_m24306(__this, ___key, ___value, method) (void)Builder_Add_m24306_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::ContainsKey(TKey)
 bool Builder_ContainsKey_m24307_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_ContainsKey_m24307(__this, ___key, method) (bool)Builder_ContainsKey_m24307_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::ContainsValue(TValue)
 bool Builder_ContainsValue_m24308_gshared (Builder_t5632 * __this, Object_t * ___value, MethodInfo* method);
#define Builder_ContainsValue_m24308(__this, ___value, method) (bool)Builder_ContainsValue_m24308_gshared((Builder_t5632 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Remove(TKey)
 bool Builder_Remove_m24309_gshared (Builder_t5632 * __this, Object_t * ___key, MethodInfo* method);
#define Builder_Remove_m24309(__this, ___key, method) (bool)Builder_Remove_m24309_gshared((Builder_t5632 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool Builder_TryGetValue_m24310_gshared (Builder_t5632 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Builder_TryGetValue_m24310(__this, ___key, ___value, method) (bool)Builder_TryGetValue_m24310_gshared((Builder_t5632 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::TryGetKey(TKey,TKey&)
 bool Builder_TryGetKey_m24311_gshared (Builder_t5632 * __this, Object_t * ___equalKey, Object_t ** ___actualKey, MethodInfo* method);
#define Builder_TryGetKey_m24311(__this, ___equalKey, ___actualKey, method) (bool)Builder_TryGetKey_m24311_gshared((Builder_t5632 *)__this, (Object_t *)___equalKey, (Object_t **)___actualKey, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Builder_Add_m24312 (Builder_t5632 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Clear()
 void Builder_Clear_m24313_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_Clear_m24313(__this, method) (void)Builder_Clear_m24313_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Builder_Contains_m24314 (Builder_t5632 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24315_gshared (Builder_t5632 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24315(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24315_gshared((Builder_t5632 *)__this, (KeyValuePair_2U5BU5D_t4466*)___array, (int32_t)___arrayIndex, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Builder_Remove_m24316 (Builder_t5632 * __this, KeyValuePair_2_t4473  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24317_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24317(__this, method) (Object_t*)Builder_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24317_gshared((Builder_t5632 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m24318_gshared (Builder_t5632 * __this, MethodInfo* method);
#define Builder_System_Collections_IEnumerable_GetEnumerator_m24318(__this, method) (Object_t *)Builder_System_Collections_IEnumerable_GetEnumerator_m24318_gshared((Builder_t5632 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>::Apply(System.Collections.Immutable.ImmutableDictionary`2/MutationResult<TKey,TValue>)
 bool Builder_Apply_m24319 (Builder_t5632 * __this, MutationResult_t5637  ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
