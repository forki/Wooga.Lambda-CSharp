#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2998;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t3033;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3031;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m6882 (X509CertificateCollection_t2998 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection__ctor_m6883 (X509CertificateCollection_t2998 * __this, X509CertificateU5BU5D_t3033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t2983 * X509CertificateCollection_get_Item_m6884 (X509CertificateCollection_t2998 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection_AddRange_m6885 (X509CertificateCollection_t2998 * __this, X509CertificateU5BU5D_t3033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t3031 * X509CertificateCollection_GetEnumerator_m6886 (X509CertificateCollection_t2998 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m6887 (X509CertificateCollection_t2998 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
