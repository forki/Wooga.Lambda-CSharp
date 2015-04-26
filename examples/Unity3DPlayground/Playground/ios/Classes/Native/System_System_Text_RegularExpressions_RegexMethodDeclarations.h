#pragma once

// System.Text.RegularExpressions.Regex
struct Regex_t1737;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1748;
// System.Text.RegularExpressions.Match
struct Match_t1736;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1745;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1744;
// System.String[]
struct StringU5BU5D_t150;
// System.Collections.IDictionary
struct IDictionary_t1537;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
 void Regex__ctor_m5687 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
 void Regex__ctor_m5688 (Regex_t1737 * __this, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
 void Regex__ctor_m5689 (Regex_t1737 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex__ctor_m5690 (Regex_t1737 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
 void Regex__cctor_m5691 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m5692 (Regex_t1737 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
 void Regex_validate_options_m5693 (Object_t * __this/* static, unused */, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
 void Regex_Init_m5694 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
 void Regex_InitNewRegex_m5695 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
 Object_t * Regex_CreateMachineFactory_m5696 (Object_t * __this/* static, unused */, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
 int32_t Regex_get_Options_m5697 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
 bool Regex_get_RightToLeft_m5698 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
 int32_t Regex_GetGroupIndex_m5699 (Regex_t1737 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
 int32_t Regex_default_startat_m5700 (Regex_t1737 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
 bool Regex_IsMatch_m5701 (Regex_t1737 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
 bool Regex_IsMatch_m5702 (Regex_t1737 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
 Match_t1736 * Regex_Match_m5703 (Regex_t1737 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
 MatchCollection_t1745 * Regex_Matches_m5704 (Regex_t1737 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
 MatchCollection_t1745 * Regex_Matches_m5705 (Regex_t1737 * __this, String_t* ___input, int32_t ___startat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
 String_t* Regex_ToString_m5706 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
 int32_t Regex_get_Gap_m5707 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
 Object_t * Regex_CreateMachine_m5708 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
 StringU5BU5D_t150* Regex_GetGroupNamesArray_m5709 (Object_t * __this/* static, unused */, int32_t ___groupCount, Object_t * ___mapping, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
 Int32U5BU5D_t1424* Regex_get_GroupNumbers_m5710 (Regex_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
