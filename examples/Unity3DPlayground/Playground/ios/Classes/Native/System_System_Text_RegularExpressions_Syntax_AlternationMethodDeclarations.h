#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t3119;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t3109;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3107;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3110;

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
 void Alternation__ctor_m7359 (Alternation_t3119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
 ExpressionCollection_t3109 * Alternation_get_Alternatives_m7360 (Alternation_t3119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
 void Alternation_AddAlternative_m7361 (Alternation_t3119 * __this, Expression_t3107 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Alternation_Compile_m7362 (Alternation_t3119 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
 void Alternation_GetWidth_m7363 (Alternation_t3119 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
