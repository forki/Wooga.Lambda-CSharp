#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3305;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3304;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2998;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.ClientContext::.ctor(Mono.Security.Protocol.Tls.SslClientStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void ClientContext__ctor_m8375 (ClientContext_t3305 * __this, SslClientStream_t3304 * ___stream, int32_t ___securityProtocolType, String_t* ___targetHost, X509CertificateCollection_t2998 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::get_SslStream()
 SslClientStream_t3304 * ClientContext_get_SslStream_m8376 (ClientContext_t3305 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.ClientContext::get_ClientHelloProtocol()
 int16_t ClientContext_get_ClientHelloProtocol_m8377 (ClientContext_t3305 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::set_ClientHelloProtocol(System.Int16)
 void ClientContext_set_ClientHelloProtocol_m8378 (ClientContext_t3305 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::Clear()
 void ClientContext_Clear_m8379 (ClientContext_t3305 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
