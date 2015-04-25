#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>
struct ImmutableDictionary_2_t5627;
// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>>
struct Action_1_t5628;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>
struct Comparers_t5630;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>
struct ImmutableDictionary_2_t5627  : public Object_t
{
	// System.Int32 System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::_count
	int32_t ____count_2;
	// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::_root
	SortedInt32KeyNode_1_t5629 * ____root_3;
	// System.Collections.Immutable.ImmutableDictionary`2/Comparers<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::_comparers
	Comparers_t5630 * ____comparers_4;
};
struct ImmutableDictionary_2_t5627_StaticFields{
	// System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::Empty
	ImmutableDictionary_2_t5627 * ___Empty_0;
	// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>> System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::s_FreezeBucketAction
	Action_1_t5628 * ___s_FreezeBucketAction_1;
	// System.Action`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>> System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>::CS$<>9__CachedAnonymousMethodDelegate13
	Action_1_t5628 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate13_5;
};
