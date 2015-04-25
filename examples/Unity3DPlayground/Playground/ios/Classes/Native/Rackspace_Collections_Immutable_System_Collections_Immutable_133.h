#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5632;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_154.h"
// System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_138.h"
// System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5636 
{
	// System.Collections.Immutable.ImmutableDictionary`2/Builder<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::_builder
	Builder_t5632 * ____builder_0;
	// System.Collections.Immutable.SortedInt32KeyNode`1/Enumerator<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::_mapEnumerator
	Enumerator_t5684  ____mapEnumerator_1;
	// System.Collections.Immutable.ImmutableDictionary`2/HashBucket/Enumerator<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::_bucketEnumerator
	Enumerator_t5642  ____bucketEnumerator_2;
	// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::_enumeratingBuilderVersion
	int32_t ____enumeratingBuilderVersion_3;
};
