#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.Calendar
struct Calendar_t3552;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.String[]
struct StringU5BU5D_t127;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.Calendar::.ctor()
 void Calendar__ctor_m10584 (Calendar_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.Calendar::get_Eras()
// System.Object System.Globalization.Calendar::Clone()
 Object_t * Calendar_Clone_m10585 (Calendar_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.Calendar::CheckReadOnly()
 void Calendar_CheckReadOnly_m10586 (Calendar_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.Calendar::GetDayOfMonth(System.DateTime)
// System.DayOfWeek System.Globalization.Calendar::GetDayOfWeek(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetEra(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetMonth(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetYear(System.DateTime)
// System.String[] System.Globalization.Calendar::get_EraNames()
 StringU5BU5D_t127* Calendar_get_EraNames_m10587 (Calendar_t3552 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
