#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t3840;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3382;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
 void TripleDESTransform__ctor_m12352 (TripleDESTransform_t3840 * __this, TripleDES_t3382 * ___algo, bool ___encryption, ByteU5BU5D_t961* ___key, ByteU5BU5D_t961* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
 void TripleDESTransform_ECB_m12353 (TripleDESTransform_t3840 * __this, ByteU5BU5D_t961* ___input, ByteU5BU5D_t961* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
 ByteU5BU5D_t961* TripleDESTransform_GetStrongKey_m12354 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
