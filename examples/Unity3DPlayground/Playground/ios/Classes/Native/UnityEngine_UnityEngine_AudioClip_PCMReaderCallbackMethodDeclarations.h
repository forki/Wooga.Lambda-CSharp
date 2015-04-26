#pragma once

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1200;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t99;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
 void PCMReaderCallback__ctor_m3726 (PCMReaderCallback_t1200 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
 void PCMReaderCallback_Invoke_m3727 (PCMReaderCallback_t1200 * __this, SingleU5BU5D_t99* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
 Object_t * PCMReaderCallback_BeginInvoke_m3728 (PCMReaderCallback_t1200 * __this, SingleU5BU5D_t99* ___data, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
 void PCMReaderCallback_EndInvoke_m3729 (PCMReaderCallback_t1200 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
