#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t3103;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t3104;
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t3105;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t3106;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3107;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3108;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.ArgumentException
struct ArgumentException_t483;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
 void Parser__ctor_m7261 (Parser_t3103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
 int32_t Parser_ParseDecimal_m7262 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
 int32_t Parser_ParseOctal_m7263 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
 int32_t Parser_ParseHex_m7264 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
 int32_t Parser_ParseNumber_m7265 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
 String_t* Parser_ParseName_m7266 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
 RegularExpression_t3104 * Parser_ParseRegularExpression_m7267 (Parser_t3103 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
 int32_t Parser_GetMapping_m7268 (Parser_t3103 * __this, Hashtable_t2960 * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
 void Parser_ParseGroup_m7269 (Parser_t3103 * __this, Group_t3105 * ___group, int32_t ___options, Assertion_t3106 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
 Expression_t3107 * Parser_ParseGroupingConstruct_m7270 (Parser_t3103 * __this, int32_t* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
 bool Parser_ParseAssertionType_m7271 (Parser_t3103 * __this, ExpressionAssertion_t3108 * ___assertion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
 void Parser_ParseOptions_m7272 (Parser_t3103 * __this, int32_t* ___options, bool ___negate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
 Expression_t3107 * Parser_ParseCharacterClass_m7273 (Parser_t3103 * __this, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
 bool Parser_ParseRepetitionBounds_m7274 (Parser_t3103 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
 uint16_t Parser_ParseUnicodeCategory_m7275 (Parser_t3103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
 Expression_t3107 * Parser_ParseSpecial_m7276 (Parser_t3103 * __this, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
 int32_t Parser_ParseEscape_m7277 (Parser_t3103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
 String_t* Parser_ParseName_m7278 (Parser_t3103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
 bool Parser_IsNameChar_m7279 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
 int32_t Parser_ParseNumber_m7280 (Parser_t3103 * __this, int32_t ___b, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
 int32_t Parser_ParseDigit_m7281 (Object_t * __this/* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
 void Parser_ConsumeWhitespace_m7282 (Parser_t3103 * __this, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
 void Parser_ResolveReferences_m7283 (Parser_t3103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
 void Parser_HandleExplicitNumericGroups_m7284 (Parser_t3103 * __this, ArrayList_t2972 * ___explicit_numeric_groups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsIgnoreCase_m7285 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsMultiline_m7286 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsExplicitCapture_m7287 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsSingleline_m7288 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsIgnorePatternWhitespace_m7289 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
 bool Parser_IsECMAScript_m7290 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
 ArgumentException_t483 * Parser_NewParseException_m7291 (Parser_t3103 * __this, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
