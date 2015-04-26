#pragma once

// System.Runtime.Remoting.Contexts.ContextAttribute
struct ContextAttribute_t2330;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2331;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;

// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
 void ContextAttribute__ctor_m10106 (ContextAttribute_t2330 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
 String_t* ContextAttribute_get_Name_m10107 (ContextAttribute_t2330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
 bool ContextAttribute_Equals_m10108 (ContextAttribute_t2330 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
 int32_t ContextAttribute_GetHashCode_m10109 (ContextAttribute_t2330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ContextAttribute_GetPropertiesForNewContext_m10110 (ContextAttribute_t2330 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ContextAttribute_IsContextOK_m10111 (ContextAttribute_t2330 * __this, Context_t2332 * ___ctx, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
