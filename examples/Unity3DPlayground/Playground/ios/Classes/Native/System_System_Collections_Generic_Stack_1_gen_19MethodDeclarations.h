#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>
struct Stack_1_t5716;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>
struct IEnumerator_1_t5719;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>[]
struct RefAsValueType_1U5BU5D_t5717;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_171.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::.ctor()
 void Stack_1__ctor_m23915 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::.ctor(System.Int32)
 void Stack_1__ctor_m23916 (Stack_1_t5716 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::System.Collections.ICollection.get_IsSynchronized()
 bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m23917 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m23918 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Stack_1_System_Collections_ICollection_CopyTo_m23919 (Stack_1_t5716 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23920 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m23921 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::Clear()
 void Stack_1_Clear_m23922 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::CopyTo(T[],System.Int32)
 void Stack_1_CopyTo_m23923 (Stack_1_t5716 * __this, RefAsValueType_1U5BU5D_t5717* ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::Peek()
 RefAsValueType_1_t5718  Stack_1_Peek_m23924 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::Pop()
 RefAsValueType_1_t5718  Stack_1_Pop_m23925 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::Push(T)
 void Stack_1_Push_m23926 (Stack_1_t5716 * __this, RefAsValueType_1_t5718  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::ToArray()
 RefAsValueType_1U5BU5D_t5717* Stack_1_ToArray_m23927 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::get_Count()
 int32_t Stack_1_get_Count_m23928 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>>>::GetEnumerator()
 Enumerator_t5720  Stack_1_GetEnumerator_m23929 (Stack_1_t5716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
