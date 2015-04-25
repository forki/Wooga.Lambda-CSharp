#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<System.Object,System.Object>
struct Node_t5708;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Immutable.ImmutableSortedDictionary`2<System.Object,System.Object>
struct ImmutableSortedDictionary_2_t5707;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5709  : public Object_t
{
	// System.Collections.Immutable.ImmutableSortedDictionary`2/Node<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_root
	Node_t5708 * ____root_0;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_keyComparer
	Object_t* ____keyComparer_1;
	// System.Collections.Generic.IEqualityComparer`1<TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_valueComparer
	Object_t* ____valueComparer_2;
	// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_count
	int32_t ____count_3;
	// System.Collections.Immutable.ImmutableSortedDictionary`2<TKey,TValue> System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_immutable
	ImmutableSortedDictionary_2_t5707 * ____immutable_4;
	// System.Int32 System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_version
	int32_t ____version_5;
	// System.Object System.Collections.Immutable.ImmutableSortedDictionary`2/Builder<System.Object,System.Object>::_syncRoot
	Object_t * ____syncRoot_6;
};
