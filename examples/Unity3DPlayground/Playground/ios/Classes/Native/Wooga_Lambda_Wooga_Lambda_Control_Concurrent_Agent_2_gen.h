#pragma once
// System.Collections.Generic.Queue`1<Wooga.Lambda.Logging.LoggingAgent/LogMsg>
struct Queue_1_t4375;
// System.Object
#include "mscorlib_System_Object.h"
// Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Agent_2_t1087  : public Object_t
{
	// System.Collections.Generic.Queue`1<TM> Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::_inbox
	Queue_1_t4375 * ____inbox_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::_shouldCancel
	bool ____shouldCancel_1;
	// System.Boolean Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_2;
};
