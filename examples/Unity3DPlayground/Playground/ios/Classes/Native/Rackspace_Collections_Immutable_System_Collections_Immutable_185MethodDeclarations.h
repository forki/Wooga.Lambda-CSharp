#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>
struct HashBucket_t5765;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableList`1/Node<System.Object>
struct Node_t5535;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_187.h"
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_185.h"
// System.Collections.Immutable.ImmutableHashSet`1/OperationResult<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_188.h"

// System.Void System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::.ctor(T,System.Collections.Immutable.ImmutableList`1/Node<T>)
 void HashBucket__ctor_m24457_gshared (HashBucket_t5765 * __this, Object_t * ___firstElement, Node_t5535 * ___additionalElements, MethodInfo* method);
#define HashBucket__ctor_m24457(__this, ___firstElement, ___additionalElements, method) (void)HashBucket__ctor_m24457_gshared((HashBucket_t5765 *)__this, (Object_t *)___firstElement, (Node_t5535 *)___additionalElements, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::get_IsEmpty()
 bool HashBucket_get_IsEmpty_m24458_gshared (HashBucket_t5765 * __this, MethodInfo* method);
#define HashBucket_get_IsEmpty_m24458(__this, method) (bool)HashBucket_get_IsEmpty_m24458_gshared((HashBucket_t5765 *)__this, method)
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket/Enumerator<T> System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::GetEnumerator()
 Enumerator_t5768  HashBucket_GetEnumerator_m24459 (HashBucket_t5765 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T> System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::Add(T,System.Collections.Generic.IEqualityComparer`1<T>,System.Collections.Immutable.ImmutableHashSet`1/OperationResult<T>&)
 HashBucket_t5765  HashBucket_Add_m24460 (HashBucket_t5765 * __this, Object_t * ___value, Object_t* ___valueComparer, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::Contains(T,System.Collections.Generic.IEqualityComparer`1<T>)
 bool HashBucket_Contains_m24461_gshared (HashBucket_t5765 * __this, Object_t * ___value, Object_t* ___valueComparer, MethodInfo* method);
#define HashBucket_Contains_m24461(__this, ___value, ___valueComparer, method) (bool)HashBucket_Contains_m24461_gshared((HashBucket_t5765 *)__this, (Object_t *)___value, (Object_t*)___valueComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::TryExchange(T,System.Collections.Generic.IEqualityComparer`1<T>,T&)
 bool HashBucket_TryExchange_m24462_gshared (HashBucket_t5765 * __this, Object_t * ___value, Object_t* ___valueComparer, Object_t ** ___existingValue, MethodInfo* method);
#define HashBucket_TryExchange_m24462(__this, ___value, ___valueComparer, ___existingValue, method) (bool)HashBucket_TryExchange_m24462_gshared((HashBucket_t5765 *)__this, (Object_t *)___value, (Object_t*)___valueComparer, (Object_t **)___existingValue, method)
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T> System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::Remove(T,System.Collections.Generic.IEqualityComparer`1<T>,System.Collections.Immutable.ImmutableHashSet`1/OperationResult<T>&)
 HashBucket_t5765  HashBucket_Remove_m24463 (HashBucket_t5765 * __this, Object_t * ___value, Object_t* ___equalityComparer, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>::Freeze()
 void HashBucket_Freeze_m24464_gshared (HashBucket_t5765 * __this, MethodInfo* method);
#define HashBucket_Freeze_m24464(__this, method) (void)HashBucket_Freeze_m24464_gshared((HashBucket_t5765 *)__this, method)
