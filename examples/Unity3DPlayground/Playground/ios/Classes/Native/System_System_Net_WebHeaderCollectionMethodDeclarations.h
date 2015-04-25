#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2986;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2971;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
 void WebHeaderCollection__ctor_m6775 (WebHeaderCollection_t2986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection__ctor_m6776 (WebHeaderCollection_t2986 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
 void WebHeaderCollection__ctor_m6777 (WebHeaderCollection_t2986 * __this, bool ___internallyCreated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
 void WebHeaderCollection__cctor_m6778 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m6779 (WebHeaderCollection_t2986 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
 void WebHeaderCollection_Add_m6780 (WebHeaderCollection_t2986 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
 void WebHeaderCollection_AddWithoutValidate_m6781 (WebHeaderCollection_t2986 * __this, String_t* ___headerName, String_t* ___headerValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
 bool WebHeaderCollection_IsRestricted_m6782 (Object_t * __this/* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
 void WebHeaderCollection_OnDeserialization_m6783 (WebHeaderCollection_t2986 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
 String_t* WebHeaderCollection_ToString_m6784 (WebHeaderCollection_t2986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_GetObjectData_m6785 (WebHeaderCollection_t2986 * __this, SerializationInfo_t2614 * ___serializationInfo, StreamingContext_t2615  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
 int32_t WebHeaderCollection_get_Count_m6786 (WebHeaderCollection_t2986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
 KeysCollection_t2971 * WebHeaderCollection_get_Keys_m6787 (WebHeaderCollection_t2986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
 String_t* WebHeaderCollection_Get_m6788 (WebHeaderCollection_t2986 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
 String_t* WebHeaderCollection_GetKey_m6789 (WebHeaderCollection_t2986 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
 Object_t * WebHeaderCollection_GetEnumerator_m6790 (WebHeaderCollection_t2986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
 bool WebHeaderCollection_IsHeaderValue_m6791 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
 bool WebHeaderCollection_IsHeaderName_m6792 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
