#include "menu_options.h"

#include <stdio.h>

#include <tiny3d.h>
#include <libfont.h>
#include <pngdec/pngdec.h>

typedef struct _png_texture
{
    const void *buffer;
    u32 size;
    pngData texture;
    u32 texture_off;
} png_texture;

extern png_texture * menu_main_textures;            // png_texture array for main menu, initialized in LoadTexture
extern const int menu_main_size;                // Size of main menu png_texture array

extern png_texture * menu_about_textures;           // png_texture array for about menu, initialized in LoadTexture
extern const int menu_about_size;               // Size of about menu png_texture array

extern png_texture * menu_options_textures;     // png_texture array for options menu, initialized in LoadTexture
extern const int menu_options_size;         // Size of options menu png_texture array

extern png_texture * menu_cheats_textures;          // png_texture array for cheats menu, initialized in LoadTexture
extern const int menu_cheats_size;              // Size of cheats menu png_texture array

extern int screen_width;
extern int screen_height;   // Set to dimensions of the screen in main()

extern int highlight_alpha;                 // Alpha of the selected
extern int highlight_pulse;                 // Whether the increment the highlight
extern int highlight_amount;                    // Amount of alpha to inc/dec each time
extern int pause_pulse;                     // Counter that holds how long alpha is held in place

extern const int MENU_TITLE_OFF;                //Offset of menu title text from menu mini icon
extern const int MENU_ICON_OFF;                 //X Offset to start printing menu mini icon
extern const int MENU_ANI_MAX;

extern int menu_id;                             // Menu currently in
extern int menu_sel;                            // Index of selected item (use varies per menu)
extern int menu_old_sel[];                      // Previous menu_sel for each menu
extern int last_menu_id[];                      // Last menu id called (for returning)


typedef struct
{
    char * name;
    char * * options;
    void (*callback)(int);
} option;

extern const option menu_options_options[];
extern int * menu_options_selections;

extern int DrawTexture(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);


void Draw_OptionsMenu_Ani()
{
    int c = 0, w = 0, h = 0;
    
    int div = 12, max = MENU_ANI_MAX, ani = 0;
    for (ani = 0; ani < max; ani++)
    {
        tiny3d_Clear(0xff000000, TINY3D_CLEAR_ALL);
        
        tiny3d_AlphaTest(1, 0x10, TINY3D_ALPHA_FUNC_GEQUAL);
        
        tiny3d_BlendFunc(1, TINY3D_BLEND_FUNC_SRC_RGB_SRC_ALPHA | TINY3D_BLEND_FUNC_SRC_ALPHA_SRC_ALPHA,
            0x00000303 | 0x00000000,
            TINY3D_BLEND_RGB_FUNC_ADD | TINY3D_BLEND_ALPHA_FUNC_ADD);
        
        tiny3d_Project2D();
        
        u8 icon_a = (u8)(((ani * 2) > 0xFF) ? 0xFF : (ani * 2));
        
        
        //------------ Backgrounds
        
        //Background
        c = 0;
        DrawTexture(menu_main_textures[c], 0, 0, 0, 848, 512, 0xFFFFFFFF);
        
        //Ghost logo
        c = 7;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], 424 - (w / 2) + 2, 256 - (h / 2) - 150, 0, w, h, 0xFFFFFFFF);
        
        
        //------------- Menu Bar
        
        int c = 0;
        int cnt = 0, cntMax = ((ani * div) > 848) ? 848 : (ani * div);
        for (cnt = 0; cnt < cntMax; cnt++)
        {
            w = menu_about_textures[c].texture.width; h = menu_about_textures[c].texture.height;
            DrawTexture(menu_about_textures[c], cnt, 60, 0, w, h, 0xffffffff);
        }
        
        //Options mini icon
        c = 5;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //Options string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Options");
        
        
        int _game_a = (int)(icon_a - (max / 2)) * 2;
        if (_game_a > 0xFF)
            _game_a = 0xFF;
        u8 game_a = (u8)(_game_a < 0 ? 0 : _game_a);
        
        if (game_a > 0)
        {
            SetFontSize(24, 16);
            int ind = 0, y_off = 120;
            while (menu_options_options[ind].name)
            {
                SetFontColor(0x00000000 | game_a, 0x00000000);
                DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, y_off, menu_options_options[ind].name);
                
                SetFontAlign(2);
                DrawString(700, y_off, menu_options_options[ind].options[menu_options_selections[ind]]);
                SetFontAlign(0);
                
                if (menu_old_sel[4] == ind)
                {
                    int i = 0;
                    for (i = 0; i < 848; i++)
                        DrawTexture(menu_cheats_textures[0], i, y_off, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFF00 | game_a);
                }
                
                y_off += 18;
                ind++;
            }
        }
        
        tiny3d_Flip();
        
        if (game_a == 0xFF)
            return;
    }
}

void Draw_OptionsMenu()
{
    int c = 0, w = 0, h = 0;
    
    //------------ Backgrounds
    
    //Background
    c = 0;
    DrawTexture(menu_main_textures[c], 0, 0, 0, 848, 512, 0xffffffff);
    
    //Ghost logo
    c = 7;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], 424 - (w / 2) + 2, 256 - (h / 2) - 150, 0, w, h, 0xffffffff);
    
    //------------ Menu Bar
    c = 0;
    int cnt = 0;
    for (cnt = 0; cnt < 848; cnt++)
    {
        w = menu_about_textures[c].texture.width; h = menu_about_textures[c].texture.height;
        DrawTexture(menu_about_textures[c], cnt, 60, 0, w, h, 0xffffffff);
    }
    
    //Options mini icon
    c = 5;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
    
    //Options string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);
        
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Options");
    
    
    SetFontSize(24, 16);
    int ind = 0, y_off = 120;
    while (menu_options_options[ind].name)
    {
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, y_off, menu_options_options[ind].name);
        SetFontAlign(2);
        //if (menu_sel == ind)
        //  SetFontColor(0x00000000 | highlight_alpha, 0x00000000);
        DrawString(700, y_off, menu_options_options[ind].options[menu_options_selections[ind]]);
        SetFontColor(0x000000FF, 0x00000000);
        SetFontAlign(0);
        
        if (menu_sel == ind)
        {
            int i = 0;
            for (i = 0; i < 848; i++)
                DrawTexture(menu_cheats_textures[0], i, y_off, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFFFF);
        }
        
        //printf ("aa %d\n", menu_options_selections[ind]);
        
        y_off += 18;
        ind++;
    }
}