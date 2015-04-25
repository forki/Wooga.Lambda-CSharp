#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.TextInfo
struct TextInfo_t3450;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Object
struct Object_t;
// System.Void
#include "mscorlib_System_Void.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
 void TextInfo__ctor_m10759 (TextInfo_t3450 * __this, CultureInfo_t921 * ___ci, int32_t ___lcid, void* ___data, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.TextInfo)
 void TextInfo__ctor_m10760 (TextInfo_t3450 * __this, TextInfo_t3450 * ___textInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m10761 (TextInfo_t3450 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_ListSeparator()
 String_t* TextInfo_get_ListSeparator_m10762 (TextInfo_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
 String_t* TextInfo_get_CultureName_m10763 (TextInfo_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
 bool TextInfo_Equals_m10764 (TextInfo_t3450 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
 int32_t TextInfo_GetHashCode_m10765 (TextInfo_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
 String_t* TextInfo_ToString_m10766 (TextInfo_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
 uint16_t TextInfo_ToLower_m10767 (TextInfo_t3450 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
 uint16_t TextInfo_ToUpper_m10768 (TextInfo_t3450 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
 String_t* TextInfo_ToLower_m10769 (TextInfo_t3450 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.TextInfo::Clone()
 Object_t * TextInfo_Clone_m10770 (TextInfo_t3450 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
