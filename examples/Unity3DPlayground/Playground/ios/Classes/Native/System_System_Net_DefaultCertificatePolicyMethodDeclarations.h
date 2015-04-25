#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t2981;
// System.Net.ServicePoint
struct ServicePoint_t2982;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// System.Net.WebRequest
struct WebRequest_t2984;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
 void DefaultCertificatePolicy__ctor_m6689 (DefaultCertificatePolicy_t2981 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
 bool DefaultCertificatePolicy_CheckValidationResult_m6690 (DefaultCertificatePolicy_t2981 * __this, ServicePoint_t2982 * ___point, X509Certificate_t2983 * ___certificate, WebRequest_t2984 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
