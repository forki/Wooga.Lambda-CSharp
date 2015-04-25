#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t3606;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Version
struct Version_t2996;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Byte[]
struct ByteU5BU5D_t961;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
 void AssemblyName__ctor_m11319 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName__ctor_m11320 (AssemblyName_t3606 * __this, SerializationInfo_t2614 * ___si, StreamingContext_t2615  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
 String_t* AssemblyName_get_Name_m11321 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
 void AssemblyName_set_Name_m11322 (AssemblyName_t3606 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_CultureInfo(System.Globalization.CultureInfo)
 void AssemblyName_set_CultureInfo_m11323 (AssemblyName_t3606 * __this, CultureInfo_t921 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
 int32_t AssemblyName_get_Flags_m11324 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
 String_t* AssemblyName_get_FullName_m11325 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
 Version_t2996 * AssemblyName_get_Version_m11326 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
 void AssemblyName_set_Version_m11327 (AssemblyName_t3606 * __this, Version_t2996 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
 String_t* AssemblyName_ToString_m11328 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
 bool AssemblyName_get_IsPublicKeyValid_m11329 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
 ByteU5BU5D_t961* AssemblyName_InternalGetPublicKeyToken_m11330 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
 ByteU5BU5D_t961* AssemblyName_ComputePublicKeyToken_m11331 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
 void AssemblyName_SetPublicKey_m11332 (AssemblyName_t3606 * __this, ByteU5BU5D_t961* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
 void AssemblyName_SetPublicKeyToken_m11333 (AssemblyName_t3606 * __this, ByteU5BU5D_t961* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName_GetObjectData_m11334 (AssemblyName_t3606 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
 Object_t * AssemblyName_Clone_m11335 (AssemblyName_t3606 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
 void AssemblyName_OnDeserialization_m11336 (AssemblyName_t3606 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
