#pragma once
#include <stdint.h>
// System.Collections.Immutable.ImmutableQueue`1<System.Object>
struct ImmutableQueue_1_t5806;
// System.Collections.Immutable.ImmutableStack`1<System.Object>
struct ImmutableStack_1_t5802;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Immutable.ImmutableQueue`1/EnumeratorObject<System.Object>
struct EnumeratorObject_t5809  : public Object_t
{
	// System.Collections.Immutable.ImmutableQueue`1<T> System.Collections.Immutable.ImmutableQueue`1/EnumeratorObject<System.Object>::_originalQueue
	ImmutableQueue_1_t5806 * ____originalQueue_0;
	// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableQueue`1/EnumeratorObject<System.Object>::_remainingForwardsStack
	ImmutableStack_1_t5802 * ____remainingForwardsStack_1;
	// System.Collections.Immutable.ImmutableStack`1<T> System.Collections.Immutable.ImmutableQueue`1/EnumeratorObject<System.Object>::_remainingBackwardsStack
	ImmutableStack_1_t5802 * ____remainingBackwardsStack_2;
	// System.Boolean System.Collections.Immutable.ImmutableQueue`1/EnumeratorObject<System.Object>::_disposed
	bool ____disposed_3;
};
