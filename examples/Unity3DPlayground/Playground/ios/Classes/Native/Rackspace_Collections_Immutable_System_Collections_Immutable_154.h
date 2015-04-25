#pragma once
#include <stdint.h>
// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct SecureObjectPool_2_t5685;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>>>
struct SecurePooledObject_1_t5686;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct Enumerator_t5684 
{
	// System.Int32 System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::_poolUserId
	int32_t ____poolUserId_1;
	// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::_root
	SortedInt32KeyNode_1_t5629 * ____root_2;
	// System.Collections.Immutable.SecurePooledObject`1<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<TValue>>>> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::_stack
	SecurePooledObject_1_t5686 * ____stack_3;
	// System.Collections.Immutable.SortedInt32KeyNode`1<TValue> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::_current
	SortedInt32KeyNode_1_t5629 * ____current_4;
};
struct Enumerator_t5684_StaticFields{
	// System.Collections.Immutable.SecureObjectPool`2<System.Collections.Generic.Stack`1<System.Collections.Immutable.RefAsValueType`1<System.Collections.Immutable.SortedInt32KeyNode`1<TValue>>>,System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<TValue>> System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>::s_enumeratingStacks
	SecureObjectPool_2_t5685 * ___s_enumeratingStacks_0;
};
