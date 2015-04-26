#pragma once

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1968;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1985;
// System.String[]
struct StringU5BU5D_t150;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
 void TlsServerSettings__ctor_m7342 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
 bool TlsServerSettings_get_ServerKeyExchange_m7343 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
 void TlsServerSettings_set_ServerKeyExchange_m7344 (TlsServerSettings_t1968 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
 X509CertificateCollection_t1668 * TlsServerSettings_get_Certificates_m7345 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerSettings_set_Certificates_m7346 (TlsServerSettings_t1968 * __this, X509CertificateCollection_t1668 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
 RSA_t1694 * TlsServerSettings_get_CertificateRSA_m7347 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
 RSAParameters_t1880  TlsServerSettings_get_RsaParameters_m7348 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
 void TlsServerSettings_set_RsaParameters_m7349 (TlsServerSettings_t1968 * __this, RSAParameters_t1880  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
 void TlsServerSettings_set_SignedParams_m7350 (TlsServerSettings_t1968 * __this, ByteU5BU5D_t1071* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
 bool TlsServerSettings_get_CertificateRequest_m7351 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
 void TlsServerSettings_set_CertificateRequest_m7352 (TlsServerSettings_t1968 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
 void TlsServerSettings_set_CertificateTypes_m7353 (TlsServerSettings_t1968 * __this, ClientCertificateTypeU5BU5D_t1985* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
 void TlsServerSettings_set_DistinguisedNames_m7354 (TlsServerSettings_t1968 * __this, StringU5BU5D_t150* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
 void TlsServerSettings_UpdateCertificateRSA_m7355 (TlsServerSettings_t1968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
