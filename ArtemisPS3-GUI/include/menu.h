#ifndef __ARTEMIS_MENU_H__
#define __ARTEMIS_MENU_H__


//Textures
#define	 bgimg_png_index									0
#include "bgimg_png.h"
#define	 cheat_png_index									1
#include "cheat_png.h"
#define	 circle_error_dark_png_index						2
#include "circle_error_dark_png.h"
#define	 circle_error_light_png_index						3
#include "circle_error_light_png.h"
#define	 circle_loading_bg_png_index						4
#include "circle_loading_bg_png.h"
#define	 circle_loading_seek_png_index						5
#include "circle_loading_seek_png.h"
#define	 edit_ico_add_png_index								6
#include "edit_ico_add_png.h"
#define	 edit_ico_del_png_index								7
#include "edit_ico_del_png.h"
#define	 edit_shadow_png_index								8
#include "edit_shadow_png.h"
#define	 footer_ico_circle_png_index						9
#include "footer_ico_circle_png.h"
#define	 footer_ico_cross_png_index							10
#include "footer_ico_cross_png.h"
#define	 footer_ico_lt_png_index							11
#include "footer_ico_lt_png.h"
#define	 footer_ico_rt_png_index							12
#include "footer_ico_rt_png.h"
#define	 footer_ico_square_png_index						13
#include "footer_ico_square_png.h"
#define	 footer_ico_triangle_png_index						14
#include "footer_ico_triangle_png.h"
#define	 header_dot_png_index								15
#include "header_dot_png.h"
#define	 header_ico_abt_png_index							16
#include "header_ico_abt_png.h"
#define	 header_ico_cht_png_index							17
#include "header_ico_cht_png.h"
#define	 header_ico_opt_png_index							18
#include "header_ico_opt_png.h"
#define	 header_ico_xmb_png_index							19
#include "header_ico_xmb_png.h"
#define	 header_line_png_index								20
#include "header_line_png.h"
#define	 help_png_index										21
#include "help_png.h"
#define	 mark_arrow_png_index								22
#include "mark_arrow_png.h"
#define	 mark_line_png_index								23
#include "mark_line_png.h"
#define	 opt_off_png_index									24
#include "opt_off_png.h"
#define	 opt_on_png_index									25
#include "opt_on_png.h"
#define	 scroll_bg_png_index								26
#include "scroll_bg_png.h"
#define	 scroll_lock_png_index								27
#include "scroll_lock_png.h"
#define	 titlescr_ico_abt_png_index							28
#include "titlescr_ico_abt_png.h"
#define	 titlescr_ico_cht_png_index							29
#include "titlescr_ico_cht_png.h"
#define	 titlescr_ico_opt_png_index							30
#include "titlescr_ico_opt_png.h"
#define	 titlescr_ico_xmb_png_index							31
#include "titlescr_ico_xmb_png.h"
#define	 titlescr_logo_png_index							32
#include "titlescr_logo_png.h"

//Fonts
#define  font_comfortaa_regular								0
#define  font_comfortaa_bold								1
#define  font_comfortaa_light								2

typedef struct t_png_texture
{
	const void *buffer;
	u32 size;
	pngData texture;
	u32 texture_off;
} png_texture;

u32 * texture_mem;      // Pointers to texture memory
u32 * font_mem;         // Pointer after font


//Options
extern const char * options_path;

typedef struct
{
	char * name;
	char * * options;
	int type;
	void(*callback)(int,int);
} option;

#define ARTEMIS_OPTION_BOOL				1
#define ARTEMIS_OPTION_LIST				2
#define ARTEMIS_OPTION_INC				3

extern const option menu_options_options[];

extern int doSort;
extern int doAni;
extern int marginHorizontal;
extern int marginVertical;

extern int menu_options_maxopt;
extern int * menu_options_maxsel;
extern int * menu_options_selections;

extern const char * VERSION;                //Artemis PS3 version (about menu)
extern const int MENU_TITLE_OFF;            //Offset of menu title text from menu mini icon
extern const int MENU_ICON_OFF;             //X Offset to start printing menu mini icon
extern const int MENU_ANI_MAX;              //Max animation number
extern const int MENU_SPLIT_OFF;			//Offset from left of sub/split menu to start drawing

extern int close_art;

extern png_texture * menu_textures;				// png_texture array for main menu, initialized in LoadTexture
extern const int menu_size;						// Size of menu png_texture array

extern int screen_width, screen_height;			// Set to dimensions of the screen in main()

extern int highlight_alpha;						// Alpha of the selected
extern int highlight_pulse;						// Whether the increment the highlight
extern int highlight_amount;					// Amount of alpha to inc/dec each time
extern int pause_pulse;							// Counter that holds how long alpha is held in place
extern int idle_time;							// Set by readPad

extern const char * menu_about_strings[];
extern const char * menu_about_strings_project[];

extern int menu_id;
extern int menu_sel;
extern int menu_old_sel[]; 
extern int last_menu_id[];
extern const char * menu_pad_help[];

/*
* User code list
*/
extern struct game_entry * user_game_list;
extern int user_game_count;

/*
* Online code list
*/
extern struct game_entry * online_game_list;
extern int online_game_count;

extern struct game_entry selected_entry;
extern struct code_entry selected_centry;
extern int option_index;

// Set to dimensions of the screen in main()
extern int screen_width;
extern int screen_height;

extern void DrawTexture(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);
extern void DrawTextureCentered(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);
extern void DrawTextureCenteredX(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);
extern void DrawTextureCenteredY(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);
extern void DrawSelector(int x, int y, int w, int h, int hDif, u8 alpha);
extern void DrawHeader(png_texture icon, int xOff, char * headerTitle, char * headerSubTitle, u32 rgba, u32 bgrgba, int mode);
extern void DrawHeader_Ani(png_texture icon, char * headerTitle, char * headerSubTitle, u32 rgba, u32 bgrgba, int ani, int div);
extern void DrawBackgroundTexture(int x, u8 alpha);

#endif
