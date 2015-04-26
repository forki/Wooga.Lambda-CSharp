#pragma once

// System.Net.IPAddress
struct IPAddress_t1658;
// System.UInt16[]
struct UInt16U5BU5D_t1657;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
 void IPAddress__ctor_m5081 (IPAddress_t1658 * __this, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
 void IPAddress__ctor_m5082 (IPAddress_t1658 * __this, UInt16U5BU5D_t1657* ___address, int64_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
 void IPAddress__cctor_m5083 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
 int16_t IPAddress_SwapShort_m5084 (Object_t * __this/* static, unused */, int16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
 int16_t IPAddress_HostToNetworkOrder_m5085 (Object_t * __this/* static, unused */, int16_t ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
 int16_t IPAddress_NetworkToHostOrder_m5086 (Object_t * __this/* static, unused */, int16_t ___network, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
 IPAddress_t1658 * IPAddress_Parse_m5087 (Object_t * __this/* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
 bool IPAddress_TryParse_m5088 (Object_t * __this/* static, unused */, String_t* ___ipString, IPAddress_t1658 ** ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
 IPAddress_t1658 * IPAddress_ParseIPV4_m5089 (Object_t * __this/* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
 IPAddress_t1658 * IPAddress_ParseIPV6_m5090 (Object_t * __this/* static, unused */, String_t* ___ip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
 int64_t IPAddress_get_InternalIPv4Address_m5091 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
 int64_t IPAddress_get_ScopeId_m5092 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
 ByteU5BU5D_t1071* IPAddress_GetAddressBytes_m5093 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
 int32_t IPAddress_get_AddressFamily_m5094 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
 bool IPAddress_IsLoopback_m5095 (Object_t * __this/* static, unused */, IPAddress_t1658 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
 String_t* IPAddress_ToString_m5096 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
 String_t* IPAddress_ToString_m5097 (Object_t * __this/* static, unused */, int64_t ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
 bool IPAddress_Equals_m5098 (IPAddress_t1658 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
 int32_t IPAddress_GetHashCode_m5099 (IPAddress_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t IPAddress_Hash_m5100 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
