/* 
    Artemis PS3 main.c
*/

#include <ppu-lv2.h>
#include <sys/spu.h>
#include <lv2/spu.h>

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <math.h>
#include <assert.h>
#include <sysutil/video.h>
#include <lv2/process.h>
#include <time.h>
#include <dirent.h>

#include <net/net.h>
#include <net/netctl.h>
#include <net/socket.h>
#include <errno.h>

#include <zlib.h>
#include <io/pad.h>

#include <sysmodule/sysmodule.h>
#include <pngdec/pngdec.h>

#include <ft2build.h>
#include <freetype/freetype.h> 
#include <freetype/ftglyph.h>

#include <tiny3d.h>
#include <libfont.h>

#include <ppu-lv2.h>

//From NzV's MAMBA PRX Loader (https://github.com/NzV/MAMBA_PRX_Loader)
#include "common.h"
#include "mamba_prx_loader.h"
#include "ps3mapi_ps3_lib.h"
#include "lv2_utils.h"

#define SC_SYS_POWER        (379)
#define SYS_REBOOT          0x8201
#define SC_FS_MOUNT         (837)

//Menus
#include "menu_about.h"
#include "menu_options.h"
#include "menu_cheats.h"

//Font
#include "neuropol_ttf_bin.h"
#include "ubuntumono_ttf_bin.h"
#include "electromagnetic_lungs_ttf_bin.h"

//Code db
#include "codes.h"

//Sound
#include "spu_soundmodule_bin.h"
#include "spu_soundlib.h"
#include "audioplayer.h"

#include "background_music_mp3_bin.h"

// SPU
u32 inited;
u32 spu = 0;
sysSpuImage spu_image;

#define INITED_CALLBACK     1
#define INITED_SPU          2
#define INITED_SOUNDLIB     4
#define INITED_AUDIOPLAYER  8

#define SPU_SIZE(x) (((x)+127) & ~127)

//Textures
#include "background_png.h"             //all
#include "project_png.h"                //main
#include "desc_about_png.h"             //main
#include "desc_options_png.h"           //main
#include "desc_cheats_png.h"            //main
#include "desc_start_png.h"             //main
#include "icon_start_png.h"             //main
#include "icon_about_png.h"             //main
#include "icon_cheats_png.h"            //main
#include "icon_options_png.h"           //main
#include "logo_png.h"                   //main
#include "logo_ghost_png.h"             //all
#include "menu_bar_png.h"               //options, cheats, about
#include "sel_bar1_png.h"               //cheats
#include "sel_bar2_png.h"               //cheats
#include "icon_usercheats_png.h"        //cheats
#include "icon_onlinecheats_png.h"      //cheats

//Options
const char * options_path = "/dev_hdd0/game/ARTPS3001/USRDIR/opt.ini";

void music_callback(int sel);
void sort_callback(int sel);
void ani_callback(int sel);

typedef struct
{
    char * name;
    char * * options;
    void (*callback)(int);
} option;

const option menu_options_options[] = {
    { .name = "Music", .options = (char *[]){ "On", "Off", NULL }, .callback = music_callback },
    { .name = "Sort Cheats", .options = (char *[]){ "On", "Off", NULL }, .callback = sort_callback },
    { .name = "Menu Animations", .options = (char *[]){ "On", "Off", NULL }, .callback = ani_callback },
    { .name = NULL }
    };

int doSort = 1;
int doAni = 1;

int menu_options_maxopt = 0;
int * menu_options_maxsel;
int * menu_options_selections;

const char * VERSION = "r1";                //Artemis PS3 version (about menu)
const int MENU_TITLE_OFF = 30;              //Offset of menu title text from menu mini icon
const int MENU_ICON_OFF = 140;              //X Offset to start printing menu mini icon
const int MENU_ANI_MAX = 0x80;              //Max animation number

int close_art = 0;

typedef struct _png_texture
{
    const void *buffer;
    u32 size;
    pngData texture;
    u32 texture_off;
} png_texture;

u32 * texture_mem;      // Pointers to texture memory
u32 * font_mem;         // Pointer after font

//Pad stuff
padInfo padinfo;
padData paddata[MAX_PADS];
padData padA[MAX_PADS];
padData padB[MAX_PADS];

png_texture * menu_main_textures;           // png_texture array for main menu, initialized in LoadTexture
const int menu_main_size = 12;              // Size of main menu png_texture array

png_texture * menu_about_textures;          // png_texture array for about menu, initialized in LoadTexture
const int menu_about_size = 1;              // Size of about menu png_texture array

png_texture * menu_options_textures;        // png_texture array for options menu, initialized in LoadTexture
const int menu_options_size = 0;            // Size of options menu png_texture array

png_texture * menu_cheats_textures;         // png_texture array for cheats menu, initialized in LoadTexture
const int menu_cheats_size = 4;             // Size of cheats menu png_texture array

int screen_width = 0, screen_height = 0;    // Set to dimensions of the screen in main()

int highlight_alpha = 128;                  // Alpha of the selected
int highlight_pulse = 1;                    // Whether the increment the highlight
int highlight_amount = 6;                   // Amount of alpha to inc/dec each time
int pause_pulse = 0;                        // Counter that holds how long alpha is held in place
int idle_time = 0;                          // Set by readPad

const char * menu_about_strings[] = { "Berion", "GUI graphic designer",
                                    "Lazy Bastard", "Project Founder",
                                    "ps2dragon", "Author of Artemis logo",
                                    "NzV", "Author of PS3MAPI",
                                    "Dnawrkshp", "Core developer, author of cheat engine code and GUI code",
                                    NULL, NULL };

/*
 * 0 - Main Menu
 * 1 - Code Menu (User List)
 * 2 - Code Menu (Online List)
 * 3 - About Menu
 * 4 - Options Menu
 * 5 - Code Menu (Select Cheats)
 * 6 - Code Menu (View Cheat)
 * 7 - Code Menu (View Cheat Options)
 */
int menu_id = 0;                                                    // Menu currently in
int menu_sel = 0;                                                   // Index of selected item (use varies per menu)
int menu_old_sel[] = { 0, 0, 0, 0, 0, 0, 0, 0 };                        // Previous menu_sel for each menu
int last_menu_id[] = { 0, 0, 0, 0, 0, 0, 0, 0 };                        // Last menu id called (for returning)
const char * menu_pad_help[] = { NULL, //Main
                                "X - Select    O - Back    [] - Refresh", //User list   
                                "X - Select    O - Back    [] - Refresh", //Online list
                                "O - Back", //about
                                "X - Select    O - Back", //options
                                "X - Enable    [] - Toggle Mode    TRI - View Code    O - Back", //select cheats
                                "O - Back", //view cheat
                                "X - Select    O - Back" //cheat option
                                };
                            
/*
 * User code list
 */
struct game_entry * user_game_list = NULL;
int user_game_count = 0;

/*
 * Online code list
 */
struct game_entry * online_game_list = NULL;
int online_game_count = 0;

struct game_entry selected_entry;
struct code_entry selected_centry;
int option_index = 0;



void release_all() {
    
    if(inited & INITED_CALLBACK)
        sysUtilUnregisterCallback(SYSUTIL_EVENT_SLOT0);

    if(inited & INITED_AUDIOPLAYER)
        StopAudio();
    
    if(inited & INITED_SOUNDLIB)
        SND_End();

    if(inited & INITED_SPU) {
        tiny3d_Clear(0xff000000, TINY3D_CLEAR_ALL);
        SetFontSize(12, 24);
        SetFontColor(0xffffffff, 0x00000000);
        DrawFormatString(0, 0, "Destroying SPU... ");
        tiny3d_Flip();
        sleep(1);
        sysSpuRawDestroy(spu);
        sysSpuImageClose(&spu_image);
    }

    inited=0;
    
}

static void sys_callback(uint64_t status, uint64_t param, void* userdata) {

     switch (status) {
        case SYSUTIL_EXIT_GAME:
                
            release_all();
            sysProcessExit(1);
            break;
      
       default:
           break;
         
    }
}


char * ParseOptionName(char * buffer, char * ret)
{
    strcpy(ret, buffer);
    int i = 0;
    for (i = 0; i < sizeof(ret); i++)
        if (ret[i] == ' ')
            ret[i] = '_';
    
    return ret;
}

void LoadOptions()
{
    int fsize = getFileSize(options_path);
    if (fsize > 0)
    {
        FILE *f = fopen(options_path, "rb");
        if (f == NULL)
            return;
        fseek(f, 0, SEEK_SET);
        
        char * name = malloc(256);
        int val = 0, i = 0, r = 0, line = 0;
        
        r = fscanf(f, " %s %d\n", name, &val);
        while (r != EOF)
        {
            line++;
            for (i = 0; i < menu_options_maxopt; i++)
            {
                char tName[strlen(menu_options_options[i].name) + 1];
                if (strcmp(ParseOptionName(menu_options_options[i].name, (char *)tName), name) == 0)
                {
                    printf ("LoadOptions() :: %s = %d\n", name, val);
                    menu_options_selections[i] = val;
                    break;
                }
            }
            
            r = fscanf(f, " %s %d\n", name, &val);
        }
        
        free(name);
        fclose(f);
    }
}

void SaveOptions()
{
    FILE * fp = fopen(options_path, "w");
    if(fp == NULL)
        return;
    
    int i = 0;
    for (i = 0; i < menu_options_maxopt; i++)
    {
        char tName[strlen(menu_options_options[i].name) + 1];
        fprintf(fp, "%s %d\n", ParseOptionName(menu_options_options[i].name, (char *)tName), menu_options_selections[i]);
    }
    
    fclose(fp);
}


int isArtemisLoaded()
{
    char buf[100];
    readFileBuffered("/dev_hdd0/tmp/artstate", (char *)buf);
    if (buf[0] == 0)
        return 0;
    if (strstr(buf, "on") != NULL)
        return 1;
    
    return 0;
}

void DeleteBootHistory(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir("/dev_hdd0/home/");
    char fullPath[256];
    
    //Delete home boot history files first
    while ((dir = readdir(d)) != NULL)
    {
        if (strstr(dir->d_name, ".") == NULL && strstr(dir->d_name, "..") == NULL)
        {
            sprintf(fullPath, "%s%s%s", "/dev_hdd0/home/", dir->d_name, "/etc/boot_history.dat");
            unlink_secure(fullPath);
        }
    }
    
    //Delete the other boot history files
    unlink_secure("/dev_hdd0/vsh/pushlist/game.dat");
    unlink_secure("/dev_hdd0/vsh/pushlist/patch.dat");
}

/******************************************************************************************************************************************************/
/* TTF functions to load and convert fonts         
 * From fonts_from_ttf Tiny3D sample                                                                                                    */
 /*****************************************************************************************************************************************************/

int ttf_inited = 0;

FT_Library freetype;
FT_Face face;

/* TTFLoadFont can load TTF fonts from device or from memory:
path = path to the font or NULL to work from memory
from_memory = pointer to the font in memory. It is ignored if path != NULL.
size_from_memory = size of the memory font. It is ignored if path != NULL.
*/
int TTFLoadFont(char * path, void * from_memory, int size_from_memory)
{
   
    if(!ttf_inited)
        FT_Init_FreeType(&freetype);
    ttf_inited = 1;

    if(path) {
        if(FT_New_Face(freetype, path, 0, &face)) return -1;
    } else {
        if(FT_New_Memory_Face(freetype, from_memory, size_from_memory, 0, &face)) return -1;
        }

    return 0;
}

/* release all */
void TTFUnloadFont()
{
   FT_Done_FreeType(freetype);
   ttf_inited = 0;
}

/* function to render the character
chr : character from 0 to 255
bitmap: u8 bitmap passed to render the character character (max 256 x 256 x 1 (8 bits Alpha))
*w : w is the bitmap width as input and the width of the character (used to increase X) as output
*h : h is the bitmap height as input and the height of the character (used to Y correction combined with y_correction) as output
y_correction : the Y correction to display the character correctly in the screen
*/

/*
So basically libfont sucks (Not the TTF library).
If a character is greater than the set width (I'm talking to you W) then it just cuts it off... Which looks ugly.
So I've gone ahead and done a hackish patch to make it shrink it down so that it looks like a regular character.
- Dnawrkshp
*/
int doShrinkChar = 0;
void TTF_to_Bitmap(u8 chr, u8 * bitmap, short *w, short *h, short *y_correction)
{
    int width = *w;
    
    TTF_to_Bitmap_loop: ;
    FT_Set_Pixel_Sizes(face, (width), (*h));
    
    FT_GlyphSlot slot = face->glyph;

    if(FT_Load_Char(face, (char) chr, FT_LOAD_RENDER )) {(*w) = 0; return;}
    
    if (slot->bitmap.width > *w && width == *w)
    {
        width = (int)((float)*w * ((float)*w / (float)slot->bitmap.width)) - 1;
        goto TTF_to_Bitmap_loop;
    }
    
    memset(bitmap, 0, (*w) * (*h));
    
    int n, m, ww, mm;

    *y_correction = (*h) - 1 - slot->bitmap_top;
    
    ww = 0;
    
    if (doShrinkChar)
    {
        float mRatio = 0;
        for(n = 0; n < slot->bitmap.rows; n++) {
            for (m = 0; m < slot->bitmap.width; m++) {
                
                mRatio = (float)(slot->bitmap.width+1) / (float)(*w);
                if (mRatio > 1)
                {
                    mm = (int)((float)m * mRatio);
                    
                    bitmap[m] = (u8) slot->bitmap.buffer[ww + mm];
                }
                else
                {
                    mm = m;
                    //if(m >= (*w) || n >= (*h)) continue;
                    bitmap[m] = (u8) slot->bitmap.buffer[ww + mm];
                }
            }
        
            bitmap += *w;
            ww += slot->bitmap.width;
        }
        
        int width = ((slot->advance.x + 31) >> 6) + ((slot->bitmap_left < 0) ? -slot->bitmap_left : 0) - 1;
        *h = slot->bitmap.rows;
        
        if (width < *w)
            *w = width;
    }
    else
    {
        for(n = 0; n < slot->bitmap.rows; n++) {
            for (m = 0; m < slot->bitmap.width; m++) {
                    
                    if(m >= (*w) || n >= (*h)) continue;
                    
                    bitmap[m] = (u8) slot->bitmap.buffer[ww + m];
                }
        
            bitmap += *w;
            ww += slot->bitmap.width;
        }
        
        *w = ((slot->advance.x + 31) >> 6) + ((slot->bitmap_left < 0) ? -slot->bitmap_left : 0) - 1;
        *h = slot->bitmap.rows;
    }
}

/*
    From sprite2D source
    I'm not going to document them for that reason
*/

// draw one background color in virtual 2D coordinates
void DrawBackground2D(u32 rgba)
{
    tiny3d_SetPolygon(TINY3D_QUADS);

    tiny3d_VertexPos(0  , 0  , 65535);
    tiny3d_VertexColor(rgba);

    tiny3d_VertexPos(847, 0  , 65535);

    tiny3d_VertexPos(847, 511, 65535);

    tiny3d_VertexPos(0  , 511, 65535);
    tiny3d_End();
}

void DrawSprites2D(float x, float y, float layer, float dx, float dy, u32 rgba)
{
    tiny3d_SetPolygon(TINY3D_QUADS);

    tiny3d_VertexPos(x     , y     , layer);
    tiny3d_VertexColor(rgba);
    tiny3d_VertexTexture(0.0f, 0.0f);

    tiny3d_VertexPos(x + dx, y     , layer);
    tiny3d_VertexTexture(0.99f, 0.0f);

    tiny3d_VertexPos(x + dx, y + dy, layer);
    tiny3d_VertexTexture(0.99f, 0.99f);

    tiny3d_VertexPos(x     , y + dy, layer);
    tiny3d_VertexTexture(0.0f, 0.99f);

    tiny3d_End();
}

void DrawSpritesRot2D(float x, float y, float layer, float dx, float dy, u32 rgba, float angle)
{
    dx /= 2.0f; dy /= 2.0f;

    MATRIX matrix;
    
    // rotate and translate the sprite
    matrix = MatrixRotationZ(angle);
    matrix = MatrixMultiply(matrix, MatrixTranslation(x + dx, y + dy, 0.0f));
    
    // fix ModelView Matrix
    tiny3d_SetMatrixModelView(&matrix);
   
    tiny3d_SetPolygon(TINY3D_QUADS);

    tiny3d_VertexPos(-dx, -dy, layer);
    tiny3d_VertexColor(rgba);
    tiny3d_VertexTexture(0.0f , 0.0f);

    tiny3d_VertexPos(dx , -dy, layer);
    tiny3d_VertexTexture(0.99f, 0.0f);

    tiny3d_VertexPos(dx , dy , layer);
    tiny3d_VertexTexture(0.99f, 0.99f);

    tiny3d_VertexPos(-dx, dy , layer);
    tiny3d_VertexTexture(0.0f , 0.99f);

    tiny3d_End();

    tiny3d_SetMatrixModelView(NULL); // set matrix identity

}

void DrawTexture(png_texture tex, int x, int y, int z, int w, int h, u32 rgba)
{
    tiny3d_SetTexture(0, tex.texture_off, tex.texture.width,
        tex.texture.height, tex.texture.pitch,  
        TINY3D_TEX_FORMAT_A8R8G8B8, TEXTURE_LINEAR);
    DrawSprites2D(x, y, z, w, h, rgba);
}

int pad_time = 0, rest_time = 0, pad_held_time = 0, rest_held_time = 0;
u16 oldPad = 0;

int readPad(int port)
{
    ioPadGetInfo(&padinfo);
    int off = 2;
    int retDPAD = 0, retREST = 0;
    u8 dpad = 0, _dpad = 0;
    u16 rest = 0, _rest = 0;
    
    if(padinfo.status[port])
    {
        ioPadGetData(port, &padA[port]);
        
        //new
        dpad = ((char)*(&padA[port].zeroes + off) << 8) >> 12;
        rest = ((((char)*(&padA[port].zeroes + off) & 0xF) << 8) | ((char)*(&padA[port].zeroes + off + 1) << 0));
        
        //old
        _dpad = ((char)*(&padB[port].zeroes + off) << 8) >> 12;
        _rest = ((((char)*(&padB[port].zeroes + off) & 0xF) << 8) | ((char)*(&padB[port].zeroes + off + 1) << 0));
        
        if (dpad == 0 && rest == 0)
            idle_time++;
        else
            idle_time = 0;
        
        //Copy new to old
        //memcpy(&_paddata[port].zeroes + off, &paddata[port].zeroes + off, size);
        memcpy(paddata, padA, sizeof(padData));
        memcpy(padB, padA, sizeof(padData));
        
        
        //DPad has 3 mode input delay
        if (dpad == _dpad && dpad != 0)
        {
            if (pad_time > 0) //dpad delay
            {
                pad_held_time++;
                pad_time--;
                retDPAD = 0;
            }
            else
            {
                //So the pad speeds up after a certain amount of time being held
                if (pad_held_time > 180)
                {
                    pad_time = 2;
                }
                else if (pad_held_time > 60)
                {
                    pad_time = 5;
                }
                else
                    pad_time = 20;
                
                retDPAD = 1;
            }
        }
        else
        {
            pad_held_time = 0;
            pad_time = 0;
        }
        
        //rest has its own delay
        if (rest == _rest && rest != 0)
        {
            if (rest_time > 0) //rest delay
            {
                rest_held_time++;
                rest_time--;
                retREST = 0;
            }
            else
            {
                //So the pad speeds up after a certain amount of time being held
                if (rest_held_time > 180)
                {
                    rest_time = 2;
                }
                else if (rest_held_time > 60)
                {
                    rest_time = 5;
                }
                else
                    rest_time = 20;
                
                retREST = 1;
            }
        }
        else
        {
            rest_held_time = 0;
            rest_time = 0;
        }
        
    }
    
    if (!retDPAD && !retREST)
        return 0;
    
    if (!retDPAD)
    {
        paddata[port].BTN_LEFT = 0;
        paddata[port].BTN_RIGHT = 0;
        paddata[port].BTN_UP = 0;
        paddata[port].BTN_DOWN = 0;
    }
    
    if (!retREST)
    {
        paddata[port].BTN_L2 = 0;
        paddata[port].BTN_R2 = 0;
        paddata[port].BTN_L1 = 0;
        paddata[port].BTN_R1 = 0;
        paddata[port].BTN_TRIANGLE = 0; 
        paddata[port].BTN_CIRCLE = 0;
        paddata[port].BTN_CROSS = 0;
        paddata[port].BTN_SQUARE = 0;
        paddata[port].BTN_SELECT = 0;
        paddata[port].BTN_L3 = 0;
        paddata[port].BTN_R3 = 0;
        paddata[port].BTN_START = 0;
    }
    
    return 1;
}

void Draw_MainMenu_Ani()
{
    int c = 0, w = 0, h = 0;
    
    int max = MENU_ANI_MAX, ani = 0;
    for (ani = 0; ani < max; ani++)
    {
        tiny3d_Clear(0xff000000, TINY3D_CLEAR_ALL);
        
        tiny3d_AlphaTest(1, 0x10, TINY3D_ALPHA_FUNC_GEQUAL);
        
        tiny3d_BlendFunc(1, TINY3D_BLEND_FUNC_SRC_RGB_SRC_ALPHA | TINY3D_BLEND_FUNC_SRC_ALPHA_SRC_ALPHA,
            0x00000303 | 0x00000000,
            TINY3D_BLEND_RGB_FUNC_ADD | TINY3D_BLEND_ALPHA_FUNC_ADD);
        
        tiny3d_Project2D();
        
        DrawBackground2D(0xFFFFFFFF);
        
        //------------ Backgrounds
        u8 bg_a = (u8)(ani * 2);
        if (bg_a < 0x20)
            bg_a = 0x20;
        int logo_a_t = ((ani < 0x30) ? 0 : ((ani - 0x20)*3));
        if (logo_a_t > 0xFF)
            logo_a_t = 0xFF;
        u8 logo_a = (u8)logo_a_t;
        
        
        
        //Background
        DrawTexture(menu_main_textures[0], 0, 0, 0, 848, 512, 0xFFFFFF00 | bg_a);
        
        //Ghost logo
        c = 7;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], 424 - (w / 2) + 2, 256 - (h / 2) - 150, 0, w, h, 0xFFFFFF00 | bg_a);
        
        //Artemis logo
        w = 320; h = 240;
        DrawTexture(menu_main_textures[6], 424 - (w / 2), 256 - (h / 2) - 100, 0, w, h, 0xFFFFFF00 | logo_a);
        
        
        tiny3d_Flip();
    }
    
    max = MENU_ANI_MAX / 2;
    int rate = (0x100 / max);
    for (ani = 0; ani < max; ani++)
    {
        tiny3d_Clear(0xff000000, TINY3D_CLEAR_ALL);
        
        tiny3d_AlphaTest(1, 0x10, TINY3D_ALPHA_FUNC_GEQUAL);
        
        tiny3d_BlendFunc(1, TINY3D_BLEND_FUNC_SRC_RGB_SRC_ALPHA | TINY3D_BLEND_FUNC_SRC_ALPHA_SRC_ALPHA,
            0x00000303 | 0x00000000,
            TINY3D_BLEND_RGB_FUNC_ADD | TINY3D_BLEND_ALPHA_FUNC_ADD);
        
        tiny3d_Project2D();
        
        DrawBackground2D(0xFFFFFFFF);
        
        u8 icon_a = (u8)(((ani * rate) > 0xFF) ? 0xFF : (ani * rate));
        
        //------------ Backgrounds
        
        //Background
        DrawTexture(menu_main_textures[0], 0, 0, 0, 848, 512, 0xFFFFFFFF);
        
        //Ghost logo
        c = 7;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], 424 - (w / 2) + 2, 256 - (h / 2) - 150, 0, w, h, 0xFFFFFFFF);
        
        //Artemis logo
        w = 320; h = 240;
        DrawTexture(menu_main_textures[6], 424 - (w / 2), 256 - (h / 2) - 100, 0, w, h, 0xFFFFFFFF);
        
        
        //------------ Info
        c = 11;
        w = (2 * menu_main_textures[c].texture.width) / 4; h = (2 * menu_main_textures[c].texture.height) / 4;
        DrawTexture(menu_main_textures[c], 424 - (w / 2), 450, 0, w, h, 0xffffff00 | icon_a);
        
        //------------ Icons
        
        //Start game
        DrawTexture(menu_main_textures[8], 100 + 150, 320, 0, 64, 64, 0xffffff00 | icon_a);
        
        //Cheats
        DrawTexture(menu_main_textures[4], 200 + 150, 320, 0, 64, 64, 0xffffff00 | icon_a);
        
        //Options
        DrawTexture(menu_main_textures[5], 300 + 150 + 5, 320, 0, 64, 64, 0xffffff00 | icon_a);
        
        //About
        DrawTexture(menu_main_textures[3], 400 + 150, 320, 0, 64, 64, 0xffffff00 | icon_a);
        
        tiny3d_Flip();
    }
    
    highlight_alpha = 32;
}

void Draw_MainMenu()
{
    int c = 0, w = 0, h = 0;
    
    //------------ Backgrounds
    
    //Background
    DrawTexture(menu_main_textures[c], 0, 0, 0, 848, 512, 0xffffffff);
    
    //Ghost logo
    c = 7;
    DrawTexture(menu_main_textures[c], 424 - (w / 2) + 2, 256 - (h / 2) - 150, 0, w, h, 0xffffffff);
    
    //Artemis logo
    c = 6;
    w = 320; h = 240;
    DrawTexture(menu_main_textures[c], 424 - (w / 2), 256 - (h / 2) - 100, 0, w, h, 0xffffffff);
    
    //------------ Info
    c = 11;
    w = (2 * menu_main_textures[c].texture.width) / 4; h = (2 * menu_main_textures[c].texture.height) / 4;
    DrawTexture(menu_main_textures[c], 424 - (w / 2), 450, 0, w, h, 0xffffffff);
    
    //------------ Icons
    
    //Start game
    c = 8;
    DrawTexture(menu_main_textures[c], 100 + 150, 320, 0, 64, 64, 0xffffffff);
    
    //Cheats
    c = 4;
    DrawTexture(menu_main_textures[c], 200 + 150, 320, 0, 64, 64, 0xffffffff);
    
    //Options
    c = 5;
    DrawTexture(menu_main_textures[c], 300 + 150 + 5, 320, 0, 64, 64, 0xffffffff);
    
    //About
    c = 3;
    DrawTexture(menu_main_textures[c], 400 + 150, 320, 0, 64, 64, 0xffffffff);
    
    //------------ Text Descriptors
    
    //Start
    c = 10;
    DrawTexture(menu_main_textures[c], 100 + 150, 390, 0, menu_main_textures[c].texture.width, menu_main_textures[c].texture.height, 0xffffff00 | ((menu_sel == 0) ? highlight_alpha : 0xFF));
    
    //Cheats
    c = 9;
    DrawTexture(menu_main_textures[c], 200 + 150, 390, 0, menu_main_textures[c].texture.width, menu_main_textures[c].texture.height, 0xffffff00 | ((menu_sel == 1) ? highlight_alpha : 0xFF));
    
    //Options
    c = 2;
    DrawTexture(menu_main_textures[c], 300 + 150, 390, 0, menu_main_textures[c].texture.width, menu_main_textures[c].texture.height, 0xffffff00 | ((menu_sel == 2) ? highlight_alpha : 0xFF));
    
    //About
    c = 1;
    DrawTexture(menu_main_textures[c], 400 + 150, 390 - 3, 0, menu_main_textures[c].texture.width, menu_main_textures[c].texture.height, 0xffffff00 | ((menu_sel == 3) ? highlight_alpha : 0xFF));
}

// Used only in initialization. Allocates 64 mb for textures and loads the font
void LoadTexture()
{
    texture_mem = tiny3d_AllocTexture(64*1024*1024); // alloc 64MB of space for textures (this pointer can be global)
    
    u32 * texture_pointer; // use to asign texture space without changes texture_mem

    if(!texture_mem) return; // fail!

    texture_pointer = texture_mem;
    
    ResetFont();
    
    TTFLoadFont(NULL, (void *) electromagnetic_lungs_ttf_bin, electromagnetic_lungs_ttf_bin_size);
    texture_pointer = (u32 *) AddFontFromTTF((u8 *) texture_pointer, 32, 255, 32, 32, TTF_to_Bitmap);
    TTFLoadFont(NULL, (void *) ubuntumono_ttf_bin, ubuntumono_ttf_bin_size);
    texture_pointer = (u32 *) AddFontFromTTF((u8 *) texture_pointer, 32, 255, 32, 32, TTF_to_Bitmap);
    //TTFLoadFont(NULL, (void *) neuropol_ttf_bin, neuropol_ttf_bin_size);
    //texture_pointer = (u32 *) AddFontFromTTF((u8 *) texture_pointer, 32, 255, 32, 32, TTF_to_Bitmap);
    
    font_mem = texture_pointer;
    
    TTFUnloadFont();
    
    if (!menu_main_textures && menu_main_size)
        menu_main_textures = (png_texture *)malloc(sizeof(png_texture) * menu_main_size);
    if (!menu_about_textures && menu_about_size)
        menu_about_textures = (png_texture *)malloc(sizeof(png_texture) * menu_about_size);
    if (!menu_options_textures && menu_options_size)
        menu_options_textures = (png_texture *)malloc(sizeof(png_texture) * menu_options_size);
    if (!menu_cheats_textures && menu_cheats_size)
        menu_cheats_textures = (png_texture *)malloc(sizeof(png_texture) * menu_cheats_size);
    
    //Init Main Menu textures
    menu_main_textures[0].buffer = (const void*)background_png; menu_main_textures[0].size = (u32)background_png_size;
    menu_main_textures[1].buffer = (const void*)desc_about_png; menu_main_textures[1].size = (u32)desc_about_png_size;
    menu_main_textures[2].buffer = (const void*)desc_options_png; menu_main_textures[2].size = (u32)desc_options_png_size;
    menu_main_textures[3].buffer = (const void*)icon_about_png; menu_main_textures[3].size = (u32)icon_about_png_size;
    menu_main_textures[4].buffer = (const void*)icon_cheats_png; menu_main_textures[4].size = (u32)icon_cheats_png_size;
    menu_main_textures[5].buffer = (const void*)icon_options_png; menu_main_textures[5].size = (u32)icon_options_png_size;
    menu_main_textures[6].buffer = (const void*)logo_png; menu_main_textures[6].size = (u32)logo_png_size;
    menu_main_textures[7].buffer = (const void*)logo_ghost_png; menu_main_textures[7].size = (u32)logo_ghost_png_size;
    menu_main_textures[8].buffer = (const void*)icon_start_png; menu_main_textures[8].size = (u32)icon_start_png_size;
    menu_main_textures[9].buffer = (const void*)desc_cheats_png; menu_main_textures[9].size = (u32)desc_cheats_png_size;
    menu_main_textures[10].buffer = (const void*)desc_start_png; menu_main_textures[10].size = (u32)desc_start_png_size;
    menu_main_textures[11].buffer = (const void*)project_png; menu_main_textures[11].size = (u32)project_png_size;
    
    menu_about_textures[0].buffer = (const void*)menu_bar_png; menu_about_textures[0].size = (u32)menu_bar_png_size;
    
    //menu_options_textures[0].buffer = (const void*)icon_options_mini_png; menu_options_textures[0].size = (u32)icon_options_mini_png_size;
    
    menu_cheats_textures[0].buffer = (const void*)sel_bar1_png; menu_cheats_textures[0].size = (u32)sel_bar1_png_size;
    menu_cheats_textures[1].buffer = (const void*)sel_bar2_png; menu_cheats_textures[1].size = (u32)sel_bar2_png_size;
    menu_cheats_textures[2].buffer = (const void*)icon_usercheats_png; menu_cheats_textures[2].size = (u32)icon_usercheats_png_size;
    menu_cheats_textures[3].buffer = (const void*)icon_onlinecheats_png; menu_cheats_textures[3].size = (u32)icon_onlinecheats_png_size;
}

void LoadTextures_Menu()
{
    u32 * texture_pointer; // use to assign texture space without changes texture_mem

    if(!font_mem) return; // fail!

    texture_pointer = font_mem;
    
    int cnt = 0;
    
    //Main Menu
    for (cnt = 0; cnt < menu_main_size; cnt++)
    {
        pngLoadFromBuffer(menu_main_textures[cnt].buffer, menu_main_textures[cnt].size, &menu_main_textures[cnt].texture);
    
        // copy texture datas from PNG to the RSX memory allocated for textures
        if(menu_main_textures[cnt].texture.bmp_out)
        {
            memcpy(texture_pointer, menu_main_textures[cnt].texture.bmp_out, menu_main_textures[cnt].texture.pitch * menu_main_textures[cnt].texture.height);
            free(menu_main_textures[cnt].texture.bmp_out); // free the PNG because i don't need this datas
            menu_main_textures[cnt].texture_off = tiny3d_TextureOffset(texture_pointer);      // get the offset (RSX use offset instead address)
            texture_pointer += ((menu_main_textures[cnt].texture.pitch * menu_main_textures[cnt].texture.height + 15) & ~15) / 4; // aligned to 16 bytes (it is u32) and update the pointer
        }
    }
    
    //About Menu
    for (cnt = 0; cnt < menu_about_size; cnt++)
    {
        pngLoadFromBuffer(menu_about_textures[cnt].buffer, menu_about_textures[cnt].size, &menu_about_textures[cnt].texture);
    
        // copy texture datas from PNG to the RSX memory allocated for textures
        if(menu_about_textures[cnt].texture.bmp_out)
        {
            memcpy(texture_pointer, menu_about_textures[cnt].texture.bmp_out, menu_about_textures[cnt].texture.pitch * menu_about_textures[cnt].texture.height);
            free(menu_about_textures[cnt].texture.bmp_out); // free the PNG because i don't need this datas
            menu_about_textures[cnt].texture_off = tiny3d_TextureOffset(texture_pointer);      // get the offset (RSX use offset instead address)
            texture_pointer += ((menu_about_textures[cnt].texture.pitch * menu_about_textures[cnt].texture.height + 15) & ~15) / 4; // aligned to 16 bytes (it is u32) and update the pointer
        }
    }
    
    //Options Menu
    for (cnt = 0; cnt < menu_options_size; cnt++)
    {
        pngLoadFromBuffer(menu_options_textures[cnt].buffer, menu_options_textures[cnt].size, &menu_options_textures[cnt].texture);
    
        // copy texture datas from PNG to the RSX memory allocated for textures
        if(menu_options_textures[cnt].texture.bmp_out)
        {
            memcpy(texture_pointer, menu_options_textures[cnt].texture.bmp_out, menu_options_textures[cnt].texture.pitch * menu_options_textures[cnt].texture.height);
            free(menu_options_textures[cnt].texture.bmp_out); // free the PNG because i don't need this datas
            menu_options_textures[cnt].texture_off = tiny3d_TextureOffset(texture_pointer);      // get the offset (RSX use offset instead address)
            texture_pointer += ((menu_options_textures[cnt].texture.pitch * menu_options_textures[cnt].texture.height + 15) & ~15) / 4; // aligned to 16 bytes (it is u32) and update the pointer
        }
    }
    
    //Cheats Menu
    for (cnt = 0; cnt < menu_cheats_size; cnt++)
    {
        pngLoadFromBuffer(menu_cheats_textures[cnt].buffer, menu_cheats_textures[cnt].size, &menu_cheats_textures[cnt].texture);
    
        // copy texture datas from PNG to the RSX memory allocated for textures
        if(menu_cheats_textures[cnt].texture.bmp_out)
        {
            memcpy(texture_pointer, menu_cheats_textures[cnt].texture.bmp_out, menu_cheats_textures[cnt].texture.pitch * menu_cheats_textures[cnt].texture.height);
            free(menu_cheats_textures[cnt].texture.bmp_out); // free the PNG because i don't need this datas
            menu_cheats_textures[cnt].texture_off = tiny3d_TextureOffset(texture_pointer);      // get the offset (RSX use offset instead address)
            texture_pointer += ((menu_cheats_textures[cnt].texture.pitch * menu_cheats_textures[cnt].texture.height + 15) & ~15) / 4; // aligned to 16 bytes (it is u32) and update the pointer
        }
    }
    
    u32 tBytes = texture_pointer - texture_mem;
    printf ("LoadTextures_Menu() :: Allocated %db (%.02fkb, %.02fmb) for textures\n", tBytes, tBytes / (float)1024, tBytes / (float)(1024 * 1024));
}

short *background_music = NULL;
int background_music_size = 48000*72*4; // initial size of buffer to decode (for 48000 samples x 20 seconds and 16 bit stereo as reference)
int effect_freq;
int effect_is_stereo;
void LoadSounds()
{
    //Initialize SPU
    u32 entry = 0;
    u32 segmentcount = 0;
    sysSpuSegment* segments;
    
    sysSpuInitialize(6, 5);
    sysSpuRawCreate(&spu, NULL);
    sysSpuElfGetInformation(spu_soundmodule_bin, &entry, &segmentcount);
    
    size_t segmentsize = sizeof(sysSpuSegment) * segmentcount;
    segments = (sysSpuSegment*)memalign(128, SPU_SIZE(segmentsize)); // must be aligned to 128 or it break malloc() allocations
    memset(segments, 0, segmentsize);

    sysSpuElfGetSegments(spu_soundmodule_bin, segments, segmentcount);

    sysSpuImageImport(&spu_image, spu_soundmodule_bin, 0);

    sysSpuRawImageLoad(spu, &spu_image);
    
    inited |= INITED_SPU;
    if(SND_Init(spu)==0)
        inited |= INITED_SOUNDLIB;
    
    background_music   = (short *) malloc(background_music_size);


    //s_printf("Decoding Effect\n");

    // decode the mp3 effect file included to memory. It stops by EOF or when samples exceed size_effects_samples
    DecodeAudio( (void *) background_music_mp3_bin, background_music_mp3_bin_size, background_music, &background_music_size, &effect_freq, &effect_is_stereo);

    // adjust the sound buffer sample correctly to the background_music_size
    {
        // SPU dma works aligned to 128 bytes. SPU module is designed to read unaligned buffers and it is better thing aligned buffers)

        short *temp = (short *)memalign(128, SPU_SIZE(background_music_size));

        memcpy((void *) temp, (void *) background_music, background_music_size);

        free(background_music);

        background_music =  temp;
    }
    
    SND_Pause(0);
}

void music_callback(int sel)
{
    switch (sel)
    {
        case 0: //on
            SND_PauseVoice(2, 0);
            break;
        case 1: //off
            SND_PauseVoice(2, 1);
    }
}

void sort_callback(int sel)
{
    doSort = !sel;
}

void ani_callback(int sel)
{
    doAni = !sel;
}

void ReloadUserCheats()
{
    if (user_game_list)
    {
        UnloadGameList(user_game_list, user_game_count);
        user_game_count = 0;
        user_game_list = NULL;
    }
    
    int gmc[1];
    user_game_list = ReadUserList((int *)gmc);
    user_game_count = *gmc;
    if (doSort)
        BubbleSortGameList(user_game_list, user_game_count);
}

void SetMenu(int id)
{   
    switch (menu_id) //Leaving menu
    {
        case 0: //Main Menu
            
            break;
        case 1: //Cheats Offline Menu
            
            break;
        case 2: //Cheats Online Menu
            
            break;
        case 3: //About Menu
            
            break;
        case 4: //Options Menu
            
            break;
        case 5: //Cheat Selection Menu
            
            break;
        case 6: //Cheat View Menu
            
            break;
        case 7: //Cheat Option Menu
            
            break;
    }
    
    switch (id) //going to menu
    {
        case 0: //Main Menu
            if (doAni || menu_id == 0) //if load animation
                Draw_MainMenu_Ani();
            break;
        case 1: //Cheats Offline Menu
            if (!user_game_list)
            {
                int gmc[1];
                user_game_list = ReadUserList((int *)gmc);
                user_game_count = *gmc;
                if (doSort)
                    BubbleSortGameList(user_game_list, user_game_count);
            }
            
            if (doAni)
                Draw_UserCheatsMenu_Ani();
            break;
        case 2: //Cheats Online Menu
            
            break;
        case 3: //About Menu
            if (doAni)
                Draw_AboutMenu_Ani();
            break;
        case 4: //Options Menu
            if (doAni)
                Draw_OptionsMenu_Ani();
            break;
        case 5: //Cheat Selection Menu
            if (menu_id == 1 || menu_id == 2) //if entering from game list, don't keep index, otherwise keep
                menu_old_sel[5] = 0;
            if (doAni)
                Draw_CheatsMenu_Selection_Ani();
            break;
        case 6: //Cheat View Menu
            menu_old_sel[6] = 0;
            if (doAni)
                Draw_CheatsMenu_View_Ani();
            break;
        case 7: //Cheat Option Menu
            menu_old_sel[7] = 0;
            if (doAni)
                Draw_CheatsMenu_Options_Ani();
            break;
    }
    
    menu_old_sel[menu_id] = menu_sel;
    if (last_menu_id[menu_id] != id)
        last_menu_id[id] = menu_id;
    menu_id = id;
    
    menu_sel = menu_old_sel[menu_id];
}

//COBRA/MAMBA+PS3MAPI+LOADPLUGIN

#define SYSCALL_OPCODE_LOAD_VSH_PLUGIN      0x1EE7

int cobra_mamba_syscall_load_prx_module(uint32_t slot, char * path, void * arg, uint32_t arg_size)
{
    lv2syscall5(8, SYSCALL_OPCODE_LOAD_VSH_PLUGIN, (uint64_t)slot, (uint64_t)path, (uint64_t)arg, (uint64_t)arg_size);
    return_to_user_prog(int);
}

int ps3mapi_get_core_version(void)
{
	lv2syscall2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CORE_VERSION);
	return_to_user_prog(int);						
}

int has_ps3mapi(void)
{
    if (ps3mapi_get_core_version() >= PS3MAPI_CORE_MINVERSION) return SUCCESS;
    return FAILED;
}



// Resets new frame
void drawScene()
{   
    tiny3d_Project2D(); // change to 2D context (remember you it works with 848 x 512 as virtual coordinates)
    
    char * userc, * onlinec;
    int max = 0;
    
    switch (menu_id)
    {
        case 0:
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_LEFT)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = 3;
                }
                else if(paddata[0].BTN_RIGHT)
                {
                    if (menu_sel < 3)
                        menu_sel++;
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_CROSS)
                {
                    switch (menu_sel)
                    {
                        case 0: //start (install MAMBA if needed, load artemis_ps3.sprx, write cheats to /dev_hdd0/tmp/art.txt)
                            userc = ParseActivatedGameList(user_game_list, user_game_count);
                            onlinec = ParseActivatedGameList(online_game_list, online_game_count);
                            
                            writeFile("/dev_hdd0/tmp/art.txt", userc, onlinec);
                            
                            free (userc);
                            free (onlinec);
                            
							//
							char plugin_name[30];
							char plugin_filename[256];
							memset(plugin_name, 0, sizeof(plugin_name));
							memset(plugin_filename, 0, sizeof(plugin_filename));
                            //Check if COBRA+PS3MAPI is installed
                            if ((is_cobra() == SUCCESS) && (has_ps3mapi() == SUCCESS))
							{
                                //printf ("COBRA+PS3MAPI Detected\n");
								{lv2syscall5(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO, 5, (uint64_t)plugin_name, (uint64_t)plugin_filename);}
								if ((strlen(plugin_filename) > 0) && (strcmp(plugin_filename, (char *)"/dev_hdd0/game/ARTPS3001/USRDIR/artemis_ps3.sprx") != 0))
								{
                                    //printf ("COBRA: Artemis is not loaded yet\n");
									cobra_mamba_syscall_load_prx_module(5, "/dev_hdd0/game/ARTPS3001/USRDIR/artemis_ps3.sprx", 0, 0);
                                }
                                //printf ("COBRA: Artemis running\n");
                                {lv2syscall3(392, 0x1004, 0x4, 0x6);} //1 Beep
							}
                            //Check if MAMBA+PS3MAPI is installed
                            else if ((is_mamba() == SUCCESS) && (has_ps3mapi() == SUCCESS))
                            {
                                //printf ("MAMBA + PS3MAPI Detected\n");
								{lv2syscall5(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO, 5, (uint64_t)plugin_name, (uint64_t)plugin_filename);}
								if ((strlen(plugin_filename) > 0) && (strcmp(plugin_filename, (char *)"/dev_hdd0/game/ARTPS3001/USRDIR/artemis_ps3.sprx") != 0))
								{
                                    //printf ("MAMBA: Artemis is not loaded yet\n");
									cobra_mamba_syscall_load_prx_module(5, "/dev_hdd0/game/ARTPS3001/USRDIR/artemis_ps3.sprx", 0, 0);
                                }
                                //printf ("MAMBA: Artemis running\n");
                                {lv2syscall3(392, 0x1004, 0x4, 0x6);} //1 Beep
                            }
                            else if ((is_cobra() != SUCCESS) && (is_mamba() != SUCCESS) && (mamba_prx_loader(0, 0) == SUCCESS))
                            {   
                                //printf ("None are loaded\n");
                               { lv2syscall3(392, 0x1004, 0x4, 0x6);}  //1 Beep
                            }
                            else
                                { lv2syscall3(392, 0x1004, 0xa, 0x1b6); } //3 beep
                            
                            
                            //So we know art is loaded if we boot up later
                            writeFile("/dev_hdd0/tmp/artstate", "on", "");
                            
                            //Clear boot history
                            DeleteBootHistory();
                            
                            close_art = 1;
                            return;
                        case 1: //Cheats menu
                            SetMenu(1);
                            return;
                        case 2: //Options menu
                            SetMenu(4);
                            return;
                        case 3: //About menu
                            SetMenu(3);
                            return;
                    }
                }
            }
            
            Draw_MainMenu();
            
            break;
        case 1: //Offline Cheats Menu
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_UP)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = user_game_count - 1;
                }
                else if(paddata[0].BTN_DOWN)
                {
                    if (menu_sel < (user_game_count-1))
                    {
                        menu_sel++;
                    }
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_LEFT)
                {
                    menu_sel -= 5;
                    if (menu_sel < 0)
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_RIGHT)
                {
                    menu_sel += 5;
                    if (menu_sel >= user_game_count)
                        menu_sel = user_game_count - 1;
                }
                else if (paddata[0].BTN_CIRCLE)
                {
                    SetMenu(0);
                    return;
                }
                else if (paddata[0].BTN_CROSS)
                {
                    if (doSort)
                        user_game_list[menu_sel] = BubbleSortCodeList(user_game_list[menu_sel]);
                    selected_entry = user_game_list[menu_sel];
                    SetMenu(5);
                    return;
                }
                else if (paddata[0].BTN_SQUARE)
                {
                    ReloadUserCheats();
                }
            }
            
            Draw_UserCheatsMenu();
            break;
        case 2: //Online Cheats Menu
            
            break;
        case 3: //About Menu
            
            // Check the pads.
            if (readPad(0))
            {
                if (paddata[0].BTN_CIRCLE)
                {
                    SetMenu(0);
                    return;
                }
            }
            
            Draw_AboutMenu();
            break;
        case 4: //Options Menu
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_UP)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = menu_options_maxopt - 1;
                }
                else if(paddata[0].BTN_DOWN)
                {
                    if (menu_sel < (menu_options_maxopt - 1))
                        menu_sel++;
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_CIRCLE)
                {
                    SetMenu(0);
                    return;
                }
                else if (paddata[0].BTN_LEFT)
                {
                    if (menu_options_selections[menu_sel] > 0)
                        menu_options_selections[menu_sel]--;
                    else
                        menu_options_selections[menu_sel] = menu_options_maxsel[menu_sel] - 1;
                    
                    menu_options_options[menu_sel].callback(menu_options_selections[menu_sel]);
                    
                    SaveOptions();
                }
                else if (paddata[0].BTN_RIGHT)
                {
                    if (menu_options_selections[menu_sel] < (menu_options_maxsel[menu_sel] - 1))
                        menu_options_selections[menu_sel]++;
                    else
                        menu_options_selections[menu_sel] = 0;
                    
                    menu_options_options[menu_sel].callback(menu_options_selections[menu_sel]);
                    
                    SaveOptions();
                }
            }
            
            Draw_OptionsMenu();
            break;
        case 5: //Cheats Selection Menu
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_UP)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = selected_entry.code_count - 1;
                }
                else if(paddata[0].BTN_DOWN)
                {
                    if (menu_sel < (selected_entry.code_count-1))
                    {
                        menu_sel++;
                    }
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_LEFT)
                {
                    menu_sel -= 5;
                    if (menu_sel < 0)
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_RIGHT)
                {
                    menu_sel += 5;
                    if (menu_sel >= selected_entry.code_count)
                        menu_sel = selected_entry.code_count - 1;
                }
                else if (paddata[0].BTN_CIRCLE)
                {
                    SetMenu(last_menu_id[5]);
                    return;
                }
                else if (paddata[0].BTN_CROSS)
                {
                    selected_entry.codes[menu_sel].activated = !selected_entry.codes[menu_sel].activated;
                    
                    if (selected_entry.codes[menu_sel].activated)
                    {
                        //Check if option code
                        if (!selected_entry.codes[menu_sel].options)
                        {
                            int size[1];
                            selected_entry.codes[menu_sel].options = ReadOptions(selected_entry.codes[menu_sel], (int *)size);
                            selected_entry.codes[menu_sel].options_count = size[0];
                        }
                        
                        if (selected_entry.codes[menu_sel].options)
                        {
                            selected_centry = selected_entry.codes[menu_sel];
                            option_index = 0;
                            SetMenu(7);
                            return;
                        }
                    }
                }
                else if (paddata[0].BTN_SQUARE)
                {
                    if (selected_entry.codes[menu_sel].activated)
                    {
                        selected_entry.codes[menu_sel].cwrite = !selected_entry.codes[menu_sel].cwrite;
                    }
                }
                else if (paddata[0].BTN_TRIANGLE)
                {
                    selected_centry = selected_entry.codes[menu_sel];
                    SetMenu(6);
                    return;
                }
            }
            
            Draw_CheatsMenu_Selection();
            break;
        case 6: //Cheat View Menu
            
            //Calc max
            max = 0;
            const char * str;
            for(str = selected_centry.codes; *str; ++str)
                max += *str == '\n';
            //max += -((512 - (120*2))/18) + 1; //subtract the max per page
            if (max <= 0)
                max = 1;
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_UP)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = max - 1;
                }
                else if(paddata[0].BTN_DOWN)
                {
                    if (menu_sel < (max-1))
                    {
                        menu_sel++;
                    }
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_CIRCLE)
                {
                    SetMenu(last_menu_id[6]);
                    return;
                }
            }
            
            Draw_CheatsMenu_View();
            break;
        case 7: //Cheat Option Menu
            
            //Calc max
            max = selected_centry.options[option_index].size;
            
            // Check the pads.
            if (readPad(0))
            {
                if(paddata[0].BTN_UP)
                {
                    if (menu_sel > 0)
                        menu_sel--;
                    else
                        menu_sel = max - 1;
                }
                else if(paddata[0].BTN_DOWN)
                {
                    if (menu_sel < (max-1))
                    {
                        menu_sel++;
                    }
                    else
                        menu_sel = 0;
                }
                else if (paddata[0].BTN_CIRCLE)
                {
                    selected_entry.codes[menu_old_sel[last_menu_id[7]]].activated = 0;
                    SetMenu(last_menu_id[7]);
                    return;
                }
                else if (paddata[0].BTN_CROSS)
                {
                    selected_entry.codes[menu_old_sel[last_menu_id[7]]].options[option_index].sel = menu_sel;
                    option_index++;
                    
                    if (option_index >= selected_entry.codes[menu_old_sel[last_menu_id[7]]].options_count)
                    {
                        SetMenu(last_menu_id[7]);
                        return;
                    }
                    else
                        menu_sel = 0;
                }
            }
            
            Draw_CheatsMenu_Options();
            break;
    }
}

void exiting()
{
    sysModuleUnload(SYSMODULE_PNGDEC);
}

/*
    Main function
    
    Initializes pad, screen, textures, and server
    
    When connected, it loops and parses PC communication
*/
s32 main(s32 argc, const char* argv[])
{
    tiny3d_Init(1024*1024);

    ioPadInit(7);
    
    sysModuleLoad(SYSMODULE_PNGDEC);
    //sysModuleLoad(SYSMODULE_JPGDEC);

    atexit(exiting); // Tiny3D register the event 3 and do exit() call when you exit  to the menu

    // register exit callback
    if(sysUtilRegisterCallback(SYSUTIL_EVENT_SLOT0, sys_callback, NULL)==0) inited |= INITED_CALLBACK;
    
    // Load texture

    LoadTexture();
    LoadTextures_Menu();
    LoadSounds();
    
    SetExtraSpace(5);
    
    menu_options_maxopt = 0;
    while (menu_options_options[menu_options_maxopt].name)
    {
        menu_options_maxopt++;
    }
    
    int selSize = menu_options_maxopt * sizeof(int);
    menu_options_maxsel = (int *)malloc(selSize);
    menu_options_selections = (int *)malloc(selSize);
    memset(menu_options_maxsel, 0, selSize);
    memset(menu_options_selections, 0, selSize);
    
    int i = 0;
    for (i = 0; i < menu_options_maxopt; i++)
    {
        menu_options_maxsel[i] = 0;
        while (menu_options_options[i].options[menu_options_maxsel[i]])
            menu_options_maxsel[i]++;
    }
    
    LoadOptions();
    
    //texture_mem = tiny3d_AllocTexture(64*1024*1024);

    videoState state;
    assert(videoGetState(0, 0, &state) == 0); // Get the state of the display
    assert(state.state == 0); // Make sure display is enabled
    
    videoResolution res;
    assert(videoGetResolution(state.displayMode.resolution, &res) == 0);
    //printf("Resolution: %d by %d\n", res.width, res.height);
    screen_width = res.width;
    screen_height = res.height;
    
    //SND_SetVoice( 2, (effect_is_stereo) ? VOICE_STEREO_16BIT : VOICE_MONO_16BIT, effect_freq, 0, background_music, background_music_size, 255, 255, NULL);
    SND_SetInfiniteVoice(2, (effect_is_stereo) ? VOICE_STEREO_16BIT : VOICE_MONO_16BIT, effect_freq, 0, background_music, background_music_size, 255, 255);
    
    //Set options
    for (i = 0; i < menu_options_maxopt; i++)
        menu_options_options[i].callback(menu_options_selections[i]);
    
    SetMenu(0);
    
    while (1)
    {       
        tiny3d_Clear(0xff000000, TINY3D_CLEAR_ALL);

        // Enable alpha Test
        tiny3d_AlphaTest(1, 0x10, TINY3D_ALPHA_FUNC_GEQUAL);

        // Enable alpha blending.
        tiny3d_BlendFunc(1, TINY3D_BLEND_FUNC_SRC_RGB_SRC_ALPHA | TINY3D_BLEND_FUNC_SRC_ALPHA_SRC_ALPHA,
            0x00000303 | 0x00000000,
            TINY3D_BLEND_RGB_FUNC_ADD | TINY3D_BLEND_ALPHA_FUNC_ADD);
                    
        // Check the pads.
        ioPadGetInfo(&padinfo);
        if(padinfo.status[0]){
            ioPadGetData(0, &padA[0]);

            if(padA[0].BTN_R3 && padA[0].BTN_L3)
            {
                return 0;
            }
        }
        
        if (close_art)
            return 0;
        
        drawScene();
        
        //Draw help
        if (menu_pad_help[menu_id])
        {
            u8 alpha = 0xFF;
            if (idle_time > 80)
            {
                int dec = (idle_time - 80) * 4;
                if (dec > alpha)
                    dec = alpha;
                alpha -= dec;
            }
            
            SetFontSize(18, 16);
            SetCurrentFont(0);
            SetFontAlign(1);
            SetFontColor(0x00000000 | alpha, 0);
            DrawString(0, 480, (char *)menu_pad_help[menu_id]);
            SetFontAlign(0);
        }
        
        tiny3d_Flip();
        
        /* Alpha calculation to control Highlight pulse */
        if (highlight_pulse) {
            highlight_alpha += highlight_amount;
            if (highlight_alpha > 128) {
                highlight_alpha = 128;
                pause_pulse++;
                if (pause_pulse >= 12) {
                    highlight_amount = -3;
                    pause_pulse = 0;
                }
            } else if (highlight_alpha < 32) {
                highlight_amount = 3;
                highlight_alpha = 32;
            }
        }
        else {
            highlight_alpha = 128;  
        }
    }
    
    return 0;
}
