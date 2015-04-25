#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t377;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.RectTransform
struct RectTransform_t267;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t378;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t375;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t118;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
 void LayoutRebuilder__ctor_m1654 (LayoutRebuilder_t377 * __this, RectTransform_t267 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
 void LayoutRebuilder__cctor_m1655 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
 void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m1656 (LayoutRebuilder_t377 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
 void LayoutRebuilder_ReapplyDrivenProperties_m1657 (Object_t * __this/* static, unused */, RectTransform_t267 * ___driven, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
 Transform_t43 * LayoutRebuilder_get_transform_m1658 (LayoutRebuilder_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
 bool LayoutRebuilder_IsDestroyed_m1659 (LayoutRebuilder_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
 void LayoutRebuilder_StripDisabledBehavioursFromList_m1660 (Object_t * __this/* static, unused */, List_1_t378 * ___components, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutControl_m1661 (LayoutRebuilder_t377 * __this, RectTransform_t267 * ___rect, UnityAction_1_t375 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutCalculation_m1662 (LayoutRebuilder_t377 * __this, RectTransform_t267 * ___rect, UnityAction_1_t375 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutForRebuild_m1663 (Object_t * __this/* static, unused */, RectTransform_t267 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidLayoutGroup_m1664 (Object_t * __this/* static, unused */, RectTransform_t267 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidController_m1665 (Object_t * __this/* static, unused */, RectTransform_t267 * ___layoutRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutRootForRebuild_m1666 (Object_t * __this/* static, unused */, RectTransform_t267 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
 bool LayoutRebuilder_Equals_m1667 (LayoutRebuilder_t377 * __this, LayoutRebuilder_t377  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
 int32_t LayoutRebuilder_GetHashCode_m1668 (LayoutRebuilder_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
 String_t* LayoutRebuilder_ToString_m1669 (LayoutRebuilder_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__9_m1670 (Object_t * __this/* static, unused */, Component_t118 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__A_m1671 (Object_t * __this/* static, unused */, Component_t118 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__B_m1672 (Object_t * __this/* static, unused */, Component_t118 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__C_m1673 (Object_t * __this/* static, unused */, Component_t118 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
 bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m1674 (Object_t * __this/* static, unused */, Component_t118 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
