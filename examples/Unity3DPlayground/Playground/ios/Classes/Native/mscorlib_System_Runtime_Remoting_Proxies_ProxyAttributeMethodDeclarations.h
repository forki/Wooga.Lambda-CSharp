#pragma once

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t2369;
// System.MarshalByRefObject
struct MarshalByRefObject_t1684;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2370;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2371;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2331;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
 MarshalByRefObject_t1684 * ProxyAttribute_CreateInstance_m10250 (ProxyAttribute_t2369 * __this, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
 RealProxy_t2370 * ProxyAttribute_CreateProxy_m10251 (ProxyAttribute_t2369 * __this, ObjRef_t2371 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t2332 * ___serverContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ProxyAttribute_GetPropertiesForNewContext_m10252 (ProxyAttribute_t2369 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ProxyAttribute_IsContextOK_m10253 (ProxyAttribute_t2369 * __this, Context_t2332 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
