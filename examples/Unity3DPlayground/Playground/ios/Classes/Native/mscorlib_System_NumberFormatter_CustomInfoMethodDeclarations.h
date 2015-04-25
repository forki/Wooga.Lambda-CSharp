#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter/CustomInfo
struct CustomInfo_t3957;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3390;
// System.Text.StringBuilder
struct StringBuilder_t399;

// System.Void System.NumberFormatter/CustomInfo::.ctor()
 void CustomInfo__ctor_m13299 (CustomInfo_t3957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
 void CustomInfo_GetActiveSection_m13300 (Object_t * __this/* static, unused */, String_t* ___format, bool* ___positive, bool ___zero, int32_t* ___offset, int32_t* ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
 CustomInfo_t3957 * CustomInfo_Parse_m13301 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t3390 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
 String_t* CustomInfo_Format_m13302 (CustomInfo_t3957 * __this, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t3390 * ___nfi, bool ___positive, StringBuilder_t399 * ___sb_int, StringBuilder_t399 * ___sb_dec, StringBuilder_t399 * ___sb_exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
