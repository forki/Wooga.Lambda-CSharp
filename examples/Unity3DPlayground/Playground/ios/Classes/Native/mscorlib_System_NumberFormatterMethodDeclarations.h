#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t3958;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Threading.Thread
struct Thread_t155;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3390;
// System.IFormatProvider
struct IFormatProvider_t3366;
// System.Text.StringBuilder
struct StringBuilder_t399;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
 void NumberFormatter__ctor_m13303 (NumberFormatter_t3958 * __this, Thread_t155 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
 void NumberFormatter__cctor_m13304 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
 void NumberFormatter_GetFormatterTables_m13305 (Object_t * __this/* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
 int64_t NumberFormatter_GetTenPowerOf_m13306 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
 void NumberFormatter_InitDecHexDigits_m13307 (NumberFormatter_t3958 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
 void NumberFormatter_InitDecHexDigits_m13308 (NumberFormatter_t3958 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
 void NumberFormatter_InitDecHexDigits_m13309 (NumberFormatter_t3958 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
 uint32_t NumberFormatter_FastToDecHex_m13310 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
 uint32_t NumberFormatter_ToDecHex_m13311 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
 int32_t NumberFormatter_FastDecHexLen_m13312 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
 int32_t NumberFormatter_DecHexLen_m13313 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
 int32_t NumberFormatter_DecHexLen_m13314 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
 int32_t NumberFormatter_ScaleOrder_m13315 (Object_t * __this/* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
 int32_t NumberFormatter_InitialFloatingPrecision_m13316 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
 int32_t NumberFormatter_ParsePrecision_m13317 (Object_t * __this/* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
 void NumberFormatter_Init_m13318 (NumberFormatter_t3958 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
 void NumberFormatter_InitHex_m13319 (NumberFormatter_t3958 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
 void NumberFormatter_Init_m13320 (NumberFormatter_t3958 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
 void NumberFormatter_Init_m13321 (NumberFormatter_t3958 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
 void NumberFormatter_Init_m13322 (NumberFormatter_t3958 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
 void NumberFormatter_Init_m13323 (NumberFormatter_t3958 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
 void NumberFormatter_Init_m13324 (NumberFormatter_t3958 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
 void NumberFormatter_Init_m13325 (NumberFormatter_t3958 * __this, String_t* ___format, Decimal_t3391  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
 void NumberFormatter_ResetCharBuf_m13326 (NumberFormatter_t3958 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
 void NumberFormatter_Resize_m13327 (NumberFormatter_t3958 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
 void NumberFormatter_Append_m13328 (NumberFormatter_t3958 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
 void NumberFormatter_Append_m13329 (NumberFormatter_t3958 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
 void NumberFormatter_Append_m13330 (NumberFormatter_t3958 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
 NumberFormatInfo_t3390 * NumberFormatter_GetNumberFormatInstance_m13331 (NumberFormatter_t3958 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_set_CurrentCulture_m13332 (NumberFormatter_t3958 * __this, CultureInfo_t921 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
 int32_t NumberFormatter_get_IntegerDigits_m13333 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
 int32_t NumberFormatter_get_DecimalDigits_m13334 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
 bool NumberFormatter_get_IsFloatingSource_m13335 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
 bool NumberFormatter_get_IsZero_m13336 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
 bool NumberFormatter_get_IsZeroInteger_m13337 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
 void NumberFormatter_RoundPos_m13338 (NumberFormatter_t3958 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
 bool NumberFormatter_RoundDecimal_m13339 (NumberFormatter_t3958 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
 bool NumberFormatter_RoundBits_m13340 (NumberFormatter_t3958 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
 void NumberFormatter_RemoveTrailingZeros_m13341 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
 void NumberFormatter_AddOneToDecHex_m13342 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
 uint32_t NumberFormatter_AddOneToDecHex_m13343 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
 int32_t NumberFormatter_CountTrailingZeros_m13344 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
 int32_t NumberFormatter_CountTrailingZeros_m13345 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
 NumberFormatter_t3958 * NumberFormatter_GetInstance_m13346 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
 void NumberFormatter_Release_m13347 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_SetThreadCurrentCulture_m13348 (Object_t * __this/* static, unused */, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13349 (Object_t * __this/* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13350 (Object_t * __this/* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13351 (Object_t * __this/* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13352 (Object_t * __this/* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13353 (Object_t * __this/* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13354 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13355 (Object_t * __this/* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13356 (Object_t * __this/* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13357 (Object_t * __this/* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13358 (Object_t * __this/* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13359 (Object_t * __this/* static, unused */, String_t* ___format, Decimal_t3391  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13360 (Object_t * __this/* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13361 (Object_t * __this/* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13362 (Object_t * __this/* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13363 (Object_t * __this/* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13364 (Object_t * __this/* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m13365 (Object_t * __this/* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_FastIntegerToString_m13366 (NumberFormatter_t3958 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
 String_t* NumberFormatter_IntegerToString_m13367 (NumberFormatter_t3958 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_NumberToString_m13368 (NumberFormatter_t3958 * __this, String_t* ___format, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCurrency_m13369 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatDecimal_m13370 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
 String_t* NumberFormatter_FormatHexadecimal_m13371 (NumberFormatter_t3958 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatFixedPoint_m13372 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m13373 (NumberFormatter_t3958 * __this, double ___origval, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m13374 (NumberFormatter_t3958 * __this, float ___origval, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatGeneral_m13375 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatNumber_m13376 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatPercent_m13377 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatExponential_m13378 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
 String_t* NumberFormatter_FormatExponential_m13379 (NumberFormatter_t3958 * __this, int32_t ___precision, NumberFormatInfo_t3390 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCustom_m13380 (NumberFormatter_t3958 * __this, String_t* ___format, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
 void NumberFormatter_ZeroTrimEnd_m13381 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
 bool NumberFormatter_IsZeroOnly_m13382 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
 void NumberFormatter_AppendNonNegativeNumber_m13383 (Object_t * __this/* static, unused */, StringBuilder_t399 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendIntegerString_m13384 (NumberFormatter_t3958 * __this, int32_t ___minLength, StringBuilder_t399 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
 void NumberFormatter_AppendIntegerString_m13385 (NumberFormatter_t3958 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDecimalString_m13386 (NumberFormatter_t3958 * __this, int32_t ___precision, StringBuilder_t399 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
 void NumberFormatter_AppendDecimalString_m13387 (NumberFormatter_t3958 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
 void NumberFormatter_AppendIntegerStringWithGroupSeparator_m13388 (NumberFormatter_t3958 * __this, Int32U5BU5D_t156* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
 void NumberFormatter_AppendExponent_m13389 (NumberFormatter_t3958 * __this, NumberFormatInfo_t3390 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
 void NumberFormatter_AppendOneDigit_m13390 (NumberFormatter_t3958 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
 void NumberFormatter_FastAppendDigits_m13391 (NumberFormatter_t3958 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
 void NumberFormatter_AppendDigits_m13392 (NumberFormatter_t3958 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDigits_m13393 (NumberFormatter_t3958 * __this, int32_t ___start, int32_t ___end, StringBuilder_t399 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
 void NumberFormatter_Multiply10_m13394 (NumberFormatter_t3958 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
 void NumberFormatter_Divide10_m13395 (NumberFormatter_t3958 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
 NumberFormatter_t3958 * NumberFormatter_GetClone_m13396 (NumberFormatter_t3958 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
