#pragma once

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t374;
// UnityEngine.RectOffset
struct RectOffset_t378;
// UnityEngine.RectTransform
struct RectTransform_t272;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t379;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
 void LayoutGroup__ctor_m1634 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
 RectOffset_t378 * LayoutGroup_get_padding_m1635 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
 void LayoutGroup_set_padding_m1636 (LayoutGroup_t374 * __this, RectOffset_t378 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
 int32_t LayoutGroup_get_childAlignment_m1637 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
 void LayoutGroup_set_childAlignment_m1638 (LayoutGroup_t374 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
 RectTransform_t272 * LayoutGroup_get_rectTransform_m1639 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
 List_1_t379 * LayoutGroup_get_rectChildren_m1640 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
 void LayoutGroup_CalculateLayoutInputHorizontal_m1641 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
 float LayoutGroup_get_minWidth_m1642 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
 float LayoutGroup_get_preferredWidth_m1643 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
 float LayoutGroup_get_flexibleWidth_m1644 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
 float LayoutGroup_get_minHeight_m1645 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
 float LayoutGroup_get_preferredHeight_m1646 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
 float LayoutGroup_get_flexibleHeight_m1647 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
 int32_t LayoutGroup_get_layoutPriority_m1648 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
 void LayoutGroup_OnEnable_m1649 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
 void LayoutGroup_OnDisable_m1650 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
 void LayoutGroup_OnDidApplyAnimationProperties_m1651 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
 float LayoutGroup_GetTotalMinSize_m1652 (LayoutGroup_t374 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
 float LayoutGroup_GetTotalPreferredSize_m1653 (LayoutGroup_t374 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
 float LayoutGroup_GetTotalFlexibleSize_m1654 (LayoutGroup_t374 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
 float LayoutGroup_GetStartOffset_m1655 (LayoutGroup_t374 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
 void LayoutGroup_SetLayoutInputForAxis_m1656 (LayoutGroup_t374 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
 void LayoutGroup_SetChildAlongAxis_m1657 (LayoutGroup_t374 * __this, RectTransform_t272 * ___rect, int32_t ___axis, float ___pos, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
 bool LayoutGroup_get_isRootLayoutGroup_m1658 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
 void LayoutGroup_OnRectTransformDimensionsChange_m1659 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
 void LayoutGroup_OnTransformChildrenChanged_m1660 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
 void LayoutGroup_SetDirty_m1661 (LayoutGroup_t374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
