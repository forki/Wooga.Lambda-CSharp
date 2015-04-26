#pragma once

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t2479;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity__ctor_m10810 (WindowsIdentity_t2479 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
 void WindowsIdentity__cctor_m10811 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10812 (WindowsIdentity_t2479 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m10813 (WindowsIdentity_t2479 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
 void WindowsIdentity_Dispose_m10814 (WindowsIdentity_t2479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
 IntPtr_t37 WindowsIdentity_GetCurrentToken_m10815 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
 String_t* WindowsIdentity_GetTokenName_m10816 (Object_t * __this/* static, unused */, IntPtr_t37 ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
