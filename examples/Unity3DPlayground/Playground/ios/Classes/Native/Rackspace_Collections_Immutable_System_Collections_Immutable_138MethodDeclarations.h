#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>
struct Enumerator_t5642;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_136.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>)
 void Enumerator__ctor_m23616 (Enumerator_t5642 * __this, HashBucket_t5638  ___bucket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23617_gshared (Enumerator_t5642 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23617(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m23617_gshared((Enumerator_t5642 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::get_Current()
 KeyValuePair_2_t4473  Enumerator_get_Current_m23618 (Enumerator_t5642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::MoveNext()
 bool Enumerator_MoveNext_m23619_gshared (Enumerator_t5642 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m23619(__this, method) (bool)Enumerator_MoveNext_m23619_gshared((Enumerator_t5642 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::Reset()
 void Enumerator_Reset_m23620_gshared (Enumerator_t5642 * __this, MethodInfo* method);
#define Enumerator_Reset_m23620(__this, method) (void)Enumerator_Reset_m23620_gshared((Enumerator_t5642 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>::Dispose()
 void Enumerator_Dispose_m23621_gshared (Enumerator_t5642 * __this, MethodInfo* method);
#define Enumerator_Dispose_m23621(__this, method) (void)Enumerator_Dispose_m23621_gshared((Enumerator_t5642 *)__this, method)
