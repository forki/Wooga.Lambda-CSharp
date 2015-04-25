#pragma once
#include <stdint.h>
// System.Security.Cryptography.TripleDES
struct TripleDES_t3382;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3469;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t3814  : public KeyedHashAlgorithm_t3292
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3382 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t3469 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
