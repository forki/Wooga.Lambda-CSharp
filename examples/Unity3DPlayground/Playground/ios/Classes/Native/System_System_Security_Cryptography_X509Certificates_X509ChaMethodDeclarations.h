#pragma once

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1645;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1709;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t1710;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1713;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1703;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1669;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1712;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1714;
// Mono.Security.X509.X509Extension
struct X509Extension_t1715;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1716;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
 void X509Chain__ctor_m5481 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
 void X509Chain__ctor_m5482 (X509Chain_t1645 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
 void X509Chain__cctor_m5483 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
 X509ChainPolicy_t1709 * X509Chain_get_ChainPolicy_m5484 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
 void X509Chain_set_ChainPolicy_m5485 (X509Chain_t1645 * __this, X509ChainPolicy_t1709 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
 X509ChainStatusU5BU5D_t1710* X509Chain_get_ChainStatus_m5486 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_Build_m5487 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
 void X509Chain_Reset_m5488 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
 X509Store_t1713 * X509Chain_get_Roots_m5489 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
 X509Store_t1713 * X509Chain_get_CertificateAuthorities_m5490 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
 X509Certificate2Collection_t1703 * X509Chain_get_CertificateCollection_m5491 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Chain_BuildChainFrom_m5492 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 X509Certificate2_t1669 * X509Chain_SelectBestFromCollection_m5493 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___child, X509Certificate2Collection_t1703 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Certificate2_t1669 * X509Chain_FindParent_m5494 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsChainComplete_m5495 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsSelfIssued_m5496 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_ValidateChain_m5497 (X509Chain_t1645 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
 void X509Chain_Process_m5498 (X509Chain_t1645 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
 void X509Chain_PrepareForNextCertificate_m5499 (X509Chain_t1645 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
 void X509Chain_WrapUp_m5500 (X509Chain_t1645 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
 void X509Chain_ProcessCertificateExtensions_m5501 (X509Chain_t1645 * __this, X509ChainElement_t1712 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Chain_IsSignedWith_m5502 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___signed, AsymmetricAlgorithm_t1568 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetSubjectKeyIdentifier_m5503 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m5504 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m5505 (X509Chain_t1645 * __this, X509Crl_t1714 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m5506 (X509Chain_t1645 * __this, X509Extension_t1715 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_CheckRevocationOnChain_m5507 (X509Chain_t1645 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
 int32_t X509Chain_CheckRevocation_m5508 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
 int32_t X509Chain_CheckRevocation_m5509 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___certificate, X509Certificate2_t1669 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Crl_t1714 * X509Chain_FindCrl_m5510 (X509Chain_t1645 * __this, X509Certificate2_t1669 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
 bool X509Chain_ProcessCrlExtensions_m5511 (X509Chain_t1645 * __this, X509Crl_t1714 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
 bool X509Chain_ProcessCrlEntryExtensions_m5512 (X509Chain_t1645 * __this, X509CrlEntry_t1716 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
