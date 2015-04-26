#pragma once

// System.Net.Sockets.SocketException
struct SocketException_t1591;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.Sockets.SocketException::.ctor()
 void SocketException__ctor_m4679 (SocketException_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
 void SocketException__ctor_m4680 (SocketException_t1591 * __this, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SocketException__ctor_m4681 (SocketException_t1591 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
 void SocketException__ctor_m4682 (SocketException_t1591 * __this, int32_t ___error, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
 int32_t SocketException_WSAGetLastError_internal_m4683 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
 int32_t SocketException_get_SocketErrorCode_m4684 (SocketException_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Sockets.SocketException::get_Message()
 String_t* SocketException_get_Message_m4685 (SocketException_t1591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
