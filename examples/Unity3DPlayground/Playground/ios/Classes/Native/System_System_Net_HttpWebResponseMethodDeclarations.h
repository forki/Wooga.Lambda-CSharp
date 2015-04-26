#pragma once

// System.Net.HttpWebResponse
struct HttpWebResponse_t1046;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String
struct String_t;
// System.Uri
struct Uri_t1041;
// System.Net.WebConnectionData
struct WebConnectionData_t1655;
// System.Net.CookieContainer
struct CookieContainer_t1611;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.IO.Stream
struct Stream_t1049;
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
 void HttpWebResponse__ctor_m5060 (HttpWebResponse_t1046 * __this, Uri_t1041 * ___uri, String_t* ___method, WebConnectionData_t1655 * ___data, CookieContainer_t1611 * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse__ctor_m5061 (HttpWebResponse_t1046 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m5062 (HttpWebResponse_t1046 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
 void HttpWebResponse_System_IDisposable_Dispose_m5063 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
 WebHeaderCollection_t1051 * HttpWebResponse_get_Headers_m5064 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
 int32_t HttpWebResponse_get_StatusCode_m2998 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
 String_t* HttpWebResponse_get_StatusDescription_m5065 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
 void HttpWebResponse_ReadAll_m5066 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
 Stream_t1049 * HttpWebResponse_GetResponseStream_m5067 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse_GetObjectData_m5068 (HttpWebResponse_t1046 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
 void HttpWebResponse_Close_m5069 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
 void HttpWebResponse_Dispose_m5070 (HttpWebResponse_t1046 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
 void HttpWebResponse_CheckDisposed_m5071 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
 void HttpWebResponse_FillCookies_m5072 (HttpWebResponse_t1046 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
 void HttpWebResponse_SetCookie_m5073 (HttpWebResponse_t1046 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
 void HttpWebResponse_SetCookie2_m5074 (HttpWebResponse_t1046 * __this, String_t* ___cookies_str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
 DateTime_t1141  HttpWebResponse_TryParseCookieExpires_m5075 (HttpWebResponse_t1046 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
