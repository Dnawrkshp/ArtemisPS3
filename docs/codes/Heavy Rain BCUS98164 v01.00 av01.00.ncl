Enable Debug Menu And Playable Demo Mode (L3)
0
bungholio
0 00547B6C 38600001
#
Enable Debug Menu (L3)
0
bungholio
0 000C7F98 38000001
0 000C7FA0 98090000
/*
QA Menu - Global
Font zoom factor = 3 choices of font size in all 4 menus.
Pause = Pauses screen without start menu and is in all menus.
Cheat Mode = Auto completes button sequences so you always do perfect.
Difficulty = Same thing you can change in the options menu.
Framelock 0 = Exactly the same as Pause, they work together.
The other framelocks slow the game speed down.

Free Camera = Control the game camera, go through characters and walls and is also in the Animations menu.
Various button controls:
L3 = Move camera forward, backward, strafe left and right.
R3 = Rotate camera up, down, left and right.
Up = Move camera upwards.
Down = Move camera downwards.
Left = Rotate camera counter-clockwise.
Right = Rotate camera clockwise.
Triangle = Change camera to face your character no matter where you are.
O = Reset camera settings to remove rotation and zoom and face forward at a perfectly level 180 degree angle.
X = Hold while doing anything else to increase speed of what you are doing. You can move and zoom and everything quicker.
Square = Unknown if it does anything, I did not notice if it affects anything while pressing or holding it in different situations.
L2 = Zoom camera out.
L1 = Zoom camera in.
R2 = Decrease speed of controls.
R1 = Increase speed of controls.

Take screenshot = Create a .tga file and place in /USRDIR/ of the game.



QA Menu - Dialogs
Change subtitle language = ENG, GER, ITA, SPA, HOL, POR, SWE, DAN, NOR, FIN, RUS, POL, JAP, KOR, CHI, FRA.
Change audio language = Same choices of ENG, GER, ITA, SPA, HOL, POR, SWE, DAN, NOR, FIN, RUS, POL, JAP, KOR, CHI, FRA.
Display dialogs IDs = All I see on screen are the current volumes with possibly a part going below the screen that I can not see.



QA Menu - Animations
Character = Game names of various characters and items that you can use left and right to go through, and if they are present it will show animation data.
Camera selection = Makes a green crosshair appear and if you aim at your character then Character will change to you character game name and show animation data, but I cannot get it to show me anything other than the character I control.
Was hoping for a character modifier or something to mess with animations.



QA Menu - Load Savegames
Delete Current slot saves = Deletes all of your saves, so all save choices will vanish if you use this.
Incremental Checkpoints Active = It is normally false so I thought it would prevent save points during levels, but it did not. I never tested if true does, I assumed it was maybe to disable auto-save.
AutoNext = Every 15 seconds it will skip to the next level and the timer can not be stopped. You can easy unlock all levels with this, and every level unlocked appears below this option so you can go to them and press X to skip directly to certain parts of the game.

Save list if you skip through the game from start to finish and who you will start as:
0201PROLOGUEBIRTHDAY = Ethan
0301PROLOGUEMALLLOST = Ethan
0401AFTERACCIDENTSCHOOL = Ethan
0403AFTERACCIDENTHOME = Ethan
0502SLEEPLESSNIGHTWAKEUP = Ethan
0601SEARCHLAUREN = Scott
0602MEETLAUREN = Scott
0801JAYDENONTHECRIMESCENE = Norman
0901SCHRINK = Ethan
1001THEPARK = Ethan
1003WHEREAMI = Ethan
1004BACKTOPARK = Ethan
1005BACKHOMEPANIC = Ethan
1101POLICESTATION = Norman
1201HOLDUP = Scott
1301NIGHTMARE = Madison
1401LEAVINGHOME = Ethan
1501STATION = Ethan
1601ETHANMOTEL = Ethan
1701KICKOFF = Norman
1801SUICIDE = Scott
1901BEARTRIALGARAGE = Ethan
1901BEARTRIALVIDEO = Ethan
1903BEARTRIALHIGHWAY = Ethan
2001MEETMADATMOTEL = Madison
2101KORDACHASE = Norman
2201LAURENBACK = Scott
2301KRAMERPARTY = Scott
2401BUTTERFLYTRIAL = Ethan
2501THENURSE = Madison
2601POLICENEWS = Norman
2701DUPREINTERVIEW = Norman
2702FINDETHAN = Norman
2801MEETCHARLESKRAMER = Scott
2901LIZARDTRIALMUTILATION = Ethan
3001FUGITIVELIZARD = Norman
3002FUGITIVESUBWAY = Madison
3003FUGITIVEBACKMOTEL = Ethan
3101SLEEPLESSNIGHTPIANO = Norman
3102SLEEPLESSNIGHTROOM = Norman
3301MANFRED = Scott
3501CONFRONTATION = Scott
3601SHARKTRIALMURDER = Ethan
3702MEETTHEDOC = Madison
3801MADJACK = Norman
3901EUREKA = Scott
4001CEMETERY = Scott
4002FLASHBACK = Scott
4003BACKTOCEMETERY = Scott
4101MADATBLACKLAGOON = Madison
4201JAYDENATBLACKLAGOON = Norman
4301ESCAPEMOTEL = Ethan
4401TRAPPED = Scott
4402LAKE = Scott
4501FACETOFACE = Scott
4601HOSPITAL = Madison
4701RATTRIALPOISON = Ethan
5001SOLVINGHAGMAN = Ethan
4801SOLVINGPUZZLE = Norman
4901GOODBYELAUREN = Scott
4902FLASHBACKFINAL = Scott
4903BADSHELBY = Scott
CP-4903BADSHELBY-SAVE1 = Scott
5101KILLERSPLACE = Madison
5201HANGARFINAL
5301EPLTVNEWS
5802EPLSHAUNDEADETHANANDMAD
5805EPLSHAUNDEADJAYDENALONE
5702EPLSHELBYSHOT
*/
#
Disable AutoNext Auto-Continue
0
bungholio
0 002BDA60 EDAD6828
0 002BDA68 EC000028
0 002BDA80 D01F0074
/*
If you want to actually
control when to skip to
the next area, this will
change the behavior so it
only happens when you
press X and it does not
automatically restart at
15 seconds and keep
counting down.
*/
#
Events Are Repeatable But Not Completable
bungholio
0
0 002751F8 4E800020
/*
It is not useful, just
there to allow you to
repeat various events in
the game if you needed to
for some purpose.

The value to turn it off
when needed is F821FF31.
*/
#
AoB Enable Debug Menu And Playable Demo Mode (L3)
0
bungholio
B 00010000 04000000
B 6000000038000001EB21007898780000 3860000138000001EB21007898780000
#
AoB Enable Debug Menu (L3)
0
bungholio
B 00010000 04000000
B 812280E4FFE00890880900002F800000419E0258 812280E4FFE00890386000012F80000098780000
/*
QA Menu - Global
Font zoom factor = 3 choices of font size in all 4 menus.
Pause = Pauses screen without start menu and is in all menus.
Cheat Mode = Auto completes button sequences so you always do perfect.
Difficulty = Same thing you can change in the options menu.
Framelock 0 = Exactly the same as Pause, they work together.
The other framelocks slow the game speed down.

Free Camera = Control the game camera, go through characters and walls and is also in the Animations menu.
Various button controls:
L3 = Move camera forward, backward, strafe left and right.
R3 = Rotate camera up, down, left and right.
Up = Move camera upwards.
Down = Move camera downwards.
Left = Rotate camera counter-clockwise.
Right = Rotate camera clockwise.
Triangle = Change camera to face your character no matter where you are.
O = Reset camera settings to remove rotation and zoom and face forward at a perfectly level 180 degree angle.
X = Hold while doing anything else to increase speed of what you are doing. You can move and zoom and everything quicker.
Square = Unknown if it does anything, I did not notice if it affects anything while pressing or holding it in different situations.
L2 = Zoom camera out.
L1 = Zoom camera in.
R2 = Decrease speed of controls.
R1 = Increase speed of controls.

Take screenshot = Create a .tga file and place in /USRDIR/ of the game.



QA Menu - Dialogs
Change subtitle language = ENG, GER, ITA, SPA, HOL, POR, SWE, DAN, NOR, FIN, RUS, POL, JAP, KOR, CHI, FRA.
Change audio language = Same choices of ENG, GER, ITA, SPA, HOL, POR, SWE, DAN, NOR, FIN, RUS, POL, JAP, KOR, CHI, FRA.
Display dialogs IDs = All I see on screen are the current volumes with possibly a part going below the screen that I can not see.



QA Menu - Animations
Character = Game names of various characters and items that you can use left and right to go through, and if they are present it will show animation data.
Camera selection = Makes a green crosshair appear and if you aim at your character then Character will change to you character game name and show animation data, but I cannot get it to show me anything other than the character I control.
Was hoping for a character modifier or something to mess with animations.



QA Menu - Load Savegames
Delete Current slot saves = Deletes all of your saves, so all save choices will vanish if you use this.
Incremental Checkpoints Active = It is normally false so I thought it would prevent save points during levels, but it did not. I never tested if true does, I assumed it was maybe to disable auto-save.
AutoNext = Every 15 seconds it will skip to the next level and the timer can not be stopped. You can easy unlock all levels with this, and every level unlocked appears below this option so you can go to them and press X to skip directly to certain parts of the game.

Save list if you skip through the game from start to finish and who you will start as:
0201PROLOGUEBIRTHDAY = Ethan
0301PROLOGUEMALLLOST = Ethan
0401AFTERACCIDENTSCHOOL = Ethan
0403AFTERACCIDENTHOME = Ethan
0502SLEEPLESSNIGHTWAKEUP = Ethan
0601SEARCHLAUREN = Scott
0602MEETLAUREN = Scott
0801JAYDENONTHECRIMESCENE = Norman
0901SCHRINK = Ethan
1001THEPARK = Ethan
1003WHEREAMI = Ethan
1004BACKTOPARK = Ethan
1005BACKHOMEPANIC = Ethan
1101POLICESTATION = Norman
1201HOLDUP = Scott
1301NIGHTMARE = Madison
1401LEAVINGHOME = Ethan
1501STATION = Ethan
1601ETHANMOTEL = Ethan
1701KICKOFF = Norman
1801SUICIDE = Scott
1901BEARTRIALGARAGE = Ethan
1901BEARTRIALVIDEO = Ethan
1903BEARTRIALHIGHWAY = Ethan
2001MEETMADATMOTEL = Madison
2101KORDACHASE = Norman
2201LAURENBACK = Scott
2301KRAMERPARTY = Scott
2401BUTTERFLYTRIAL = Ethan
2501THENURSE = Madison
2601POLICENEWS = Norman
2701DUPREINTERVIEW = Norman
2702FINDETHAN = Norman
2801MEETCHARLESKRAMER = Scott
2901LIZARDTRIALMUTILATION = Ethan
3001FUGITIVELIZARD = Norman
3002FUGITIVESUBWAY = Madison
3003FUGITIVEBACKMOTEL = Ethan
3101SLEEPLESSNIGHTPIANO = Norman
3102SLEEPLESSNIGHTROOM = Norman
3301MANFRED = Scott
3501CONFRONTATION = Scott
3601SHARKTRIALMURDER = Ethan
3702MEETTHEDOC = Madison
3801MADJACK = Norman
3901EUREKA = Scott
4001CEMETERY = Scott
4002FLASHBACK = Scott
4003BACKTOCEMETERY = Scott
4101MADATBLACKLAGOON = Madison
4201JAYDENATBLACKLAGOON = Norman
4301ESCAPEMOTEL = Ethan
4401TRAPPED = Scott
4402LAKE = Scott
4501FACETOFACE = Scott
4601HOSPITAL = Madison
4701RATTRIALPOISON = Ethan
5001SOLVINGHAGMAN = Ethan
4801SOLVINGPUZZLE = Norman
4901GOODBYELAUREN = Scott
4902FLASHBACKFINAL = Scott
4903BADSHELBY = Scott
CP-4903BADSHELBY-SAVE1 = Scott
5101KILLERSPLACE = Madison
5201HANGARFINAL
5301EPLTVNEWS
5802EPLSHAUNDEADETHANANDMAD
5805EPLSHAUNDEADJAYDENALONE
5702EPLSHELBYSHOT
*/
#
AoB Disable AutoNext Auto-Continue
0
bungholio
B 00010000 04000000
B C1BF0078812B0000C0090020EDAD0028FF8DF800D1BF00784FDCF382409EFE3CC01F0074 EDAD6828812B0000EC000028EDAD0028FF8DF800D1BF00784FDCF382409EFE3CD01F0074
/*
If you want to actually
control when to skip to
the next area, this will
change the behavior so it
only happens when you
press X and it does not
automatically restart at
15 seconds and keep
counting down.
*/
#