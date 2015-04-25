#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3229;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateEnumerator__ctor_m8205 (X509CertificateEnumerator_t3229 * __this, X509CertificateCollection_t3225 * ___mappings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m8206 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
 bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m8207 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
 void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m8208 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
 X509Certificate_t3017 * X509CertificateEnumerator_get_Current_m7873 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
 bool X509CertificateEnumerator_MoveNext_m7875 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
 void X509CertificateEnumerator_Reset_m8209 (X509CertificateEnumerator_t3229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
