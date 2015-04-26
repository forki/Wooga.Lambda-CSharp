#pragma once
// System.Security.Cryptography.RSA
struct RSA_t1694;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1619;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1162;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t1978  : public AsymmetricSignatureFormatter_t1979
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t1694 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1619 * ___hash_1;
};
struct RSASslSignatureFormatter_t1978_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t1162 * ___U3CU3Ef__switch$map16_2;
};
