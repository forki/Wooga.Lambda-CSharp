#pragma once

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1963;
// Mono.Security.Protocol.Tls.Context
struct Context_t1954;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void HandshakeMessage__ctor_m7382 (HandshakeMessage_t1963 * __this, Context_t1954 * ___context, uint8_t ___handshakeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
 void HandshakeMessage__ctor_m7383 (HandshakeMessage_t1963 * __this, Context_t1954 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 void HandshakeMessage__ctor_m7384 (HandshakeMessage_t1963 * __this, Context_t1954 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
 Context_t1954 * HandshakeMessage_get_Context_m7385 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
 uint8_t HandshakeMessage_get_HandshakeType_m7386 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
 uint8_t HandshakeMessage_get_ContentType_m7387 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
 void HandshakeMessage_Process_m7388 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
 void HandshakeMessage_Update_m7389 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
 ByteU5BU5D_t1071* HandshakeMessage_EncodeMessage_m7390 (HandshakeMessage_t1963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
 bool HandshakeMessage_Compare_m7391 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___buffer1, ByteU5BU5D_t1071* ___buffer2, MethodInfo* method) IL2CPP_METHOD_ATTR;
