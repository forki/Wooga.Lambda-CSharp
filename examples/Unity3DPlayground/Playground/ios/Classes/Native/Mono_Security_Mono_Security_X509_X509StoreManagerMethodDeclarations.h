#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t3282;
// Mono.Security.X509.X509Stores
struct X509Stores_t3055;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
 X509Stores_t3055 * X509StoreManager_get_CurrentUser_m7868 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
 X509Stores_t3055 * X509StoreManager_get_LocalMachine_m7869 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
 X509CertificateCollection_t3225 * X509StoreManager_get_TrustedRootCertificates_m8259 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
