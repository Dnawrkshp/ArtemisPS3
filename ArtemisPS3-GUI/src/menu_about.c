#include "menu_about.h"

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

extern const char * VERSION;                        //Artemis PS3 version (about menu)
extern const int MENU_TITLE_OFF;                    //Offset of menu title text from menu mini icon
extern const int MENU_ICON_OFF;                 //X Offset to start printing menu mini icon
extern const int MENU_ANI_MAX;

extern const char * menu_about_strings[];


extern void DrawTexture(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);

void Draw_AboutMenu_Ani()
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
        
        //About mini icon
        c = 3;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //About string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "About");
        
        //Version string
        SetFontSize(24, 16);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        SetFontAlign(2);
        DrawString(700, 37, (char *)VERSION);
        SetFontAlign(0);
        
        //------------- About Menu Contents
        
        int rate = (0x100 / (MENU_ANI_MAX - 0x60));
        u8 about_a = (u8)((((ani - 0x60) * rate) > 0xFF) ? 0xFF : ((ani - 0x60) * rate));
        if (ani < 0x60)
            about_a = 0;
        
        //------------- About Menu Contents
        SetFontSize(25, 25);
        SetFontColor(0x00000000 | about_a, 0x00000000);
        SetFontAlign(1);
        DrawString(848/2, 70, "Thank you for using Artemis PS3");
        SetFontSize(20, 20);
        DrawString(848/2, 95, "A Playstation 3 Hacking System");
        
        for (cnt = 0; menu_about_strings[cnt] != NULL; cnt += 2)
        {
            SetFontSize(25, 25);
            SetFontColor(0x00000000 | about_a, 0x00000000);
            SetFontAlign(0);
            DrawString(MENU_ICON_OFF, 140 + (cnt * 0x20), (char *)(menu_about_strings[cnt]));
            
            SetFontSize(20, 20);
            SetFontColor(0x00000000 | about_a, 0x00000000);
            DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 140 + (cnt * 0x20) + 25, (char *)menu_about_strings[cnt+1]);
        }
        
        
        tiny3d_Flip();
        
        if (about_a == 0xFF)
            return;
    }
}

void Draw_AboutMenu()
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
    
    //About mini icon
    c = 3;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
    
    //About string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);   
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "About");
    
    //Version string
    SetFontSize(24, 16);
    SetFontColor(0x000000FF, 0x00000000);
    SetFontAlign(2);
    DrawString(700, 37, (char*)VERSION);
    SetFontAlign(0);
    
    //------------- About Menu Contents
    SetFontSize(25, 25);
    SetFontColor(0x000000FF, 0x00000000);
    SetFontAlign(1);
    DrawString(848/2, 70, "Thank you for using Artemis PS3");
    SetFontSize(20, 20);
    DrawString(848/2, 95, "A Playstation 3 Hacking System");
    
    for (cnt = 0; menu_about_strings[cnt] != NULL; cnt += 2)
    {
        SetFontSize(25, 25);
        SetFontColor(0x000000FF, 0x00000000);
        SetFontAlign(0);
        DrawString(MENU_ICON_OFF, 140 + (cnt * 0x20), (char *)menu_about_strings[cnt]);
        
        SetFontSize(20, 20);
        SetFontColor(0x000000FF, 0x00000000);
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 140 + (cnt * 0x20) + 25, (char *)menu_about_strings[cnt+1]);
    }
    
    
}