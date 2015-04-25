#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>
struct SecureObjectPool_2_t5821;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>>
struct SecurePooledObject_1_t5822;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>
struct Stack_1_t5824;
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_215.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m24906 (SecureObjectPool_2_t5821 * __this, Enumerator_t5820  ___caller, SecurePooledObject_1_t5822 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m24907 (SecureObjectPool_2_t5821 * __this, Enumerator_t5820  ___caller, SecurePooledObject_1_t5822 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5822 * SecureObjectPool_2_PrepNew_m24908 (SecureObjectPool_2_t5821 * __this, Enumerator_t5820  ___caller, Stack_1_t5824 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>,System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>>::.ctor()
 void SecureObjectPool_2__ctor_m24909 (SecureObjectPool_2_t5821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
