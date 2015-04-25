#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t2999;
// System.Uri
struct Uri_t2985;
// System.Net.ServicePoint
struct ServicePoint_t2982;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
 void HttpWebRequest__ctor_m6706 (HttpWebRequest_t2999 * __this, Uri_t2985 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest__ctor_m6707 (HttpWebRequest_t2999 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
 void HttpWebRequest__cctor_m6708 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6709 (HttpWebRequest_t2999 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
 Uri_t2985 * HttpWebRequest_get_Address_m6710 (HttpWebRequest_t2999 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
 ServicePoint_t2982 * HttpWebRequest_get_ServicePoint_m6711 (HttpWebRequest_t2999 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
 ServicePoint_t2982 * HttpWebRequest_GetServicePoint_m6712 (HttpWebRequest_t2999 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_GetObjectData_m6713 (HttpWebRequest_t2999 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
