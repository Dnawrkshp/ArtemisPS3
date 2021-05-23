Infinite Health For Whole Team v1
0
bungholio
0 01132350 899F04DD
0 01132354 2B8C0080
0 01132358 409E001C
0 0113235C 899F04E1
0 01132360 2B8C0080
0 01132364 409E0010
0 01132368 899F0531
0 0113236C 2B8C0080
0 01132370 419E0008
0 01132374 D3FF0498
0 01132378 48785092
0 0077508C 49142352
/*
The enforcer's instant
death attack by tying you
up and shooting you can
not kill you even though
you will become invisible.
If you are knocked down
into a bleedout state you
will instantly get back up
with full health.
Enemies that grab you and
kill you if you do not
struggle can not kill you
either. You can not die.
*/
#
Infinite Health v2
0
bungholio
0 01131ED8 807F0490
0 01131EDC 907F0498
0 01131EE0 C05F0498
0 01131EE4 48787AB2
0 00777AAC 49141EDA
/*
It does not work if you
get close to Isabelle's
Med Beacon, and I added a
code to instantly deplete
her beacon timer just for
that.
It does not affect you
while you are bleeding out
or while an enemy is
holding you.
The enforcer can still
kill you if it ties you up
and shoots you, and
bleeding out or not
struggling against an
enemy holding you will
still kill you.
*/
#
Ammo And Grenades Never Decrease
0
bungholio
0 004838B4 60000000
#
Reserve Ammo Never Decreases
0
bungholio
0 00483C90 60000000
#
Max Fuse Credits Upon Gain
0
bungholio
0 00EC32DC 3FBD7FFF
#
Max XP Upon Gain
0
bungholio
0 01131F04 1E730080
0 01131F08 7FDE9814
0 01131F0C 48ED1F6E
0 00EC1F68 49141F06
#
Naya's Warp Rifle Never Overheats But Has Max Fire Rate
0
bungholio
0 004A1D68 3C003F7F
0 004A1D70 6000FFFF
0 004A1DA4 901F0268
#
Naya's Cloak Lasts Forever
0
bungholio
0 00227434 60000000
#
Crystallized Or Stunned Enemies Remain Crystallized Or Stunned Forever
0
bungholio
0 007730B8 60000000
#
Isabelle's Med Beacon Stays Active Forever
0
bungholio
0 0045B320 60000000
#
Isabelle's Med Beacon Disappears Instantly
0
bungholio
0 0045B320 D3DF0090
#
Dalton's Magshield Instantly Recharges
0
bungholio
0 0045FAF0 60000000
#
Deployed Shields Last Forever
0
bungholio
0 0045828C 60000000
0 00458380 60000000
#
Fuse Lasts Forever
0
bungholio
0 0035A3CC 60000000
/*
Fuse gives you
invincibility which is
better than either
infinite health code,
along with unlimited ammo
and super powered shots
and gives your teammates
unlimited ammo too.
*/
#
Can Always Activate Fuse
0
bungholio
0 00359ED0 60000000
#
Any XP Fully Fills The Fuse Meter
0
bungholio
0 0035AB58 3C604640
0 0035AB5C 907F0030
#
Turrets Never Overheat
0
bungholio
0 004A0B24 60000000
#
Always Have 1 Turret Missile
0
bungholio
0 004A0B60 60000000
#
Rapid Fire
0
bungholio
0 0048AF68 60000000
#
Fuse Cell Stability Never Decreases
0
bungholio
0 01131F30 807F0490
0 01131F34 907F0498
0 01131F38 C03F0498
0 01131F3C 48244326
0 00234320 49141F32
#
Echelon Mode Fuse Cell Stabilities And Weapon Cache Healths Never Decrease
0
bungholio
0 01131F5C 80830490
0 01131F60 90830498
0 01131F64 C0430498
0 01131F68 4873BBB6
0 0072BBB0 49141F5E
/*
Only use this in
Echelon mode, it gives
infinite health to various
things in campaign mode,
like in the very beginning
when you deactivate the
magshield, you will need
to turn this code off or
the wall will not explode.
*/
#
Timers Never End
0
bungholio
0 0025AD68 60000000
0 00EC292C 4800003C
0 00F173A0 48000024
/*
DO NOT USE THIS FOR
ECHELON MODE!!
The 1st line is worthless
and only affects the
displayed timer which is
separate from the "actual"
timer. You do not need it.
The 2nd line prevents
things from ending when
the timer reaches 0, like
the level 2 blowing up at
the end or the echelon
mode bonus timers. It also
randomly seems to ruin
Echelon mode by giving you
endless enemies.
The 3rd line is for the
3rd level at the end of
the level when you are
preventing the rocket
from leaving the island.
Without this line, you
will freeze in place when
the timer reaches 0. This
line also breaks the game
because many random events
in the game use this
timer, like you starting
the game and wondering why
the Raven force is not
bursting through the door
and the game going nowhere.
*/
#
Dropped Items Never Disappear
0
bungholio
0 007B99C0 60000000
/*
This can be handy for
Echelon mode when you run
around to collect XP and
credits.
*/
#
Difficulty Modifier
0
bungholio
0 003FDBAC 386000Z
[Z]00=Easy;01=Normal;02=Hard;03=Lethal[/Z]
#
Movement Speed Modifier
0
bungholio
0 0034A27C
[Z]3F800000=Normal;40000000=2x;40400000=3x;40800000=4x;40A00000=5x;40C00000=6x;40E00000=7x;41000000=8x;41100000=9x;41200000=10x[/Z]
#
Enemies Can Not See You
0
bungholio
0 00228634 38600002
/*
This uses the
invisibility of Naya's
weapon and applies it to
all 4 of you without the
visual effect.
*/
#
Fuse Is Currently Active
0
bungholio
0 0035AF38 38600001
#
Can Use Skins In Campaign
0
bungholio
0 004308DC 38800001
#
AoB Infinite Health For Whole Team v1
0
bungholio
B 00010000 04000000
B 014D32BC0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 014D32BC899F04DD2B8C0080409E001C899F04E12B8C0080409E0010899F05312B8C0080419E0008D3FF049848785092
B 00010000 04000000
B 807F04B8D3FF0498 807F04B849142352
/*
The enforcer's instant
death attack by tying you
up and shooting you can
not kill you even though
you will become invisible.
If you are knocked down
into a bleedout state you
will instantly get back up
with full health.
Enemies that grab you and
kill you if you do not
struggle can not kill you
either. You can not die.
*/
#
AoB Infinite Health v2
0
bungholio
B 00010000 04000000
B 014D36C400000000000000000000000000000000 014D36C4807F0490907F0498C05F049848787AB2
B 00010000 04000000
B EC6418BAC05F0498 EC6418BA49141EDA
/*
It does not work if you
get close to Isabelle's
Med Beacon, and I added a
code to instantly deplete
her beacon timer just for
that.
It does not affect you
while you are bleeding out
or while an enemy is
holding you.
The enforcer can still
kill you if it ties you up
and shoots you, and
bleeding out or not
struggling against an
enemy holding you will
still kill you.
*/
#
AoB Ammo And Grenades Never Decrease
0
bungholio
B 00010000 04000000
B EC212028D063000C EC21202860000000
#
AoB Reserve Ammo Never Decreases
0
bungholio
B 00010000 04000000
B EC431028D03F000CD05F0010 EC431028D03F000C60000000
#
AoB Max Fuse Credits Upon Gain
0
bungholio
B 00010000 04000000
B EBBC00007FBDB814 EBBC00003FBD7FFF
#
AoB Max XP Upon Gain
0
bungholio
B 00010000 04000000
B 014D37B8000000000000000000000000 014D37B81E7300807FDE981448ED1F6E
B 00010000 04000000
B EBDD00007FDE9814 EBDD000049141F06
#
AoB Naya's Warp Rifle Never Overheats But Has Max Fire Rate
0
bungholio
B 00010000 04000000
B FC2008182C040000FC800890 3C003F7F2C0400006000FFFF
B 00010000 04000000
B 63E30000D09F0268 63E30000901F0268
#
AoB Naya's Cloak Lasts Forever
0
bungholio
B 00010000 04000000
B 2C050000D03F005C 2C05000060000000
#
AoB Crystallized Or Stunned Enemies Remain Crystallized Or Stunned Forever
0
bungholio
B 00010000 04000000
B 2C040000D05C009C 2C04000060000000
#
AoB Isabelle's Med Beacon Stays Active Forever
0
bungholio
B 00010000 04000000
B 2C1E0000D05F0090 2C1E000060000000
#
AoB Isabelle's Med Beacon Disappears Instantly
0
bungholio
B 00010000 04000000
B 2C1E0000D05F0090 2C1E0000D3DF0090
#
AoB Dalton's Magshield Instantly Recharges
0
bungholio
B 00010000 04000000
B 63C30000909F00EC 63C3000060000000
#
AoB Deployed Shields Last Forever
0
bungholio
B 00010000 04000000
B FC21F0AED03F0034 FC21F0AE60000000
B 00010000 04000000
B 38638190C04300002C040000D05F0034 38638190C04300002C04000060000000
#
AoB Fuse Lasts Forever
0
bungholio
B 00010000 04000000
B 2C040000D3FD004C 2C04000060000000
/*
Fuse gives you
invincibility which is
better than either
infinite health code,
along with unlimited ammo
and super powered shots
and gives your teammates
unlimited ammo too.
*/
#
AoB Can Always Activate Fuse
0
bungholio
B 00010000 04000000
B FC200818FC01180041800008 FC200818FC01180060000000
#
AoB Any XP Fully Fills The Fuse Meter
0
bungholio
B 00010000 04000000
B EC23107AD03F0030A07D0034 3C604640907F0030A07D0034
#
AoB Turrets Never Overheat
0
bungholio
B 00010000 04000000
B FC200818D03E0270 FC20081860000000
#
AoB Always Have 1 Turret Missile
0
bungholio
B 00010000 04000000
B D03E028063C30000 6000000063C30000
#
AoB Rapid Fire
0
bungholio
B 00010000 04000000
B 4834A3313C80000080A3000060848000D3E3002C 4834A3313C80000080A300006084800060000000
#
AoB Fuse Cell Stability Never Decreases
0
bungholio
B 00010000 04000000
B 014D373400000000000000000000000000000000 014D3734807F0490907F0498C03F049848244326
B 00010000 04000000
B 41820094C03F0498 4182009449141F32
#
AoB Echelon Mode Fuse Cell Stabilities And Weapon Cache Healths Never Decrease
0
bungholio
B 00010000 04000000
B 014D376C00000000000000000000000000000000 014D376C8083049090830498C04304984873BBB6
B 00010000 04000000
B 90BE0098C0430498 90BE009849141F5E
/*
Only use this in
Echelon mode, it gives
infinite health to various
things in campaign mode,
like in the very beginning
when you deactivate the
magshield, you will need
to turn this code off or
the wall will not explode.
*/
#
AoB Timers Never End
0
bungholio
B 00010000 04000000
B FC21192ED03C0008 FC21192E60000000
B 00010000 04000000
B D02101804181003C D02101804800003C
B 00010000 04000000
B D021007041810024 D021007048000024
/*
DO NOT USE THIS FOR
ECHELON MODE!!
The 1st line is worthless
and only affects the
displayed timer which is
separate from the "actual"
timer. You do not need it.
The 2nd line prevents
things from ending when
the timer reaches 0, like
the level 2 blowing up at
the end or the echelon
mode bonus timers. It also
randomly seems to ruin
Echelon mode by giving you
endless enemies.
The 3rd line is for the
3rd level at the end of
the level when you are
preventing the rocket
from leaving the island.
Without this line, you
will freeze in place when
the timer reaches 0. This
line also breaks the game
because many random events
in the game use this
timer, like you starting
the game and wondering why
the Raven force is not
bursting through the door
and the game going nowhere.
*/
#
AoB Dropped Items Never Disappear
0
bungholio
B 00010000 04000000
B 2C040000D03E0078 2C04000060000000
/*
This can be handy for
Echelon mode when you run
around to collect XP and
credits.
*/
#
AoB Lethal Difficulty
0
bungholio
B 00010000 04000000
B F801009080630014 F8010090386000Z
[Z]00=Easy;01=Normal;02=Hard;03=Lethal[/Z]
#
AoB Movement Speed Modifier
0
bungholio
B 00010000 04000000
B 4BFFFD75E80100807C0803A6382100704E8000203F800000 4BFFFD75E80100807C0803A6382100704E800020Z
[Z]3F800000=Normal;40000000=2x;40400000=3x;40800000=4x;40A00000=5x;40C00000=6x;40E00000=7x;41000000=8x;41100000=9x;41200000=10x[/Z]
#
AoB Enemies Can Not See You
0
bungholio
B 00010000 04000000
B 4800001888630030 4800001838600002
/*
This uses the
invisibility of Naya's
weapon and applies it to
all 4 of you without the
visual effect.
*/
#
AoB Fuse Is Currently Active
0
bungholio
B 00010000 04000000
B 41820014887E0054 4182001438600001
#
AoB Can Use Skins In Campaign
0
bungholio
B 00010000 04000000
B 38600001809F009C 3860000138800001
#