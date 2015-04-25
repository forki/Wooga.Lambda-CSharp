#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t8;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
 void VirtualInput__ctor_m115 (VirtualInput_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
 Vector3_t10  VirtualInput_get_virtualMousePosition_m116 (VirtualInput_t8 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
 void VirtualInput_set_virtualMousePosition_m117 (VirtualInput_t8 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
 bool VirtualInput_AxisExists_m118 (VirtualInput_t8 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
 bool VirtualInput_ButtonExists_m119 (VirtualInput_t8 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
 void VirtualInput_RegisterVirtualAxis_m120 (VirtualInput_t8 * __this, VirtualAxis_t2 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
 void VirtualInput_RegisterVirtualButton_m121 (VirtualInput_t8 * __this, VirtualButton_t7 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
 void VirtualInput_UnRegisterVirtualAxis_m122 (VirtualInput_t8 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
 void VirtualInput_UnRegisterVirtualButton_m123 (VirtualInput_t8 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
 VirtualAxis_t2 * VirtualInput_VirtualAxisReference_m124 (VirtualInput_t8 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
 void VirtualInput_SetVirtualMousePositionX_m125 (VirtualInput_t8 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
 void VirtualInput_SetVirtualMousePositionY_m126 (VirtualInput_t8 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
 void VirtualInput_SetVirtualMousePositionZ_m127 (VirtualInput_t8 * __this, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String)
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String)
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single)
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition()
