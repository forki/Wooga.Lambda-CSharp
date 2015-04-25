#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3390;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3366;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
 void NumberFormatInfo__ctor_m10724 (NumberFormatInfo_t3390 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
 void NumberFormatInfo__ctor_m10725 (NumberFormatInfo_t3390 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
 void NumberFormatInfo__ctor_m10726 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
 void NumberFormatInfo__cctor_m10727 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
 int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m10728 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
 String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m10729 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
 String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m10730 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
 Int32U5BU5D_t156* NumberFormatInfo_get_RawCurrencyGroupSizes_m10731 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
 int32_t NumberFormatInfo_get_CurrencyNegativePattern_m10732 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
 int32_t NumberFormatInfo_get_CurrencyPositivePattern_m10733 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
 String_t* NumberFormatInfo_get_CurrencySymbol_m10734 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
 NumberFormatInfo_t3390 * NumberFormatInfo_get_CurrentInfo_m10735 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
 NumberFormatInfo_t3390 * NumberFormatInfo_get_InvariantInfo_m10736 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
 String_t* NumberFormatInfo_get_NaNSymbol_m10737 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
 String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m10738 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
 String_t* NumberFormatInfo_get_NegativeSign_m10739 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
 int32_t NumberFormatInfo_get_NumberDecimalDigits_m10740 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
 String_t* NumberFormatInfo_get_NumberDecimalSeparator_m10741 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
 String_t* NumberFormatInfo_get_NumberGroupSeparator_m10742 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
 Int32U5BU5D_t156* NumberFormatInfo_get_RawNumberGroupSizes_m10743 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
 int32_t NumberFormatInfo_get_NumberNegativePattern_m10744 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
 void NumberFormatInfo_set_NumberNegativePattern_m10745 (NumberFormatInfo_t3390 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
 int32_t NumberFormatInfo_get_PercentDecimalDigits_m10746 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
 String_t* NumberFormatInfo_get_PercentDecimalSeparator_m10747 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
 String_t* NumberFormatInfo_get_PercentGroupSeparator_m10748 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
 Int32U5BU5D_t156* NumberFormatInfo_get_RawPercentGroupSizes_m10749 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
 int32_t NumberFormatInfo_get_PercentNegativePattern_m10750 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
 int32_t NumberFormatInfo_get_PercentPositivePattern_m10751 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
 String_t* NumberFormatInfo_get_PercentSymbol_m10752 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
 String_t* NumberFormatInfo_get_PerMilleSymbol_m10753 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
 String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m10754 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
 String_t* NumberFormatInfo_get_PositiveSign_m10755 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
 Object_t * NumberFormatInfo_GetFormat_m10756 (NumberFormatInfo_t3390 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
 Object_t * NumberFormatInfo_Clone_m10757 (NumberFormatInfo_t3390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
 NumberFormatInfo_t3390 * NumberFormatInfo_GetInstance_m10758 (Object_t * __this/* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
