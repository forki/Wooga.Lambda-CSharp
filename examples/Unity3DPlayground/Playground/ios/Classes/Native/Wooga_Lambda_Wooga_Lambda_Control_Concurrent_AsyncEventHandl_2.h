#pragma once
// System.Threading.ManualResetEvent
struct ManualResetEvent_t624;
// Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>
struct ImmutableList_1_t1089;
// System.Object
#include "mscorlib_System_Object.h"
// Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct AsyncEventHandle_1_t4412  : public Object_t
{
	// System.Threading.ManualResetEvent Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::DoneEvent
	ManualResetEvent_t624 * ___DoneEvent_0;
	// T Wooga.Lambda.Control.Concurrent.AsyncEventHandle`1<Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::_result
	ImmutableList_1_t1089 * ____result_1;
};
