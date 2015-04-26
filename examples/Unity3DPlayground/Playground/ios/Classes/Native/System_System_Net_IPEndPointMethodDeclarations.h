#pragma once

// System.Net.IPEndPoint
struct IPEndPoint_t1644;
// System.Net.IPAddress
struct IPAddress_t1658;
// System.Net.EndPoint
struct EndPoint_t1581;
// System.Net.SocketAddress
struct SocketAddress_t1589;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
 void IPEndPoint__ctor_m5101 (IPEndPoint_t1644 * __this, IPAddress_t1658 * ___address, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
 void IPEndPoint__ctor_m5102 (IPEndPoint_t1644 * __this, int64_t ___iaddr, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
 IPAddress_t1658 * IPEndPoint_get_Address_m5103 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
 void IPEndPoint_set_Address_m5104 (IPEndPoint_t1644 * __this, IPAddress_t1658 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
 int32_t IPEndPoint_get_AddressFamily_m5105 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
 int32_t IPEndPoint_get_Port_m5106 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
 void IPEndPoint_set_Port_m5107 (IPEndPoint_t1644 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
 EndPoint_t1581 * IPEndPoint_Create_m5108 (IPEndPoint_t1644 * __this, SocketAddress_t1589 * ___socketAddress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
 SocketAddress_t1589 * IPEndPoint_Serialize_m5109 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
 String_t* IPEndPoint_ToString_m5110 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
 bool IPEndPoint_Equals_m5111 (IPEndPoint_t1644 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
 int32_t IPEndPoint_GetHashCode_m5112 (IPEndPoint_t1644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
