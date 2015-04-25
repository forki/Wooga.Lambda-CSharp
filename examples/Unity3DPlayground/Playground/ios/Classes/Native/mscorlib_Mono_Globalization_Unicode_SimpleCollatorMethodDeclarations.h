#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t3449;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t3434;
// Mono.Globalization.Unicode.Contraction
struct Contraction_t3436;
// System.String
struct String_t;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t3442;
// System.Globalization.SortKey
struct SortKey_t3451;
// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t3452;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// Mono.Globalization.Unicode.SimpleCollator/Context
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_Context.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator::.ctor(System.Globalization.CultureInfo)
 void SimpleCollator__ctor_m9820 (SimpleCollator_t3449 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::.cctor()
 void SimpleCollator__cctor_m9821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::SetCJKTable(System.Globalization.CultureInfo,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
 void SimpleCollator_SetCJKTable_m9822 (SimpleCollator_t3449 * __this, CultureInfo_t921 * ___culture, CodePointIndexer_t3434 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t3434 ** ___lv2Indexer, uint8_t** ___lv2Table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Mono.Globalization.Unicode.SimpleCollator::GetNeutralCulture(System.Globalization.CultureInfo)
 CultureInfo_t921 * SimpleCollator_GetNeutralCulture_m9823 (Object_t * __this/* static, unused */, CultureInfo_t921 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Category(System.Int32)
 uint8_t SimpleCollator_Category_m9824 (SimpleCollator_t3449 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level1(System.Int32)
 uint8_t SimpleCollator_Level1_m9825 (SimpleCollator_t3449 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::Level2(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType)
 uint8_t SimpleCollator_Level2_m9826 (SimpleCollator_t3449 * __this, int32_t ___cp, int32_t ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsHalfKana(System.Int32,System.Globalization.CompareOptions)
 bool SimpleCollator_IsHalfKana_m9827 (Object_t * __this/* static, unused */, int32_t ___cp, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32)
 Contraction_t3436 * SimpleCollator_GetContraction_m9828 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
 Contraction_t3436 * SimpleCollator_GetContraction_m9829 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t3442* ___clist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32)
 Contraction_t3436 * SimpleCollator_GetTailContraction_m9830 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.Contraction Mono.Globalization.Unicode.SimpleCollator::GetTailContraction(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.Contraction[])
 Contraction_t3436 * SimpleCollator_GetTailContraction_m9831 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___end, ContractionU5BU5D_t3442* ___clist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterOptions(System.Int32,System.Globalization.CompareOptions)
 int32_t SimpleCollator_FilterOptions_m9832 (SimpleCollator_t3449 * __this, int32_t ___i, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.SimpleCollator/ExtenderType Mono.Globalization.Unicode.SimpleCollator::GetExtenderType(System.Int32)
 int32_t SimpleCollator_GetExtenderType_m9833 (SimpleCollator_t3449 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.SimpleCollator::ToDashTypeValue(Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
 uint8_t SimpleCollator_ToDashTypeValue_m9834 (Object_t * __this/* static, unused */, int32_t ___ext, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::FilterExtender(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Globalization.CompareOptions)
 int32_t SimpleCollator_FilterExtender_m9835 (SimpleCollator_t3449 * __this, int32_t ___i, int32_t ___ext, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsIgnorable(System.Int32,System.Globalization.CompareOptions)
 bool SimpleCollator_IsIgnorable_m9836 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSafe(System.Int32)
 bool SimpleCollator_IsSafe_m9837 (SimpleCollator_t3449 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Globalization.CompareOptions)
 SortKey_t3451 * SimpleCollator_GetSortKey_m9838 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 SortKey_t3451 * SimpleCollator_GetSortKey_m9839 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___length, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::GetSortKey(System.String,System.Int32,System.Int32,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
 void SimpleCollator_GetSortKey_m9840 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___end, SortKeyBuffer_t3452 * ___buf, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.SortKeyBuffer,System.Globalization.CompareOptions)
 void SimpleCollator_FillSortKeyRaw_m9841 (SimpleCollator_t3449 * __this, int32_t ___i, int32_t ___ext, SortKeyBuffer_t3452 * ___buf, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::FillSurrogateSortKeyRaw(System.Int32,Mono.Globalization.Unicode.SortKeyBuffer)
 void SimpleCollator_FillSurrogateSortKeyRaw_m9842 (SimpleCollator_t3449 * __this, int32_t ___i, SortKeyBuffer_t3452 * ___buf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_CompareOrdinal_m9843 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareQuick(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean)
 int32_t SimpleCollator_CompareQuick_m9844 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___sourceConsumed, bool* ___targetConsumed, bool ___immediateBreakup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareOrdinalIgnoreCase(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_CompareOrdinalIgnoreCase_m9845 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t SimpleCollator_Compare_m9846 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SimpleCollator::ClearBuffer(System.Byte*,System.Int32)
 void SimpleCollator_ClearBuffer_m9847 (SimpleCollator_t3449 * __this, uint8_t* ___buffer, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckPossible(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 bool SimpleCollator_QuickCheckPossible_m9848 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___end1, String_t* ___s2, int32_t ___idx2, int32_t ___end2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareInternal(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Boolean&,System.Boolean&,System.Boolean,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 int32_t SimpleCollator_CompareInternal_m9849 (SimpleCollator_t3449 * __this, String_t* ___s1, int32_t ___idx1, int32_t ___len1, String_t* ___s2, int32_t ___idx2, int32_t ___len2, bool* ___targetConsumed, bool* ___sourceConsumed, bool ___skipHeadingExtenders, bool ___immediateBreakup, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::CompareFlagPair(System.Boolean,System.Boolean)
 int32_t SimpleCollator_CompareFlagPair_m9850 (SimpleCollator_t3449 * __this, bool ___b1, bool ___b2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
 bool SimpleCollator_IsPrefix_m9851 (SimpleCollator_t3449 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 bool SimpleCollator_IsPrefix_m9852 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 bool SimpleCollator_IsPrefix_m9853 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool ___skipHeadingExtenders, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
 bool SimpleCollator_IsSuffix_m9854 (SimpleCollator_t3449 * __this, String_t* ___src, String_t* ___target, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsSuffix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 bool SimpleCollator_IsSuffix_m9855 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::QuickIndexOf(System.String,System.String,System.Int32,System.Int32,System.Boolean&)
 int32_t SimpleCollator_QuickIndexOf_m9856 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, bool* ___testWasUnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t SimpleCollator_IndexOf_m9857 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_IndexOfOrdinal_m9858 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_IndexOfOrdinalIgnoreCase_m9859 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOfSortKey(System.String,System.Int32,System.Int32,System.Byte*,System.Char,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 int32_t SimpleCollator_IndexOfSortKey_m9860 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___length, uint8_t* ___sortkey, uint16_t ___target, int32_t ___ti, bool ___noLv4, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
 int32_t SimpleCollator_IndexOf_m9861 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t SimpleCollator_LastIndexOf_m9862 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, int32_t ___opt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinal(System.String,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_LastIndexOfOrdinal_m9863 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfOrdinalIgnoreCase(System.String,System.String,System.Int32,System.Int32)
 int32_t SimpleCollator_LastIndexOfOrdinalIgnoreCase_m9864 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOfSortKey(System.String,System.Int32,System.Int32,System.Int32,System.Byte*,System.Int32,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 int32_t SimpleCollator_LastIndexOfSortKey_m9865 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t ___start, int32_t ___orgStart, int32_t ___length, uint8_t* ___sortkey, int32_t ___ti, bool ___noLv4, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SimpleCollator::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Byte*,Mono.Globalization.Unicode.SimpleCollator/Context&)
 int32_t SimpleCollator_LastIndexOf_m9866 (SimpleCollator_t3449 * __this, String_t* ___s, String_t* ___target, int32_t ___start, int32_t ___length, uint8_t* ___targetSortKey, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForward(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 bool SimpleCollator_MatchesForward_m9867 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesForwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
 bool SimpleCollator_MatchesForwardCore_m9868 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t3436 ** ___ct, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesPrimitive(System.Globalization.CompareOptions,System.Byte*,System.Int32,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,System.Byte*,System.Int32,System.Boolean)
 bool SimpleCollator_MatchesPrimitive_m9869 (SimpleCollator_t3449 * __this, int32_t ___opt, uint8_t* ___source, int32_t ___si, int32_t ___ext, uint8_t* ___target, int32_t ___ti, bool ___noLv4, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackward(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/Context&)
 bool SimpleCollator_MatchesBackward_m9870 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.SimpleCollator::MatchesBackwardCore(System.String,System.Int32&,System.Int32,System.Int32,System.Int32,System.Byte*,System.Boolean,Mono.Globalization.Unicode.SimpleCollator/ExtenderType,Mono.Globalization.Unicode.Contraction&,Mono.Globalization.Unicode.SimpleCollator/Context&)
 bool SimpleCollator_MatchesBackwardCore_m9871 (SimpleCollator_t3449 * __this, String_t* ___s, int32_t* ___idx, int32_t ___end, int32_t ___orgStart, int32_t ___ti, uint8_t* ___sortkey, bool ___noLv4, int32_t ___ext, Contraction_t3436 ** ___ct, Context_t3445 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
