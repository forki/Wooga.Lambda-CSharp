#pragma once
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1782;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1787;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1791;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1792  : public Assertion_t1780
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t1782 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1787 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t1791 * ___literal_3;
};
