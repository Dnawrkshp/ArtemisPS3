// Mysis xRegistry.h v0.1
// 3141card (C style version)
#ifndef __XREGISTRY_H__
#define __XREGISTRY_H__


typedef struct xsetting_0AF1F161_class_t  // 28
{
	uint32_t (*GetProductCode)(void);
	uint32_t (*GetProductSubCode)(void);         // Model Type, Mobo Id
	uint32_t (*GetUnk1)(void *);                 // uint8_t [0x1C] { hdmi, ieee802.11, msslot, sdslot, cfslot }
	uint32_t (*SetUnk2)(void *);
	uint32_t (*GetEnterButtonAssign)(int *);
	uint32_t (*SetEnterButtonAssign)(int);
	uint32_t (*GetLicenseArea)(int *);
	uint32_t (*SetSystemInitialize)(int);
	uint32_t (*GetSystemInitialize)(int *);
	uint32_t (*SetSystemLanguage)(int);
	uint32_t (*GetSystemLanguage)(int *);
	uint32_t (*SetSystemNickname)(char *);
	uint32_t (*GetSystemNickname)(char *, int *); // nick, length
	uint32_t (*SetSystemCharacterCodeOem)(int);
	uint32_t (*GetSystemCharacterCodeOem)(int *);
	uint32_t (*SetSystemCharacterCodeOemValue)(int);
	uint32_t (*GetSystemCharacterCodeOemValue)(int *);
	uint32_t (*SetsystemCharacterCodeAnsi)(int);
	uint32_t (*GetSystemCharacterCodeAnsi)(int *);
	uint32_t (*ResetNicknameDvdRegionDlnaFlag)(void);
	uint32_t (*SetSystemNotificationEnabled)(int);
	uint32_t (*GetSystemNotificationEnabled)(int *);
	uint32_t (*SetSystemDiscBootFirstEnabled)(int);
	uint32_t (*GetSystemDiscBootFirstEnabled)(int *);
	uint32_t (*SetSystemSoundEffectEnabled)(int);
	uint32_t (*GetSystemSoundEffectEnabled)(int *);
	uint32_t (*unk_new)(void *, void *);
	uint32_t (*unk_delete)(void *, void *);
} xsetting_0AF1F161_class; 

typedef struct xsetting_154430FC_class_t  // 0
{
	// ...
} xsetting_154430FC_class;

typedef struct xsetting_16A8A805_class_t  // 53
{
	uint32_t (*SetBdMenuLanguage)(int);
	uint32_t (*GetBdMenuLanguage)(int *);	 
	uint32_t (*SetBdSoundLanguage)(int);
	uint32_t (*GetBdSoundLanguage)(int *);	 
	uint32_t (*SetBdCaptionLanguage)(int);
	uint32_t (*GetBdCaptionLanguage)(int *);
	uint32_t (*Set_unk6)(int);
	uint32_t (*Get_unk7)(int *);	 
	uint32_t (*SetDvdMenuLanguage)(int);
	uint32_t (*GetDvdMenuLanguage)(int *);	 
	uint32_t (*SetDvdSoundLanguage)(int);
	uint32_t (*GetDvdSoundLanguage)(int *);	 
	uint32_t (*SetDvdCaptionLanguage)(int);
	uint32_t (*GetDvdCaptionLanguage)(int *);	 
	uint32_t (*Set_unk14)(int);
	uint32_t (*Get_unk15)(int *);	 
	uint32_t (*SetFnr)(int);
	uint32_t (*GetFnr)(int *);
	uint32_t (*SetBnr)(int);
	uint32_t (*GetBnr)(int *);
	uint32_t (*SetMnr)(int);
	uint32_t (*GetMnr)(int *);
	uint32_t (*SetFnrForDvdRom)(int);
	uint32_t (*GetFnrForDvdRom)(int *);
	uint32_t (*SetBnrForDvdRom)(int);
	uint32_t (*GetBnrForDvdRom)(int *);
	uint32_t (*SetMnrForDvdRom)(int);
	uint32_t (*GetMnrForDvdRom)(int *);	 
	uint32_t (*SetCinemaConversion)(int);
	uint32_t (*GetCinemaConversion)(int *);
	uint32_t (*SetVolume)(int);
	uint32_t (*GetVolume)(int *);
	uint32_t (*SetDvdWideScreen)(int);
	uint32_t (*GetDvdWideScreen)(int *);
	uint32_t (*SetDvdRegionCode)(int);
	uint32_t (*GetDvdRegionCode)(int *);
	uint32_t (*SetBdRegionCode)(int);
	uint32_t (*GetBdRegionCode)(int *);
	uint32_t (*SetDvdTvSystem)(int);
	uint32_t (*GetDvdTvSystem)(int *);
	uint32_t (*SetDvdUpConvert)(int);
	uint32_t (*GetDvdUpConvert)(int *);
	uint32_t (*SetDrc)(int);
	uint32_t (*GetDrc)(int *);
	uint32_t (*GetColorButtonAssign)(int *);	 
	uint32_t (*SetNetworkConnect)(int);
	uint32_t (*GetNetworkConnect)(int *);	 
	uint32_t (*GetSoundFormatHdmi)(int *);
	uint32_t (*SetSoundFormatHdmi)(int);
	uint32_t (*GetVideoFormatHdmiColorSpace)(int *);
	uint32_t (*SetVideoFormatHdmiColorSpace)(int);
	uint32_t (*GetVideoFormatHdmi1080_24p)(int *);
	uint32_t (*SetVideoFormatHdmi1080_24p)(int);	 
} xsetting_16A8A805_class;

typedef struct xsetting_1D6D60D4_class_t  // 131
{
	// ...
} xsetting_1D6D60D4_class;

typedef struct xsetting_43F98936_class_t  // 15
{
	// ...
} xsetting_43F98936_class;

typedef struct xsetting_4712F276_class_t  // 79
{
	// ...
} xsetting_4712F276_class;

typedef struct xsetting_58560CA4_class_t  // 6
{
	uint32_t (*GetVideoScreenMode)(int *);
	uint32_t (*SetVideoScreenMode)(int);
	uint32_t (*GetVideoOutputChannel)(int *);
	uint32_t (*SetVideoOutputChannel)(int);
	uint32_t (*GetVideoPlayerVolume)(int *);
	uint32_t (*SetVideoPlayerVolume)(int);
} xsetting_58560CA4_class;

typedef struct xsetting_5FB90B89_class_t  // 43
{
	// ...
} xsetting_5FB90B89_class;

typedef struct xsetting_660ECC35_class_t  // 8
{
	uint32_t (*SetPhotoNormalScenario)(int);
	uint32_t (*GetPhotoNormalScenario)(int *);
	uint32_t (*SetPhotoSlideScenario)(int);
	uint32_t (*GetPhotoSlideScenario)(int *);
	uint32_t (*SetPhotoSlideInterval)(int);
	uint32_t (*GetPhotoSlideInterval)(int *);
	uint32_t (*SetPhotoSlideRepeat)(int);
	uint32_t (*GetPhotoSlideRepeat)(int *);
} xsetting_660ECC35_class;

typedef struct xsetting_69C19C7F_class_t  // 23
{
	// ...
} xsetting_69C19C7F_class;

typedef struct xsetting_7125FEB5_class_t  // 34
{
	uint32_t (*SaveMusicCodec)(int);
	uint32_t (*loadMusicCodec)(int *);
	uint32_t (*SaveBitRateAac)(int);
	uint32_t (*loadBitRateAac)(int *);
	uint32_t (*SaveBitRateMp3)(int);
	uint32_t (*loadBitRateMp3)(int *);
	uint32_t (*SaveBitRateAtrac)(int);
	uint32_t (*loadBitRateAtrac)(int *);
	uint32_t (*SaveCrossFadePlay)(int);
	uint32_t (*loadCrossFadePlay)(int *);
	uint32_t (*SaveRepeatMode)(int);
	uint32_t (*loadRepeatMode)(int *);
	uint32_t (*SaveShuffleMode)(int);
	uint32_t (*loadShuffleMode)(int *);
	uint32_t (*SaveVisualizerSelect)(int);
	uint32_t (*loadVisualizerSelect)(int *);
	uint32_t (*SaveCddaEula)(int);
	uint32_t (*loadCddaEula)(int *);
	uint32_t (*SaveCddaServer)(int);
	uint32_t (*loadCddaServer)(int *);
	uint32_t (*SaveAudioplayerVolume)(int);
	uint32_t (*loadAudioplayerVolume)(int *);
	uint32_t (*SaveSacdPlayerVolume)(int);
	uint32_t (*loadSacdPlayerVolume)(int *);
	uint32_t (*SaveAtracActivation)(int);
	uint32_t (*loadAtracActivation)(int *);
	uint32_t (*SaveWmaActivation)(int);
	uint32_t (*loadWmaActivation)(int *);
	uint32_t (*SaveCdOutputFs)(int);
	uint32_t (*loadCdOutputFs)(int *);
	uint32_t (*SaveDitherSetting)(int);
	uint32_t (*loadDitherSetting)(int *);
	uint32_t (*SaveBitmappingSetting)(int);
	uint32_t (*loadBitmappingSetting)(int *);
} xsetting_7125FEB5_class;

typedef struct xsetting_7EDDAD29_class_t  // 8
{
	uint32_t (*loadParentalInformation)(void *);  // uint8_t [0x20] { parental passwordNumber, bdPc, bdPcAge, dvdRegion, dvdLevel, gameLevel, browserStartControl }
	uint32_t (*SaveDvdRegion)(char *);
	uint32_t (*SaveBdPc)(int);
	uint32_t (*SaveBdPcAge)(int);
	uint32_t (*SaveDvdRegionWithCheck)(int);
	uint32_t (*SaveDvdLevel)(int);
	uint32_t (*SaveGameLevel)(int);
	uint32_t (*SaveBrowserStartControl)(int);
} xsetting_7EDDAD29_class;

typedef struct xsetting_8B69F85A_class_t  // 11
{
  uint32_t (*loadDateTimeInformation)(void *);  //uint8_t [0x18] {diffTime, dateFormat, timeFormat, timeZone, summerTime }
  uint32_t (*SaveDiffTime)(int);
  uint32_t (*SaveDateFormat)(int);
	uint32_t (*SaveTimeFormat)(int);
	uint32_t (*SaveTimeZone)(int);
	uint32_t (*SaveSummerTime)(int);
	//and more
} xsetting_8B69F85A_class;

typedef struct xsetting_9EE60B4E_class_t  // 64
{
	// ...
} xsetting_9EE60B4E_class;

typedef struct xsetting_C1008335_class_t  // 11
{
	// ...
} xsetting_C1008335_class;

typedef struct xsetting_CC56EB2D_class_t  // 89
{
	uint32_t (*DoUnk0)(void);
	uint32_t (*DoUnk1)(void);
	uint32_t (*DoUnk2)(void);
	uint32_t (*DoUnk3)(void);
	uint32_t (*DoUnk4)(void);
	uint32_t (*DoUnk5)(void);
	uint32_t (*DoUnk6)(void);
	uint32_t (*DoUnk7)(void);
	uint32_t (*DoUnk8)(void);
	uint32_t (*DoUnk9)(void);
	uint32_t (*DoUnk10)(void);
	uint32_t (*DoUnk11)(void);
	uint32_t (*GetCurrentUserNumber)(void);
	uint32_t (*DoUnk13)(void);
	uint32_t (*DoUnk14)(void);
	uint32_t (*DoUnk15)(void);
	uint32_t (*DoUnk16_GetRegistryValue)(int userid, int packetid, int *value);
	uint32_t (*DoUnk17_GetRegistryString)(int userid, int packetid, char * value, int maxlen);
	uint32_t (*DoUnk18_SetRegistryValue)(int userid, int packetid, int value);
	uint32_t (*DoUnk19_SetRegistryString)(int userid, int packetid, char *value, int maxlen);
	uint32_t (*DoUnk20)(void);
	uint32_t (*DoUnk21)(void);
	uint32_t (*DoUnk22)(void);
	uint32_t (*DoUnk23)(void);
	uint32_t (*DoUnk24)(void);
	uint32_t (*DoUnk25)(void);
	uint32_t (*DoUnk26)(void);
	uint32_t (*DoUnk27)(void);
	uint32_t (*DoUnk28)(void);
	uint32_t (*DoUnk29)(void);
	uint32_t (*DoUnk30)(void);
	uint32_t (*DoUnk31)(void);
	uint32_t (*DoUnk32_GetRegistryHomePath)(int userid, char *path);
	uint32_t (*DoUnk33)(void);
	uint32_t (*DoUnk34)(void);
	uint32_t (*DoUnk35)(void);
	uint32_t (*DoUnk36)(void);
	uint32_t (*DoUnk37)(void);
	uint32_t (*DoUnk38)(void);
	uint32_t (*DoUnk39)(void);
	uint32_t (*DoUnk40)(void);
	uint32_t (*DoUnk41)(void);
	uint32_t (*DoUnk42)(void);
/*
	int GetRegistryKeyboardType()	{int v; DoUnk16_GetRegistryValue(0,0x14, &v);return v;}
	int GetRegistryKeyboardJapaneseInput()	{int v; DoUnk16_GetRegistryValue(0,0x15, &v);return v;}
	int GetRegistryKeyboardTradChineseInput()	{int v; DoUnk16_GetRegistryValue(0,0x16, &v);return v;}
	int GetRegistryKeyboardBind()	{int v; DoUnk16_GetRegistryValue(0,0x17, &v);return v;}
	int GetRegistryKeyboardRepeatStartingTime()	{int v; DoUnk16_GetRegistryValue(0,0x18, &v);return v;}
	int GetRegistryKeyboardRepeadSpeed()	{int v; DoUnk16_GetRegistryValue(0,0x19, &v);return v;}
	int GetRegistryMouseType()	{int v; DoUnk16_GetRegistryValue(0,0x1E, &v);return v;}
	int GetRegistryMouseSpeed()	{int v; DoUnk16_GetRegistryValue(0,0x1F, &v);return v;}
	int GetRegistryBrowserHomeUri(char * uri)	{return DoUnk17_GetRegistryString(0,0x28,uri,0x80);}
	int GetRegistryBrowserCookieMode()	{int v; DoUnk16_GetRegistryValue(0,0x29, &v);return v;}
	int GetRegistryBrowserJavascript()	{int v; DoUnk16_GetRegistryValue(0,0x2A, &v);return v;}
	int GetRegistryBrowserDisplayMode()	{int v; DoUnk16_GetRegistryValue(0,0x2B, &v);return v;}
	int GetRegistryBrowserExitConfirmation()	{int v; DoUnk16_GetRegistryValue(0,0x2C, &v);return v;}
	int GetRegistryBrowserOverscan()	{int v; DoUnk16_GetRegistryValue(0,0x2D, &v);return v;}
	int GetRegistryBrowserWindowSize()	{int v; DoUnk16_GetRegistryValue(0,0x2E, &v);return v;}
	int GetRegistryBrowserFontSize()	{int v; DoUnk16_GetRegistryValue(0,0x2F, &v);return v;}
	int GetRegistryBrowserEncoding()	{int v; DoUnk16_GetRegistryValue(0,0x30, &v);return v;}
	int GetRegistryBrowserCacheSize()	{int v; DoUnk16_GetRegistryValue(0,0x31, &v);return v;}
	int GetRegistryBrowserRestoreWindow()	{int v; DoUnk16_GetRegistryValue(0,0x32, &v);return v;}
	int GetRegistryBrowserPopupBlock()	{int v; DoUnk16_GetRegistryValue(0,0x33, &v);return v;}
	int GetRegistryBrowserDpi()	{int v; DoUnk16_GetRegistryValue(0,0x34, &v);return v;}
	int GetRegistryBrowserInterlaceFilter()	{int v; DoUnk16_GetRegistryValue(0,0x35, &v);return v;}
	int GetRegistryBrowserIfilter()	{int v; DoUnk16_GetRegistryValue(0,0x36, &v);return v;}
	int GetRegistryBrowserIfilterAddress()	{int v; DoUnk16_GetRegistryValue(0,0x37, &v);return v;}
	int GetRegistryBrowserIfilterPort()	{int v; DoUnk16_GetRegistryValue(0,0x38, &v);return v;}
	int GetRegistryBrowserIfilterUsername()	{int v; DoUnk16_GetRegistryValue(0,0x39, &v);return v;}
	int GetRegistryBrowserIfilterPassword()	{int v; DoUnk16_GetRegistryValue(0,0x3A, &v);return v;}
	int GetRegistryBrowserIfilterBase64()	{int v; DoUnk16_GetRegistryValue(0,0x3B, &v);return v;}
	int GetRegistryBrowserTrendEula()	{int v; DoUnk16_GetRegistryValue(0,0x3C, &v);return v;}
	int GetRegistryBrowserTrendEnable()	{int v; DoUnk16_GetRegistryValue(0,0x3D, &v);return v;}
	int GetRegistryInputForecastDictionary()	{int v; DoUnk16_GetRegistryValue(0,0x46, &v);return v;}
	int GetRegistryInputTenKeyInputType()	{int v; DoUnk16_GetRegistryValue(0,0x47, &v);return v;}
	int GetRegistryInputForecastDictionaryCh()	{int v; DoUnk16_GetRegistryValue(0,0x48, &v);return v;}
	int GetRegistryInputKeyLayoutType()	{int v; DoUnk16_GetRegistryValue(0,0x49, &v);return v;}
	int GetRegistryEdyEula()	{int v; DoUnk16_GetRegistryValue(0,0x50, &v);return v;}
	int GetRegistryThemeWallpaper()	{int v; DoUnk16_GetRegistryValue(0,0x5A, &v);return v;}
	int GetRegistryThemeFont()	{int v; DoUnk16_GetRegistryValue(0,0x5B, &v);return v;}
	int GetRegistryThemeFontEu()	{int v; DoUnk16_GetRegistryValue(0,0x5C, &v);return v;}
	int GetRegistryThemeFontRu()	{int v; DoUnk16_GetRegistryValue(0,0x5D, &v);return v;}
	int GetRegistryThemeFile(char * f)	{return DoUnk17_GetRegistryString(0,0x5E,f,0x80);}
	int GetRegistryThemeColor()	{int v; DoUnk16_GetRegistryValue(0,0x5F, &v);return v;}
	int GetRegistryThemeEndarkbg()	{int v; DoUnk16_GetRegistryValue(0,0x60, &v);return v;}
	int GetRegistryMicPitchshift()	{int v; DoUnk16_GetRegistryValue(0,0x64, &v);return v;}
	int GetRegistryUserRestoreSignInPassword(char * p)	{return DoUnk17_GetRegistryString(0,0x6E,p,0x80);}
	int GetRegistryUserRestoreSignInStatus()	{int v; DoUnk16_GetRegistryValue(0,0x6F, &v);return v;}
	int GetRegistryYtaccountAccountid(char * a)	{return DoUnk17_GetRegistryString(0,0x78,a,0x80);}
	int GetRegistryYtaccountPassword(char * p)	{return DoUnk17_GetRegistryString(0,0x79,p,0x80);}
	int GetRegistryNpGuestCountry(char * c)	{return DoUnk17_GetRegistryString(0,0x82,c,0x80);}
	int GetRegistryNpGuestLang(char * l)	{return DoUnk17_GetRegistryString(0,0x83,l,0x80);}
	int GetRegistryNpGuestBirth()	{int v; DoUnk16_GetRegistryValue(0,0x84, &v);return v;}
	int GetRegistryWBoardEnable()	{int v; DoUnk16_GetRegistryValue(0,0x8C, &v);return v;}
	int GetRegistryWBoardFocusMask(){int v; DoUnk16_GetRegistryValue(0,0x8D, &v);return v;}
	int GetRegistryNetOnlineFlag()	{int v; DoUnk16_GetRegistryValue(0,0x96, &v);return v;}
	int GetRegistryFacebookAccount(char * a)	{return DoUnk17_GetRegistryString(0,0xC8,a,0x80);}
	int GetRegistryFacebookSessionKey()	{int v; DoUnk16_GetRegistryValue(0,0xC9, &v);return v;}
	int GetRegistryFacebookSessionSecret()	{int v; DoUnk16_GetRegistryValue(0,0xCA, &v);return v;}
	int GetRegistryFacebookUid()	{int v; DoUnk16_GetRegistryValue(0,0xCB, &v);return v;}
	int GetRegistryFacebookTrophy()	{int v; DoUnk16_GetRegistryValue(0,0xCC, &v);return v;}
	int GetRegistryFacebookPurchase()	{int v; DoUnk16_GetRegistryValue(0,0xCD, &v);return v;}
	int GetRegistryFacebookGameEvent()	{int v; DoUnk16_GetRegistryValue(0,0xCE, &v);return v;}
	int GetRegistryFacebookHknwEnable()	{int v; DoUnk16_GetRegistryValue(0,0xCF, &v);return v;}
	int GetRegistryFacebookAccessToken()	{int v; DoUnk16_GetRegistryValue(0,0xD0, &v);return v;}
	int GetRegistryFacebookGameIntegrations()	{int v; DoUnk16_GetRegistryValue(0,0xD1, &v);return v;}
	int GetRegistryPicasaMail(char * m)	{return DoUnk17_GetRegistryString(0,0xD2,m,0x80);}
	int GetRegistryPicasaPassword(char * p)	{return DoUnk17_GetRegistryString(0,0xD3,p,0x80);}
	int GetRegistryPicasaHknwEnable()	{int v; DoUnk16_GetRegistryValue(0,0xD4, &v);return v;}
	int GetRegistryFlickrMail(char * m)	{return DoUnk17_GetRegistryString(0,0xDC,m,0x80);}
	int GetRegistryFlickrPassword(char * p)	{return DoUnk17_GetRegistryString(0,0xDD,p,0x80);}
	int GetRegistryFacebookRating()	{int v; DoUnk16_GetRegistryValue(0,0xE6, &v);return v;}
	int SetRegistryWBoardFocusMask(int v){ return DoUnk18_SetRegistryValue(0,0x8D, v);}
*/
} xsetting_CC56EB2D_class;

typedef struct xsetting_CE27E884_class_t  // 12
{
	uint32_t (*savePremoPSPInformation)(void *); // uint8_t [0x4B8]
	uint32_t (*loadPremoPSPInformation)(void *); // uint8_t [0x4B8]
	uint32_t (*saveRemoteBoot)(int);
	uint32_t (*loadRemoteBoot)(int *);
	uint32_t (*saveBootCount)(int);
	uint32_t (*loadBootCount)(int *);
	uint32_t (*savePowerOffTime)(void *);
	uint32_t (*loadPowerOffTime)(void *);
	uint32_t (*saveAudioConfig)(int);
	uint32_t (*loadAudioConfig)(int *);
} xsetting_CE27E884_class;

typedef struct xsetting_D0261D72_class_t  // 28
{
	uint32_t (*saveAvcInitialCameraMode)(int);
	uint32_t (*loadAvcInitialCameraMode)(int *);
	uint32_t (*saveNpEnvironment)(char *, int *);          // env, len
	uint32_t (*loadNpEnvironment)(char *, int *);          // env, len
	uint32_t (*saveRegistryIntValue)(int, int);            // id, value
	uint32_t (*loadRegistryIntValue)(int, int*);           // id, value
	uint32_t (*saveRegistryStringValue)(int, char *, int); // id, string, len
	uint32_t (*loadRegistryStringValue)(int, char *, int); // id, string, len
	uint32_t (*Setunk1)(int);
	uint32_t (*Getunk2)(int, int *);
	uint32_t (*Setunk3)(int, int);
/*
	int loadRegistryAvcVgaLastBitrate()	{int v; loadRegistryIntValue(0x00, &v);return v;}
	int loadRegistryGameLevel0Control()	{int v; loadRegistryIntValue(0x01, &v);return v;}
	int loadRegistryNetworkServiceControl()	{int v; loadRegistryIntValue(0x02, &v);return v;}
	int loadRegistryCddaServer()	{int v; loadRegistryIntValue(0x03, &v);return v;}
	int loadRegistryGameBgmPlayback()	{int v; loadRegistryIntValue(0x04, &v);return v;}
	int loadRegistryGameBgmVolume()	{int v; loadRegistryIntValue(0x05, &v);return v;}
	int loadRegistryDummyBgmPlayer()	{int v; loadRegistryIntValue(0x06, &v);return v;}
	int loadRegistryDynamicNormalizer()	{int v; loadRegistryIntValue(0x07, &v);return v;}
	int loadRegistryNpDebug()	{int v; loadRegistryIntValue(0x08, &v);return v;}
	int loadRegistryNpTitleId(char * titleid,int max_len)	{return loadRegistryStringValue(0x09,titleid,max_len);}
	int loadRegistryNavOnly()	{int v; loadRegistryIntValue(0x0A, &v);return v;}
	int loadRegistryNpAdClockDiff()	{int v; loadRegistryIntValue(0x0B, &v);return v;}
	int loadRegistryDebugDrmError()	{int v; loadRegistryIntValue(0x0C, &v);return v;}
	int loadRegistryDebugDrmClock()	{int v; loadRegistryIntValue(0x0D, &v);return v;}
	int loadRegistryDebugConsoleBind()	{int v; loadRegistryIntValue(0x0E, &v);return v;}
	int loadRegistryDebugIngameCommerce2()	{int v; loadRegistryIntValue(0x0F, &v);return v;}
	int loadRegistryDebugSFForce()	{int v; loadRegistryIntValue(0x10, &v);return v;}
	int loadRegistryNpGeoFiltering()	{int v; loadRegistryIntValue(0x11, &v);return v;}
	int loadRegistryGameUpdateImposeTest()	{int v; loadRegistryIntValue(0x12, &v);return v;}
	int loadRegistryGameUpdateForceOverwrite()	{int v; loadRegistryIntValue(0x13, &v);return v;}
	int loadRegistryFakeNpSnsThrottle()	{int v; loadRegistryIntValue(0x14, &v);return v;}
	int loadRegistryFakeNpSnsThrottleWaitSeconds()	{int v; loadRegistryIntValue(0x15, &v);return v;}
	int loadRegistryTppsProxyFlag()	{int v; loadRegistryIntValue(0x16, &v);return v;}
	int loadRegistryTppsProxyServer()	{int v; loadRegistryIntValue(0x17, &v);return v;} // questionable
	int loadRegistryTppsProxyPort()	{int v; loadRegistryIntValue(0x18, &v);return v;}
	int loadRegistryTppsProxyUserName(char * username,int max_len)	{return loadRegistryStringValue(0x19,username,max_len);}
	int loadRegistryTppsProxyPassword(char * password,int max_len)	{return loadRegistryStringValue(0x1A,password,max_len);}
	int loadRegistryRegion()	{int v; loadRegistryIntValue(0x1B, &v);return v;}
	int loadRegistryLicenseArea()	{int v; loadRegistryIntValue(0x1C, &v);return v;}
	int loadRegistryHddSerial(char * hddserial)	{return loadRegistryStringValue(0x1D,hddserial,0x3D);}
	int loadRegistryCoreDump()	{int v; loadRegistryIntValue(0x1E, &v);return v;}
	int loadRegistryCoreDumpOptionTrigger()	{int v; loadRegistryIntValue(0x1F, &v);return v;}
	int loadRegistryCoreDumpOptionFileGen()	{int v; loadRegistryIntValue(0x20, &v);return v;}
	int loadRegistryCoreDumpOptionExeCtrl()	{int v; loadRegistryIntValue(0x21, &v);return v;}
	int loadRegistryMatEnable()	{int v; loadRegistryIntValue(0x22, &v);return v;}
	int loadRegistryUpdateServerUrl(char * url,int max_len)	{return loadRegistryStringValue(0x23,url,max_len);}
	int loadRegistryFakeLimitSize()	{int v; loadRegistryIntValue(0x24, &v);return v;}
	int loadRegistryFakeFreeSpace()	{int v; loadRegistryIntValue(0x25, &v);return v;}
	int loadRegistryFakeSavedataOwner()	{int v; loadRegistryIntValue(0x26, &v);return v;}
	int loadRegistryFakeHddSpeed()	{int v; loadRegistryIntValue(0x27, &v);return v;}
	int loadRegistryDebugGameType()	{int v; loadRegistryIntValue(0x28, &v);return v;}
	int loadRegistryDebugBootPath()	{int v; loadRegistryIntValue(0x29, &v);return v;}
	int loadRegistryDebugDirName(char * path,int max_len)	{return loadRegistryStringValue(0x2A,path,max_len);}
	int loadRegistryAppHomeBootPath()	{int v; loadRegistryIntValue(0x2B, &v);return v;}
	int loadRegistryWolDex()	{int v; loadRegistryIntValue(0x2C, &v);return v;}
	int loadRegistryDispHddSpace()	{int v; loadRegistryIntValue(0x2D, &v);return v;}
	int loadRegistryAutoNetworkUpdate()	{int v; loadRegistryIntValue(0x2E, &v);return v;}
	int loadRegistryAutoPowerOff()	{int v; loadRegistryIntValue(0x2F, &v);return v;}
	int loadRegistryAutoPowerOffEx()	{int v; loadRegistryIntValue(0x30, &v);return v;}
	int loadRegistryAutoPowerOffDebug()	{int v; loadRegistryIntValue(0x31, &v);return v;}
	int loadRegistryHdmiControl()	{int v; loadRegistryIntValue(0x32, &v);return v;}
	int loadRegistryHdmiControlEx()	{int v; loadRegistryIntValue(0x33, &v);return v;}
	int loadRegistryPowerOnDiscBoot()	{int v; loadRegistryIntValue(0x34, &v);return v;}
	int loadRegistryPowerOnReset()	{int v; loadRegistryIntValue(0x35, &v);return v;}
	int loadRegistryDisable15Timeout()	{int v; loadRegistryIntValue(0x36, &v);return v;}
	int loadRegistryDebugSystemUpdate()	{int v; loadRegistryIntValue(0x37, &v);return v;}
	int loadRegistryFakePlus()	{int v; loadRegistryIntValue(0x38, &v);return v;}
	int loadRegistryTurnOffWarning()	{int v; loadRegistryIntValue(0x39, &v);return v;}
	int loadRegistryBootMode(char * bootmode,int max_len)	{return loadRegistryStringValue(0x3A,bootmode,max_len);}
	int loadRegistryCrashreportCrepo()	{int v; loadRegistryIntValue(0x3B, &v);return v;}
	int loadRegistryCrashreportReporterStatus()	{int v; loadRegistryIntValue(0x3C, &v);return v;}
	int loadRegistryCrashreportVshGeneratorEnableFlag()	{int v; loadRegistryIntValue(0x3D, &v);return v;}
	int loadRegistryDateTimeAutoCorrection()	{int v; loadRegistryIntValue(0x3E, &v);return v;}
	int loadRegistryAutobootStartTime()	{int v; loadRegistryIntValue(0x3F, &v);return v;}
	int loadRegistryEdyDebug()	{int v; loadRegistryIntValue(0x40, &v);return v;}
	int loadRegistryUpConvert()	{int v; loadRegistryIntValue(0x41, &v);return v;}
	int loadRegistryFnrLevel()	{int v; loadRegistryIntValue(0x42, &v);return v;}
	int loadRegistryBnrLevel()	{int v; loadRegistryIntValue(0x43, &v);return v;}
	int loadRegistryMnrLevel()	{int v; loadRegistryIntValue(0x44, &v);return v;}
	int loadRegistrySequentialPlay()	{int v; loadRegistryIntValue(0x45, &v);return v;}
	int loadRegistryHD50HzOutput()	{int v; loadRegistryIntValue(0x46, &v);return v;}
	int loadRegistryOutputExtMenu()	{int v; loadRegistryIntValue(0x47, &v);return v;}
	int loadRegistryOutputExtFunc()	{int v; loadRegistryIntValue(0x48, &v);return v;}
	int loadRegistryDtcpIpSettingMenu()	{int v; loadRegistryIntValue(0x49, &v);return v;}
	int loadRegistryDefaultSubTitleLanguage()	{int v; loadRegistryIntValue(0x4A, &v);return v;}
	int loadRegistryDefaultAudioLanguage()	{int v; loadRegistryIntValue(0x4B, &v);return v;}
	int loadRegistryEmuUpConvert()	{int v; loadRegistryIntValue(0x4C, &v);return v;}
	int loadRegistryEmuSmoothing()	{int v; loadRegistryIntValue(0x4D, &v);return v;}
	int loadRegistryMinisUpConvert()	{int v; loadRegistryIntValue(0x4E, &v);return v;}
	int loadRegistryPspemuViewmode()	{int v; loadRegistryIntValue(0x4F, &v);return v;}
	int loadRegistryPspemu3dDisplay()	{int v; loadRegistryIntValue(0x50, &v);return v;}
	int loadRegistryPspemu3dDepthAdjust()	{int v; loadRegistryIntValue(0x51, &v);return v;}
	int loadRegistryPspemu3dMenu()	{int v; loadRegistryIntValue(0x52, &v);return v;}
	int loadRegistryPspemuAdhocModeWlan()	{int v; loadRegistryIntValue(0x53, &v);return v;}
	int loadRegistryPspemuAdhocModeCh()	{int v; loadRegistryIntValue(0x54, &v);return v;}
	int loadRegistryPs2emuSaveUtility()	{int v; loadRegistryIntValue(0x55, &v);return v;}
	int loadRegistryPs2softemuFunc()	{int v; loadRegistryIntValue(0x56, &v);return v;}
	int loadRegistryPs2BgCaution()	{int v; loadRegistryIntValue(0x57, &v);return v;}
	int loadRegistryCameraPlfreq()	{int v; loadRegistryIntValue(0x58, &v);return v;}
	int loadRegistryTvCategory()	{int v; loadRegistryIntValue(0x59, &v);return v;}
	int loadRegistryHomeInstaller()	{int v; loadRegistryIntValue(0x5A, &v);return v;}
	int loadRegistryHomeQAMode()	{int v; loadRegistryIntValue(0x5B, &v);return v;}
	int loadRegistryDummyInGameXMB()	{int v; loadRegistryIntValue(0x5C, &v);return v;}
	int loadRegistryYconExplained()	{int v; loadRegistryIntValue(0x5D, &v);return v;}
	int loadRegistryXaiDebugFlag()	{int v; loadRegistryIntValue(0x5E, &v);return v;}
	int loadRegistryAdServerURL(char * url,int max_len)	{return loadRegistryStringValue(0x5F,url,max_len);}
	int loadRegistryAdCatalogVersion(char * version,int max_len)	{return loadRegistryStringValue(0x60,version,max_len);}
	int loadRegistryAdEnableNotification()	{int v; loadRegistryIntValue(0x61, &v);return v;}
	int loadRegistryUploadDebug()	{int v; loadRegistryIntValue(0x62, &v);return v;}
	int loadRegistryNetAutoDlDebug()	{int v; loadRegistryIntValue(0x63, &v);return v;}
	int loadRegistryNetAutoDlFlag()	{int v; loadRegistryIntValue(0x64, &v);return v;}
	int loadRegistryNetAutoDlTime()	{int v; loadRegistryIntValue(0x65, &v);return v;}
	int loadRegistryNetAutoDlFunc()	{int v; loadRegistryIntValue(0x66, &v);return v;}
	int loadRegistryNetEmulationType()	{int v; loadRegistryIntValue(0x67, &v);return v;}   // questionable
	int loadRegistryNetAdhocSsidPrefix(char * prefix,int max_len)	{return loadRegistryStringValue(0x68,prefix,max_len);}
	int loadRegistryPadVibrationEnable()	{int v; loadRegistryIntValue(0x69, &v);return v;}
	int loadRegistryPadAutoPowerOff()	{int v; loadRegistryIntValue(0x6A, &v);return v;}
	int loadRegistryPadMagnetometer()	{int v; loadRegistryIntValue(0x6B, &v);return v;}
	int loadRegistrySound0Initial()	{int v; loadRegistryIntValue(0x6C, &v);return v;}
	int loadRegistrySound1UsbHeadSetSound()	{int v; loadRegistryIntValue(0x6D, &v);return v;}   // questionable
	int loadRegistryDlnaFlag()	{int v; loadRegistryIntValue(0x6E, &v);return v;}
	int loadRegistryDlnaDtcpipDevCert()	{int v; loadRegistryIntValue(0x6F, &v);return v;}   // questionable
	int loadRegistryBrowserTrendEula()	{int v; loadRegistryIntValue(0x70, &v);return v;}
	int loadRegistryBrowserTrendEnable()	{int v; loadRegistryIntValue(0x71, &v);return v;}
	int loadRegistryBrowserTrendLastTime()	{int v; loadRegistryIntValue(0x72, &v);return v;}
	int loadRegistryBrowserTrendTtl()	{int v; loadRegistryIntValue(0x73, &v);return v;}
	int loadRegistryBrowserTrendRegistered()	{int v; loadRegistryIntValue(0x74, &v);return v;}
	int loadRegistryBrowserHeapSize()	{int v; loadRegistryIntValue(0x75, &v);return v;}
	int loadRegistryBrowserDebugMenu()	{int v; loadRegistryIntValue(0x76, &v);return v;}
	int loadRegistryBrowserType()	{int v; loadRegistryIntValue(0x77, &v);return v;}
	int loadRegistryWboardBaseUri(char * uri,int max_len)	{return loadRegistryStringValue(0x68,uri,max_len);}
	int loadRegistrySmssTargetServer()	{int v; loadRegistryIntValue(0x79, &v);return v;}
	int loadRegistrySmssResultOutput()	{int v; loadRegistryIntValue(0x7A, &v);return v;}
	int loadRegistryDisplayForceEnable3D()	{int v; loadRegistryIntValue(0x7B, &v);return v;}
	int loadRegistryDisplayScreenSize()	{int v; loadRegistryIntValue(0x7C, &v);return v;}
	int loadRegistryDisplayDeepColor()	{int v; loadRegistryIntValue(0x7D, &v);return v;}
*/
} xsetting_D0261D72_class;

typedef struct xsetting_ED5B559F_class_t  // 18
{
	// ...
} xsetting_ED5B559F_class;

typedef struct xsetting_F48C0548_class_t  // 38
{
	// ...
} xsetting_F48C0548_class;

typedef struct xsetting_FFAF9B19_class_t  // 12
{
	// ...
} xsetting_FFAF9B19_class;

// class pointers (vsh/lib/libxsetting_export_stub.a)
extern xsetting_0AF1F161_class* xsetting_0AF1F161(void);
extern xsetting_154430FC_class* xsetting_154430FC(void);
extern xsetting_16A8A805_class* xsetting_16A8A805(void);
extern xsetting_1D6D60D4_class* xsetting_1D6D60D4(void);
extern xsetting_43F98936_class* xsetting_43F98936(void);
extern xsetting_4712F276_class* xsetting_4712F276(void);
extern xsetting_58560CA4_class* xsetting_58560CA4(void);
extern xsetting_5FB90B89_class* xsetting_5FB90B89(void);
extern xsetting_660ECC35_class* xsetting_660ECC35(void);
extern xsetting_69C19C7F_class* xsetting_69C19C7F(void);
extern xsetting_7125FEB5_class* xsetting_7125FEB5(void);
extern xsetting_7EDDAD29_class* xsetting_7EDDAD29(void);
extern xsetting_8B69F85A_class* xsetting_8B69F85A(void);
extern xsetting_9EE60B4E_class* xsetting_9EE60B4E(void);
extern xsetting_C1008335_class* xsetting_C1008335(void);
extern xsetting_CC56EB2D_class* xsetting_CC56EB2D(void);
extern xsetting_CE27E884_class* xsetting_CE27E884(void);
extern xsetting_D0261D72_class* xsetting_D0261D72(void);
extern xsetting_ED5B559F_class* xsetting_ED5B559F(void);
extern xsetting_F48C0548_class* xsetting_F48C0548(void);
extern xsetting_FFAF9B19_class* xsetting_FFAF9B19(void);


#endif // __XREGISTRY_H__ 
