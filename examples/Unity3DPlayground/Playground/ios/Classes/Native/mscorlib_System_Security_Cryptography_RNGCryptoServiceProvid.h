#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGenerator.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t3820  : public RandomNumberGenerator_t3251
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	IntPtr_t31 ____handle_1;
};
struct RNGCryptoServiceProvider_t3820_StaticFields{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	Object_t * ____lock_0;
};
