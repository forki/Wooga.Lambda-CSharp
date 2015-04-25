#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t362;
// UnityEngine.UI.CanvasScaler/ScaleMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScaleMode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasScaler/ScreenMatchMode
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_ScreenMatchMode.h"
// UnityEngine.UI.CanvasScaler/Unit
#include "UnityEngine_UI_UnityEngine_UI_CanvasScaler_Unit.h"

// System.Void UnityEngine.UI.CanvasScaler::.ctor()
 void CanvasScaler__ctor_m1526 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::get_uiScaleMode()
 int32_t CanvasScaler_get_uiScaleMode_m1527 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode)
 void CanvasScaler_set_uiScaleMode_m1528 (CanvasScaler_t362 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_referencePixelsPerUnit()
 float CanvasScaler_get_referencePixelsPerUnit_m1529 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referencePixelsPerUnit(System.Single)
 void CanvasScaler_set_referencePixelsPerUnit_m1530 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_scaleFactor()
 float CanvasScaler_get_scaleFactor_m1531 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_scaleFactor(System.Single)
 void CanvasScaler_set_scaleFactor_m1532 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
 Vector2_t25  CanvasScaler_get_referenceResolution_m1533 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
 void CanvasScaler_set_referenceResolution_m1534 (CanvasScaler_t362 * __this, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::get_screenMatchMode()
 int32_t CanvasScaler_get_screenMatchMode_m1535 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode)
 void CanvasScaler_set_screenMatchMode_m1536 (CanvasScaler_t362 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
 float CanvasScaler_get_matchWidthOrHeight_m1537 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
 void CanvasScaler_set_matchWidthOrHeight_m1538 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::get_physicalUnit()
 int32_t CanvasScaler_get_physicalUnit_m1539 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_physicalUnit(UnityEngine.UI.CanvasScaler/Unit)
 void CanvasScaler_set_physicalUnit_m1540 (CanvasScaler_t362 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_fallbackScreenDPI()
 float CanvasScaler_get_fallbackScreenDPI_m1541 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_fallbackScreenDPI(System.Single)
 void CanvasScaler_set_fallbackScreenDPI_m1542 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_defaultSpriteDPI()
 float CanvasScaler_get_defaultSpriteDPI_m1543 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_defaultSpriteDPI(System.Single)
 void CanvasScaler_set_defaultSpriteDPI_m1544 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CanvasScaler::get_dynamicPixelsPerUnit()
 float CanvasScaler_get_dynamicPixelsPerUnit_m1545 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::set_dynamicPixelsPerUnit(System.Single)
 void CanvasScaler_set_dynamicPixelsPerUnit_m1546 (CanvasScaler_t362 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnEnable()
 void CanvasScaler_OnEnable_m1547 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::OnDisable()
 void CanvasScaler_OnDisable_m1548 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Update()
 void CanvasScaler_Update_m1549 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::Handle()
 void CanvasScaler_Handle_m1550 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleWorldCanvas()
 void CanvasScaler_HandleWorldCanvas_m1551 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPixelSize()
 void CanvasScaler_HandleConstantPixelSize_m1552 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleScaleWithScreenSize()
 void CanvasScaler_HandleScaleWithScreenSize_m1553 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::HandleConstantPhysicalSize()
 void CanvasScaler_HandleConstantPhysicalSize_m1554 (CanvasScaler_t362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetScaleFactor(System.Single)
 void CanvasScaler_SetScaleFactor_m1555 (CanvasScaler_t362 * __this, float ___scaleFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasScaler::SetReferencePixelsPerUnit(System.Single)
 void CanvasScaler_SetReferencePixelsPerUnit_m1556 (CanvasScaler_t362 * __this, float ___referencePixelsPerUnit, MethodInfo* method) IL2CPP_METHOD_ATTR;
