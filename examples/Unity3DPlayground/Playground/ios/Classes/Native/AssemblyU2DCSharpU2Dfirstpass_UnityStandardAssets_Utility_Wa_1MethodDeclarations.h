#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t89;
// UnityEngine.Transform[]
struct TransformU5BU5D_t63;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Wa_0.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
 void WaypointCircuit__ctor_m256 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
 float WaypointCircuit_get_Length_m257 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
 void WaypointCircuit_set_Length_m258 (WaypointCircuit_t89 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
 TransformU5BU5D_t63* WaypointCircuit_get_Waypoints_m259 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
 void WaypointCircuit_Awake_m260 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
 RoutePoint_t91  WaypointCircuit_GetRoutePoint_m261 (WaypointCircuit_t89 * __this, float ___dist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
 Vector3_t10  WaypointCircuit_GetRoutePosition_m262 (WaypointCircuit_t89 * __this, float ___dist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t10  WaypointCircuit_CatmullRom_m263 (WaypointCircuit_t89 * __this, Vector3_t10  ___p0, Vector3_t10  ___p1, Vector3_t10  ___p2, Vector3_t10  ___p3, float ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
 void WaypointCircuit_CachePositionsAndDistances_m264 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
 void WaypointCircuit_OnDrawGizmos_m265 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
 void WaypointCircuit_OnDrawGizmosSelected_m266 (WaypointCircuit_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
 void WaypointCircuit_DrawGizmos_m267 (WaypointCircuit_t89 * __this, bool ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
