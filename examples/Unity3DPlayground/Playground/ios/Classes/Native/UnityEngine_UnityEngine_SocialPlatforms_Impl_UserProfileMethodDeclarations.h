#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2593;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t265;
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"

// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
 void UserProfile__ctor_m5993 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
 void UserProfile__ctor_m5994 (UserProfile_t2593 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t265 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
 String_t* UserProfile_ToString_m5995 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
 void UserProfile_SetUserName_m5996 (UserProfile_t2593 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
 void UserProfile_SetUserID_m5997 (UserProfile_t2593 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
 void UserProfile_SetImage_m5998 (UserProfile_t2593 * __this, Texture2D_t265 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
 String_t* UserProfile_get_userName_m5999 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
 String_t* UserProfile_get_id_m6000 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
 bool UserProfile_get_isFriend_m6001 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
 int32_t UserProfile_get_state_m6002 (UserProfile_t2593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
