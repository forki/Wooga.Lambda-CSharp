#pragma once

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1181;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t48;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
 void CameraCallback__ctor_m3584 (CameraCallback_t1181 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
 void CameraCallback_Invoke_m3585 (CameraCallback_t1181 * __this, Camera_t48 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
 Object_t * CameraCallback_BeginInvoke_m3586 (CameraCallback_t1181 * __this, Camera_t48 * ___cam, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
 void CameraCallback_EndInvoke_m3587 (CameraCallback_t1181 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
