#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Wooga.Lambda.Control.Pattern`2<System.Object,System.Object>
struct Pattern_2_t5465;
// Wooga.Lambda.Control.Pattern`2/MatchCase<System.Object,System.Object>
struct MatchCase_t5466;
// System.Object
struct Object_t;

// Wooga.Lambda.Control.Pattern`2/MatchCase<TValue,TResult> Wooga.Lambda.Control.Pattern`2<System.Object,System.Object>::Match(TValue)
 MatchCase_t5466 * Pattern_2_Match_m21691_gshared (Object_t * __this/* static, unused */, Object_t * ___x, MethodInfo* method);
#define Pattern_2_Match_m21691(__this/* static, unused */, ___x, method) (MatchCase_t5466 *)Pattern_2_Match_m21691_gshared((Object_t *)__this/* static, unused */, (Object_t *)___x, method)
