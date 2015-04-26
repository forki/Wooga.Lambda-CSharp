#pragma once
// System.Globalization.CompareInfo
struct CompareInfo_t1855;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct CultureAwareComparer_t2594  : public StringComparer_t1309
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1855 * ____compareInfo_5;
};
