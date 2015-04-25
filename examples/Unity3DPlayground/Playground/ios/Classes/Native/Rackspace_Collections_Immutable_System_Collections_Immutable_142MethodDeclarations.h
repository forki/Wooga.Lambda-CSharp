#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct SecureObjectPool_2_t5651;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>>
struct SecurePooledObject_1_t5652;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>
struct Stack_1_t5653;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_141.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m23235 (SecureObjectPool_2_t5651 * __this, Enumerator_t5650  ___caller, SecurePooledObject_1_t5652 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m23236 (SecureObjectPool_2_t5651 * __this, Enumerator_t5650  ___caller, SecurePooledObject_1_t5652 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5652 * SecureObjectPool_2_PrepNew_m23237 (SecureObjectPool_2_t5651 * __this, Enumerator_t5650  ___caller, Stack_1_t5653 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor()
 void SecureObjectPool_2__ctor_m23238 (SecureObjectPool_2_t5651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
