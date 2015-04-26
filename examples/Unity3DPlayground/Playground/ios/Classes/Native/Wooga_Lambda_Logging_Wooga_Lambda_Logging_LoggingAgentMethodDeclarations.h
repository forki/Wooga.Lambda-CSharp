#pragma once

// Wooga.Lambda.Logging.LoggingAgent
struct LoggingAgent_t128;
// Wooga.Lambda.Data.Unit
struct Unit_t33;
// Wooga.Lambda.Logging.LoggingAgent/LogMsg
struct LogMsg_t34;
// System.String
struct String_t;
// System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>
struct Func_2_t31;
// Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>
struct ImmutableList_1_t1089;
// Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>
struct Agent_2_t1087;

// System.Void Wooga.Lambda.Logging.LoggingAgent::.ctor()
 void LoggingAgent__ctor_m3050 (LoggingAgent_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Logging.LoggingAgent Wooga.Lambda.Logging.LoggingAgent::get_SharedAgent()
 LoggingAgent_t128 * LoggingAgent_get_SharedAgent_m391 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::PostLog(Wooga.Lambda.Logging.LoggingAgent/LogMsg)
 Unit_t33 * LoggingAgent_PostLog_m3051 (LoggingAgent_t128 * __this, LogMsg_t34 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::Debug(System.String)
 Unit_t33 * LoggingAgent_Debug_m407 (LoggingAgent_t128 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::Info(System.String)
 Unit_t33 * LoggingAgent_Info_m3052 (LoggingAgent_t128 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::Warn(System.String)
 Unit_t33 * LoggingAgent_Warn_m3053 (LoggingAgent_t128 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::Error(System.String)
 Unit_t33 * LoggingAgent_Error_m3054 (LoggingAgent_t128 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::Fatal(System.String)
 Unit_t33 * LoggingAgent_Fatal_m3055 (LoggingAgent_t128 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.Unit Wooga.Lambda.Logging.LoggingAgent::AddHandler(System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>)
 Unit_t33 * LoggingAgent_AddHandler_m393 (LoggingAgent_t128 * __this, Func_2_t31 * ___handler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>> Wooga.Lambda.Logging.LoggingAgent::<.ctor>b__0(Wooga.Lambda.Control.Concurrent.Agent`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>>,Wooga.Lambda.Data.ImmutableList`1<System.Func`2<Wooga.Lambda.Logging.LoggingAgent/LogMsg,Wooga.Lambda.Data.Unit>>)
 ImmutableList_1_t1089 * LoggingAgent_U3C_ctorU3Eb__0_m3056 (Object_t * __this/* static, unused */, Agent_2_t1087 * ___inbox, ImmutableList_1_t1089 * ___handlers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Logging.LoggingAgent::.cctor()
 void LoggingAgent__cctor_m3057 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
