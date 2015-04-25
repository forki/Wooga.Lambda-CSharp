#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>
struct SecureObjectPool_2_t5769;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>>
struct SecurePooledObject_1_t5770;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>
struct Stack_1_t5778;
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_186.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m24516 (SecureObjectPool_2_t5769 * __this, Enumerator_t5767  ___caller, SecurePooledObject_1_t5770 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m24517 (SecureObjectPool_2_t5769 * __this, Enumerator_t5767  ___caller, SecurePooledObject_1_t5770 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5770 * SecureObjectPool_2_PrepNew_m24518 (SecureObjectPool_2_t5769 * __this, Enumerator_t5767  ___caller, Stack_1_t5778 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>::.ctor()
 void SecureObjectPool_2__ctor_m24519 (SecureObjectPool_2_t5769 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
