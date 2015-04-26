#pragma once

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1703;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1669;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t1704;
// System.Security.Cryptography.X509Certificates.X509FindType
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
 void X509Certificate2Collection__ctor_m5457 (X509Certificate2Collection_t1703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection__ctor_m5458 (X509Certificate2Collection_t1703 * __this, X509Certificate2Collection_t1703 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
 X509Certificate2_t1669 * X509Certificate2Collection_get_Item_m5459 (X509Certificate2Collection_t1703 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Certificate2Collection_Add_m5460 (X509Certificate2Collection_t1703 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection_AddRange_m5461 (X509Certificate2Collection_t1703 * __this, X509Certificate2Collection_t1703 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Certificate2Collection_Contains_m5462 (X509Certificate2Collection_t1703 * __this, X509Certificate2_t1669 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
 X509Certificate2Collection_t1703 * X509Certificate2Collection_Find_m5463 (X509Certificate2Collection_t1703 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
 X509Certificate2Enumerator_t1704 * X509Certificate2Collection_GetEnumerator_m5464 (X509Certificate2Collection_t1703 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
