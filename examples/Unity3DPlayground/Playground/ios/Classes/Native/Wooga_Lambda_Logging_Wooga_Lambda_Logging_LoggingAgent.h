#pragma once
// Wooga.Lambda.Logging.LoggingAgent modreq(System.Runtime.CompilerServices.IsVolatile)
struct LoggingAgent_t128;
// System.Object
struct Object_t;
// Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Agent_2_t1087;
// System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Func_3_t1088;
// System.Object
#include "mscorlib_System_Object.h"
// Wooga.Lambda.Logging.LoggingAgent
struct LoggingAgent_t128  : public Object_t
{
	// Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>> Wooga.Lambda.Logging.LoggingAgent::_agent
	Agent_2_t1087 * ____agent_2;
};
struct LoggingAgent_t128_StaticFields{
	// Wooga.Lambda.Logging.LoggingAgent modreq(System.Runtime.CompilerServices.IsVolatile) Wooga.Lambda.Logging.LoggingAgent::_instance
	LoggingAgent_t128 * ____instance_0;
	// System.Object Wooga.Lambda.Logging.LoggingAgent::SyncRoot
	Object_t * ___SyncRoot_1;
	// System.Func`3<Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>> Wooga.Lambda.Logging.LoggingAgent::CS$<>9__CachedAnonymousMethodDelegate2
	Func_3_t1088 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate2_3;
};
