#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t3349;
// Mono.Security.Protocol.Tls.Context
struct Context_t3298;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerCertificateRequest__ctor_m8757 (TlsServerCertificateRequest_t3349 * __this, Context_t3298 * ___context, ByteU5BU5D_t961* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
 void TlsServerCertificateRequest_Update_m8758 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
 void TlsServerCertificateRequest_ProcessAsSsl3_m8759 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
 void TlsServerCertificateRequest_ProcessAsTls1_m8760 (TlsServerCertificateRequest_t3349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
