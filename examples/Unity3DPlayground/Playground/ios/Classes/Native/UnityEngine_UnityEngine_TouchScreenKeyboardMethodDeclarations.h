#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t310;
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 void TouchScreenKeyboard__ctor_m5501 (TouchScreenKeyboard_t310 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
 void TouchScreenKeyboard_Destroy_m5502 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
 void TouchScreenKeyboard_Finalize_m5503 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
 void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m5504 (TouchScreenKeyboard_t310 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t2521 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
 bool TouchScreenKeyboard_get_isSupported_m2149 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t310 * TouchScreenKeyboard_Open_m2220 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t310 * TouchScreenKeyboard_Open_m2221 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 TouchScreenKeyboard_t310 * TouchScreenKeyboard_Open_m5505 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
 String_t* TouchScreenKeyboard_get_text_m2124 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
 void TouchScreenKeyboard_set_text_m2125 (TouchScreenKeyboard_t310 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
 void TouchScreenKeyboard_set_hideInput_m2219 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
 bool TouchScreenKeyboard_get_active_m2123 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
 void TouchScreenKeyboard_set_active_m2218 (TouchScreenKeyboard_t310 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
 bool TouchScreenKeyboard_get_done_m2154 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
 bool TouchScreenKeyboard_get_wasCanceled_m2150 (TouchScreenKeyboard_t310 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
