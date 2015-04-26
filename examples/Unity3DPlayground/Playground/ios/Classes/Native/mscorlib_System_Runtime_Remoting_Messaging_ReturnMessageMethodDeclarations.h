#pragma once

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t2367;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2355;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1537;
// System.Exception
struct Exception_t121;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2368;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m10235 (ReturnMessage_t2367 * __this, Object_t * ___ret, ObjectU5BU5D_t149* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t2355 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m10236 (ReturnMessage_t2367 * __this, Exception_t121 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10237 (ReturnMessage_t2367 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
 ObjectU5BU5D_t149* ReturnMessage_get_Args_m10238 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
 LogicalCallContext_t2355 * ReturnMessage_get_LogicalCallContext_m10239 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
 MethodBase_t1367 * ReturnMessage_get_MethodBase_m10240 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
 String_t* ReturnMessage_get_MethodName_m10241 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
 Object_t * ReturnMessage_get_MethodSignature_m10242 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
 Object_t * ReturnMessage_get_Properties_m10243 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
 String_t* ReturnMessage_get_TypeName_m10244 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
 String_t* ReturnMessage_get_Uri_m10245 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
 void ReturnMessage_set_Uri_m10246 (ReturnMessage_t2367 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
 Exception_t121 * ReturnMessage_get_Exception_m10247 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
 ObjectU5BU5D_t149* ReturnMessage_get_OutArgs_m10248 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
 Object_t * ReturnMessage_get_ReturnValue_m10249 (ReturnMessage_t2367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
