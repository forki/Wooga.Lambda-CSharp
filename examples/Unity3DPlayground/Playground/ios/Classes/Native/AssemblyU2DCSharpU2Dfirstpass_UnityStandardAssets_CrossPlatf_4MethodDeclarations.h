#pragma once

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t9;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t2;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_CrossPlatf_1.h"

// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
 void CrossPlatformInputManager__cctor_m36 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
 void CrossPlatformInputManager_SwitchActiveInputMethod_m37 (Object_t * __this/* static, unused */, int32_t ___activeInputMethod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
 bool CrossPlatformInputManager_AxisExists_m38 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
 bool CrossPlatformInputManager_ButtonExists_m39 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
 void CrossPlatformInputManager_RegisterVirtualAxis_m40 (Object_t * __this/* static, unused */, VirtualAxis_t2 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
 void CrossPlatformInputManager_RegisterVirtualButton_m41 (Object_t * __this/* static, unused */, VirtualButton_t7 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
 void CrossPlatformInputManager_UnRegisterVirtualAxis_m42 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
 void CrossPlatformInputManager_UnRegisterVirtualButton_m43 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
 VirtualAxis_t2 * CrossPlatformInputManager_VirtualAxisReference_m44 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
 float CrossPlatformInputManager_GetAxis_m45 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
 float CrossPlatformInputManager_GetAxisRaw_m46 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
 float CrossPlatformInputManager_GetAxis_m47 (Object_t * __this/* static, unused */, String_t* ___name, bool ___raw, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
 bool CrossPlatformInputManager_GetButton_m48 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
 bool CrossPlatformInputManager_GetButtonDown_m49 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
 bool CrossPlatformInputManager_GetButtonUp_m50 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
 void CrossPlatformInputManager_SetButtonDown_m51 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
 void CrossPlatformInputManager_SetButtonUp_m52 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
 void CrossPlatformInputManager_SetAxisPositive_m53 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
 void CrossPlatformInputManager_SetAxisNegative_m54 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
 void CrossPlatformInputManager_SetAxisZero_m55 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
 void CrossPlatformInputManager_SetAxis_m56 (Object_t * __this/* static, unused */, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
 Vector3_t10  CrossPlatformInputManager_get_mousePosition_m57 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
 void CrossPlatformInputManager_SetVirtualMousePositionX_m58 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
 void CrossPlatformInputManager_SetVirtualMousePositionY_m59 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
 void CrossPlatformInputManager_SetVirtualMousePositionZ_m60 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
