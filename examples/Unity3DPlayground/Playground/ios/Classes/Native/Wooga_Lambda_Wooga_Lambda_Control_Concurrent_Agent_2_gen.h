#pragma once
#include <stdint.h>
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t5405;
// System.Object
#include "mscorlib_System_Object.h"
// Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>
struct Agent_2_t5406  : public Object_t
{
	// System.Collections.Generic.Queue`1<TM> Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::_inbox
	Queue_1_t5405 * ____inbox_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::_shouldCancel
	bool ____shouldCancel_1;
	// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<System.Object,System.Object>::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_2;
};
