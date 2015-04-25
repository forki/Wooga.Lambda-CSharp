#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Diagnostics.Contracts.ContractOptionAttribute
struct ContractOptionAttribute_t1059  : public Attribute_t1048
{
	// System.String System.Diagnostics.Contracts.ContractOptionAttribute::_category
	String_t* ____category_0;
	// System.String System.Diagnostics.Contracts.ContractOptionAttribute::_setting
	String_t* ____setting_1;
	// System.Boolean System.Diagnostics.Contracts.ContractOptionAttribute::_enabled
	bool ____enabled_2;
	// System.String System.Diagnostics.Contracts.ContractOptionAttribute::_value
	String_t* ____value_3;
};
