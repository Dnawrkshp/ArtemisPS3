#ifndef __PAF_H__
#define __PAF_H__


// paf_541F8EBB  // ?

extern void* paf_AF58E756(void);  // Gets the base of loaded plugins. The pointer returned is used in paf::View::Find to find plugins.
#define GetSPRXBaseAddr paf_AF58E756

// paf_ED7791B6  // ?

// paf_A4819ADB  // ? main_mem / rwlock_unlock
// paf_0EAA28B8  // ? 
// paf_59BDA198  // ? rsx command buffer

extern void paf_85D1D23B(void);  // ?, base pointer: pad_data / pad_lwmtx

// paf_A5B4FB55  // ? init libs: gcm, io, ...
// paf_54E2C229  // ? 
// paf_E5B6AF9E  // ?
// paf_99919819  // ?

extern uint32_t *paf_23AFB290(uint32_t arg, uint32_t id);  // gets Interface from plugin, 	uint32_t plugin->GetInterface(uint32_t return from paf_F21655F3, uint32_t identifier)
#define plugin_GetInterface paf_23AFB290

// paf_35A9C2F9  // ?
// paf_728BFDFC  // ?
// paf_F5BEB953  // ?
// paf_2C4E7D1C  // ?
// paf_0A1DC401  // sets Interface from plugin 	uint32_t SetInterface(unknown, uint32_t identifier, void *ptr_structure)
// paf_9DB21A04  // ?
// paf_2361E649  // ?
// paf_BCAACE40  // ?
// paf_2166E819  // ? PageActivate
// paf_42B2CD4A  // ? 
// paf_DF5E3BFD  // ?
// paf_794CEACB  // finds widget in a plugin 	Example: plugin->FindWidget(return from paf_F21655F3, "page_autooff_guide")
// paf_E014D3BA  // ?

extern uint32_t paf_50CDB465(uint32_t plugin, const char *sound);  // finds/gets Sound resource 	uint32_t paf_50CDB465(uint32_t plugin /*paf_F21655F3*/, const char *sound)
#define GetRCOSound paf_50CDB465

extern void paf_B93AFE7E(uint32_t plugin, const char* sound, float arg1, int arg2);  // Example: paf_B93AFE7E( paf_F21655F3("system_plugin"), "snd_trophy", 1, 0)
#define PlayRCOSound paf_B93AFE7E

// paf_B96A18B0  // ? texture
// paf_A499E2BE  // ? texture
// paf_3A8454FC  // finds/gets Texture resource 	Example: out: uint32_t* texture, return from paf_F21655F3, "tex_notification_info"
// paf_89B67B9C  // gets localized string text from plugin resource (Different strings are returned depending on the system language) 	Example: (w)char (paf_F21655F3("system_plugin"), "msg_signed_out")
// paf_E50657B1  // ?
// paf_11E195B3  // Finds Resource Object (located in .rco) 	void* paf_11E195B3(uint32_t plugin, const char* object) // Example: paf_B93AFE7E( paf_F21655F3("system_plugin"), "page_notification")
// paf_2F58C5DF  // ?
// paf_7EE103EF  // ?
// paf_46D0F875  // ?
// paf_8BC523EB  // ?
// paf_75457863  // ? close page
// paf_202CA2A7  // ?
// paf_724E5A8B  // ?
// paf_3CEC3833  // ? sets up a plugin widget ? (page_...) 

extern uint32_t paf_F21655F3(const char *sprx_name);  // finds a loaded plugin 	uint32_t paf::View::Find(const char* plugin) Example: uint32_t paf::View::Find("system_plugin")
#define FindLoadedPlugin paf_F21655F3

// paf_65BE85B3  // _UnloadView 	_paf_65BE85B3(char *sprx_name, 0, 0)
// paf_C6B89CEE  // ?
// paf_28B0A5D9  // ?
// paf_91404635  // ?
// paf_92F7E387  // ?
// paf_430FCFED  // ?
// paf_3F7CB0BF  // ?
// paf_B9152E15  // ? interface
//extern void paf_2F5CEE6D();  // stop and unload sprx 	void paf_2F5CEE6D(int32_t* prx_struct)
// paf_CF068D31  // load (optional on memcontainer) and start sprx 	void paf_CF068D31(int32_t* prx_struct, const char* path, int /*ignored*/, int /*0*/, (optional) const sys_memory_container_t *mem_container)
// paf_08598228  // ?
// paf_3FEF8AC9  // ?
// paf_8B9AAD3E  // ?
// paf_6997E44A  // ?
// paf_718C9629  // ?
// paf_01D59A4E  // ?
// paf_5264AC5C  // ?
// paf_76AD182B  // ?
// paf_8644EEA8  // ?
// paf_EFC45C20  // ?
// paf_19A0F619  // ?
// paf_D2CBEDF8  // ?
// paf_E22D7B0C  // ?
// extern int32_t paf_EB793E25(void);  // ret -1
// extern int32_t paf_A28C8100(void);  // ret -1
// extern int32_t paf_B8979AD7(void);  // ret -1
// paf_9C778A46  // ?
// extern int32_t paf_57B6F6B2(void);  // ret -1
// extern int32_t paf_C35764DF(void);  // ret -1
// extern int32_t paf_DF3A2CA7(void);  // ret -1
// extern int32_t paf_BF575328(void);  // ret -1
// paf_EEE37C22  // ?
// paf_B6584CE7  // ?
// paf_6F1299BE  // ?
// paf_86E89034  // ?
// paf_E2925302  // ?
// paf_F7B61EE3  // ?
// extern int32_t paf_29C739F4(void);  // ret -1
// paf_CF52B916  // ?
// paf_99DB254A  // ?
// paf_BFF616B8  // ?
// paf_CC3EC021  // ?
// paf_0BA57D3D  // ?
// paf_E3C1B660  // ?
// paf_2F8B3B85  // ?
// paf_246B55D0  // ?
// paf_14B72562  // ?
// paf_05063ACE  // ?
// paf_275212A0  // ?
// paf_E31907BE  // ?
// paf_A3415D11  // ?
// paf_D4579440  // ?
// paf_16D6FF8C  // ?
// paf_35DD3495  // ?
// paf_93BE3FFD  // ?
// paf_329E92C6  // ?
// paf_6840C10B  // ?
// paf_C11E4924  // ?
// paf_76341300  // ?
// paf_931F2317  // ?
// paf_CCE0FADA  // ?
// paf_9A482757  // ?
// paf_4D79D004  // ?
// paf_48ED55DE  // ?
// paf_EA225A69  // ?
// paf_1ED44FDD  // ?
// paf_869F0A81  // ?
// paf_017AF3F8  // ?
// paf_07404EC3  // ?
// paf_8C0743AA  // ?
// paf_338E0ABD  // ?
// paf_3182E966  // ?
// paf_62D80499  // ?

// paf_2B16B368  // ?
// paf_F706662E  // ?
// paf_C64E88CC  // ?
// paf_FAC1637A  // ?
// paf_C2C6F5E9  // ?
// paf_A9A8352C  // ?
// paf_A6E24DB4  // ?
// paf_DFFC18F9  // ?

// paf_93E4A094  // ?
// paf_530D8265  // ?
// paf_28CF8811  // ?
// paf_7902DF28  // ?
// paf_60CF1B3C  // ?
// paf_FC88E588  // ?

// paf_24F6808A  // ?
// paf_8C7A6C86  // ?
// paf_C2F5EAF9  // ?
// paf_9C4C1564  // ?
// paf_01DE8773  // ?
// paf_1261112B  // ?
// paf_27527B03  // ?

// paf_2CC30288  // ?
// paf_022BF05A  // ?
// paf_40C4C4D9  // ?
// paf_E06D639B  // ?
// paf_857BFE1C  // ?
// paf_5F7E8C84  // ?
// paf_6C0930C4  // ?
// paf_723DB220  // ?
// paf_02AB5840  // ?
// paf_40211524  // ?
// paf_48658F0A  // ?
// paf_B60C4316  // ?
// paf_2CBA5A33  // ?

// paf_986427A7  // ?
// paf_818162F2  // ?
// paf_9B68942A  // ?
// paf_88EAEDCB  // ?
// paf_FE5A7950  // ?
// paf_DBFE46EA  // ?
// paf_A4D0FDCB  // ?
// paf_F7D65DC1  // ?
// paf_8DBFF0E4  // ?
// paf_C05E02B1  // ?
// paf_0C96D94F  // ?
// paf_CE14748C  // ?
// paf_4D0CAA13  // ?
// paf_C051D361  // ?

// paf_8BB8EDAA  // ?
// paf_AC9394C5  // ?

// paf_880A3367  // ?
// paf_B09E098F  // ?
// paf_1F31959E  // ? set functionspointer, system_plugin, "tex_default_text_focus"
// paf_8BC095CF  // ? set functionspointer, system_plugin, "tex_msgdialog_bar"
// paf_786FBB2D  // ? set functionspointer, system_plugin, "tex_default_scroll_..."
// paf_84FC5B16  // ? set functionspointer, system_plugin, "tex_default_progress_..."
// paf_84D7A733  // ? set functionspointer, system_plugin, "snd_..."
// paf_D31D0770  // ? set and ret old
// int32_t paf_FD14966A  // ? get 

// paf_6F8663E4  // ?
// paf_03283B28  // ?
// paf_7001CAC7  // ?
// paf_3899A4AA  // ?
// paf_38A64783  // ?
// paf_C3087A3E  // ?
// paf_17C07E8F  // ?
// paf_26E9507E  // ?
// paf_00440E11  // ?
// paf_C84F0B21  // ?
// paf_41E5C922  // ?
// paf_B7DDF1AD  // ?
// paf_B50187AF  // ?
// paf_2609FF4E  // ?
// paf_2D5C7C8D  // ?
// paf_CC47CC04  // ?
// paf_37002D7A  // ?

// paf_05050439  // ? "mbox_seat"

// paf_56E1ACC6  // ? get a u32 proc addr, return int 0

// paf_56760422  // ?
// paf_97B18ECE  // ?
// paf_9EE0EA8F  // ?
// paf_D43ED139  // ?
// paf_40410F89  // ?
// paf_74EFEB13  // ?
// paf_F9829DF0  // ?
// paf_31D6869E  // ?
// paf_04C19A94  // ?
// paf_D7138829  // ?
// paf_1010156F  // ?
// paf_385FAD55  // ?
// paf_B2EC23EB  // ?
// paf_D8AF2727  // ?

// paf_CBDF7130  // ?
// paf_D2DC1C89  // ?
// paf_561CBD17  // ?
// paf_8E3B155F  // ?
// paf_A6F56DD8  // ?
// paf_FBAF2957  // ?

// paf_983EA578  // ? font
// paf_F72BABD5  // ?
// paf_638A0B38  // ? load/unload prx
// paf_165AD4A6  // ?
// paf_FF99F7AB  // ?
// paf_6BE9B314  // ?
// paf_BE085CD4  // ?
// paf_F5116A56  // ?
// paf_DD32A35C  // ?
// paf_A12E9E8B  // ?

// paf_C7630260  // ?
// paf_66977993  // ?

// paf_BE8E04CE  // ? lock mtx
// paf_C0CDB967  // ? unlock mtx
// paf_689DCA1F  // ?
// paf_BE04476B  // ?

// paf_873C6688  // ?
// paf_763D3390  // ?
// paf_2E5D1BB3  // ?

extern const char *paf_546B3D02(void);  // returns "PhWidget"
// paf_5FD00911  // ?
// paf_FF527836  // ?
// paf_73C6B7C4  // ?
// paf_26ED24A6  // ?
// paf_F6E0A48F  // ?
// paf_9DF5AAD4  // ?
// paf_EF6C6834  // ?
// paf_D6135FC4  // ?
// paf_1E54DB1E  // ?
// paf_547917DF  // ?
// paf_7EF048AB  // ?
// paf_9379F77A  // ?
// paf_D314EF39  // ?
// paf_695E35BE  // ?
// paf_4B619490  // ?
// paf_5FFC22E1  // ?
// paf_B4F7ED4F  // ?
// paf_A2108B85  // ?
// paf_58F29B96  // ?
// paf_C03F89E6  // ?
// paf_B36CA4B4  // ?
// paf_00C9AFA5  // ?
// paf_ADE746B6  // ?
// paf_51D70976  // ?
// paf_AFB4ECB9  // ?
// paf_6B2A00C5  // ?
// paf_44CDAE21  // ?
// paf_3242B3F4  // ?
// paf_9DF5EBC4  // ?

// paf_6BDB86A9  // ?
// paf_41DC3A12  // ?
// paf_C83D7652  // ?

//...



























//...
////////////////////////////////////////////////////////////////////////



// paf_2164ACB8  // ? gcm control register...
// paf_BD1BF0B7  // ? set...
// paf_0FFACD6D  // void get_local_memory_base_add_and_size(u32 *addr, u32 *size) // 0xC0000000(addr) 0x0FE00000(size, vsh.self)

extern uint32_t paf_F476E8AA(void);  //  u32 get_display_width
#define getDisplayWidth paf_F476E8AA

extern uint32_t paf_AC984A12(void);  // u32 get_display_height
#define getDisplayHeight paf_AC984A12

// paf_FED92BA1  // get window offset x
// paf_04C8FC89  // get window offset y
// paf_A01698C9  // u32 set_display_width(u32 width) // ret = old value
// paf_9C1A2D6A  // u32 set_display_height(u32 height) // ret = old value
// paf_EACF4E4B  // u32 set_window_offset_x(u32 offset) // ret = old value
// paf_FDA5E90E  // u32 set_window_offset_y(u32 offset) // ret = old value
// paf_D16FB2D5  // ? set...
// paf_800E9F93  // ?
// paf_042933D6  // ?
// paf_1B131E20  // ?
// paf_EBE6BBC1  // ?
// paf_4418293F  // ?
// paf_98F14FD9  // ?
// paf_7D45A4FF  // ?
// paf_A0FCDF5F  // ?
// paf_A11682E8  // ?
// paf_00DEAD04  // ? set...
// paf_5D55D85E  // ? get...

extern int32_t paf_FFE0FBC9(uint32_t *pitch, uint32_t *unk1);  // unk1 = 0x12 color bit depth? ret 0
#define getDisplayPitch paf_FFE0FBC9

// int32_t paf_076402CA  // ? get... (uint32_t *unk1, uint32_t *unk2, uint32_t *unk3) ret 0
// paf_29EE6E08  // ? set...

extern void paf_92AA2072(uint32_t *unk1, uint32_t *offset, uint32_t *pitch);  // current displayed buffer values(offset only in xmb), unk1 = 0x12 color bit depth?

extern void paf_420FAB72(int32_t *x, int32_t *y, int32_t *w, int32_t *h);  // get viewport values
#define getDisplayViewport paf_420FAB72

extern void paf_94AE6813(int32_t *x, int32_t *y, int32_t *w, int32_t *h);  // get scissor box values
#define getDisplayScissorBox paf_94AE6813

// paf_3F2FD49C  // depth_buffer
// paf_2E34FF61  // ?
// paf_39B40DF9  // gcm set render target
// paf_4EE7ABBB  // gcm event port
// paf_E4FE1333  // gcm set depth mask
// paf_2C519D3B  // gcm set front face
// paf_D6AEAC39  // gcm set shade mode
// paf_9F3D573E  // gcm set depth function
// paf_3C7E4CE0  // gcm set scissor box
// paf_84D5E999  // gcm set clear color
// paf_19731532  // gcm set clear depth stencil
// extern void paf_191AD326(uint16_t x, uint16_t y, uint16_t width, uint16_t height)  // gcm set viewport
// paf_ADD67C35  // ? gcm set a float array, (1,1,1,1) vertex data ?
// paf_124DDBC5  // ? gcm set...
// paf_CA1E9947  // ? gcm set...
// paf_97BD8488  // ?
// paf_77A54856  // ?

// gcm gc shader progs
// paf_6B7D0D60  // ? 
// paf_D61B5EFC  // ?
// paf_E921EAA5  // ?
// paf_344E1CEB  // ?
// paf_62854AA7  // ?
// paf_399C0BF0  // ?
// paf_CA103173  // ?
// paf_A65A3868  // ?
// paf_41C145DC  // ?
// paf_1EFB3790  // ?

// paf_5BD9FD7E  // ?
// paf_CB144BDA  // ?
// paf_3B90102F  // ?
// paf_20E5286E  // ?
// paf_AA53DFAD  // ?
// paf_E81D263A  // ?
// paf_DD8E775C  // ?
// paf_4EABD9DE  // ?
// paf_DC7E61D3  // ?

// paf_00868264  // ? alloc
// paf_278774DE  // ? alloc
// paf_3234EEEB  // ?
// paf_E861FA35  // ?
// paf_D51B3CCE  // ?
// paf_0CC51D56  // ?
// paf_BC91AEB3  // ?
// paf_DF038193  // ?
// paf_849CCA15  // ?

// ...

















// paf_007D4D35  // ?
extern const char *paf_009207F4(void);  // returns "PhScroll"
// paf_00BC617A  // ?
// paf_00C147B2  // ?

// paf_01059AF3  // ?
// paf_016A3B00  // ?
// paf_01B2CEDD  // ?
// paf_020B8A99  // ?
// paf_022FDDB8  // ?
// paf_023F6755  // ?
// paf_0241B884  // ?
// paf_02FD5318  // ?

// paf_036D6368  // ?
// paf_04081C1E  // ?
// paf_040D12CE  // ?

// paf_04EB288F  // ?
// paf_04EC636E  // ?

// paf_053D12C7  // ?
// paf_0582FE87  // ?
// paf_05E98BC2  // ?
// paf_06CBE4AD  // ?
// paf_07047F37  // ?
// paf_07C79FE6  // ?
// paf_094CD214  // ?
// paf_0A03DEFC  // ?
// paf_0A4091F9  // ?
// paf_0A498946  // ?
// paf_0A9E290A  // ?
// paf_0ACCBD0C  // ?
// paf_0AD64B13  // ?
// paf_0C16A258  // ?
// paf_0C74837D  // ?
// paf_0D1BA494  // ?
// paf_0D84691B  // ?
// paf_0F0A07EA  // ?
// paf_0F9B4667  // ?

// paf_10893289  // ?
extern const char *paf_10DEDCC7(void);  // returns "PhPlane"
// paf_11395765  // ?
// paf_1167D7F4  // ?
// paf_11DE1214  // ?
// paf_12CACB14  // ?
// paf_12F2B781  // ?
// paf_134CEB7A  // ?
// paf_141A7D65  // ?
// paf_14A9CC1D  // ?
// paf_14BB4CF1  // ?
// paf_14CF6448  // ?
// paf_14EBB064  // ?
// paf_151D5C78  // ?
// paf_1565FC46  // ?
// paf_15BBE128  // ?
// paf_15FD7978  // ?
// paf_161E2246  // ?

// paf_168EA34B  // ?
// paf_1738DDE3  // ?
// paf_176E3BC4  // ?

// paf_1802C687  // ?
// paf_18320785  // ?
// paf_18B76C7D  // ?
// paf_190D4130  // ?
// paf_19840447  // ?
// paf_1A278F2E  // ?
// paf_1AD29E49  // ?
// paf_1B087988  // ?
// paf_1B75E85F  // ?
// paf_1C71A71C  // ?
// paf_1C7E659C  // ?
// paf_1C83C0B6  // ?
// paf_1CCF9E4D  // ?
// paf_1CD57819  // ?
// paf_1DCA42A6  // ?


// paf_1F54F28F  // ?
// paf_1FBFAA13  // ?
// paf_201528C1  // ?
// paf_20183B78  // ?
// paf_2030C3B9  // ?
// paf_20477524  // ?
// paf_20BA8E1A  // ?
// paf_21C770A3  // ?
// paf_21DEB478  // ?
// paf_226FBD53  // ?
// paf_227E5B00  // ?
// paf_2293AB67  // ?
// paf_22C482F2  // ?
// paf_233E39D1  // ?
// paf_23756B95  // ?
// paf_23810ED8  // ?
// paf_23CCCCBB  // ?
extern const char *paf_24A5BD6B(void);  // returns "PhButton"
// paf_24A977F7  // ?
// paf_24A9E5BA  // ?
// paf_24EBED2B  // ?
// paf_2557E245  // ?
// paf_25C5CE19  // ?

// paf_2689337F  // ?
// paf_268D558E  // ?


// paf_272404F8  // ?
// paf_27D4B92D  // ?
// paf_2883F1FC  // ?
// paf_28E3DF10  // ?
// paf_2B35D7DD  // ?
// paf_2B50BE7D  // ?
// paf_2B86EEC6  // ?
// paf_2BD63EAD  // ?
// paf_2CE5FF1D  // ?
// paf_2D312F8F  // ?
// paf_2D388628  // ?

// paf_2D6B25EA  // ?
// paf_2D9D1687  // ?
// paf_2D9FDEB5  // ?
// paf_2DB4683D  // ?
// paf_2DBA5B93  // ?

// paf_2FA1E410  // ?
// paf_301F3376  // ?
// paf_304EAE6F  // ?
// paf_305556B1  // ?
// paf_3139BCBD  // ?
// paf_318C080C  // ?


// paf_32658F00  // ?
// paf_33944117  // ?
// paf_33A47C59  // ?
// paf_3441B471  // ?
// paf_344BAB53  // ?
// paf_34C6C205  // ?
// paf_34EBB81E  // ?
// paf_350B4536  // Job_Start 	
// paf_35556CA6  // ?
// paf_36362357  // ?

// paf_37A6B2F6  // ?
// paf_37D5F621  // ?
extern const char *paf_3806365F(void);  // returns "PhIPAddr"
// paf_38162763  // ?
// paf_384F93FC  // ?



// paf_3976AFC7  // ?
// paf_39D3A244  // ?
// paf_3A50E116  // ?
// paf_3A5DB54E  // ?
// paf_3ADA193F  // AudioOutGetState
// paf_3B002423  // ?
// paf_3B9E324C  // ?
// paf_3BC69C3A  // ?
// paf_3CAE2F8A  // ?
// paf_3CF24218  // ?
// paf_3D841FE9  // ?
// paf_3E1D246B  // ?
// paf_3F10A8D7  // ?
// paf_3F4844B4  // ?
// paf_3F5AB405  // ?
// paf_3FAD4311  // ?
// paf_402E693B  // ?

// paf_40725ECF  // ?
// paf_40A9CDA4  // ?
// paf_41054F69  // ?
// paf_4192B349  // ?
extern const char *paf_41BBFE5E(void);  // returns "PhScene"


// paf_429ED666  // ?
// paf_43A9D78C  // ?
// paf_4427D818  // ?

// paf_44E93267  // ?
// paf_44F95B67  // ?
// paf_4569ABC3  // ?
// paf_459B404D  // ?
// paf_45F7D5ED  // ?
// paf_4618F156  // ?
// paf_46291F6A  // ?
// paf_467B2193  // ?
// paf_46CC88BE  // ?
// paf_46E3E3FD  // ?
// paf_483CBA61  // ?
// paf_48BEFA0B  // ?
// paf_4922A06A  // ?
// paf_4A6A2F04  // ?
// paf_4B00C738  // ?

// paf_4B9B85B4  // ?
// paf_4C229CCA  // ?
extern const char *paf_4C36ABBB(void);  // returns "PhItemSpin"
// paf_4D7B6927  // ?
// paf_4D930842  // ?
// paf_4DAEF6BE  // ?
// paf_4DED0C42  // ?
// paf_4E348797  // ?
// paf_4E48E271  // ?
// paf_4F2A97E5  // ?
// paf_4F381F53  // ?
// paf_4F3E14A7  // ?
// paf_4F5319E0  // ?
extern const char *paf_4FF7B8A9(void);  // returns "PhXmList"
// paf_50239384  // ?






extern void paf_503187C0(void);  // base pointer, pad









// paf_51F323AA  // ?
// paf_5232FAAF  // ?
// paf_526C2374  // ?
// paf_52C9A794  // ?
// paf_534AC5C4  // ?
// paf_5364F246  // ?
// paf_538E485C  // AudioOutGetNumberOfDevice
extern const char *paf_545D47A2(void);  // returns "PhClock"


// paf_54A7300E  // ?
// paf_55063D70  // ?
// paf_5526D803  // ?
// paf_55921E70  // ?
// paf_55944323  // ?
// paf_55EE69A7  // ?
// paf_55F2C2A6  // ?
// paf_55FE8B14  // ?


// paf_5687CB15  // ?
// paf_56B0FCBF  // ?

// paf_57EA66CD  // ?
// paf_5837B7E2  // ?
// paf_585EC026  // ?

// paf_5903BC00  // ?
// paf_5919DAD3  // ?
// paf_593FB1E5  // ?
extern const char *paf_59A11C82(void);  // returns "PhNumSpin"
// paf_5A85BEFC  // ?
// paf_5AAA5547  // ?
// paf_5B872B03  // ?
// paf_5C54EEAF  // ?
// paf_5C5EE898  // ?
// paf_5C6C78E5  // ?
// paf_5D34055E  // ?
// paf_5D55D85E  // ?
// paf_5D711BEE  // ?
// paf_5D836E75  // ?
// paf_5DBA65AA  // ?
// paf_5DF8473F  // ?
// paf_5E1FA570  // ?
// paf_5E671849  // ?
// paf_5F096D38  // ?
// paf_5F5DA385  // Gets Dialog Size 	int paf_5F5DA385( uint16_t *size_width, uint16_t *size_height, int dialog_type) 
// paf_5F68B433  // ?


// paf_6001C52A  // ?
// paf_605BA9AA  // ?
// paf_611F2E24  // ?
// paf_61302357  // ?
// paf_613A24BF  // ?
// paf_61998E81  // ?
// paf_62685916  // ?
// paf_62DCA3E2  // ?
// paf_62ED555B  // ?

// paf_63D446B8  // ?
// paf_64115670  // ?
// paf_643FFA7C  // ?
// paf_64527FA9  // ?
// paf_6458160F  // ?
// paf_647CB8EF  // ?
// paf_64C305D6  // ?
// paf_65036474  // ?
// paf_654B91B5  // ?
// paf_65F530A4  // ?

// paf_67437488  // ?
// paf_683C91D8  // ?
// paf_6846D51A  // ?
// paf_68596AF1  // ?
// paf_685F1C8B  // ?
// paf_688EACFF  // ?

// paf_68D2B06D  // ?
// paf_6941C365  // ?

// paf_6964C72A  // ?
// paf_698E01BE  // ?
// paf_69EB7F9A  // ?
// paf_6A76DCEE  // ?

// paf_6B57CB4D  // ?
// paf_6B620D94  // ?
// paf_6B9B2829  // ?


// paf_6C5A6746  // ?
// paf_6C8F62F7  // ?
// paf_6C937D68  // ?
// paf_6C9FF8D1  // ?
// paf_6CD13DF4  // ?
// paf_6E0347D4  // ?
// paf_6E6A92EB  // ?


extern const char *paf_703117AD(void);  // returns "PhXmBar"
// paf_706B947D  // ?
// paf_70AEB483  // ?
// paf_70B5810D  // ?
// paf_70DADB9D  // ?
// paf_72292B61  // ?
// paf_724042E6  // ?
// paf_73878BBE  // ?
// paf_738BAAC0  // ?
// paf_739C8C04  // ?

// paf_74093C9A  // ?
// paf_7415A11D  // ?
// paf_74AA6AB7  // ?

// paf_75295C38  // ?
// paf_7531D5C0  // ?
// paf_75D9466C  // ?

// paf_76BBC067  // ?
// paf_76CF943F  // ?
// paf_77479F6F  // ?
// paf_77A08742  // ?

// paf_7893B654  // ?
// paf_7968B603  // ?
// paf_796A32FE  // ?
// paf_7A200FA1  // ?
// paf_7A7BCEED  // ?
// paf_7B2124FE  // ?
// paf_7B2E7FBA  // ?
// paf_7BAAD6D1  // ?
// paf_7D594F19  // ?

// paf_7F0930C6  // ?
// paf_80334194  // ?
// paf_8043F265  // ?
// paf_8112C91E  // ?
// paf_814B3D90  // ?
// paf_816D1A8F  // ?
// paf_81840F26  // ?
// paf_8238B1AE  // ?
// paf_83123FE2  // ?
// paf_8430EA1E  // ?
// paf_84484D13  // ?
// paf_84529ACC  // ?

// paf_84E6B20D  // ?

// paf_855C13DC  // ?
// paf_85830708  // ?
// paf_85BA32C4  // ?
// paf_85BAAAA8  // ?
// paf_868C48A1  // ?

// paf_87BBE314  // ?
// paf_87D90A81  // ?

// paf_880E3977  // ?
// paf_88161054  // ?
// paf_8846BC65  // ?
// paf_88B11467  // ?
// paf_88DB3841  // ?
// paf_88DDE2F3  // font_get_ get a font struct, info/handle of first loaded font
// paf_89E5CC7F  // ?
// paf_8A50E914  // ?
// paf_8A65C27B  // ?
// paf_8A93BC70  // ?
// paf_8AAC61B1  // ?
// paf_8ABAE2F3  // ?
// paf_8AC40FBD  // ?

// paf_8BFC59D7  // ?
// paf_8D81B2F3  // ?

// paf_8E7A2AED  // ?
// paf_8E8DB4B0  // ?
// paf_8EF81BFE  // ?
// paf_8F2D2950  // ?
// paf_8FEC308A  // ?
// paf_907A4C6F  // ?
extern const char *paf_90F4F801(void);  // returns "PhCheckBoxList"
// paf_915890C7  // ?
// paf_9196EEB8  // ?
// paf_91CD1263  // ?
// paf_925494CB  // ?
// paf_92A06C2B  // ?

// paf_9437A62E  // ?
// paf_95320F1E  // ?
// paf_95748E9E  // AudioOutGetDeviceInfo
// paf_9576C835  // ?
// paf_959BF279  // ?
// paf_9624DDC9  // ?
// paf_96486AF8  // ?
// paf_964CE2DD  // ?
// paf_96599FE7  // ?
// paf_97141C43  // ?

// paf_97D7BF2A  // ?
// paf_97E124F1  // ?
// paf_97FA2A5F  // ?

// paf_98655BEF  // ?
// paf_9910148E  // ?
// paf_9976D7EA  // ?
// paf_99DFB4C0  // ?
// paf_9AB6B3EC  // ?
// paf_9AEFF88B  // ?
// paf_9BA36D14  // ?
// paf_9BDC1912  // ?
// paf_9C192D1E  // ?
// paf_9C1D60C4  // ?
// paf_9C8D34DC  // ?
// paf_9D014B62  // ?
// paf_9D191F72  // ?
// paf_9DAFD7F7  // ?
// paf_9DB8660C  // ?
// paf_9DEF39DE  // ?


// paf_9E7ABD81  // ?
// paf_9EB7F788  // ?

// paf_9F143A8C  // ?
// paf_9F353652  // ?
// paf_9F58ADCF  // ?
// paf_9F9E8F9D  // ?
// paf_9FB0F27B  // ?
// paf_9FBCD5C8  // ?
// paf_9FF4CD0A  // ?
// paf_A0118D9E  // ?
// paf_A08ABACC  // ?
// paf_A0974E08  // ?

// paf_A166B23E  // ?
// paf_A17CE034  // ?

// paf_A2C876E8  // ?
// paf_A2EB53BC  // ?
// paf_A3224451  // ?
// paf_A337B314  // ?
// paf_A3770DD7  // ?
// paf_A4438D60  // ?
// paf_A4514F28  // ?

// paf_A74FFFC9  // ?
// paf_A921D353  // ?
// paf_A922709B  // ?
// paf_A97D0803  // ?
extern const char *paf_A98865F8(void);  // returns "PhMenuList"
// paf_AA1A8C53  // ?
// paf_AA422FCB  // ?
// paf_AA5755FA  // ?
// paf_AA8860B9  // ?
// paf_AABDBC6E  // ?
// paf_AB1A7C3B  // ?
// paf_AC0EB3AB  // ?
// paf_AC90BC8F  // ?
// paf_AD484F91  // ?
// paf_AD9051B6  // ?
// paf_ADCC6046  // ?

// paf_ADF743E4  // ?
// paf_AED08D9E  // ?
// paf_AF27EE12  // ?


// paf_B0AF6657  // ?
// paf_B1A2076D  // ?
// paf_B1D5806A  // ?
// paf_B24DE5AC  // ?
// paf_B273FF5D  // ?
// paf_B2856340  // ?

// paf_B35AAC2B  // ?
// paf_B361BDA6  // ?
// paf_B367A64E  // ?

// paf_B37491C6  // ?
// paf_B39C42DC  // ?
// paf_B3B6EFA4  // ?
// paf_B4D3C063  // ?


// paf_B527E7E5  // ?
// paf_B5505299  // ?
// paf_B624302F  // ?
// paf_B71DC906  // ?
// paf_B7377945  // ?

extern const char *paf_B7DFCE90(void);  // returns "PhText"
// paf_B821B0A5  // ?
// paf_B84F742B  // ?
// paf_B8A630CD  // ?
// paf_B902CB91  // ?
// paf_B90FF595  // ?
// paf_B923666A  // ?
// paf_B94B439F  // ?
// paf_B9502D8B  // ?
// paf_B9E387DD  // ?
// paf_BA3A5223  // ?
extern const char *paf_BA6D149A(void);  // returns "PhLabelPrim"
// paf_BAA424C6  // ?
// paf_BAFCBA67  // ?
// paf_BAFE871A  // ?
// paf_BB04609B  // GetSparkInfo
// paf_BB0AA6D5  // ?
// paf_BB12535D  // ?
// paf_BB2CC415  // ?
// paf_BBFF3B2F  // ?
// paf_BC2C23A8  // ?
// paf_BC6E66D6  // ?
// paf_BC8DD07D  // ?
// paf_BD01AEF9  // ?
// paf_BD89CC93  // ?
// paf_BDA96809  // ?



// paf_BEC5537F  // ?
// paf_BEDFF5EE  // ?
// paf_BF4B155C  // ?
extern const char *paf_BF66BF2D(void);  // returns "PhCheckBox"
// paf_BF6BB62C  // ?
// paf_BFA7DC8D  // ?
// paf_C028CB7C  // ?

// paf_C05D2A7D  // ?

// paf_C0F6890C  // ?
// paf_C177FF73  // ?
// paf_C1A00166  // ?
// paf_C2E555BA  // ?

// paf_C3F7B60E  // ?
// paf_C44F501D  // ?
// paf_C47FB4B9  // ?
// paf_C49D8C3E  // ?
// paf_C4F74046  // ?
// paf_C53B6CC9  // ?
// paf_C5987EC3  // ?
// paf_C5B890DA  // ?
// paf_C5EC06C5  // ?
// paf_C6764EC6  // ?
// paf_C69ECA71  // ?

// paf_C79F9AA9  // ?
// paf_C7CF2A06  // ?


extern const char *paf_C84FD77B(void);  // returns "PhXmItem"
extern const char *paf_C88CA4B2(void);  // returns "PhLevelMeter"
// paf_C8F4E2CF  // ?
// paf_C9008050  // ?
// paf_C94E8621  // ?
// paf_C9826818  // ?
// paf_C9BF92AF  // ?
// paf_CA16B292  // ?
// paf_CA784678  // ?
extern const char *paf_CA9160F6(void);  // returns "PhNumSpin"
// paf_CACDFB2D  // ?
// paf_CB134D56  // ?
// paf_CB68FF26  // ?
// paf_CB864F5D  // ?

// paf_CC0D0938  // ?

// paf_CC58846C  // ?
// paf_CC8004C6  // ?
// paf_CC9C89FB  // ?
// paf_CF1E9BCB  // ?
// paf_CFF699A0  // ?
// paf_D005CC9F  // ?
// paf_D0197A7D  // ?
// paf_D11A3565  // ?
// paf_D13D6CB4  // ?
// paf_D14F5F81  // ?
// paf_D15AE1C4  // ?
// paf_D1748BF8  // ?
// paf_D1B181E0  // ?
// paf_D1CDDADD  // ?
// paf_D251AE84  // ?
// paf_D2649242  // ?
// paf_D28C76AB  // ?



// paf_D385A4FC  // Job End?/Stop?/DeQueue?
// paf_D390D3E7  // ?

// paf_D4946610  // ?
// paf_D557F850  // ?

extern const char *paf_D64EDE7C(void);  // returns "PhList"
// paf_D6A50AAC  // ?
// paf_D6A97CBE  // ?
// paf_D700EC59  // ?

// paf_D72BCDCB  // ?
// paf_D75F6183  // ?
// paf_D774E03E  // ?
// paf_D7F0A558  // ?
// paf_D8734249  // ?

// paf_D8D768ED  // ?
// paf_D8E06B04  // ?
// paf_D8EB2AD2  // ?
// paf_D965C0BE  // ?
// paf_DA6B5FAD  // ?
// paf_DAFE04B9  // ?
// paf_DB9195CE  // ?
// paf_DC05D196  // ?

extern const char *paf_DDD4ACF6(void);  // returns "PhLabelText"
// paf_DDE862B5  // ?
// paf_DE35D405  // ?
// paf_DE9C6F25  // ?
// paf_DEF981C4  // ?
// paf_DF031EDD  // ?
// paf_DF27BD9B  // ?
// paf_DF712D5B  // ?
// paf_DFE2B134  // ?
// paf_DFE8806F  // ?
// paf_E02A30D5  // ?
// paf_E0A3AA72  // ?
// paf_E0A86325  // ?
// paf_E0AB62A4  // ?
// paf_E1654E20  // ?
// paf_E16D3CF3  // ?
// paf_E1E55641  // ?
// paf_E1F0804D  // ?
// paf_E1F51D8A  // ?
// paf_E26BBDE4  // ?
// paf_E3088E1C  // ?
// paf_E33AADB2  // ?
extern const char *paf_E36C18F5(void);  // returns "PhPlaneDiv"
// paf_E434952C  // ?
// paf_E4B244BE  // ?
// paf_E50065BE  // ?
// paf_E75F9969  // ?
// paf_E7C62F48  // ?
extern const char *paf_E801C345(void);  // returns "PhProgress"
// paf_E8129023  // ?
// paf_E8149213  // ?
// paf_E8355FCC  // ?
// paf_E93B9B31  // ?
// paf_E9A06D0A  // ?
// paf_E9DA6705  // ?
// paf_EA36F30F  // ?
// paf_EA43988A  // ?
// paf_EA96A0D0  // ?
// paf_EAD0EFAC  // ?
// paf_EB1BB57F  // ?
// paf_EB73AD01  // ?
// paf_EB7D2C26  // ?
// paf_EBD30F24  // ?
// paf_EC70F53F  // ?
// paf_EC7C4469  // ?
// paf_EC892261  // ?
// paf_ECB11C5E  // ?
// paf_ECB29B67  // ?
// paf_ED058E54  // ?
// paf_ED5FDE32  // ?
// paf_EDB089C8  // ?
// paf_EDE62D3D  // ?
// paf_EE05CF53  // ?
// paf_EE3D6DD0  // ?
// paf_EE64CA3B  // ?
// paf_EE7108A5  // ?
// paf_EE8F2CC4  // ?
// paf_EEFAA794  // ?

// paf_EFC3730F  // ?
// paf_F00CAD11  // ?
// paf_F15A0DE5  // ?
// paf_F35FE0BC  // ?
// paf_F3BA0BD0  // ?
// paf_F400A82B  // ?
// paf_F467C45F  // ?

// paf_F54AF3D4  // ?
// paf_F5C65829  // ?
// paf_F61F19E1  // ?
// paf_F66AAF4B  // ?


// paf_F744FE00  // ?
// paf_F75DD0B5  // ?
extern const char *paf_F7630798(void);  // returns "PhInfoList"
// paf_F8140602  // ?
// paf_F87ADBD7  // ?
// paf_F8DB34C7  // ?

// paf_FA17FC05  // ?
// paf_FADF8AFF  // ?
// paf_FB7731FB  // ?
// paf_FBAD1D7A  // ?

// paf_FC23139F  // ?
// paf_FC406066  // ?
// paf_FC58CA65  // ?
// paf_FCF06EAB  // ?

// paf_FD1D3EE0  // ?
// paf_FD846612  // ?
// paf_FDCB65D3  // ?
// paf_FDD01957  // ?
// paf_FDD0EB53  // ?
// paf_FE0C1F10  // Job_Queue 
// paf_FE119299  // ?
// paf_FEAD5829  // ?
// paf_FEBB5DBB  // ?
// paf_FEDE9551  // ?




#endif // __PAF_H__ 
