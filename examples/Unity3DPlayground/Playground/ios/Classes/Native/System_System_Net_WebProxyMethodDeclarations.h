#pragma once

// System.Net.WebProxy
struct WebProxy_t1683;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.Uri
struct Uri_t1041;
// System.String[]
struct StringU5BU5D_t150;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m5357 (WebProxy_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m5358 (WebProxy_t1683 * __this, Uri_t1041 * ___address, bool ___bypassOnLocal, StringU5BU5D_t150* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m5359 (WebProxy_t1683 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m5360 (WebProxy_t1683 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
 Object_t * WebProxy_get_Credentials_m5361 (WebProxy_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m5362 (WebProxy_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t1041 * WebProxy_GetProxy_m5363 (WebProxy_t1683 * __this, Uri_t1041 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m5364 (WebProxy_t1683 * __this, Uri_t1041 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m5365 (WebProxy_t1683 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m5366 (WebProxy_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
