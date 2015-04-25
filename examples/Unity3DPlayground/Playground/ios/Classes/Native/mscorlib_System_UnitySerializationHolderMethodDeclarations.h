#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t3975;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t3915;
// System.Reflection.Module
struct Module_t3405;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m13499 (UnitySerializationHolder_t3975 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m13500 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m13501 (Object_t * __this/* static, unused */, DBNull_t3915 * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m13502 (Object_t * __this/* static, unused */, Module_t3405 * ___instance, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m13503 (UnitySerializationHolder_t3975 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m13504 (UnitySerializationHolder_t3975 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
