#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Match
struct Match_t3062;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t3069;
// System.Text.RegularExpressions.Regex
struct Regex_t3063;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3070;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Match::.ctor()
 void Match__ctor_m7071 (Match_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m7072 (Match_t3062 * __this, Regex_t3063 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Match__ctor_m7073 (Match_t3062 * __this, Regex_t3063 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
 void Match__cctor_m7074 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
 Match_t3062 * Match_get_Empty_m7075 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
 GroupCollection_t3069 * Match_get_Groups_m7076 (Match_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
 Match_t3062 * Match_NextMatch_m7077 (Match_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
 Regex_t3063 * Match_get_Regex_m7078 (Match_t3062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
