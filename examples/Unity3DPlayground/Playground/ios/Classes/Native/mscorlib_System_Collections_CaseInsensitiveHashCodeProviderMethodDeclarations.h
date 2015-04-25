#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t3203;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Globalization.TextInfo
struct TextInfo_t3450;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
 void CaseInsensitiveHashCodeProvider__ctor_m10398 (CaseInsensitiveHashCodeProvider_t3203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
 void CaseInsensitiveHashCodeProvider__ctor_m10399 (CaseInsensitiveHashCodeProvider_t3203 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
 void CaseInsensitiveHashCodeProvider__cctor_m10400 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m10401 (Object_t * __this/* static, unused */, CultureInfo_t921 * ___a, CultureInfo_t921 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m10402 (Object_t * __this/* static, unused */, TextInfo_t3450 * ___info, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
 CaseInsensitiveHashCodeProvider_t3203 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m7647 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
 int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m10403 (CaseInsensitiveHashCodeProvider_t3203 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
