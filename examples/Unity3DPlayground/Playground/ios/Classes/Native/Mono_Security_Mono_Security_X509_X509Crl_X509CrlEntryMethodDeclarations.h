#pragma once

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1716;
// System.Byte[]
struct ByteU5BU5D_t1071;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1868;
// Mono.Security.ASN1
struct ASN1_t1702;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
 void X509CrlEntry__ctor_m6914 (X509CrlEntry_t1716 * __this, ASN1_t1702 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
 ByteU5BU5D_t1071* X509CrlEntry_get_SerialNumber_m6915 (X509CrlEntry_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
 DateTime_t1141  X509CrlEntry_get_RevocationDate_m6572 (X509CrlEntry_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
 X509ExtensionCollection_t1868 * X509CrlEntry_get_Extensions_m6578 (X509CrlEntry_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
