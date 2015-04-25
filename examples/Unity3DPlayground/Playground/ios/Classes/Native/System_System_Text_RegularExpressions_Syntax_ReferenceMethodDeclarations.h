#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t3121;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3113;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3110;

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
 void Reference__ctor_m7375 (Reference_t3121 * __this, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
 CapturingGroup_t3113 * Reference_get_CapturingGroup_m7376 (Reference_t3121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void Reference_set_CapturingGroup_m7377 (Reference_t3121 * __this, CapturingGroup_t3113 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
 bool Reference_get_IgnoreCase_m7378 (Reference_t3121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Reference_Compile_m7379 (Reference_t3121 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
 void Reference_GetWidth_m7380 (Reference_t3121 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
 bool Reference_IsComplex_m7381 (Reference_t3121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
