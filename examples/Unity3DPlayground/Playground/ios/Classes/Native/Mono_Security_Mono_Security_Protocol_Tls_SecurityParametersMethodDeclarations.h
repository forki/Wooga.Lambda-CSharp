#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t3316;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3299;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
 void SecurityParameters__ctor_m8529 (SecurityParameters_t3316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
 CipherSuite_t3299 * SecurityParameters_get_Cipher_m8530 (SecurityParameters_t3316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
 void SecurityParameters_set_Cipher_m8531 (SecurityParameters_t3316 * __this, CipherSuite_t3299 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
 ByteU5BU5D_t961* SecurityParameters_get_ClientWriteMAC_m8532 (SecurityParameters_t3316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
 void SecurityParameters_set_ClientWriteMAC_m8533 (SecurityParameters_t3316 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
 ByteU5BU5D_t961* SecurityParameters_get_ServerWriteMAC_m8534 (SecurityParameters_t3316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
 void SecurityParameters_set_ServerWriteMAC_m8535 (SecurityParameters_t3316 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
 void SecurityParameters_Clear_m8536 (SecurityParameters_t3316 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
