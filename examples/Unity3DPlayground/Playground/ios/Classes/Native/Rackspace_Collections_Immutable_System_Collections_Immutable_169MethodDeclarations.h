#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>
struct SecureObjectPool_2_t5714;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>>
struct SecurePooledObject_1_t5715;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>
struct Stack_1_t5716;
// System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_167.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m23908 (SecureObjectPool_2_t5714 * __this, Enumerator_t5710  ___caller, SecurePooledObject_1_t5715 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m23909 (SecureObjectPool_2_t5714 * __this, Enumerator_t5710  ___caller, SecurePooledObject_1_t5715 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5715 * SecureObjectPool_2_PrepNew_m23910 (SecureObjectPool_2_t5714 * __this, Enumerator_t5710  ___caller, Stack_1_t5716 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>,System.Collections.Immutable.ImmutableSortedDictionary`2/Enumerator<System.Object,System.Object>>::.ctor()
 void SecureObjectPool_2__ctor_m23911 (SecureObjectPool_2_t5714 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
