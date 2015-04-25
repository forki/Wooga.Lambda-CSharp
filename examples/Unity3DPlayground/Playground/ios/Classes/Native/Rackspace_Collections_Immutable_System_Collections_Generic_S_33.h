#pragma once
#include <stdint.h>
// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedSet`1<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Generic_S_27.h"
// System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>
struct TreeSubSet_t5510  : public SortedSet_1_t5495
{
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::underlying
	SortedSet_1_t5495 * ___underlying_15;
	// T System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::min
	Object_t * ___min_16;
	// T System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::max
	Object_t * ___max_17;
	// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::lBoundActive
	bool ___lBoundActive_18;
	// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::uBoundActive
	bool ___uBoundActive_19;
};
