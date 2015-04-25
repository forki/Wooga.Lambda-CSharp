#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3314;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t3315;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t3300;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3310;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3307;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t3316;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context__ctor_m8403 (Context_t3298 * __this, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
 bool Context_get_AbbreviatedHandshake_m8404 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
 void Context_set_AbbreviatedHandshake_m8405 (Context_t3298 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
 bool Context_get_ProtocolNegotiated_m8406 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
 void Context_set_ProtocolNegotiated_m8407 (Context_t3298 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
 int32_t Context_get_SecurityProtocol_m8408 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
 void Context_set_SecurityProtocol_m8409 (Context_t3298 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
 int32_t Context_get_SecurityProtocolFlags_m8410 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
 int16_t Context_get_Protocol_m8411 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
 ByteU5BU5D_t961* Context_get_SessionId_m8412 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
 void Context_set_SessionId_m8413 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
 int32_t Context_get_CompressionMethod_m8414 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
 void Context_set_CompressionMethod_m8415 (Context_t3298 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
 TlsServerSettings_t3314 * Context_get_ServerSettings_m8416 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
 TlsClientSettings_t3315 * Context_get_ClientSettings_m8417 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
 uint8_t Context_get_LastHandshakeMsg_m8418 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void Context_set_LastHandshakeMsg_m8419 (Context_t3298 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
 int32_t Context_get_HandshakeState_m8420 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
 void Context_set_HandshakeState_m8421 (Context_t3298 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
 bool Context_get_ReceivedConnectionEnd_m8422 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
 void Context_set_ReceivedConnectionEnd_m8423 (Context_t3298 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
 bool Context_get_SentConnectionEnd_m8424 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
 void Context_set_SentConnectionEnd_m8425 (Context_t3298 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
 CipherSuiteCollection_t3300 * Context_get_SupportedCiphers_m8426 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
 void Context_set_SupportedCiphers_m8427 (Context_t3298 * __this, CipherSuiteCollection_t3300 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
 TlsStream_t3310 * Context_get_HandshakeMessages_m8428 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
 uint64_t Context_get_WriteSequenceNumber_m8429 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
 void Context_set_WriteSequenceNumber_m8430 (Context_t3298 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
 uint64_t Context_get_ReadSequenceNumber_m8431 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
 void Context_set_ReadSequenceNumber_m8432 (Context_t3298 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
 ByteU5BU5D_t961* Context_get_ClientRandom_m8433 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
 void Context_set_ClientRandom_m8434 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
 ByteU5BU5D_t961* Context_get_ServerRandom_m8435 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
 void Context_set_ServerRandom_m8436 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
 ByteU5BU5D_t961* Context_get_RandomCS_m8437 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
 void Context_set_RandomCS_m8438 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
 ByteU5BU5D_t961* Context_get_RandomSC_m8439 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
 void Context_set_RandomSC_m8440 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
 ByteU5BU5D_t961* Context_get_MasterSecret_m8441 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
 void Context_set_MasterSecret_m8442 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
 ByteU5BU5D_t961* Context_get_ClientWriteKey_m8443 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
 void Context_set_ClientWriteKey_m8444 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
 ByteU5BU5D_t961* Context_get_ServerWriteKey_m8445 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
 void Context_set_ServerWriteKey_m8446 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
 ByteU5BU5D_t961* Context_get_ClientWriteIV_m8447 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
 void Context_set_ClientWriteIV_m8448 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
 ByteU5BU5D_t961* Context_get_ServerWriteIV_m8449 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
 void Context_set_ServerWriteIV_m8450 (Context_t3298 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
 RecordProtocol_t3307 * Context_get_RecordProtocol_m8451 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
 void Context_set_RecordProtocol_m8452 (Context_t3298 * __this, RecordProtocol_t3307 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
 int32_t Context_GetUnixTime_m8453 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
 ByteU5BU5D_t961* Context_GetSecureRandomBytes_m8454 (Context_t3298 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
 void Context_Clear_m8455 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
 void Context_ClearKeyInfo_m8456 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
 int32_t Context_DecodeProtocolCode_m8457 (Context_t3298 * __this, int16_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
 void Context_ChangeProtocol_m8458 (Context_t3298 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
 SecurityParameters_t3316 * Context_get_Current_m8459 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
 SecurityParameters_t3316 * Context_get_Negotiating_m8460 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
 SecurityParameters_t3316 * Context_get_Read_m8461 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
 SecurityParameters_t3316 * Context_get_Write_m8462 (Context_t3298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
 void Context_StartSwitchingSecurityParameters_m8463 (Context_t3298 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
 void Context_EndSwitchingSecurityParameters_m8464 (Context_t3298 * __this, bool ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
