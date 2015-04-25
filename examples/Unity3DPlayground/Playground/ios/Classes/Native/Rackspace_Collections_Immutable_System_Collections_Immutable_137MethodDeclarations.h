#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>
struct Comparers_t5630;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct IEqualityComparer_1_t5634;
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_136.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 void Comparers__ctor_m23132_gshared (Comparers_t5630 * __this, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define Comparers__ctor_m23132(__this, ___keyComparer, ___valueComparer, method) (void)Comparers__ctor_m23132_gshared((Comparers_t5630 *)__this, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::get_KeyComparer()
 Object_t* Comparers_get_KeyComparer_m23133_gshared (Comparers_t5630 * __this, MethodInfo* method);
#define Comparers_get_KeyComparer_m23133(__this, method) (Object_t*)Comparers_get_KeyComparer_m23133_gshared((Comparers_t5630 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::get_KeyOnlyComparer()
 Object_t* Comparers_get_KeyOnlyComparer_m23134_gshared (Comparers_t5630 * __this, MethodInfo* method);
#define Comparers_get_KeyOnlyComparer_m23134(__this, method) (Object_t*)Comparers_get_KeyOnlyComparer_m23134_gshared((Comparers_t5630 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<TValue> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::get_ValueComparer()
 Object_t* Comparers_get_ValueComparer_m23135_gshared (Comparers_t5630 * __this, MethodInfo* method);
#define Comparers_get_ValueComparer_m23135(__this, method) (Object_t*)Comparers_get_ValueComparer_m23135_gshared((Comparers_t5630 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::get_HashBucketEqualityComparer()
 Object_t* Comparers_get_HashBucketEqualityComparer_m23136_gshared (Comparers_t5630 * __this, MethodInfo* method);
#define Comparers_get_HashBucketEqualityComparer_m23136(__this, method) (Object_t*)Comparers_get_HashBucketEqualityComparer_m23136_gshared((Comparers_t5630 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::Equals(System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>)
 bool Comparers_Equals_m23137 (Comparers_t5630 * __this, HashBucket_t5638  ___x, HashBucket_t5638  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::GetHashCode(System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>)
 int32_t Comparers_GetHashCode_m23138 (Comparers_t5630 * __this, HashBucket_t5638  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::System.Collections.Generic.IEqualityComparer<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Equals(System.Collections.Generic.KeyValuePair`2<TKey,TValue>,System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Comparers_System_Collections_Generic_IEqualityComparerU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Equals_m23139 (Comparers_t5630 * __this, KeyValuePair_2_t4473  ___x, KeyValuePair_2_t4473  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::System.Collections.Generic.IEqualityComparer<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetHashCode(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 int32_t Comparers_System_Collections_Generic_IEqualityComparerU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetHashCode_m23140 (Comparers_t5630 * __this, KeyValuePair_2_t4473  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableDictionary`2/Comparers<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::Get(System.Collections.Generic.IEqualityComparer`1<TKey>,System.Collections.Generic.IEqualityComparer`1<TValue>)
 Comparers_t5630 * Comparers_Get_m23141_gshared (Object_t * __this/* static, unused */, Object_t* ___keyComparer, Object_t* ___valueComparer, MethodInfo* method);
#define Comparers_Get_m23141(__this/* static, unused */, ___keyComparer, ___valueComparer, method) (Comparers_t5630 *)Comparers_Get_m23141_gshared((Object_t *)__this/* static, unused */, (Object_t*)___keyComparer, (Object_t*)___valueComparer, method)
// System.Collections.Immutable.ImmutableDictionary`2/Comparers<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::WithValueComparer(System.Collections.Generic.IEqualityComparer`1<TValue>)
 Comparers_t5630 * Comparers_WithValueComparer_m23142_gshared (Comparers_t5630 * __this, Object_t* ___valueComparer, MethodInfo* method);
#define Comparers_WithValueComparer_m23142(__this, ___valueComparer, method) (Comparers_t5630 *)Comparers_WithValueComparer_m23142_gshared((Comparers_t5630 *)__this, (Object_t*)___valueComparer, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>::.cctor()
 void Comparers__cctor_m23143_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define Comparers__cctor_m23143(__this/* static, unused */, method) (void)Comparers__cctor_m23143_gshared((Object_t *)__this/* static, unused */, method)
