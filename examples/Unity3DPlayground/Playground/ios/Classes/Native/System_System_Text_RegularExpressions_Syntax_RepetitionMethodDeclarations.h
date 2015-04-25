#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t3116;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3107;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3110;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3111;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
 void Repetition__ctor_m7334 (Repetition_t3116 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
 Expression_t3107 * Repetition_get_Expression_m7335 (Repetition_t3116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
 void Repetition_set_Expression_m7336 (Repetition_t3116 * __this, Expression_t3107 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
 int32_t Repetition_get_Minimum_m7337 (Repetition_t3116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Repetition_Compile_m7338 (Repetition_t3116 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
 void Repetition_GetWidth_m7339 (Repetition_t3116 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
 AnchorInfo_t3111 * Repetition_GetAnchorInfo_m7340 (Repetition_t3116 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
