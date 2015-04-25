#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>>
struct SecureObjectPool_2_t5539;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>>
struct SecurePooledObject_1_t5540;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>
struct Stack_1_t5545;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_106.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m22352 (SecureObjectPool_2_t5539 * __this, Enumerator_t5538  ___caller, SecurePooledObject_1_t5540 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m22353 (SecureObjectPool_2_t5539 * __this, Enumerator_t5538  ___caller, SecurePooledObject_1_t5540 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5540 * SecureObjectPool_2_PrepNew_m22354 (SecureObjectPool_2_t5539 * __this, Enumerator_t5538  ___caller, Stack_1_t5545 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Object>>::.ctor()
 void SecureObjectPool_2__ctor_m22355 (SecureObjectPool_2_t5539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
