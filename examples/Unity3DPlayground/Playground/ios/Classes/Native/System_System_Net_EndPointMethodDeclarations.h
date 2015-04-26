#pragma once

// System.Net.EndPoint
struct EndPoint_t1581;
// System.Net.SocketAddress
struct SocketAddress_t1589;
// System.Exception
struct Exception_t121;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.EndPoint::.ctor()
 void EndPoint__ctor_m4830 (EndPoint_t1581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
 int32_t EndPoint_get_AddressFamily_m4831 (EndPoint_t1581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
 EndPoint_t1581 * EndPoint_Create_m4832 (EndPoint_t1581 * __this, SocketAddress_t1589 * ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
 SocketAddress_t1589 * EndPoint_Serialize_m4833 (EndPoint_t1581 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
 Exception_t121 * EndPoint_NotImplemented_m4834 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
