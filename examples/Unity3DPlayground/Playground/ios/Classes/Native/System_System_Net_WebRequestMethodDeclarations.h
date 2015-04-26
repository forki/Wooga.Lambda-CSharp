#pragma once

// System.Net.WebRequest
struct WebRequest_t1065;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1629;
// System.Uri
struct Uri_t1041;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Exception
struct Exception_t121;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1049;
// System.Net.WebResponse
struct WebResponse_t1066;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t1685;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
 void WebRequest__ctor_m5367 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest__ctor_m5368 (WebRequest_t1065 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
 void WebRequest__cctor_m5369 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5370 (WebRequest_t1065 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
 void WebRequest_AddDynamicPrefix_m5371 (Object_t * __this/* static, unused */, String_t* ___protocol, String_t* ___implementor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
 Exception_t121 * WebRequest_GetMustImplement_m5372 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
 int64_t WebRequest_get_ContentLength_m5373 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
 Object_t * WebRequest_get_Credentials_m5374 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
 WebHeaderCollection_t1051 * WebRequest_get_Headers_m5375 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection)
 void WebRequest_set_Headers_m3011 (WebRequest_t1065 * __this, WebHeaderCollection_t1051 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
 String_t* WebRequest_get_Method_m5376 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Method(System.String)
 void WebRequest_set_Method_m3012 (WebRequest_t1065 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
 Object_t * WebRequest_get_Proxy_m5377 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
 Uri_t1041 * WebRequest_get_RequestUri_m5378 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
 Object_t * WebRequest_get_DefaultWebProxy_m5379 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
 Object_t * WebRequest_GetDefaultWebProxy_m5380 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
 void WebRequest_Abort_m5381 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
 Object_t * WebRequest_BeginGetRequestStream_m5382 (WebRequest_t1065 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * WebRequest_BeginGetResponse_m5383 (WebRequest_t1065 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
 WebRequest_t1065 * WebRequest_Create_m3010 (Object_t * __this/* static, unused */, Uri_t1041 * ___requestUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult)
 Stream_t1049 * WebRequest_EndGetRequestStream_m5384 (WebRequest_t1065 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t1066 * WebRequest_EndGetResponse_m5385 (WebRequest_t1065 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::GetRequestStream()
 Stream_t1049 * WebRequest_GetRequestStream_m3014 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
 WebResponse_t1066 * WebRequest_GetResponse_m2993 (WebRequest_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_GetObjectData_m5386 (WebRequest_t1065 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
 Object_t * WebRequest_GetCreator_m5387 (Object_t * __this/* static, unused */, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
 void WebRequest_AddPrefix_m5388 (Object_t * __this/* static, unused */, String_t* ___prefix, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
