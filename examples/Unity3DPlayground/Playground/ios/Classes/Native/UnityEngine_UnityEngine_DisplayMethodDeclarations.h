#pragma once

// UnityEngine.Display
struct Display_t1186;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1184;
// System.IntPtr[]
struct IntPtrU5BU5D_t1187;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Display::.ctor()
 void Display__ctor_m3612 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
 void Display__ctor_m3613 (Display_t1186 * __this, IntPtr_t37 ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
 void Display__cctor_m3614 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_add_onDisplaysUpdated_m3615 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t1184 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
 void Display_remove_onDisplaysUpdated_m3616 (Object_t * __this/* static, unused */, DisplaysUpdatedDelegate_t1184 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
 int32_t Display_get_renderingWidth_m3617 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
 int32_t Display_get_renderingHeight_m3618 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
 int32_t Display_get_systemWidth_m3619 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
 int32_t Display_get_systemHeight_m3620 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
 RenderBuffer_t1188  Display_get_colorBuffer_m3621 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
 RenderBuffer_t1188  Display_get_depthBuffer_m3622 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate()
 void Display_Activate_m3623 (Display_t1186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
 void Display_Activate_m3624 (Display_t1186 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParams_m3625 (Display_t1186 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
 void Display_SetRenderingResolution_m3626 (Display_t1186 * __this, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
 bool Display_MultiDisplayLicense_m3627 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
 Vector3_t10  Display_RelativeMouseAt_m3628 (Object_t * __this/* static, unused */, Vector3_t10  ___inputMouseCoordinates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
 Display_t1186 * Display_get_main_m3629 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
 void Display_RecreateDisplayList_m3630 (Object_t * __this/* static, unused */, IntPtrU5BU5D_t1187* ___nativeDisplay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
 void Display_FireDisplaysUpdated_m3631 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetSystemExtImpl_m3632 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
 void Display_GetRenderingExtImpl_m3633 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
 void Display_GetRenderingBuffersImpl_m3634 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, RenderBuffer_t1188 * ___color, RenderBuffer_t1188 * ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
 void Display_SetRenderingResolutionImpl_m3635 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
 void Display_ActivateDisplayImpl_m3636 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
 void Display_SetParamsImpl_m3637 (Object_t * __this/* static, unused */, IntPtr_t37 ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
 bool Display_MultiDisplayLicenseImpl_m3638 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
 int32_t Display_RelativeMouseAtImpl_m3639 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method) IL2CPP_METHOD_ATTR;
