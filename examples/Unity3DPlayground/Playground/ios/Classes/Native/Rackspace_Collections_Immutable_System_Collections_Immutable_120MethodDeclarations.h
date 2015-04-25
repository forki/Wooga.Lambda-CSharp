#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>
struct SecureObjectPool_2_t5565;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>>
struct SecurePooledObject_1_t5566;
// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>
struct Stack_1_t5567;
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_118.h"

// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>::TryAdd(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>)
 void SecureObjectPool_2_TryAdd_m22479 (SecureObjectPool_2_t5565 * __this, Enumerator_t5563  ___caller, SecurePooledObject_1_t5566 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>::TryTake(TCaller,System.Collections.Immutable.SecurePooledObject`1<T>&)
 bool SecureObjectPool_2_TryTake_m22480 (SecureObjectPool_2_t5565 * __this, Enumerator_t5563  ___caller, SecurePooledObject_1_t5566 ** ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SecurePooledObject`1<T> System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>::PrepNew(TCaller,T)
 SecurePooledObject_1_t5566 * SecureObjectPool_2_PrepNew_m22481 (SecureObjectPool_2_t5565 * __this, Enumerator_t5563  ___caller, Stack_1_t5567 * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>::.ctor()
 void SecureObjectPool_2__ctor_m22482 (SecureObjectPool_2_t5565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
