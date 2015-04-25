#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.Stopwatch
struct Stopwatch_t154;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
 void Stopwatch__ctor_m548 (Stopwatch_t154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
 void Stopwatch__cctor_m6686 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
 int64_t Stopwatch_GetTimestamp_m6687 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
 TimeSpan_t164  Stopwatch_get_Elapsed_m555 (Stopwatch_t154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
 int64_t Stopwatch_get_ElapsedTicks_m6688 (Stopwatch_t154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
 void Stopwatch_Start_m549 (Stopwatch_t154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
 void Stopwatch_Stop_m554 (Stopwatch_t154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
