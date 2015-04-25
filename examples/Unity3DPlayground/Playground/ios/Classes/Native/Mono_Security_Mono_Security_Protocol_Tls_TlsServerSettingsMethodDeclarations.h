#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3314;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;
// System.Security.Cryptography.RSA
struct RSA_t3019;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3340;
// System.String[]
struct StringU5BU5D_t127;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
 void TlsServerSettings__ctor_m8671 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
 bool TlsServerSettings_get_ServerKeyExchange_m8672 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
 void TlsServerSettings_set_ServerKeyExchange_m8673 (TlsServerSettings_t3314 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
 X509CertificateCollection_t3225 * TlsServerSettings_get_Certificates_m8674 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerSettings_set_Certificates_m8675 (TlsServerSettings_t3314 * __this, X509CertificateCollection_t3225 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
 RSA_t3019 * TlsServerSettings_get_CertificateRSA_m8676 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
 RSAParameters_t3216  TlsServerSettings_get_RsaParameters_m8677 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
 void TlsServerSettings_set_RsaParameters_m8678 (TlsServerSettings_t3314 * __this, RSAParameters_t3216  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
 void TlsServerSettings_set_SignedParams_m8679 (TlsServerSettings_t3314 * __this, ByteU5BU5D_t961* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
 bool TlsServerSettings_get_CertificateRequest_m8680 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
 void TlsServerSettings_set_CertificateRequest_m8681 (TlsServerSettings_t3314 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
 void TlsServerSettings_set_CertificateTypes_m8682 (TlsServerSettings_t3314 * __this, ClientCertificateTypeU5BU5D_t3340* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
 void TlsServerSettings_set_DistinguisedNames_m8683 (TlsServerSettings_t3314 * __this, StringU5BU5D_t127* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
 void TlsServerSettings_UpdateCertificateRSA_m8684 (TlsServerSettings_t3314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
