/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2022 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/**
 *  \file SDL_oldnames.h
 *
 *  Definitions to ease transition from SDL2 code
 */

#ifndef SDL_oldnames_h_
#define SDL_oldnames_h_

#include <SDL3/SDL_platform.h>

/* The new function names are recommended, but if you want to have the
 * old names available while you are in the process of migrating code
 * to SDL3, you can define `SDL_ENABLE_OLD_NAMES` in your project.
 *
 * You can use https://github.com/libsdl-org/SDL/blob/main/build-scripts/rename_symbols.py to mass rename the symbols defined here in your codebase:
 *  rename_symbols.py --all-symbols source_code_path
 */
#ifdef SDL_ENABLE_OLD_NAMES

/* ##SDL_audio.h */
#define SDL_AudioStreamAvailable SDL_GetAudioStreamAvailable
#define SDL_AudioStreamClear SDL_ClearAudioStream
#define SDL_AudioStreamFlush SDL_FlushAudioStream
#define SDL_AudioStreamGet SDL_GetAudioStreamData
#define SDL_AudioStreamPut SDL_PutAudioStreamData
#define SDL_FreeAudioStream SDL_DestroyAudioStream
#define SDL_FreeWAV SDL_free
#define SDL_NewAudioStream SDL_CreateAudioStream

/* ##SDL_joystick.h */
#define SDL_JoystickAttachVirtual SDL_AttachVirtualJoystick
#define SDL_JoystickAttachVirtualEx SDL_AttachVirtualJoystickEx
#define SDL_JoystickClose SDL_CloseJoystick
#define SDL_JoystickCurrentPowerLevel SDL_GetJoystickPowerLevel
#define SDL_JoystickDetachVirtual SDL_DetachVirtualJoystick
#define SDL_JoystickEventState SDL_GetJoystickEventState
#define SDL_JoystickFromInstanceID SDL_GetJoystickFromInstanceID
#define SDL_JoystickFromPlayerIndex SDL_GetJoystickFromPlayerIndex
#define SDL_JoystickGetAttached SDL_IsJoystickConnected
#define SDL_JoystickGetAxis SDL_GetJoystickAxis
#define SDL_JoystickGetAxisInitialState SDL_GetJoystickAxisInitialState
#define SDL_JoystickGetButton SDL_GetJoystickButton
#define SDL_JoystickGetDeviceGUID SDL_GetJoystickDeviceGUID
#define SDL_JoystickGetDeviceInstanceID SDL_GetJoystickDeviceInstanceID
#define SDL_JoystickGetDevicePlayerIndex SDL_GetJoystickDevicePlayerIndex
#define SDL_JoystickGetDeviceProduct SDL_GetJoystickDeviceProduct
#define SDL_JoystickGetDeviceProductVersion SDL_GetJoystickDeviceProductVersion
#define SDL_JoystickGetDeviceType SDL_GetJoystickDeviceType
#define SDL_JoystickGetDeviceVendor SDL_GetJoystickDeviceVendor
#define SDL_JoystickGetFirmwareVersion SDL_GetJoystickFirmwareVersion
#define SDL_JoystickGetGUID SDL_GetJoystickGUID
#define SDL_JoystickGetGUIDFromString SDL_GetJoystickGUIDFromString
#define SDL_JoystickGetGUIDString SDL_GetJoystickGUIDString
#define SDL_JoystickGetHat SDL_GetJoystickHat
#define SDL_JoystickGetPlayerIndex SDL_GetJoystickPlayerIndex
#define SDL_JoystickGetProduct SDL_GetJoystickProduct
#define SDL_JoystickGetProductVersion SDL_GetJoystickProductVersion
#define SDL_JoystickGetSerial SDL_GetJoystickSerial
#define SDL_JoystickGetType SDL_GetJoystickType
#define SDL_JoystickGetVendor SDL_GetJoystickVendor
#define SDL_JoystickInstanceID SDL_GetJoystickInstanceID
#define SDL_JoystickIsVirtual SDL_IsJoystickVirtual
#define SDL_JoystickName SDL_GetJoystickName
#define SDL_JoystickNameForIndex SDL_GetJoystickNameForIndex
#define SDL_JoystickNumAxes SDL_GetNumJoystickAxes
#define SDL_JoystickNumButtons SDL_GetNumJoystickButtons
#define SDL_JoystickNumHats SDL_GetNumJoystickHats
#define SDL_JoystickOpen SDL_OpenJoystick
#define SDL_JoystickPath SDL_GetJoystickPath
#define SDL_JoystickPathForIndex SDL_GetJoystickPathForIndex
#define SDL_JoystickRumble SDL_RumbleJoystick
#define SDL_JoystickRumbleTriggers SDL_RumbleJoystickTriggers
#define SDL_JoystickSendEffect SDL_SendJoystickEffect
#define SDL_JoystickSetLED SDL_SetJoystickLED
#define SDL_JoystickSetPlayerIndex SDL_SetJoystickPlayerIndex
#define SDL_JoystickSetVirtualAxis SDL_SetJoystickVirtualAxis
#define SDL_JoystickSetVirtualButton SDL_SetJoystickVirtualButton
#define SDL_JoystickSetVirtualHat SDL_SetJoystickVirtualHat
#define SDL_JoystickUpdate SDL_UpdateJoysticks
#define SDL_NumJoysticks SDL_GetNumJoysticks

/* ##SDL_keycode.h */
#define KMOD_ALT SDL_KMOD_ALT
#define KMOD_CAPS SDL_KMOD_CAPS
#define KMOD_CTRL SDL_KMOD_CTRL
#define KMOD_GUI SDL_KMOD_GUI
#define KMOD_LALT SDL_KMOD_LALT
#define KMOD_LCTRL SDL_KMOD_LCTRL
#define KMOD_LGUI SDL_KMOD_LGUI
#define KMOD_LSHIFT SDL_KMOD_LSHIFT
#define KMOD_MODE SDL_KMOD_MODE
#define KMOD_NONE SDL_KMOD_NONE
#define KMOD_NUM SDL_KMOD_NUM
#define KMOD_RALT SDL_KMOD_RALT
#define KMOD_RCTRL SDL_KMOD_RCTRL
#define KMOD_RESERVED SDL_KMOD_RESERVED
#define KMOD_RGUI SDL_KMOD_RGUI
#define KMOD_RSHIFT SDL_KMOD_RSHIFT
#define KMOD_SCROLL SDL_KMOD_SCROLL
#define KMOD_SHIFT SDL_KMOD_SHIFT

/* ##SDL_platform.h */
#ifdef __IOS__
#define __IPHONEOS__ __IOS__
#endif
#ifdef __MACOS__
#define __MACOSX__ __MACOS__
#endif

/* ##SDL_rwops.h */
#define RW_SEEK_CUR SDL_RW_SEEK_CUR
#define RW_SEEK_END SDL_RW_SEEK_END
#define RW_SEEK_SET SDL_RW_SEEK_SET

#else /* !SDL_ENABLE_OLD_NAMES */

/* ##SDL_audio.h */
#define SDL_AudioStreamAvailable SDL_AudioStreamAvailable_renamed_SDL_GetAudioStreamAvailable
#define SDL_AudioStreamClear SDL_AudioStreamClear_renamed_SDL_ClearAudioStream
#define SDL_AudioStreamFlush SDL_AudioStreamFlush_renamed_SDL_FlushAudioStream
#define SDL_AudioStreamGet SDL_AudioStreamGet_renamed_SDL_GetAudioStreamData
#define SDL_AudioStreamPut SDL_AudioStreamPut_renamed_SDL_PutAudioStreamData
#define SDL_FreeAudioStream SDL_FreeAudioStream_renamed_SDL_DestroyAudioStream
#define SDL_FreeWAV SDL_FreeWAV_renamed_SDL_free
#define SDL_NewAudioStream SDL_NewAudioStream_renamed_SDL_CreateAudioStream

/* ##SDL_joystick.h */
#define SDL_JoystickAttachVirtual SDL_JoystickAttachVirtual_renamed_SDL_AttachVirtualJoystick
#define SDL_JoystickAttachVirtualEx SDL_JoystickAttachVirtualEx_renamed_SDL_AttachVirtualJoystickEx
#define SDL_JoystickClose SDL_JoystickClose_renamed_SDL_CloseJoystick
#define SDL_JoystickCurrentPowerLevel SDL_JoystickCurrentPowerLevel_renamed_SDL_GetJoystickPowerLevel
#define SDL_JoystickDetachVirtual SDL_JoystickDetachVirtual_renamed_SDL_DetachVirtualJoystick
#define SDL_JoystickEventState SDL_JoystickEventState_renamed_SDL_GetJoystickEventState
#define SDL_JoystickFromInstanceID SDL_JoystickFromInstanceID_renamed_SDL_GetJoystickFromInstanceID
#define SDL_JoystickFromPlayerIndex SDL_JoystickFromPlayerIndex_renamed_SDL_GetJoystickFromPlayerIndex
#define SDL_JoystickGetAttached SDL_JoystickGetAttached_renamed_SDL_IsJoystickConnected
#define SDL_JoystickGetAxis SDL_JoystickGetAxis_renamed_SDL_GetJoystickAxis
#define SDL_JoystickGetAxisInitialState SDL_JoystickGetAxisInitialState_renamed_SDL_GetJoystickAxisInitialState
#define SDL_JoystickGetButton SDL_JoystickGetButton_renamed_SDL_GetJoystickButton
#define SDL_JoystickGetDeviceGUID SDL_JoystickGetDeviceGUID_renamed_SDL_GetJoystickDeviceGUID
#define SDL_JoystickGetDeviceInstanceID SDL_JoystickGetDeviceInstanceID_renamed_SDL_GetJoystickDeviceInstanceID
#define SDL_JoystickGetDevicePlayerIndex SDL_JoystickGetDevicePlayerIndex_renamed_SDL_GetJoystickDevicePlayerIndex
#define SDL_JoystickGetDeviceProduct SDL_JoystickGetDeviceProduct_renamed_SDL_GetJoystickDeviceProduct
#define SDL_JoystickGetDeviceProductVersion SDL_JoystickGetDeviceProductVersion_renamed_SDL_GetJoystickDeviceProductVersion
#define SDL_JoystickGetDeviceType SDL_JoystickGetDeviceType_renamed_SDL_GetJoystickDeviceType
#define SDL_JoystickGetDeviceVendor SDL_JoystickGetDeviceVendor_renamed_SDL_GetJoystickDeviceVendor
#define SDL_JoystickGetFirmwareVersion SDL_JoystickGetFirmwareVersion_renamed_SDL_GetJoystickFirmwareVersion
#define SDL_JoystickGetGUID SDL_JoystickGetGUID_renamed_SDL_GetJoystickGUID
#define SDL_JoystickGetGUIDFromString SDL_JoystickGetGUIDFromString_renamed_SDL_GetJoystickGUIDFromString
#define SDL_JoystickGetGUIDString SDL_JoystickGetGUIDString_renamed_SDL_GetJoystickGUIDString
#define SDL_JoystickGetHat SDL_JoystickGetHat_renamed_SDL_GetJoystickHat
#define SDL_JoystickGetPlayerIndex SDL_JoystickGetPlayerIndex_renamed_SDL_GetJoystickPlayerIndex
#define SDL_JoystickGetProduct SDL_JoystickGetProduct_renamed_SDL_GetJoystickProduct
#define SDL_JoystickGetProductVersion SDL_JoystickGetProductVersion_renamed_SDL_GetJoystickProductVersion
#define SDL_JoystickGetSerial SDL_JoystickGetSerial_renamed_SDL_GetJoystickSerial
#define SDL_JoystickGetType SDL_JoystickGetType_renamed_SDL_GetJoystickType
#define SDL_JoystickGetVendor SDL_JoystickGetVendor_renamed_SDL_GetJoystickVendor
#define SDL_JoystickInstanceID SDL_JoystickInstanceID_renamed_SDL_GetJoystickInstanceID
#define SDL_JoystickIsVirtual SDL_JoystickIsVirtual_renamed_SDL_IsJoystickVirtual
#define SDL_JoystickName SDL_JoystickName_renamed_SDL_GetJoystickName
#define SDL_JoystickNameForIndex SDL_JoystickNameForIndex_renamed_SDL_GetJoystickNameForIndex
#define SDL_JoystickNumAxes SDL_JoystickNumAxes_renamed_SDL_GetNumJoystickAxes
#define SDL_JoystickNumButtons SDL_JoystickNumButtons_renamed_SDL_GetNumJoystickButtons
#define SDL_JoystickNumHats SDL_JoystickNumHats_renamed_SDL_GetNumJoystickHats
#define SDL_JoystickOpen SDL_JoystickOpen_renamed_SDL_OpenJoystick
#define SDL_JoystickPath SDL_JoystickPath_renamed_SDL_GetJoystickPath
#define SDL_JoystickPathForIndex SDL_JoystickPathForIndex_renamed_SDL_GetJoystickPathForIndex
#define SDL_JoystickRumble SDL_JoystickRumble_renamed_SDL_RumbleJoystick
#define SDL_JoystickRumbleTriggers SDL_JoystickRumbleTriggers_renamed_SDL_RumbleJoystickTriggers
#define SDL_JoystickSendEffect SDL_JoystickSendEffect_renamed_SDL_SendJoystickEffect
#define SDL_JoystickSetLED SDL_JoystickSetLED_renamed_SDL_SetJoystickLED
#define SDL_JoystickSetPlayerIndex SDL_JoystickSetPlayerIndex_renamed_SDL_SetJoystickPlayerIndex
#define SDL_JoystickSetVirtualAxis SDL_JoystickSetVirtualAxis_renamed_SDL_SetJoystickVirtualAxis
#define SDL_JoystickSetVirtualButton SDL_JoystickSetVirtualButton_renamed_SDL_SetJoystickVirtualButton
#define SDL_JoystickSetVirtualHat SDL_JoystickSetVirtualHat_renamed_SDL_SetJoystickVirtualHat
#define SDL_JoystickUpdate SDL_JoystickUpdate_renamed_SDL_UpdateJoysticks
#define SDL_NumJoysticks SDL_NumJoysticks_renamed_SDL_GetNumJoysticks

/* ##SDL_keycode.h */
#define KMOD_ALT KMOD_ALT_renamed_SDL_KMOD_ALT
#define KMOD_CAPS KMOD_CAPS_renamed_SDL_KMOD_CAPS
#define KMOD_CTRL KMOD_CTRL_renamed_SDL_KMOD_CTRL
#define KMOD_GUI KMOD_GUI_renamed_SDL_KMOD_GUI
#define KMOD_LALT KMOD_LALT_renamed_SDL_KMOD_LALT
#define KMOD_LCTRL KMOD_LCTRL_renamed_SDL_KMOD_LCTRL
#define KMOD_LGUI KMOD_LGUI_renamed_SDL_KMOD_LGUI
#define KMOD_LSHIFT KMOD_LSHIFT_renamed_SDL_KMOD_LSHIFT
#define KMOD_MODE KMOD_MODE_renamed_SDL_KMOD_MODE
#define KMOD_NONE KMOD_NONE_renamed_SDL_KMOD_NONE
#define KMOD_NUM KMOD_NUM_renamed_SDL_KMOD_NUM
#define KMOD_RALT KMOD_RALT_renamed_SDL_KMOD_RALT
#define KMOD_RCTRL KMOD_RCTRL_renamed_SDL_KMOD_RCTRL
#define KMOD_RESERVED KMOD_RESERVED_renamed_SDL_KMOD_RESERVED
#define KMOD_RGUI KMOD_RGUI_renamed_SDL_KMOD_RGUI
#define KMOD_RSHIFT KMOD_RSHIFT_renamed_SDL_KMOD_RSHIFT
#define KMOD_SCROLL KMOD_SCROLL_renamed_SDL_KMOD_SCROLL
#define KMOD_SHIFT KMOD_SHIFT_renamed_SDL_KMOD_SHIFT

/* ##SDL_platform.h */
#ifdef __IOS__
#define __IPHONEOS__ __IPHONEOS___renamed___IOS__
#endif
#ifdef __MACOS__
#define __MACOSX__ __MACOSX___renamed___MACOS__
#endif

/* ##SDL_rwops.h */
#define RW_SEEK_CUR RW_SEEK_CUR_renamed_SDL_RW_SEEK_CUR
#define RW_SEEK_END RW_SEEK_END_renamed_SDL_RW_SEEK_END
#define RW_SEEK_SET RW_SEEK_SET_renamed_SDL_RW_SEEK_SET

#endif /* SDL_ENABLE_OLD_NAMES */

#endif /* SDL_oldnames_h_ */
