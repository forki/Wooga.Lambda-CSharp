#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t3740;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3728;
// System.Reflection.MethodBase
struct MethodBase_t2717;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t2963;
// System.Exception
struct Exception_t115;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t3741;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m11814 (ReturnMessage_t3740 * __this, Object_t * ___ret, ObjectU5BU5D_t126* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t3728 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m11815 (ReturnMessage_t3740 * __this, Exception_t115 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m11816 (ReturnMessage_t3740 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
 ObjectU5BU5D_t126* ReturnMessage_get_Args_m11817 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
 LogicalCallContext_t3728 * ReturnMessage_get_LogicalCallContext_m11818 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
 MethodBase_t2717 * ReturnMessage_get_MethodBase_m11819 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
 String_t* ReturnMessage_get_MethodName_m11820 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
 Object_t * ReturnMessage_get_MethodSignature_m11821 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
 Object_t * ReturnMessage_get_Properties_m11822 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
 String_t* ReturnMessage_get_TypeName_m11823 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
 String_t* ReturnMessage_get_Uri_m11824 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
 void ReturnMessage_set_Uri_m11825 (ReturnMessage_t3740 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
 Exception_t115 * ReturnMessage_get_Exception_m11826 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
 ObjectU5BU5D_t126* ReturnMessage_get_OutArgs_m11827 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
 Object_t * ReturnMessage_get_ReturnValue_m11828 (ReturnMessage_t3740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
