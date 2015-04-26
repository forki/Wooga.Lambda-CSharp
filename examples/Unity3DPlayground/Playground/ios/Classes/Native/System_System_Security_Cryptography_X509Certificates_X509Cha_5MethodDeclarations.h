#pragma once

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1711;
struct X509ChainStatus_t1711_marshaled;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainStatus__ctor_m5544 (X509ChainStatus_t1711 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
 int32_t X509ChainStatus_get_Status_m5545 (X509ChainStatus_t1711 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainStatus_set_Status_m5546 (X509ChainStatus_t1711 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_StatusInformation(System.String)
 void X509ChainStatus_set_StatusInformation_m5547 (X509ChainStatus_t1711 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 String_t* X509ChainStatus_GetInformation_m5548 (Object_t * __this/* static, unused */, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
void X509ChainStatus_t1711_marshal(const X509ChainStatus_t1711& unmarshaled, X509ChainStatus_t1711_marshaled& marshaled);
void X509ChainStatus_t1711_marshal_back(const X509ChainStatus_t1711_marshaled& marshaled, X509ChainStatus_t1711& unmarshaled);
void X509ChainStatus_t1711_marshal_cleanup(X509ChainStatus_t1711_marshaled& marshaled);
