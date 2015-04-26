#pragma once

// System.Security.SecurityException
struct SecurityException_t1846;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2469;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
 void SecurityException__ctor_m10853 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
 void SecurityException__ctor_m6249 (SecurityException_t1846 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException__ctor_m10854 (SecurityException_t1846 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
 Object_t * SecurityException_get_Demanded_m10855 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
 Object_t * SecurityException_get_FirstPermissionThatFailed_m10856 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
 String_t* SecurityException_get_PermissionState_m10857 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
 Type_t * SecurityException_get_PermissionType_m10858 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
 String_t* SecurityException_get_GrantedSet_m10859 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
 String_t* SecurityException_get_RefusedSet_m10860 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException_GetObjectData_m10861 (SecurityException_t1846 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
 String_t* SecurityException_ToString_m10862 (SecurityException_t1846 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
