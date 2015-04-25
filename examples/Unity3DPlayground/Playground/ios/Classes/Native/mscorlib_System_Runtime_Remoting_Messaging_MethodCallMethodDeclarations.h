#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t3722;
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
// System.Type[]
struct TypeU5BU5D_t2588;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3729;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
 void MethodCall__ctor_m11740 (MethodCall_t3722 * __this, HeaderU5BU5D_t3729* ___h1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall__ctor_m11741 (MethodCall_t3722 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
 void MethodCall__ctor_m11742 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m11743 (MethodCall_t3722 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
 void MethodCall_InitMethodProperty_m11744 (MethodCall_t3722 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall_GetObjectData_m11745 (MethodCall_t3722 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
 ObjectU5BU5D_t126* MethodCall_get_Args_m11746 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
 LogicalCallContext_t3728 * MethodCall_get_LogicalCallContext_m11747 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
 MethodBase_t2717 * MethodCall_get_MethodBase_m11748 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
 String_t* MethodCall_get_MethodName_m11749 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
 Object_t * MethodCall_get_MethodSignature_m11750 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
 Object_t * MethodCall_get_Properties_m11751 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
 void MethodCall_InitDictionary_m11752 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
 String_t* MethodCall_get_TypeName_m11753 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
 String_t* MethodCall_get_Uri_m11754 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
 void MethodCall_set_Uri_m11755 (MethodCall_t3722 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
 void MethodCall_Init_m11756 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
 void MethodCall_ResolveMethod_m11757 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
 Type_t * MethodCall_CastTo_m11758 (MethodCall_t3722 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
 String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m11759 (Object_t * __this/* static, unused */, String_t* ___aqname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
 TypeU5BU5D_t2588* MethodCall_get_GenericArguments_m11760 (MethodCall_t3722 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
