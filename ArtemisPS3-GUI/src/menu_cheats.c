#include "menu_options.h"
#include "codes.h"

#include <stdio.h>
#include <string.h>

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

extern int idle_time;

/*
 * 0 - Main Menu
 * 1 - Code Menu (User List)
 * 2 - Code Menu (Online List)
 * 3 - About Menu
 * 4 - Options Menu
 * 5 - Code Menu (Select Cheats)
 * 6 - Code Menu (View Cheat)
 */
extern int menu_id;                             // Menu currently in
extern int menu_sel;                            // Index of selected item (use varies per menu)
extern int menu_old_sel[];                      // Previous menu_sel for each menu
extern int last_menu_id[];                      // Last menu id called (for returning)

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

extern void DrawTexture(png_texture tex, int x, int y, int z, int w, int h, u32 rgba);

void DrawScrollBar2(int selIndex, int max, int y_inc, int xOff, u8 alpha)
{
    int game_y = 120;
    int maxPerPage = (512 - (game_y * 2)) / y_inc;
    int yTotal = 512 - (game_y * 2);
    
    max -= maxPerPage;
    if (max <= 0)
        return;
    
    float pLoc = (float)selIndex / (float)max;
    
    if (idle_time > 80)
    {
        int dec = (idle_time - 80) * 4;
        if (dec > alpha)
            dec = alpha;
        alpha -= dec;
    }
    
    SetFontAlign(0);
    
    //Draw cursor
    SetFontSize(24, 24);
    SetFontColor(0x00000000 | alpha, 0x00000000);
    DrawString(xOff, (int)((float)yTotal * pLoc) + game_y, "|");
}

void DrawScrollBar(int selIndex, int max, int y_inc, int xOff, u8 alpha)
{
    int game_y = 120;
    int maxPerPage = (512 - (game_y * 2)) / y_inc;
    float pLoc = (float)selIndex / (float)max;
    int yTotal = 512 - (game_y * 2);
    
    if (max < maxPerPage)
        return;
    
    if (idle_time > 80)
    {
        int dec = (idle_time - 80) * 4;
        if (dec > alpha)
            dec = alpha;
        alpha -= dec;
    }
    
    SetFontAlign(0);
    
    //Draw box
    int yOff = 0, doFullBox = 0;
    if (doFullBox == 1)
    {
        SetFontSize(44, 24);
        SetFontColor(0x00000000 | alpha, 0x00000000);
        for (yOff = (game_y - 5); yOff < (yTotal + game_y); yOff += 18)
        {
            DrawString(xOff-1, yOff, "|");
        }
    }
    else if (doFullBox == 2)
    {
        SetFontSize(40, 28);
        SetFontColor(0x00000000 | alpha, 0x00000000);
        DrawString(xOff-1, (int)((float)yTotal * pLoc) + game_y - 2, "|");
    }
    
    //Draw cursor
    SetFontSize(24, 24);
    if (!doFullBox)
        SetFontColor(0x00000000 | alpha, 0x00000000);
    else
        SetFontColor(0xFFFFFF00 | alpha, 0x00000000);
    DrawString(xOff, (int)((float)yTotal * pLoc) + game_y, "|");
}

u8 CalculateAlphaList(int curIndex, int selIndex, int max)
{
    int mult = ((float)0xFF / (float)max * 7) / 4;
    int dif = (selIndex - curIndex);
    if (dif < 0)
        dif *= -1;
    int alpha = (0xFF - (dif * mult));
    return (u8)(alpha < 0 ? 0 : alpha);
}


/*
 * Cheats Code Options Menu
 */
void DrawOptions(struct option_entry option, u8 alpha, int y_inc, int selIndex)
{
    if (!option.name || !option.value)
        return;
    
    int c = 0, yOff = 80, cIndex = 0;
    
    int maxPerPage = (512 - (yOff * 2)) / y_inc;
    int startDrawX = selIndex - (maxPerPage / 2);
    int max = maxPerPage + startDrawX;
    
    SetFontSize(y_inc+2, y_inc-2);

    for (c = startDrawX; c < max; c++)
    {
        if (c >= 0 && c < option.size)
        {
            SetFontColor(0x00000000 | ((alpha * CalculateAlphaList(c, selIndex, maxPerPage)) / 0xFF), 0);
            
            if (option.name[c])
                DrawString(MENU_ICON_OFF, yOff, option.name[c]);
            
            //Selector
            if (c == selIndex)
            {
                int i = 0;
                for (i = 0; i < 848; i++)
                    DrawTexture(menu_cheats_textures[0], i, yOff, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFF00 | alpha);
            }
            
            cIndex++;
        }
        yOff += y_inc;
    }
}

void Draw_CheatsMenu_Options_Ani(void)
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
        
        //Cheats mini icon
        c = 4;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //Cheats string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
        
        //Cheat name string
        int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
        int fWidth = 24;
        SetFontSize(fWidth, 16);
        while (WidthFromStr((u8*)selected_centry.name) > width)
        {
            fWidth--;
            SetFontSize(fWidth, 16);
        }
        SetFontSize(fWidth, fWidth);
        SetFontAlign(2);
        DrawString(700, 35 + (18-fWidth), selected_centry.name);
        SetFontAlign(0);
        
        int _game_a = (int)(icon_a - (max / 2)) * 2;
        if (_game_a > 0xFF)
            _game_a = 0xFF;
        u8 game_a = (u8)(_game_a < 0 ? 0 : _game_a);
        
        DrawOptions(selected_centry.options[option_index], game_a, 18, menu_old_sel[7]);
        DrawScrollBar2(menu_old_sel[7], selected_centry.options[option_index].size, 18, 700, game_a);
        
        tiny3d_Flip();
        
        if (_game_a == 0xFF)
            return;
    }
}

void Draw_CheatsMenu_Options(void)
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
    
    //Cheats mini icon
    c = 4;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
        
    //Cheats string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);
        
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
    
    //Game name string
    int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
    int fWidth = 24;
    SetFontSize(fWidth, 16);
    while (WidthFromStr((u8*)selected_centry.name) > width)
    {
        fWidth--;
        SetFontSize(fWidth, 16);
    }
    SetFontSize(fWidth, fWidth);
    SetFontAlign(2);
    DrawString(700, 35 + (18-fWidth), selected_centry.name);
    SetFontAlign(0);
    
    DrawOptions(selected_centry.options[option_index], 0xFF, 18, menu_sel);
    DrawScrollBar(menu_sel, selected_centry.options[option_index].size, 18, 700, 0xFF);
}


/*
 * Cheats Codes View Menu
 */

//Removed for now
int GetLineDescriptor(char * buffer, char * line)
{
    return 0;
    
    if (!buffer || !line || !isCodeLineValid(line))
        return 0;
    
    char cmd = line[0];
    memset(buffer, 0, sizeof(buffer));
    
    int arg1Len = 0, arg2Len = 0;
    int spaceIndex = 0, wordIndex = 0, c = 1;
    char arg0[20], arg1[20];
    
    while (line[c])
    {
        if (line[c] == ' ')
        {
            if (spaceIndex == 0)
            {
                memcpy(arg0, &line[1], c - 1);
            }
            else if (spaceIndex == 1)
            {
                arg1Len = wordIndex;
                memcpy(arg1, &line[c-arg1Len], arg1Len);
            }
            else if (spaceIndex == 2)
            {
                arg2Len = wordIndex;
            }
            
            wordIndex = 0;
            spaceIndex++;
        }
        else
            wordIndex++;
        
        c++;
    }
    if (!arg2Len)
    {
        arg2Len = wordIndex;
    }
    
    //Parse command
    switch (cmd)
    {
        case '0':
            sprintf(buffer, "// Write the given %d bytes to 0x%s", arg2Len/2, arg1);
            return 1;
        case '1':
            sprintf(buffer, "// Write the given %d letters to 0x%s", arg2Len, arg1);
            return 1;
        case '2':
            sprintf(buffer, "// Write the given float to 0x%s", arg1);
            return 1;
        case '4':
            //sprintf(buffer, "// Write the given float to 0x%s", arg2Len, arg1);
            return 0;
        case '6':
            //sprintf(buffer, "// Reads the value at 0x%s and adds", arg1, arg2);
            return 0;
        case 'A':
            if (arg0[0] == '1') //copy
            {
                //sprintf(buffer, "// Copies %d bytes from 0x%s", arg2Val, arg1);
            }
            else if (arg0[0] == '2') //paste
            {
                //sprintf(buffer, "// Reads the value at 0x%s and adds", arg1, arg2);
            }
            
            return 0;
    }
    
    //unsupported command
    return 0;
}

int DrawCodes(struct code_entry code, u8 alpha, int y_inc, int selIndex)
{
    if (!code.name || !code.codes)
        return 0;
    
    int numOfLines = 0, c = 0, yOff = 80, cIndex = 0;
    
    int maxPerPage = (512 - (yOff * 2)) / y_inc;
    int startDrawX = selIndex - (maxPerPage / 2);
    int max = maxPerPage + startDrawX;
    
    if (code.codes)
    {
        int len = strlen(code.codes);
        if (len > 0)
        {
            for (c = 0; c < len; c++) { if (code.codes[c] == '\n') { numOfLines++; } }
            
            if (numOfLines > 0)
            {               
                //Splits the codes by line into an array
                char * splitCodes = (char *)malloc(len + 1);
                memcpy(splitCodes, code.codes, len);
                splitCodes[len] = 0;
                char * * lines = (char **)malloc(sizeof(char *) * numOfLines);
                memset(lines, 0, sizeof(char *) * numOfLines);
                lines[0] = (char*)(&splitCodes[0]);
                for (c = 1; c < numOfLines; c++)
                {
                    while (splitCodes[cIndex] != '\n' && cIndex < len)
                        cIndex++;
                    
                    if (cIndex >= len)
                        break;
                    
                    splitCodes[cIndex] = 0;
                    lines[c] = (char*)(&splitCodes[cIndex + 1]);
                }
                
                SetFontSize(y_inc+2, y_inc-2);
                SetCurrentFont(1);
                SetExtraSpace(0);
                for (c = startDrawX; c < max; c++)
                {
                    if (c >= 0 && c < numOfLines)
                    {
                        SetFontColor(0x00000000 | ((alpha * CalculateAlphaList(c, selIndex, maxPerPage)) / 0xFF), 0);
                        
                        //Draw line
                        float cX = DrawString(MENU_ICON_OFF, yOff, lines[c]);
                        
                        //Descriptor (removed)
                        char * desc = (char *)malloc(200);
                        if (GetLineDescriptor(desc, lines[c]))
                            DrawString(cX + 20, yOff, desc);
                        free (desc);
                        
                        //Selector
                        if (c == selIndex)
                        {
                            int i = 0;
                            for (i = 0; i < 848; i++)
                                DrawTexture(menu_cheats_textures[0], i, yOff, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFF00 | alpha);
                        }
                    }
                    yOff += y_inc;
                }
                
                free (lines);
                free (splitCodes);
            }
        }
    }
    
    SetMonoSpace(0);
    SetCurrentFont(0);
    SetExtraSpace(5);
    
    return numOfLines;
}

void Draw_CheatsMenu_View_Ani(void)
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
        
        //Cheats mini icon
        c = 4;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //Cheats string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
        
        //Game name string
        int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
        int fWidth = 24;
        SetFontSize(fWidth, 16);
        while (WidthFromStr((u8*)selected_centry.name) > width)
        {
            fWidth--;
            SetFontSize(fWidth, 16);
        }
        SetFontSize(fWidth, fWidth);
        SetFontAlign(2);
        DrawString(700, 35 + (18-fWidth), selected_centry.name);
        SetFontAlign(0);
        
        int _game_a = (int)(icon_a - (max / 2)) * 2;
        if (_game_a > 0xFF)
            _game_a = 0xFF;
        u8 game_a = (u8)(_game_a < 0 ? 0 : _game_a);
        
        int nlines = DrawCodes(selected_centry, game_a, 18, menu_old_sel[6]);
        DrawScrollBar2(menu_old_sel[6], nlines, 18, 700, game_a);
        
        tiny3d_Flip();
        
        if (_game_a == 0xFF)
            return;
    }
}

void Draw_CheatsMenu_View(void)
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
    
    //Cheats mini icon
    c = 4;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
        
    //Cheats string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);
        
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
    
    //Game name string
    int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
    int fWidth = 24;
    SetFontSize(fWidth, 16);
    while (WidthFromStr((u8*)selected_centry.name) > width)
    {
        fWidth--;
        SetFontSize(fWidth, 16);
    }
    SetFontSize(fWidth, fWidth);
    SetFontAlign(2);
    DrawString(700, 35 + (18-fWidth), selected_centry.name);
    SetFontAlign(0);
    SetFontAlign(0);
    
    int nlines = DrawCodes(selected_centry, 0xFF, 18, menu_sel);
    //DrawScrollBar2(menu_sel, nlines, 18, 700, 0xFF);
    DrawScrollBar(menu_sel, nlines, 18, 700, 0xFF);
}

/*
 * Cheats Codes Selection Menu
 */
void DrawGameList(int selIndex, struct game_entry * games, int glen, u8 alpha)
{
    SetFontSize(24, 16);
    
    int game_y = 80, y_inc = 22;
    int maxPerPage = (512 - (game_y * 2)) / y_inc;
    
    int x = selIndex - (maxPerPage / 2);
    int max = maxPerPage + selIndex;
    
    if (max > glen)
        max = glen;
    
    
    for (; x < max; x++)
    {
        int xo = 0; //(((selIndex - x) < 0) ? -(selIndex - x) : (selIndex - x));
        
        if (x >= 0)
        {
            u32 color = isGameActivated(games[x]) ? 0x3030F000 : 0x00000000;
            SetFontColor(color | ((alpha * CalculateAlphaList(x, selIndex, maxPerPage)) / 0xFF), 0x00000000);
            DrawString(MENU_ICON_OFF + (MENU_TITLE_OFF * 0) - xo, game_y, games[x].name);
        }
        
        if (x == selIndex)
        {
            int c = 0;
            for (c = 0; c < 848; c++)
                DrawTexture(menu_cheats_textures[0], c, game_y, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFF00 | alpha);
        }
        
        game_y += y_inc;
    }
    
    DrawScrollBar(selIndex, glen, y_inc, 700, alpha);
    
}

void DrawCheatsList(int selIndex, struct game_entry game, u8 alpha)
{
    SetFontSize(20, 16);
    
    int game_y = 80, y_inc = 18;
    int maxPerPage = (512 - (game_y * 2)) / y_inc;
    
    int x = selIndex - (maxPerPage / 2);
    int max = maxPerPage + selIndex;
    
    if (max > game.code_count)
        max = game.code_count;
    
    for (; x < max; x++)
    {
        int xo = 0; //(((selIndex - x) < 0) ? -(selIndex - x) : (selIndex - x));
        
        if (x >= 0 && game.codes[x].name)
        {
            u32 color = game.codes[x].activated ? 0x4040C000 : 0x00000000;
            SetFontColor(color | (u8)((alpha * CalculateAlphaList(x, selIndex, maxPerPage)) / 0xFF), 0x00000000);
            //printf ("Drawing code name %d\n", x);
            float dx = DrawString(MENU_ICON_OFF + (MENU_TITLE_OFF * 0) - xo, game_y, game.codes[x].name);
            //DrawString(MENU_ICON_OFF + (MENU_TITLE_OFF * 3), game_y, game.codes[x].name);
            
            if (game.codes[x].activated)
            {
                SetFontSize(16, 16);
                SetFontAlign(2);
                DrawString(MENU_ICON_OFF + ((MENU_TITLE_OFF * -1)/4), game_y, game.codes[x].cwrite ? "[CONSTANT]" : "[ONCE]");
                SetFontAlign(0);
                SetFontSize(20, 16);
                
                if (game.codes[x].options_count > 0 && game.codes[x].options)
                {
                    int od = 0;
                    for (od = 0; od < game.codes[x].options_count; od++)
                    {
                        if (game.codes[x].options[od].sel >= 0 && game.codes[x].options[od].name && game.codes[x].options[od].name[game.codes[x].options[od].sel])
                        {
                            
                            //Allocate option
                            char * option = malloc(strlen(game.codes[x].options[od].name[game.codes[x].options[od].sel]) + 4);
                            memset(option, 0, sizeof(option));
                            //If first print "(NAME", else add to list of names ", NAME"
                            sprintf(option, (od == 0) ? " (%s" : ", %s", game.codes[x].options[od].name[game.codes[x].options[od].sel]);
                            
                            //If it's the last one then end the list
                            if (od == (game.codes[x].options_count - 1))
                                option[strlen(option)] = ')';
                                
                            dx = DrawString(dx, game_y, option);
                            
                            free (option);
                        }
                    }
                }
                
            }
        }
        
        if (x == selIndex)
        {
            //Draw selection bar
            int c = 0;
            for (c = 0; c < 848; c++)
                DrawTexture(menu_cheats_textures[0], c, game_y, 0, menu_cheats_textures[0].texture.width, menu_cheats_textures[0].texture.height, 0xFFFFFF00 | alpha);
        }
        
        game_y += y_inc;
    }
    
    //DrawScrollBar(selIndex, game.code_count, y_inc, 700, alpha);
    
}

void Draw_CheatsMenu_Selection_Ani()
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
        
        //Cheats mini icon
        c = 4;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //Cheats string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
        
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
        
        //Game name string
        int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
        int fWidth = 24;
        SetFontSize(fWidth, 16);
        while (WidthFromStr((u8*)selected_entry.name) > width)
        {
            fWidth--;
            SetFontSize(fWidth, 16);
        }
        SetFontSize(fWidth, fWidth);
        SetFontAlign(2);
        DrawString(700, 35 + (18-fWidth), selected_entry.name);
        SetFontAlign(0);
        
        int _game_a = (int)(icon_a - (max / 2)) * 2;
        if (_game_a > 0xFF)
            _game_a = 0xFF;
        u8 game_a = (u8)(_game_a < 0 ? 0 : _game_a);
        DrawCheatsList(menu_old_sel[5], selected_entry, game_a);
        
        tiny3d_Flip();
        
        if (_game_a == 0xFF)
            return;
    }
}

void Draw_CheatsMenu_Selection()
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
    
    //Cheats mini icon
    c = 4;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
        
    //Cheats string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);
        
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
    

    //Game name string
    int width = 700 - (MENU_ICON_OFF + MENU_TITLE_OFF + WidthFromStr((u8*)"Cheats")) - 30;
    int fWidth = 24;
    SetFontSize(fWidth, 16);
    while (WidthFromStr((u8*)selected_entry.name) > width)
    {
        fWidth--;
        SetFontSize(fWidth, 16);
    }
    SetFontSize(fWidth, fWidth);
    SetFontAlign(2);
    DrawString(700, 35 + (18-fWidth), selected_entry.name);
    SetFontAlign(0);
    
    DrawCheatsList(menu_sel, selected_entry, 0xFF);
    
}


/*
 * User Cheats Game Selection Menu
 */
void Draw_UserCheatsMenu_Ani()
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
        
        //Cheats mini icon
        c = 4;
        w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
        DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffff00 | icon_a);
        
        //Cheats string
        SetFontSize(32, 24);
        SetFontColor(0x00000000 | icon_a, 0x00000000);
    
        DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
        
        //User List string
        SetFontSize(24, 16);
        SetFontAlign(2);
        DrawString(700, 35, "User List");
        SetFontAlign(0);
        
        //Cheats user list icon
        c = 2;
        w = menu_cheats_textures[c].texture.width; h = menu_cheats_textures[c].texture.height;
        DrawTexture(menu_cheats_textures[c], 710, 27, 0, 32, 32, 0xffffff00 | icon_a);
        highlight_alpha = icon_a;
        
        //Cheats online list icon
        c = 3;
        w = menu_cheats_textures[c].texture.width; h = menu_cheats_textures[c].texture.height;
        DrawTexture(menu_cheats_textures[c], 750, 27, 0, 32, 32, 0xffffff00 | icon_a);
        
        int _game_a = (int)(icon_a - (max / 2)) * 2;
        if (_game_a > 0xFF)
            _game_a = 0xFF;
        u8 game_a = (u8)(_game_a < 0 ? 0 : _game_a);
        DrawGameList(menu_old_sel[1], user_game_list, user_game_count, game_a);
        
        tiny3d_Flip();
        
        if (_game_a == 0xFF)
            return;
    }
}

void Draw_UserCheatsMenu()
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
    
    //Cheats mini icon
    c = 4;
    w = menu_main_textures[c].texture.width; h = menu_main_textures[c].texture.height;
    DrawTexture(menu_main_textures[c], MENU_ICON_OFF, 35, 0, 21, 21, 0xffffffff);
        
    //Cheats string
    SetFontSize(32, 24);
    SetFontColor(0x000000FF, 0x00000000);
        
    DrawString(MENU_ICON_OFF + MENU_TITLE_OFF, 27, "Cheats");
    
    //User List string
    SetFontSize(24, 16);
    SetFontColor(0x000000FF, 0x00000000);
    SetFontAlign(2);
    DrawString(700, 35, "User List");
    SetFontAlign(0);
    
    //Cheats user list icon
    c = 2;
    w = menu_cheats_textures[c].texture.width; h = menu_cheats_textures[c].texture.height;
    DrawTexture(menu_cheats_textures[c], 710, 27, 0, 32, 32, 0xffffff00 | highlight_alpha);
    
    //Cheats online list icon
    c = 3;
    w = menu_cheats_textures[c].texture.width; h = menu_cheats_textures[c].texture.height;
    DrawTexture(menu_cheats_textures[c], 750, 27, 0, 32, 32, 0xffffffff);
    
    DrawGameList(menu_sel, user_game_list, user_game_count, 0xFF);
    
}