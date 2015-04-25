#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t3118;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3113;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3108;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3117;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3110;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
 void CaptureAssertion__ctor_m7347 (CaptureAssertion_t3118 * __this, Literal_t3117 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void CaptureAssertion_set_CapturingGroup_m7348 (CaptureAssertion_t3118 * __this, CapturingGroup_t3113 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CaptureAssertion_Compile_m7349 (CaptureAssertion_t3118 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
 bool CaptureAssertion_IsComplex_m7350 (CaptureAssertion_t3118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
 ExpressionAssertion_t3108 * CaptureAssertion_get_Alternate_m7351 (CaptureAssertion_t3118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
