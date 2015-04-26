#pragma once

// System.Reflection.Binder
struct Binder_t1362;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t2264;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1363;
// System.Globalization.CultureInfo
struct CultureInfo_t1365;
// System.String[]
struct StringU5BU5D_t150;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1677;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2265;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1368;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
 void Binder__ctor_m9814 (Binder_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
 void Binder__cctor_m9815 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
 Binder_t1362 * Binder_get_DefaultBinder_m9816 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
 bool Binder_ConvertArgs_m9817 (Object_t * __this/* static, unused */, Binder_t1362 * ___binder, ObjectU5BU5D_t149* ___args, ParameterInfoU5BU5D_t1368* ___pinfo, CultureInfo_t1365 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
 int32_t Binder_GetDerivedLevel_m9818 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
 MethodBase_t1367 * Binder_FindMostDerivedMatch_m9819 (Object_t * __this/* static, unused */, MethodBaseU5BU5D_t2264* ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
