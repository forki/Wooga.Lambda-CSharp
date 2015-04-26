#pragma once

// System.Reflection.AssemblyName
struct AssemblyName_t2241;
// System.String
struct String_t;
// System.Version
struct Version_t1648;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
 void AssemblyName__ctor_m9784 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName__ctor_m9785 (AssemblyName_t2241 * __this, SerializationInfo_t1255 * ___si, StreamingContext_t1256  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
 String_t* AssemblyName_get_Name_m9786 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
 int32_t AssemblyName_get_Flags_m9787 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
 String_t* AssemblyName_get_FullName_m9788 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
 Version_t1648 * AssemblyName_get_Version_m9789 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
 void AssemblyName_set_Version_m9790 (AssemblyName_t2241 * __this, Version_t1648 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
 String_t* AssemblyName_ToString_m9791 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
 bool AssemblyName_get_IsPublicKeyValid_m9792 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
 ByteU5BU5D_t1071* AssemblyName_InternalGetPublicKeyToken_m9793 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
 ByteU5BU5D_t1071* AssemblyName_ComputePublicKeyToken_m9794 (AssemblyName_t2241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
 void AssemblyName_SetPublicKey_m9795 (AssemblyName_t2241 * __this, ByteU5BU5D_t1071* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
 void AssemblyName_SetPublicKeyToken_m9796 (AssemblyName_t2241 * __this, ByteU5BU5D_t1071* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName_GetObjectData_m9797 (AssemblyName_t2241 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
 void AssemblyName_OnDeserialization_m9798 (AssemblyName_t2241 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
