#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t3038;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3027;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t3036;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
 void X509ChainElement__ctor_m6918 (X509ChainElement_t3038 * __this, X509Certificate2_t3027 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
 X509Certificate2_t3027 * X509ChainElement_get_Certificate_m6919 (X509ChainElement_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::get_ChainElementStatus()
 X509ChainStatusU5BU5D_t3036* X509ChainElement_get_ChainElementStatus_m6920 (X509ChainElement_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::get_StatusFlags()
 int32_t X509ChainElement_get_StatusFlags_m6921 (X509ChainElement_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainElement_set_StatusFlags_m6922 (X509ChainElement_t3038 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElement::Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 int32_t X509ChainElement_Count_m6923 (X509ChainElement_t3038 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[],System.Int32&,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainElement_Set_m6924 (X509ChainElement_t3038 * __this, X509ChainStatusU5BU5D_t3036* ___status, int32_t* ___position, int32_t ___flags, int32_t ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::UncompressFlags()
 void X509ChainElement_UncompressFlags_m6925 (X509ChainElement_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
