#ifndef __VSHMAIN_H__
#define __VSHMAIN_H__


// vshmain_005B064D  // 
// vshmain_02517B76  // 
// vshmain_02C54237  // 
// vshmain_032CE51B  // 
// vshmain_03FE9845  // 
// vshmain_047F4617  // 
// vshmain_04ACCA52  // 
// vshmain_050CCCCE  // 
// vshmain_0624D3AE  // returns game process id 

extern uint32_t vshmain_0624D3AE(void);   // returns game process id
#define GetGameProcessID vshmain_0624D3AE

// vshmain_0633EDC2  // 
// vshmain_0648F3BB  // 
// vshmain_068ED6DA  // 
// vshmain_071EC82E  // 
// vshmain_079E9986  // 
// vshmain_08AA0F15  // 
// vshmain_08B435B9  // 
// vshmain_0A3F6669  // 
// vshmain_0BE18478  // 
// vshmain_0C554460  // 
// vshmain_0CD60664  // 
// vshmain_0D257CFF  // 
// vshmain_0D3DE9FE  // 
// vshmain_0D6DC1E3  // 
// vshmain_0EB95CBB  // 
// vshmain_0F3F75BE  // sysutil_BeginService
// vshmain_106C87C1  // 
// vshmain_12BFE4D5  // 
// vshmain_130FDD8C  // 
// vshmain_134034CE  // 
// vshmain_14F8AB14  // 
// vshmain_1524F9DC  // 
// vshmain_18E2F99A  // 
// vshmain_1A36F945  // 
// vshmain_1A4D136F  // 
// vshmain_1C5F3492  // 
// vshmain_1E36B202  // 
// vshmain_1F7BE1C8  // 
// vshmain_20C06B9A  // 
// vshmain_21685E40  // 
// vshmain_23DC28E8  // 
// vshmain_242E9C0C  // 
// vshmain_24C860B0  // 
// vshmain_25CE539E  // 
// vshmain_27A2023C  // 
// vshmain_2823E246  // 
// vshmain_282F11CD  // 
// vshmain_2906AFB9  // 
// vshmain_2B0678BE  // 
// vshmain_2CD62587  // 
// vshmain_2E1AA6EF  // 
// vshmain_2E3CB3E8  // 
// vshmain_2E3D4F4D  // 
// vshmain_302125E4  // 
// vshmain_31229470  // 
// vshmain_32EF17EE  // 
// vshmain_3329CAAA  // 
// vshmain_358BF778  // 
// vshmain_36C01263  // 
// vshmain_3848A5D4  // 
// vshmain_3AECDD23  // 
// vshmain_3BEEEEF6  // 
// vshmain_3DC5C0C0  // 
// vshmain_41345351  // 
// vshmain_44994447  // 
// vshmain_455FBFBA  // 

extern void vshmain_45D85C54(uint32_t flag);   // set game running flag
#define SetGameRunningFlag vshmain_45D85C54

// vshmain_487DD832  // 
// vshmain_4986187C  // 
// vshmain_4D89A149  // 
// vshmain_4F99DA2B  // 
// vshmain_4F9D12D6  // 
// vshmain_5046CFAB  // 
// vshmain_505FA917  // VersionFile_get
// vshmain_5086096A  // 
// vshmain_5104DF42  // 
// vshmain_51E7CC21  // 
// vshmain_523A54A6  // 
// vshmain_52945678  // 
// vshmain_54CC1C3F  // 
// vshmain_57C48F5B  // 
// vshmain_58B3E7FC  // 
// vshmain_58B963E5  // 
// vshmain_5C3E01A1  // 
// vshmain_5E8B9813  // 
// vshmain_5EA75F0F  // 
// vshmain_5EC145E2  // 
// vshmain_5F5729FB  // 
// vshmain_5F95D6F5  // rtc alarm shutdown/stop 	int vshmain_5F95D6F5(char * app_id)
// vshmain_64CA2FF4  // 
// vshmain_66AFF63C  // 
// vshmain_6797B097  // 
// vshmain_68FBDB9F  // 
// vshmain_6AF9FD89  // 
// vshmain_6B14B9E0  // 
// vshmain_6BA1D72F  // 
// vshmain_6BFD6A5A  // 
// vshmain_6C080C7E  // 
// vshmain_6CE65E82  // 
// vshmain_6D5FC398  // Show Ingame XMB || int vshmain_6D5FC398_0, 0, 0)

extern void vshmain_6D5FC398(int dev_type, int port_num, int intr_type);  // Show Ingame XMB
#define show_ingame_xmb vshmain_6D5FC398

// vshmain_6D8BD460  // 
// vshmain_6E6ED20F  // 
// vshmain_6EEE1B61  // 
// vshmain_6F9F3126  // 
// vshmain_73861125  // 
// vshmain_74105666  // 
// vshmain_749704FB  // 
// vshmain_74A54CBF  // 
// vshmain_75A22E21  // 
// vshmain_7606AF6F  // cxmlutil_GetFile
// vshmain_7752D5A8  // 
// vshmain_784023D0  // 
// vshmain_7907768A  // 
// vshmain_79B82B4D  // 
// vshmain_79EFF338  // 
// vshmain_7B3BBD9D  // 
// vshmain_7B3EF952  // 
// vshmain_7F4E4139  // 
// vshmain_8084F3E6  // 
// vshmain_81F3F967  // 
// vshmain_8243CE25  // 
// vshmain_8364A155  // 
// vshmain_84CB2C9D  // 
// vshmain_85CB2261  // 
// vshmain_85DFCA8E  // 

extern int vshmain_87BB0001(int param);  // shutdown_reset()
#define shutdown_reset vshmain_87BB0001

// vshmain_8AD11D24  // 
// vshmain_8B1026E1  // 
// vshmain_8BA51EED  // 
// vshmain_8C067C7C  // 
// vshmain_8F757D0E  // 
// vshmain_8F7F7B5C  // 
// vshmain_905D36E1  // load "autodownload_plugin" 	vshmain_905D36E1(int load_mode, void * callback?)
// vshmain_9217DD89  // 
// vshmain_925FC708  // 
// vshmain_92B27B03  // 
// vshmain_9367CAE0  // 
// vshmain_97B36F51  // 
// vshmain_97D7B33F  // 

extern int vshmain_981D7E9F(void);  // GetScreenshotFlag
#define GetScreenshotFlag vshmain_981D7E9F

// vshmain_9A864017  // 
// vshmain_9C741986  // 
// vshmain_9E135C0B  // 
// vshmain_9F747C7C  // 
// vshmain_A17966C2  // 
// vshmain_A2720DF2  // 
// vshmain_A3DB7243  // 
// vshmain_A3E81C3B  // 
// vshmain_A4338777  // 
// vshmain_A971E5A3  // 
// vshmain_AA19DA98  // 
// vshmain_AE35CF2D  // call_xmb_plugin
// vshmain_AE8FBFC6  // 
// vshmain_AFF2957B  // 
// vshmain_B172E9CB  // 
// vshmain_B401D9AD  // 
// vshmain_B575A332  // 
// vshmain_B613E8C8  // 
// vshmain_B6B8F46B  // 
// vshmain_B75A2507  // 
// vshmain_B84B751A  // 
// vshmain_BA7437D9  // 
// vshmain_BC00D5EF  // 
// vshmain_BC0F8BCA  // 
// vshmain_BCF4D026  // 
// vshmain_BD1C32E5  // 
// vshmain_BE16BB9D  // 
extern int32_t vshmain_BEF63A14(void);  // base pointer for recording stuff
// vshmain_BEFC4BA2  // 
// vshmain_BFE12104  // 
// vshmain_C21E5ECB  // 
// vshmain_C6F44333  // 
// vshmain_C6FFF132  // 
// vshmain_CAA863A1  // 
// vshmain_CE7BB5C7  // 
// vshmain_CFAD36DE  // cxml::Document::Document()  // Creates a blank cxml document for VSH Service/Process Communication [[1]]. 	
// vshmain_CFE616D0  // 
// vshmain_D03F99CF  // 
// vshmain_D184B2AE  // 
// vshmain_D2C82089  // 
// vshmain_D322FE35  // 
// vshmain_D526FD70  // 
// vshmain_D5BB8C92  // 
// vshmain_D609A2F6  // show_xmb_login
// vshmain_D739CF6B  // 
// vshmain_D776E372  // 
// vshmain_D8026119  // 
// vshmain_D80EA56E  // 
// vshmain_D870C882  // 
// vshmain_DB003739  // 
// vshmain_E04F6BC8  // 
// vshmain_E12AD560  // 
// vshmain_E18DD7CC  // 
// vshmain_E32ED60A  // 
// vshmain_E46A17F0  // 
// vshmain_E563B825  // 
// vshmain_E63AB3D9  // 
// vshmain_E6F481BA  // 
// vshmain_E77FAFB5  // 
// vshmain_E7D2DB56  // 
// vshmain_E7D9F074  // 
// vshmain_EA1D3983  // 
// vshmain_EAF88E5F  // 
// vshmain_EB2B08C2  // 

extern uint32_t vshmain_EB757101(void);        // get mode flag, 0 = XMB is running
                                               // 1 = PS3 Game is running
                                               // 2 = Video Player (DVD/BD) is running
                                               // 3 = PSX/PSP Emu is running
#define GetGameRunningFlag vshmain_EB757101

// vshmain_EDAB5E5E  // BgmPlaybackEnable


// vshmain_F078B063  // avset_cec_control (0)
// vshmain_F0D290E0  // 
// vshmain_F27C6E04  // 
// vshmain_F29D3952  // 
// vshmain_F32CEC81  // loadRegistryNetautoDlFlag 	int loadRegistryNetautoDlFlag (void)
// vshmain_F78B2215  // 
// vshmain_F9ED0497  // 
// vshmain_FB1E70A0  // 
// vshmain_FD980F51  // 
// vshmain_FE855FD1  //


#endif // __VSHMAIN_H__ 
