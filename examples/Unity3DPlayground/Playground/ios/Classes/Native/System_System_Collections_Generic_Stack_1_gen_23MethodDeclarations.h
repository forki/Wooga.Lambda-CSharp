#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>
struct Stack_1_t5824;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>
struct IEnumerator_1_t5827;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>[]
struct RefAsValueType_1U5BU5D_t5825;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_221.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::.ctor()
 void Stack_1__ctor_m24913 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::.ctor(System.Int32)
 void Stack_1__ctor_m24914 (Stack_1_t5824 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::System.Collections.ICollection.get_IsSynchronized()
 bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m24915 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m24916 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Stack_1_System_Collections_ICollection_CopyTo_m24917 (Stack_1_t5824 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24918 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m24919 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::Clear()
 void Stack_1_Clear_m24920 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::CopyTo(T[],System.Int32)
 void Stack_1_CopyTo_m24921 (Stack_1_t5824 * __this, RefAsValueType_1U5BU5D_t5825* ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::Peek()
 RefAsValueType_1_t5826  Stack_1_Peek_m24922 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::Pop()
 RefAsValueType_1_t5826  Stack_1_Pop_m24923 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::Push(T)
 void Stack_1_Push_m24924 (Stack_1_t5824 * __this, RefAsValueType_1_t5826  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::ToArray()
 RefAsValueType_1U5BU5D_t5825* Stack_1_ToArray_m24925 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::get_Count()
 int32_t Stack_1_get_Count_m24926 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>>>::GetEnumerator()
 Enumerator_t5828  Stack_1_GetEnumerator_m24927 (Stack_1_t5824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
