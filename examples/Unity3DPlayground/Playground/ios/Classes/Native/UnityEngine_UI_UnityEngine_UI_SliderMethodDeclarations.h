#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t343;
// UnityEngine.RectTransform
struct RectTransform_t267;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t341;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t180;
// UnityEngine.UI.Selectable
struct Selectable_t252;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
 void Slider__ctor_m1380 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
 RectTransform_t267 * Slider_get_fillRect_m1381 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
 void Slider_set_fillRect_m1382 (Slider_t343 * __this, RectTransform_t267 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
 RectTransform_t267 * Slider_get_handleRect_m1383 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
 void Slider_set_handleRect_m1384 (Slider_t343 * __this, RectTransform_t267 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
 int32_t Slider_get_direction_m1385 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
 void Slider_set_direction_m1386 (Slider_t343 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
 float Slider_get_minValue_m1387 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
 void Slider_set_minValue_m1388 (Slider_t343 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
 float Slider_get_maxValue_m1389 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
 void Slider_set_maxValue_m1390 (Slider_t343 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
 bool Slider_get_wholeNumbers_m1391 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
 void Slider_set_wholeNumbers_m1392 (Slider_t343 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
 float Slider_get_value_m1393 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
 void Slider_set_value_m1394 (Slider_t343 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
 float Slider_get_normalizedValue_m1395 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
 void Slider_set_normalizedValue_m1396 (Slider_t343 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
 SliderEvent_t341 * Slider_get_onValueChanged_m1397 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
 void Slider_set_onValueChanged_m1398 (Slider_t343 * __this, SliderEvent_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
 float Slider_get_stepSize_m1399 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Slider_Rebuild_m1400 (Slider_t343 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
 void Slider_OnEnable_m1401 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
 void Slider_OnDisable_m1402 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
 void Slider_UpdateCachedReferences_m1403 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
 void Slider_Set_m1404 (Slider_t343 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
 void Slider_Set_m1405 (Slider_t343 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
 void Slider_OnRectTransformDimensionsChange_m1406 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
 int32_t Slider_get_axis_m1407 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
 bool Slider_get_reverseValue_m1408 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
 void Slider_UpdateVisuals_m1409 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
 void Slider_UpdateDrag_m1410 (Slider_t343 * __this, PointerEventData_t4 * ___eventData, Camera_t42 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Slider_MayDrag_m1411 (Slider_t343 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnPointerDown_m1412 (Slider_t343 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnDrag_m1413 (Slider_t343 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Slider_OnMove_m1414 (Slider_t343 * __this, AxisEventData_t180 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
 Selectable_t252 * Slider_FindSelectableOnLeft_m1415 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
 Selectable_t252 * Slider_FindSelectableOnRight_m1416 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
 Selectable_t252 * Slider_FindSelectableOnUp_m1417 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
 Selectable_t252 * Slider_FindSelectableOnDown_m1418 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnInitializePotentialDrag_m1419 (Slider_t343 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
 void Slider_SetDirection_m1420 (Slider_t343 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m1421 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t43 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m1422 (Slider_t343 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
