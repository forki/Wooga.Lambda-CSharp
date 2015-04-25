#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Collections.Generic.HashSet`1/Link<System.Int32>[]
struct LinkU5BU5D_t4770;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4768  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Int32>::table
	Int32U5BU5D_t156* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Int32>::links
	LinkU5BU5D_t4770* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.Int32>::slots
	Int32U5BU5D_t156* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Int32>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Int32>::si
	SerializationInfo_t2614 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::generation
	int32_t ___generation_9;
};
