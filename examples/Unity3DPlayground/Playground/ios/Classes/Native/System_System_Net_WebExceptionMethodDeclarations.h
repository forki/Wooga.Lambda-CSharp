#pragma once

// System.Net.WebException
struct WebException_t1067;
// System.Net.WebResponse
struct WebResponse_t1066;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Exception
struct Exception_t121;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebException::.ctor()
 void WebException__ctor_m5319 (WebException_t1067 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
 void WebException__ctor_m5320 (WebException_t1067 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException__ctor_m5321 (WebException_t1067 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
 void WebException__ctor_m5322 (WebException_t1067 * __this, String_t* ___message, Exception_t121 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
 void WebException__ctor_m5323 (WebException_t1067 * __this, String_t* ___message, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
 void WebException__ctor_m5324 (WebException_t1067 * __this, String_t* ___message, Exception_t121 * ___innerException, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
 void WebException__ctor_m5325 (WebException_t1067 * __this, String_t* ___message, Exception_t121 * ___innerException, int32_t ___status, WebResponse_t1066 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m5326 (WebException_t1067 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebException::get_Response()
 WebResponse_t1066 * WebException_get_Response_m2994 (WebException_t1067 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
 int32_t WebException_get_Status_m5327 (WebException_t1067 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException_GetObjectData_m5328 (WebException_t1067 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
