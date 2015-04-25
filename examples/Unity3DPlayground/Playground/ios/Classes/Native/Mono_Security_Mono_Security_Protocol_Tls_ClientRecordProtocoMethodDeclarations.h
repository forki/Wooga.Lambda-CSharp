#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3306;
// System.IO.Stream
struct Stream_t3308;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3305;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3309;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3310;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
 void ClientRecordProtocol__ctor_m8380 (ClientRecordProtocol_t3306 * __this, Stream_t3308 * ___innerStream, ClientContext_t3305 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t3309 * ClientRecordProtocol_GetMessage_m8381 (ClientRecordProtocol_t3306 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
 void ClientRecordProtocol_ProcessHandshakeMessage_m8382 (ClientRecordProtocol_t3306 * __this, TlsStream_t3310 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t3309 * ClientRecordProtocol_createClientHandshakeMessage_m8383 (ClientRecordProtocol_t3306 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 HandshakeMessage_t3309 * ClientRecordProtocol_createServerHandshakeMessage_m8384 (ClientRecordProtocol_t3306 * __this, uint8_t ___type, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
