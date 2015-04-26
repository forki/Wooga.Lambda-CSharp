#pragma once

// Mono.Security.X509.X509Chain
struct X509Chain_t1937;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1670;
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
 void X509Chain__ctor_m6904 (X509Chain_t1937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509Chain__ctor_m6905 (X509Chain_t1937 * __this, X509CertificateCollection_t1668 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
 int32_t X509Chain_get_Status_m6906 (X509Chain_t1937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
 X509CertificateCollection_t1668 * X509Chain_get_TrustAnchors_m6907 (X509Chain_t1937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
 bool X509Chain_Build_m6908 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___leaf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsValid_m6909 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
 X509Certificate_t1670 * X509Chain_FindCertificateParent_m6910 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
 X509Certificate_t1670 * X509Chain_FindCertificateRoot_m6911 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___potentialRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsTrusted_m6912 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___potentialTrusted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
 bool X509Chain_IsParent_m6913 (X509Chain_t1937 * __this, X509Certificate_t1670 * ___child, X509Certificate_t1670 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
