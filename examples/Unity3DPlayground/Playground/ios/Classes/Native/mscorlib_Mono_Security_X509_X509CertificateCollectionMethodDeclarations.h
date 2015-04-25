#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3480;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3483;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3487;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m10180 (X509CertificateCollection_t3480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m10181 (X509CertificateCollection_t3480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t3483 * X509CertificateCollection_get_Item_m10182 (X509CertificateCollection_t3480 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m10183 (X509CertificateCollection_t3480 * __this, X509Certificate_t3483 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t3487 * X509CertificateCollection_GetEnumerator_m10184 (X509CertificateCollection_t3480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m10185 (X509CertificateCollection_t3480 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
