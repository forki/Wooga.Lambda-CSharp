#pragma once

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2374;
// System.MarshalByRefObject
struct MarshalByRefObject_t1684;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2371;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
 void ClientIdentity__ctor_m10281 (ClientIdentity_t2374 * __this, String_t* ___objectUri, ObjRef_t2371 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
 MarshalByRefObject_t1684 * ClientIdentity_get_ClientProxy_m10282 (ClientIdentity_t2374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
 void ClientIdentity_set_ClientProxy_m10283 (ClientIdentity_t2374 * __this, MarshalByRefObject_t1684 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
 ObjRef_t2371 * ClientIdentity_CreateObjRef_m10284 (ClientIdentity_t2374 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
 String_t* ClientIdentity_get_TargetUri_m10285 (ClientIdentity_t2374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
