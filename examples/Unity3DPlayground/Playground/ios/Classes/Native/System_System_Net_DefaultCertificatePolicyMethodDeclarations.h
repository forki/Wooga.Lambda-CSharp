#pragma once

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1615;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Net.WebRequest
struct WebRequest_t1065;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
 void DefaultCertificatePolicy__ctor_m4791 (DefaultCertificatePolicy_t1615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
 bool DefaultCertificatePolicy_CheckValidationResult_m4792 (DefaultCertificatePolicy_t1615 * __this, ServicePoint_t1616 * ___point, X509Certificate_t1569 * ___certificate, WebRequest_t1065 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
