#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>
struct Stack_1_t5653;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>
struct IEnumerator_1_t5656;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>[]
struct RefAsValueType_1U5BU5D_t5654;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_144.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::.ctor()
 void Stack_1__ctor_m23242 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::.ctor(System.Int32)
 void Stack_1__ctor_m23243 (Stack_1_t5653 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::System.Collections.ICollection.get_IsSynchronized()
 bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m23244 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m23245 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Stack_1_System_Collections_ICollection_CopyTo_m23246 (Stack_1_t5653 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23247 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m23248 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::Clear()
 void Stack_1_Clear_m23249 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::CopyTo(T[],System.Int32)
 void Stack_1_CopyTo_m23250 (Stack_1_t5653 * __this, RefAsValueType_1U5BU5D_t5654* ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::Peek()
 RefAsValueType_1_t5655  Stack_1_Peek_m23251 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::Pop()
 RefAsValueType_1_t5655  Stack_1_Pop_m23252 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::Push(T)
 void Stack_1_Push_m23253 (Stack_1_t5653 * __this, RefAsValueType_1_t5655  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::ToArray()
 RefAsValueType_1U5BU5D_t5654* Stack_1_ToArray_m23254 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::get_Count()
 int32_t Stack_1_get_Count_m23255 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableList`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>>::GetEnumerator()
 Enumerator_t5657  Stack_1_GetEnumerator_m23256 (Stack_1_t5653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
