#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>>
struct Action_1_t5758;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757  : public Object_t
{
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::_equalityComparer
	Object_t* ____equalityComparer_2;
	// System.Int32 System.Collections.Immutable.ImmutableHashSet`1<System.Object>::_count
	int32_t ____count_3;
	// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::_root
	SortedInt32KeyNode_1_t5759 * ____root_4;
};
struct ImmutableHashSet_1_t5757_StaticFields{
	// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Empty
	ImmutableHashSet_1_t5757 * ___Empty_0;
	// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::s_FreezeBucketAction
	Action_1_t5758 * ___s_FreezeBucketAction_1;
	// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::CS$<>9__CachedAnonymousMethodDelegate1
	Action_1_t5758 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate1_5;
};
