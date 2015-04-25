#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t3718;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3728;
// System.Reflection.MethodBase
struct MethodBase_t2717;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t115;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
 ObjectU5BU5D_t126* MonoMethodMessage_get_Args_m11795 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
 LogicalCallContext_t3728 * MonoMethodMessage_get_LogicalCallContext_m11796 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
 MethodBase_t2717 * MonoMethodMessage_get_MethodBase_m11797 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
 String_t* MonoMethodMessage_get_MethodName_m11798 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
 Object_t * MonoMethodMessage_get_MethodSignature_m11799 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
 String_t* MonoMethodMessage_get_TypeName_m11800 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
 String_t* MonoMethodMessage_get_Uri_m11801 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
 void MonoMethodMessage_set_Uri_m11802 (MonoMethodMessage_t3718 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
 Exception_t115 * MonoMethodMessage_get_Exception_m11803 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
 int32_t MonoMethodMessage_get_OutArgCount_m11804 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
 ObjectU5BU5D_t126* MonoMethodMessage_get_OutArgs_m11805 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
 Object_t * MonoMethodMessage_get_ReturnValue_m11806 (MonoMethodMessage_t3718 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
