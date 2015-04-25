#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OperatingSystem
struct OperatingSystem_t3934;
// System.Version
struct Version_t2996;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.String
struct String_t;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
 void OperatingSystem__ctor_m13401 (OperatingSystem_t3934 * __this, int32_t ___platform, Version_t2996 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
 int32_t OperatingSystem_get_Platform_m13402 (OperatingSystem_t3934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
 Object_t * OperatingSystem_Clone_m13403 (OperatingSystem_t3934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void OperatingSystem_GetObjectData_m13404 (OperatingSystem_t3934 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
 String_t* OperatingSystem_ToString_m13405 (OperatingSystem_t3934 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
