#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t606;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>
struct AsyncEventHandle_1_t5416  : public Object_t
{
	// System.Threading.ManualResetEvent Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>::DoneEvent
	ManualResetEvent_t606 * ___DoneEvent_0;
	// T Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<System.Object>::_result
	Object_t * ____result_1;
};
