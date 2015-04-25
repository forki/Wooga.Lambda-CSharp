#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>
struct Stack_1_t5567;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>
struct IEnumerator_1_t5570;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>[]
struct RefAsValueType_1U5BU5D_t5568;
// System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_122.h"
// System.Collections.Generic.Stack`1/Enumerator<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::.ctor()
 void Stack_1__ctor_m22486 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::.ctor(System.Int32)
 void Stack_1__ctor_m22487 (Stack_1_t5567 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::System.Collections.ICollection.get_IsSynchronized()
 bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m22488 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m22489 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Stack_1_System_Collections_ICollection_CopyTo_m22490 (Stack_1_t5567 * __this, Array_t * ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22491 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m22492 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::Clear()
 void Stack_1_Clear_m22493 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::CopyTo(T[],System.Int32)
 void Stack_1_CopyTo_m22494 (Stack_1_t5567 * __this, RefAsValueType_1U5BU5D_t5568* ___dest, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::Peek()
 RefAsValueType_1_t5569  Stack_1_Peek_m22495 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::Pop()
 RefAsValueType_1_t5569  Stack_1_Pop_m22496 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::Push(T)
 void Stack_1_Push_m22497 (Stack_1_t5567 * __this, RefAsValueType_1_t5569  ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::ToArray()
 RefAsValueType_1U5BU5D_t5568* Stack_1_ToArray_m22498 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::get_Count()
 int32_t Stack_1_get_Count_m22499 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>::GetEnumerator()
 Enumerator_t5571  Stack_1_GetEnumerator_m22500 (Stack_1_t5567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
