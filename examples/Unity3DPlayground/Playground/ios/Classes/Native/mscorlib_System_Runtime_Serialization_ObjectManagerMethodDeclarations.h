#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3736;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.Object
struct Object_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3786;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t2709;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
 void ObjectManager__ctor_m11974 (ObjectManager_t3778 * __this, Object_t * ___selector, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
 void ObjectManager_DoFixups_m11975 (ObjectManager_t3778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
 ObjectRecord_t3785 * ObjectManager_GetObjectRecord_m11976 (ObjectManager_t3778 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
 Object_t * ObjectManager_GetObject_m11977 (ObjectManager_t3778 * __this, int64_t ___objectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
 void ObjectManager_RaiseDeserializationEvent_m11978 (ObjectManager_t3778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
 void ObjectManager_RaiseOnDeserializingEvent_m11979 (ObjectManager_t3778 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
 void ObjectManager_RaiseOnDeserializedEvent_m11980 (ObjectManager_t3778 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
 void ObjectManager_AddFixup_m11981 (ObjectManager_t3778 * __this, BaseFixupRecord_t3786 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11982 (ObjectManager_t3778 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
 void ObjectManager_RecordArrayElementFixup_m11983 (ObjectManager_t3778 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t156* ___indices, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
 void ObjectManager_RecordDelayedFixup_m11984 (ObjectManager_t3778 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
 void ObjectManager_RecordFixup_m11985 (ObjectManager_t3778 * __this, int64_t ___objectToBeFixed, MemberInfo_t2709 * ___member, int64_t ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
 void ObjectManager_RegisterObjectInternal_m11986 (ObjectManager_t3778 * __this, Object_t * ___obj, ObjectRecord_t3785 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
 void ObjectManager_RegisterObject_m11987 (ObjectManager_t3778 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t2614 * ___info, int64_t ___idOfContainingObj, MemberInfo_t2709 * ___member, Int32U5BU5D_t156* ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
