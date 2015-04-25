#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct CipherSuiteFactory_t3303;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t3300;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSupportedCiphers(Mono.Security.Protocol.Tls.SecurityProtocolType)
 CipherSuiteCollection_t3300 * CipherSuiteFactory_GetSupportedCiphers_m8372 (Object_t * __this/* static, unused */, int32_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetTls1SupportedCiphers()
 CipherSuiteCollection_t3300 * CipherSuiteFactory_GetTls1SupportedCiphers_m8373 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSsl3SupportedCiphers()
 CipherSuiteCollection_t3300 * CipherSuiteFactory_GetSsl3SupportedCiphers_m8374 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
