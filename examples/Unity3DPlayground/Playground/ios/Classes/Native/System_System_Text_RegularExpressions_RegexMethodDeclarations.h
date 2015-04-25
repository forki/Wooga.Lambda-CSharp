#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Regex
struct Regex_t3063;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t3074;
// System.Text.RegularExpressions.Match
struct Match_t3062;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3071;
// System.Text.RegularExpressions.IMachine
struct IMachine_t3070;
// System.String[]
struct StringU5BU5D_t127;
// System.Collections.IDictionary
struct IDictionary_t2963;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
 void Regex__ctor_m7092 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
 void Regex__ctor_m7093 (Regex_t3063 * __this, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
 void Regex__ctor_m7094 (Regex_t3063 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex__ctor_m7095 (Regex_t3063 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
 void Regex__cctor_m7096 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m7097 (Regex_t3063 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
 void Regex_validate_options_m7098 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
 void Regex_Init_m7099 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
 void Regex_InitNewRegex_m7100 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
 Object_t * Regex_CreateMachineFactory_m7101 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
 int32_t Regex_get_Options_m7102 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
 bool Regex_get_RightToLeft_m7103 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
 int32_t Regex_GetGroupIndex_m7104 (Regex_t3063 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
 int32_t Regex_default_startat_m7105 (Regex_t3063 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
 bool Regex_IsMatch_m7106 (Regex_t3063 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
 bool Regex_IsMatch_m7107 (Regex_t3063 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
 Match_t3062 * Regex_Match_m7108 (Regex_t3063 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
 MatchCollection_t3071 * Regex_Matches_m7109 (Regex_t3063 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
 MatchCollection_t3071 * Regex_Matches_m7110 (Regex_t3063 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
 String_t* Regex_ToString_m7111 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
 int32_t Regex_get_Gap_m7112 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
 Object_t * Regex_CreateMachine_m7113 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
 StringU5BU5D_t127* Regex_GetGroupNamesArray_m7114 (Object_t * __this/* static, unused */, int32_t ___groupCount, Object_t * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
 Int32U5BU5D_t156* Regex_get_GroupNumbers_m7115 (Regex_t3063 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
