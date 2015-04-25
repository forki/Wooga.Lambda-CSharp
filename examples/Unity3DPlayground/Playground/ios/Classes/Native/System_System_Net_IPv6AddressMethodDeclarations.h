#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPv6Address
struct IPv6Address_t3002;
// System.UInt16[]
struct UInt16U5BU5D_t3000;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
 void IPv6Address__ctor_m6733 (IPv6Address_t3002 * __this, UInt16U5BU5D_t3000* ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
 void IPv6Address__ctor_m6734 (IPv6Address_t3002 * __this, UInt16U5BU5D_t3000* ___addr, int32_t ___prefixLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
 void IPv6Address__ctor_m6735 (IPv6Address_t3002 * __this, UInt16U5BU5D_t3000* ___addr, int32_t ___prefixLength, int32_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
 void IPv6Address__cctor_m6736 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
 IPv6Address_t3002 * IPv6Address_Parse_m6737 (Object_t * __this/* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
 int32_t IPv6Address_Fill_m6738 (Object_t * __this/* static, unused */, UInt16U5BU5D_t3000* ___addr, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
 bool IPv6Address_TryParse_m6739 (Object_t * __this/* static, unused */, String_t* ___prefix, int32_t* ___res, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
 bool IPv6Address_TryParse_m6740 (Object_t * __this/* static, unused */, String_t* ___ipString, IPv6Address_t3002 ** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
 UInt16U5BU5D_t3000* IPv6Address_get_Address_m6741 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
 int64_t IPv6Address_get_ScopeId_m6742 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
 void IPv6Address_set_ScopeId_m6743 (IPv6Address_t3002 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
 bool IPv6Address_IsLoopback_m6744 (Object_t * __this/* static, unused */, IPv6Address_t3002 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
 uint16_t IPv6Address_SwapUShort_m6745 (Object_t * __this/* static, unused */, uint16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
 int32_t IPv6Address_AsIPv4Int_m6746 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
 bool IPv6Address_IsIPv4Compatible_m6747 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
 bool IPv6Address_IsIPv4Mapped_m6748 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
 String_t* IPv6Address_ToString_m6749 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
 String_t* IPv6Address_ToString_m6750 (IPv6Address_t3002 * __this, bool ___fullLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
 bool IPv6Address_Equals_m6751 (IPv6Address_t3002 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
 int32_t IPv6Address_GetHashCode_m6752 (IPv6Address_t3002 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t IPv6Address_Hash_m6753 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
