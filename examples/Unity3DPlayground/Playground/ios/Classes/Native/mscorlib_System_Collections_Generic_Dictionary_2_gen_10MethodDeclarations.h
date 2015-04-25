#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t4465;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t4470;
// System.Collections.ICollection
struct ICollection_t975;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t4471;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t4472;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4466;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t976;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
 void Dictionary_2__ctor_m14444_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m14444(__this, method) (void)Dictionary_2__ctor_m14444_gshared((Dictionary_2_t4465 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m14446_gshared (Dictionary_2_t4465 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14446(__this, ___comparer, method) (void)Dictionary_2__ctor_m14446_gshared((Dictionary_2_t4465 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
 void Dictionary_2__ctor_m14448_gshared (Dictionary_2_t4465 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m14448(__this, ___capacity, method) (void)Dictionary_2__ctor_m14448_gshared((Dictionary_2_t4465 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m14450_gshared (Dictionary_2_t4465 * __this, int32_t ___capacity, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m14450(__this, ___capacity, ___comparer, method) (void)Dictionary_2__ctor_m14450_gshared((Dictionary_2_t4465 *)__this, (int32_t)___capacity, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m14452_gshared (Dictionary_2_t4465 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m14452(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m14452_gshared((Dictionary_2_t4465 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14454_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14454(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14454_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14456_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14456(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14456_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m14458_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m14458(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Keys_m14458_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m14460_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m14460(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Values_m14460_gshared((Dictionary_2_t4465 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14462_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14462(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14462_gshared((Dictionary_2_t4465 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14464_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14464(__this, method) (bool)Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14464_gshared((Dictionary_2_t4465 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14466_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14466(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m14466_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m14468_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14468(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m14468_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m14470_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14470(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m14470_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m14472_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14472(__this, ___key, method) (bool)Dictionary_2_System_Collections_IDictionary_Contains_m14472_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m14474_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14474(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m14474_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14476_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14476(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14476_gshared((Dictionary_2_t4465 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14478_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14478(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14478_gshared((Dictionary_2_t4465 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14480_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14480(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14480_gshared((Dictionary_2_t4465 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14539 (Dictionary_2_t4465 * __this, KeyValuePair_2_t4473  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14540 (Dictionary_2_t4465 * __this, KeyValuePair_2_t4473  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14484_gshared (Dictionary_2_t4465 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14484(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14484_gshared((Dictionary_2_t4465 *)__this, (KeyValuePair_2U5BU5D_t4466*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14541 (Dictionary_2_t4465 * __this, KeyValuePair_2_t4473  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m14487_gshared (Dictionary_2_t4465 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14487(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m14487_gshared((Dictionary_2_t4465 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14489_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14489(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14489_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14491_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14491(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14491_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14493_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14493(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14493_gshared((Dictionary_2_t4465 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
 int32_t Dictionary_2_get_Count_m14495_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m14495(__this, method) (int32_t)Dictionary_2_get_Count_m14495_gshared((Dictionary_2_t4465 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
 Object_t * Dictionary_2_get_Item_m14496_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m14496(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m14496_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m14498_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m14498(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m14498_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m14500_gshared (Dictionary_2_t4465 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m14500(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m14500_gshared((Dictionary_2_t4465 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m14502_gshared (Dictionary_2_t4465 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m14502(__this, ___size, method) (void)Dictionary_2_InitArrays_m14502_gshared((Dictionary_2_t4465 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m14504_gshared (Dictionary_2_t4465 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14504(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m14504_gshared((Dictionary_2_t4465 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t4473  Dictionary_2_make_pair_m14542 (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
 Object_t * Dictionary_2_pick_key_m14507_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m14507(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_key_m14507_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
 Object_t * Dictionary_2_pick_value_m14509_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m14509(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m14509_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m14511_gshared (Dictionary_2_t4465 * __this, KeyValuePair_2U5BU5D_t4466* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m14511(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m14511_gshared((Dictionary_2_t4465 *)__this, (KeyValuePair_2U5BU5D_t4466*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
 void Dictionary_2_Resize_m14513_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m14513(__this, method) (void)Dictionary_2_Resize_m14513_gshared((Dictionary_2_t4465 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
 void Dictionary_2_Add_m14514_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m14514(__this, ___key, ___value, method) (void)Dictionary_2_Add_m14514_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
 void Dictionary_2_Clear_m14516_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m14516(__this, method) (void)Dictionary_2_Clear_m14516_gshared((Dictionary_2_t4465 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m14517_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m14517(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m14517_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m14519_gshared (Dictionary_2_t4465 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m14519(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m14519_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m14521_gshared (Dictionary_2_t4465 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m14521(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m14521_gshared((Dictionary_2_t4465 *)__this, (SerializationInfo_t2614 *)___info, (StreamingContext_t2615 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m14523_gshared (Dictionary_2_t4465 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14523(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m14523_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
 bool Dictionary_2_Remove_m14524_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m14524(__this, ___key, method) (bool)Dictionary_2_Remove_m14524_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m14526_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m14526(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m14526_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
 KeyCollection_t4471 * Dictionary_2_get_Keys_m14528_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m14528(__this, method) (KeyCollection_t4471 *)Dictionary_2_get_Keys_m14528_gshared((Dictionary_2_t4465 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
 ValueCollection_t4472 * Dictionary_2_get_Values_m14530_gshared (Dictionary_2_t4465 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m14530(__this, method) (ValueCollection_t4472 *)Dictionary_2_get_Values_m14530_gshared((Dictionary_2_t4465 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m14532_gshared (Dictionary_2_t4465 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m14532(__this, ___key, method) (Object_t *)Dictionary_2_ToTKey_m14532_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
 Object_t * Dictionary_2_ToTValue_m14534_gshared (Dictionary_2_t4465 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m14534(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m14534_gshared((Dictionary_2_t4465 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m14543 (Dictionary_2_t4465 * __this, KeyValuePair_2_t4473  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
 Enumerator_t4475  Dictionary_2_GetEnumerator_m14544 (Dictionary_2_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1199  Dictionary_2_U3CCopyToU3Em__0_m14538_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14538(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1199 )Dictionary_2_U3CCopyToU3Em__0_m14538_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
