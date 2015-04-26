#pragma once

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// System.String[]
struct StringU5BU5D_t150;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1546;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
 void WebHeaderCollection__ctor_m3026 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection__ctor_m5329 (WebHeaderCollection_t1051 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
 void WebHeaderCollection__ctor_m5330 (WebHeaderCollection_t1051 * __this, bool ___internallyCreated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
 void WebHeaderCollection__cctor_m5331 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m5332 (WebHeaderCollection_t1051 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String)
 void WebHeaderCollection_Add_m5333 (WebHeaderCollection_t1051 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
 void WebHeaderCollection_Add_m5334 (WebHeaderCollection_t1051 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
 void WebHeaderCollection_AddWithoutValidate_m5335 (WebHeaderCollection_t1051 * __this, String_t* ___headerName, String_t* ___headerValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
 StringU5BU5D_t150* WebHeaderCollection_GetValues_m5336 (WebHeaderCollection_t1051 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
 bool WebHeaderCollection_IsRestricted_m5337 (Object_t * __this/* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
 void WebHeaderCollection_OnDeserialization_m5338 (WebHeaderCollection_t1051 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.String)
 void WebHeaderCollection_Remove_m5339 (WebHeaderCollection_t1051 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
 void WebHeaderCollection_Set_m5340 (WebHeaderCollection_t1051 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
 String_t* WebHeaderCollection_ToString_m5341 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebHeaderCollection_GetObjectData_m5342 (WebHeaderCollection_t1051 * __this, SerializationInfo_t1255 * ___serializationInfo, StreamingContext_t1256  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::get_AllKeys()
 StringU5BU5D_t150* WebHeaderCollection_get_AllKeys_m5343 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
 int32_t WebHeaderCollection_get_Count_m5344 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
 KeysCollection_t1546 * WebHeaderCollection_get_Keys_m5345 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
 String_t* WebHeaderCollection_Get_m5346 (WebHeaderCollection_t1051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.String)
 String_t* WebHeaderCollection_Get_m5347 (WebHeaderCollection_t1051 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
 String_t* WebHeaderCollection_GetKey_m5348 (WebHeaderCollection_t1051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
 Object_t * WebHeaderCollection_GetEnumerator_m5349 (WebHeaderCollection_t1051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String)
 void WebHeaderCollection_SetInternal_m5350 (WebHeaderCollection_t1051 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
 void WebHeaderCollection_SetInternal_m5351 (WebHeaderCollection_t1051 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveAndAdd(System.String,System.String)
 void WebHeaderCollection_RemoveAndAdd_m5352 (WebHeaderCollection_t1051 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
 void WebHeaderCollection_RemoveInternal_m5353 (WebHeaderCollection_t1051 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsMultiValue(System.String)
 bool WebHeaderCollection_IsMultiValue_m5354 (Object_t * __this/* static, unused */, String_t* ___headerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
 bool WebHeaderCollection_IsHeaderValue_m5355 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
 bool WebHeaderCollection_IsHeaderName_m5356 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
