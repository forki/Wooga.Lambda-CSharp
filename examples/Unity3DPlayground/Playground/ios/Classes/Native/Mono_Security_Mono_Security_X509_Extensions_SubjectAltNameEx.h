#pragma once
#include <stdint.h>
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t3285;
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t3290  : public X509Extension_t3041
{
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t3285 * ____names_3;
};
