#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t3560;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m10711 (DaylightTime_t3560 * __this, DateTime_t2501  ___start, DateTime_t2501  ___end, TimeSpan_t164  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t2501  DaylightTime_get_Start_m10712 (DaylightTime_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t2501  DaylightTime_get_End_m10713 (DaylightTime_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t164  DaylightTime_get_Delta_m10714 (DaylightTime_t3560 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
