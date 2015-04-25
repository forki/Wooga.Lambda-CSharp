#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct SecureObjectPool_2_t5685;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>>
struct SecurePooledObject_1_t5686;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>
struct Stack_1_t5691;
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_154.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m23692 (SecureObjectPool_2_t5685 * __this, Enumerator_t5684  ___caller, SecurePooledObject_1_t5686 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m23693 (SecureObjectPool_2_t5685 * __this, Enumerator_t5684  ___caller, SecurePooledObject_1_t5686 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5686 * SecureObjectPool_2_PrepNew_m23694 (SecureObjectPool_2_t5685 * __this, Enumerator_t5684  ___caller, Stack_1_t5691 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>::.ctor()
 void SecureObjectPool_2__ctor_m23695 (SecureObjectPool_2_t5685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
