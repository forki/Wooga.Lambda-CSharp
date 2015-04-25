#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t3047;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t3025;
// System.Collections.ArrayList
struct ArrayList_t2972;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
 void X509ExtensionEnumerator__ctor_m6972 (X509ExtensionEnumerator_t3047 * __this, ArrayList_t2972 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m6973 (X509ExtensionEnumerator_t3047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
 X509Extension_t3025 * X509ExtensionEnumerator_get_Current_m6974 (X509ExtensionEnumerator_t3047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
 bool X509ExtensionEnumerator_MoveNext_m6975 (X509ExtensionEnumerator_t3047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
 void X509ExtensionEnumerator_Reset_m6976 (X509ExtensionEnumerator_t3047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
