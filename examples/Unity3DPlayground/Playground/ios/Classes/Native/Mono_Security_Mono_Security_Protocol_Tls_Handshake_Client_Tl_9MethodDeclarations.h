#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct TlsServerKeyExchange_t3353;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerKeyExchange__ctor_m8774 (TlsServerKeyExchange_t3353 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
 void TlsServerKeyExchange_Update_m8775 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
 void TlsServerKeyExchange_ProcessAsSsl3_m8776 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
 void TlsServerKeyExchange_ProcessAsTls1_m8777 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
 void TlsServerKeyExchange_verifySignature_m8778 (TlsServerKeyExchange_t3353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
