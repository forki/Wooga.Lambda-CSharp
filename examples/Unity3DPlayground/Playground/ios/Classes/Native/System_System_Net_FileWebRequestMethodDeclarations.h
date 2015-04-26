#pragma once

// System.Net.FileWebRequest
struct FileWebRequest_t1624;
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
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
 void FileWebRequest__ctor_m4845 (FileWebRequest_t1624 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest__ctor_m4846 (FileWebRequest_t1624 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4847 (FileWebRequest_t1624 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
 int64_t FileWebRequest_get_ContentLength_m4848 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
 Object_t * FileWebRequest_get_Credentials_m4849 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
 WebHeaderCollection_t1051 * FileWebRequest_get_Headers_m4850 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
 String_t* FileWebRequest_get_Method_m4851 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Method(System.String)
 void FileWebRequest_set_Method_m4852 (FileWebRequest_t1624 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
 Object_t * FileWebRequest_get_Proxy_m4853 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
 Uri_t1041 * FileWebRequest_get_RequestUri_m4854 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
 Exception_t121 * FileWebRequest_GetMustImplement_m4855 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
 void FileWebRequest_Abort_m4856 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
 Object_t * FileWebRequest_BeginGetRequestStream_m4857 (FileWebRequest_t1624 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::EndGetRequestStream(System.IAsyncResult)
 Stream_t1049 * FileWebRequest_EndGetRequestStream_m4858 (FileWebRequest_t1624 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::GetRequestStream()
 Stream_t1049 * FileWebRequest_GetRequestStream_m4859 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::GetRequestStreamInternal()
 Stream_t1049 * FileWebRequest_GetRequestStreamInternal_m4860 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * FileWebRequest_BeginGetResponse_m4861 (FileWebRequest_t1624 * __this, AsyncCallback_t189 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t1066 * FileWebRequest_EndGetResponse_m4862 (FileWebRequest_t1624 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
 WebResponse_t1066 * FileWebRequest_GetResponse_m4863 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
 WebResponse_t1066 * FileWebRequest_GetResponseInternal_m4864 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest_GetObjectData_m4865 (FileWebRequest_t1624 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
 void FileWebRequest_Close_m4866 (FileWebRequest_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
