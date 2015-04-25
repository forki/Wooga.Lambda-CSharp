#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>>
struct SecureObjectPool_2_t5565;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>
struct SortedInt32KeyNode_1_t5559;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Object>>>>
struct SecurePooledObject_1_t5566;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>
struct Enumerator_t5563 
{
	// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>::_poolUserId
	int32_t ____poolUserId_1;
	// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>::_root
	SortedInt32KeyNode_1_t5559 * ____root_2;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<TValue>>>> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>::_stack
	SecurePooledObject_1_t5566 * ____stack_3;
	// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>::_current
	SortedInt32KeyNode_1_t5559 * ____current_4;
};
struct Enumerator_t5563_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<TValue>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<TValue>> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Object>::s_enumeratingStacks
	SecureObjectPool_2_t5565 * ___s_enumeratingStacks_0;
};
