Alternative Names
0
PARAM.SFO
/*
Big 3 Gun Shooting
*/
#
File Info
0
Eboot.Elf
/*
Decrypt this file instead.

\USRDIR\game1\razingstorm.elf
*/
#
Memory Infinite Ammo
0
jgduff1
0 30BEA6AC 0000003C /*Arcade Mode*/
0 31ACF2D4 0000003C /*Story Mode*/
#
ASM Infinite Ammo
0
jgduff1
0 0038DC80 60000000 /*Arcade Mode*/
0 004DE494 7C003850 /*Story Mode*/
#
Memory No Reload + Infinite Grenade
0
jgduff1
0 31ACF2D0 00000006
#
ASM No Reload + Infinite Grenade
0
jgduff1
0 004DE6F0 39290000
#
Memory Infinite Health
0
jgduff1
0 30BE9628 41100000 /*Arcade Mode*/
0 31AAA238 43480000 /*Story Mode*/
#
ASM Infinite Health
0
jgduff1
0 003E22C0 60000000 /*Arcade Mode*/
0 004C65E4 C3C307F8 /*Story Mode*/
/*
Big explosions can kill
you.
*/
#
Memory Max Score On 1 Kill
0
jgduff1
0 3005BEA4 05F5E0FF /*Checkpoint Scores*/
0 30BEB020 00000001
0 30BEB110 05F5E0FF
0 3005C180 05F5E0FF /*Stage Complete Scores*/
0 30BEB01C 05F5E0FF /*Stage Complete Scores*/
0 3234BE38 05F5E0FF /*Stage Complete Scores*/
#
ASM Max Score On 1 Kill
0
jgduff1
0 0038A540 913F0000 /*Checkpoint Scores*/
0 0038A564 913F0008
0 003C51A4 911B002C /*Stage Complete Scores*/
#