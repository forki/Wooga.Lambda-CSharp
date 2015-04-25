#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Monitor
struct Monitor_t3886;
// System.Object
struct Object_t;

// System.Void System.Threading.Monitor::Enter(System.Object)
 void Monitor_Enter_m7687 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
 void Monitor_Exit_m7688 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
 void Monitor_Monitor_pulse_m12683 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
 bool Monitor_Monitor_test_synchronised_m12684 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Pulse(System.Object)
 void Monitor_Pulse_m12685 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
 bool Monitor_Monitor_wait_m12686 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
 bool Monitor_Wait_m12687 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
 bool Monitor_Wait_m12688 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
