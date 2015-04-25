#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>
struct HashBucket_t5638;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t5641;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4474;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Object
struct Object_t;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_138.h"
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_136.h"
// System.Collections.Immutable.ImmutableDictionary`2/KeyCollisionBehavior<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_135.h"
// System.Collections.Immutable.ImmutableDictionary`2/OperationResult<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_139.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::.ctor(System.Collections.Generic.KeyValuePair`2<TKey,TValue>,System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
 void HashBucket__ctor_m23144 (HashBucket_t5638 * __this, KeyValuePair_2_t4473  ___firstElement, Node_t5641 * ___additionalElements, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::get_IsEmpty()
 bool HashBucket_get_IsEmpty_m23145_gshared (HashBucket_t5638 * __this, MethodInfo* method);
#define HashBucket_get_IsEmpty_m23145(__this, method) (bool)HashBucket_get_IsEmpty_m23145_gshared((HashBucket_t5638 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::get_FirstValue()
 KeyValuePair_2_t4473  HashBucket_get_FirstValue_m23146 (HashBucket_t5638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::get_AdditionalElements()
 Node_t5641 * HashBucket_get_AdditionalElements_m23147_gshared (HashBucket_t5638 * __this, MethodInfo* method);
#define HashBucket_get_AdditionalElements_m23147(__this, method) (Node_t5641 *)HashBucket_get_AdditionalElements_m23147_gshared((HashBucket_t5638 *)__this, method)
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::GetEnumerator()
 Enumerator_t5642  HashBucket_GetEnumerator_m23148 (HashBucket_t5638 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* HashBucket_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23149_gshared (HashBucket_t5638 * __this, MethodInfo* method);
#define HashBucket_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23149(__this, method) (Object_t*)HashBucket_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23149_gshared((HashBucket_t5638 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * HashBucket_System_Collections_IEnumerable_GetEnumerator_m23150_gshared (HashBucket_t5638 * __this, MethodInfo* method);
#define HashBucket_System_Collections_IEnumerable_GetEnumerator_m23150(__this, method) (Object_t *)HashBucket_System_Collections_IEnumerable_GetEnumerator_m23150_gshared((HashBucket_t5638 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::System.IEquatable<System.Collections.Immutable.ImmutableDictionary<TKey,TValue>.HashBucket>.Equals(System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>)
 bool HashBucket_System_IEquatableU3CSystem_Collections_Immutable_ImmutableDictionaryU3CTKeyU2CTValueU3E_HashBucketU3E_Equals_m23151 (HashBucket_t5638 * __this, HashBucket_t5638  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::Add(TKey,TValue,System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Collections.Generic.IEqualityComparer`1<TValue>,System.Collections.Immutable.ImmutableDictionary`2/KeyCollisionBehavior<TKey,TValue>,System.Collections.Immutable.ImmutableDictionary`2/OperationResult<TKey,TValue>&)
 HashBucket_t5638  HashBucket_Add_m23152 (HashBucket_t5638 * __this, Object_t * ___key, Object_t * ___value, Object_t* ___keyOnlyComparer, Object_t* ___valueComparer, int32_t ___behavior, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::Remove(TKey,System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,System.Collections.Immutable.ImmutableDictionary`2/OperationResult<TKey,TValue>&)
 HashBucket_t5638  HashBucket_Remove_m23153 (HashBucket_t5638 * __this, Object_t * ___key, Object_t* ___keyOnlyComparer, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::TryGetValue(TKey,System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,TValue&)
 bool HashBucket_TryGetValue_m23154_gshared (HashBucket_t5638 * __this, Object_t * ___key, Object_t* ___keyOnlyComparer, Object_t ** ___value, MethodInfo* method);
#define HashBucket_TryGetValue_m23154(__this, ___key, ___keyOnlyComparer, ___value, method) (bool)HashBucket_TryGetValue_m23154_gshared((HashBucket_t5638 *)__this, (Object_t *)___key, (Object_t*)___keyOnlyComparer, (Object_t **)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::TryGetKey(TKey,System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>,TKey&)
 bool HashBucket_TryGetKey_m23155_gshared (HashBucket_t5638 * __this, Object_t * ___equalKey, Object_t* ___keyOnlyComparer, Object_t ** ___actualKey, MethodInfo* method);
#define HashBucket_TryGetKey_m23155(__this, ___equalKey, ___keyOnlyComparer, ___actualKey, method) (bool)HashBucket_TryGetKey_m23155_gshared((HashBucket_t5638 *)__this, (Object_t *)___equalKey, (Object_t*)___keyOnlyComparer, (Object_t **)___actualKey, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>::Freeze()
 void HashBucket_Freeze_m23156_gshared (HashBucket_t5638 * __this, MethodInfo* method);
#define HashBucket_Freeze_m23156(__this, method) (void)HashBucket_Freeze_m23156_gshared((HashBucket_t5638 *)__this, method)
