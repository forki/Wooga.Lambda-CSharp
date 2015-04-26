#pragma once

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2404;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2363;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2411;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2412;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t1357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void ObjectManager__ctor_m10395 (ObjectManager_t2404 * __this, Object_t * ___selector, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
 void ObjectManager_DoFixups_m10396 (ObjectManager_t2404 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
 ObjectRecord_t2411 * ObjectManager_GetObjectRecord_m10397 (ObjectManager_t2404 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
 Object_t * ObjectManager_GetObject_m10398 (ObjectManager_t2404 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
 void ObjectManager_RaiseDeserializationEvent_m10399 (ObjectManager_t2404 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
 void ObjectManager_RaiseOnDeserializingEvent_m10400 (ObjectManager_t2404 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
 void ObjectManager_RaiseOnDeserializedEvent_m10401 (ObjectManager_t2404 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
 void ObjectManager_AddFixup_m10402 (ObjectManager_t2404 * __this, BaseFixupRecord_t2412 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
 void ObjectManager_RecordArrayElementFixup_m10403 (ObjectManager_t2404 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
 void ObjectManager_RecordArrayElementFixup_m10404 (ObjectManager_t2404 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t1424* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
 void ObjectManager_RecordDelayedFixup_m10405 (ObjectManager_t2404 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
 void ObjectManager_RecordFixup_m10406 (ObjectManager_t2404 * __this, int64_t ___objectToBeFixed, MemberInfo_t1357 * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
 void ObjectManager_RegisterObjectInternal_m10407 (ObjectManager_t2404 * __this, Object_t * ___obj, ObjectRecord_t2411 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectManager_RegisterObject_m10408 (ObjectManager_t2404 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t1255 * ___info, int64_t ___idOfContainingObj, MemberInfo_t1357 * ___member, Int32U5BU5D_t1424* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
