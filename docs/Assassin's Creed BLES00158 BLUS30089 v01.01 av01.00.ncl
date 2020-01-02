Invincibility + Enemies Can Not Lock You Into Combat
0
bungholio
0 01133A6C 809D0000
0 01133A70 80840004
0 01133A74 80840004
0 01133A78 48000020
0 01133A98 3C006000
0 01133A9C 7F840000
0 01133AA0 419C002C
0 01133AA4 48000020
0 01133AC4 80840004
0 01133AC8 7F840000
0 01133ACC 419C0050
0 01133AD0 48000020
0 01133AF0 80840970
0 01133AF4 3C001000
0 01133AF8 7F840000
0 01133AFC 48000020
0 01133B1C 419C005C
0 01133B20 80840014
0 01133B24 80840000
0 01133B28 48000020
0 01133B48 3C000008
0 01133B4C 60004070
0 01133B50 7F840040
0 01133B54 48000020
0 01133B74 419E000C
0 01133B78 817D0000
0 01133B7C 4899207E
0 01133B80 489920B6
0 00992078 49133A6E
/*
Better than the
synchronization bar code,
enemy attacks go through
you without affecting you
while you can still hit
them.

I forgot to test but with
the synchronization bar
code refilling your
health to full with from
taking damage, you still
went through the death
animation from falling
from a high place and
became stuck. This might
not have that issue.

Enemies also will not be
able to lock you into
combat with them.

You could always modify
this code to read the 2
bytes from address
0x011FF000 and activate
based on the buttons you
pressed too.
*/
#
Taking Any Damage Fully Refills Your Synchronization Bar
0
bungholio
0 0017EF90 931C0014
/*
It is your health.
*/
#
Throwing Knives Never Decrease
0
bungholio
0 000E8AEC 381D0000
0 000E8B24 381B0000
0 000E8B5C 381C0000
#
Button Enable Code
0
Medo + bungholio
0 00010064 01124400
0 0001006C 01124400
0 01133C60 3CA00120
0 01133C64 38000000
0 01133C68 2B840000
0 01133C6C 409E0008
0 01133C70 B005F000
0 01133C74 A005F000
0 01133C78 892B0008
0 01133C7C 7D292030
0 01133C80 7D200378
0 01133C84 B005F000
0 01133C88 892B0008
0 01133C8C 48CF4466
0 01133C90 3D200120
0 01133C94 A129F000
0 01133C98 71294000
0 01133C9C 2B894000
0 01133CA0 409E0010
0 01133CA4 A003015C
0 01133CA8 7000FFF7
0 01133CAC B003015C
0 01133CB0 38030158
0 01133CB4 481FE0D6
0 00CF4460 49133C62
/*
Required to make enemies
ignore you by pressing L3.
Turn on 1st or the game
will crash.

Buttons
0001 = X
0002 = []
0004 = Triangle
0008 = O
0010 = \/
0020 = <
0040 = ^
0080 = >
0100 = Select
0200 = Start
0400 = L2
0800 = L1
1000 = R2
2000 = R1
4000 = L3
8000 = R3
*/
#
Press L3 To Stop Pursuit
0
bungholio
0 001FE0D0 49133C92
/*
Requires the Button Enable
Code to be activated once
before this or the game
will instantly freeze.
*/
#
AoB Invincibility + Enemies Can Not Lock You Into Combat
0
bungholio
B 00010000 04000000
B 
B 00010000 04000000
B 
/*
Better than the
synchronization bar code,
enemy attacks go through
you without affecting you
while you can still hit
them.

I forgot to test but with
the synchronization bar
code refilling your
health to full with from
taking damage, you still
went through the death
animation from falling
from a high place and
became stuck. This might
not have that issue.

Enemies also will not be
able to lock you into
combat with them.

You could always modify
this code to read the 2
bytes from address
0x011FF000 and activate
based on the buttons you
pressed too.
*/
#
AoB Taking Any Damage Fully Refills Your Synchronization Bar
0
bungholio
B 00010000 04000000
B 600000002F9DFFFF419C01F47F98E800409D00CC2F9D000093BC0014 600000002F9DFFFF419C01F47F98E800409D00CC2F9D0000931C0014
/*
It is your health.
*/
#
AoB Throwing Knives Never Decrease
0
bungholio
B 00010000 04000000
B 381DFFFF7F43D378901F0274 381D00007F43D378901F0274
B 00010000 04000000
B 381BFFFF7F43D378901F0278 381B00007F43D378901F0278
B 00010000 04000000
B 381CFFFF7F43D378901F027C 381C00007F43D378901F027C
#
AoB Dump Buttons To 011FF000
0
Medo + bungholio
B 00010000 04000000
B 01123C580000000001123C58 011244000000000001124400
B 00010000 04000000
B 
B 00010000 04000000
B 892B0008380400102F8900007C0007B4392000017C630214409E001039200000 49133C62380400102F8900007C0007B4392000017C630214409E001039200000
/*
Required to make enemies
ignore you by pressing L3.
Turn on 1st or the game
will crash.

Buttons
0001 = X
0002 = []
0004 = Triangle
0008 = O
0010 = \/
0020 = <
0040 = ^
0080 = >
0100 = Select
0200 = Start
0400 = L2
0800 = L1
1000 = R2
2000 = R1
4000 = L3
8000 = R3
*/
#
AoB Press L3 To Stop Pursuit
0
bungholio
B 00010000 04000000
B FBE10088F80100A04182001C38030158 FBE10088F80100A04182001C49133C92
/*
Requires the Button Enable
Code to be activated once
before this or the game
will instantly freeze.
*/
#