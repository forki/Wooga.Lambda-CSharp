#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t2498;
// UnityEngine.Font
struct Font_t260;
// UnityEngine.GUIStyle
struct GUIStyle_t2502;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2518;
// UnityEngine.GUISettings
struct GUISettings_t2516;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void UnityEngine.GUISkin::.ctor()
 void GUISkin__ctor_m5391 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
 void GUISkin_OnEnable_m5392 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
 Font_t260 * GUISkin_get_font_m5393 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
 void GUISkin_set_font_m5394 (GUISkin_t2498 * __this, Font_t260 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
 GUIStyle_t2502 * GUISkin_get_box_m5395 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
 void GUISkin_set_box_m5396 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
 GUIStyle_t2502 * GUISkin_get_label_m5397 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
 void GUISkin_set_label_m5398 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
 GUIStyle_t2502 * GUISkin_get_textField_m5399 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
 void GUISkin_set_textField_m5400 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
 GUIStyle_t2502 * GUISkin_get_textArea_m5401 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
 void GUISkin_set_textArea_m5402 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
 GUIStyle_t2502 * GUISkin_get_button_m5403 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
 void GUISkin_set_button_m5404 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
 GUIStyle_t2502 * GUISkin_get_toggle_m5405 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
 void GUISkin_set_toggle_m5406 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
 GUIStyle_t2502 * GUISkin_get_window_m5407 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
 void GUISkin_set_window_m5408 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
 GUIStyle_t2502 * GUISkin_get_horizontalSlider_m5409 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSlider_m5410 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
 GUIStyle_t2502 * GUISkin_get_horizontalSliderThumb_m5411 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSliderThumb_m5412 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
 GUIStyle_t2502 * GUISkin_get_verticalSlider_m5413 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSlider_m5414 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
 GUIStyle_t2502 * GUISkin_get_verticalSliderThumb_m5415 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSliderThumb_m5416 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
 GUIStyle_t2502 * GUISkin_get_horizontalScrollbar_m5417 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbar_m5418 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
 GUIStyle_t2502 * GUISkin_get_horizontalScrollbarThumb_m5419 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarThumb_m5420 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
 GUIStyle_t2502 * GUISkin_get_horizontalScrollbarLeftButton_m5421 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarLeftButton_m5422 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
 GUIStyle_t2502 * GUISkin_get_horizontalScrollbarRightButton_m5423 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarRightButton_m5424 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
 GUIStyle_t2502 * GUISkin_get_verticalScrollbar_m5425 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbar_m5426 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
 GUIStyle_t2502 * GUISkin_get_verticalScrollbarThumb_m5427 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarThumb_m5428 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
 GUIStyle_t2502 * GUISkin_get_verticalScrollbarUpButton_m5429 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarUpButton_m5430 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
 GUIStyle_t2502 * GUISkin_get_verticalScrollbarDownButton_m5431 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarDownButton_m5432 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
 GUIStyle_t2502 * GUISkin_get_scrollView_m5433 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
 void GUISkin_set_scrollView_m5434 (GUISkin_t2498 * __this, GUIStyle_t2502 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
 GUIStyleU5BU5D_t2518* GUISkin_get_customStyles_m5435 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
 void GUISkin_set_customStyles_m5436 (GUISkin_t2498 * __this, GUIStyleU5BU5D_t2518* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
 GUISettings_t2516 * GUISkin_get_settings_m5437 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
 GUIStyle_t2502 * GUISkin_get_error_m5438 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
 void GUISkin_Apply_m5439 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
 void GUISkin_BuildStyleCache_m5440 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
 GUIStyle_t2502 * GUISkin_GetStyle_m5441 (GUISkin_t2498 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
 GUIStyle_t2502 * GUISkin_FindStyle_m5442 (GUISkin_t2498 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
 void GUISkin_MakeCurrent_m5443 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
 Object_t * GUISkin_GetEnumerator_m5444 (GUISkin_t2498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
