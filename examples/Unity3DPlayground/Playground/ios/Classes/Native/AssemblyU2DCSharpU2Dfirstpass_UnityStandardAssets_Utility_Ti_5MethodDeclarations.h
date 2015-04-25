#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t87;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t81;

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
 void TimedObjectActivator__ctor_m246 (TimedObjectActivator_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
 void TimedObjectActivator_Awake_m247 (TimedObjectActivator_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_Activate_m248 (TimedObjectActivator_t87 * __this, Entry_t81 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_Deactivate_m249 (TimedObjectActivator_t87 * __this, Entry_t81 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
 Object_t * TimedObjectActivator_ReloadLevel_m250 (TimedObjectActivator_t87 * __this, Entry_t81 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
