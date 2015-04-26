#pragma once
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1547;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t1777  : public Object_t
{
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t1547 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t1534 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;
};
