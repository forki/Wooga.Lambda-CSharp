#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>
struct SecureObjectPool_2_t4706;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>>
struct SecurePooledObject_1_t4707;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>
struct Stack_1_t4722;
// System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_90.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m16457 (SecureObjectPool_2_t4706 * __this, Enumerator_t4705  ___caller, SecurePooledObject_1_t4707 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m16458 (SecureObjectPool_2_t4706 * __this, Enumerator_t4705  ___caller, SecurePooledObject_1_t4707 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t4707 * SecureObjectPool_2_PrepNew_m16459 (SecureObjectPool_2_t4706 * __this, Enumerator_t4705  ___caller, Stack_1_t4722 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Int32>>>,System.Collections.Immutable.ImmutableList`1/Enumerator<System.Int32>>::.ctor()
 void SecureObjectPool_2__ctor_m16460 (SecureObjectPool_2_t4706 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
