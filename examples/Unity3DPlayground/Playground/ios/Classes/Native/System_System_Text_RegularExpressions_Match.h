#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t3063;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3070;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t3069;
// System.Text.RegularExpressions.Match
struct Match_t3062;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct Match_t3062  : public Group_t3067
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t3063 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t3069 * ___groups_9;
};
struct Match_t3062_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t3062 * ___empty_10;
};
