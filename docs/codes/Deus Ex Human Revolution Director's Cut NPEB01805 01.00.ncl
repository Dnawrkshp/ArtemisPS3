Health Never Decreases
0
bungholio
0 00E09238 3C600100
0 00E0923C 80633C74
0 00E09240 806380C0
0 00E09244 48000020
0 00E09264 80630000
0 00E09268 80630000
0 00E0926C 80630004
0 00E09270 48000020
0 00E09290 80630058
0 00E09294 80630014
0 00E09298 80630064
0 00E0929C 48000020
0 00E092BC 7F9F1840
0 00E092C0 419E0008
0 00E092C4 D03F005C
0 00E092C8 4849FE56
0 0049FE50 48E0923A
/*
Never use Health Never
Decreases and
Invincibility at the
same time, they use
the same addresses and
risk crashing.
*/
#
Invincibility
0
bungholio
0 00E09238 3D200100
0 00E0923C 81293C74
0 00E09240 812980C0
0 00E09244 48000020
0 00E09264 81290000
0 00E09268 81290000
0 00E0926C 81290004
0 00E09270 48000020
0 00E09290 81290058
0 00E09294 81290014
0 00E09298 81290064
0 00E0929C 48000020
0 00E092BC 7F891840
0 00E092C0 4D9E0020
0 00E092C4 7D800026
0 00E092C8 484A05AA
0 004A05A4 48E0923A
/*
Never use Health Never
Decreases and
Invincibility at the
same time, they use
the same addresses and
risk crashing.
*/
#
Battery Never Decreases
0
bungholio
0 004909D8 4800000C
0 00490680 4800000C
#
Ammo In Clip Never Decreases
0
bungholio
0 00645654 39290000
#
Inventory Items + Total Ammo + Hacking Tools Never Decrease
0
bungholio
0 00686A78 60000000
#
Dropped Inventory Items Are Not Removed From Inventory
0
bungholio
0 00686A70 60000000
/*
Very specifically, when
you reduce items by using
or dropping them, if the
item count is 1 and then
decreases this line runs
to completely remove it
from your inventory. This
prevents the complete
removal but does not
prevent it from decreasing
to 0 so use Inventory
Items + Total Ammo +
Hacking Tools Never
Decrease to fix that.

This can be used to
duplicate items, once you
drop an item and then
re-enter inventory the
item will be back in your
inventory and on the
ground at the same time.
*/
#
Unlimited Sprint
0
bungholio
0 00500ECC 60000000
#
Credits Gained Multiplier
0
bungholio
0 004A7610 1F96Z
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
Credits Never Decrease From Buying
0
bungholio
0 004A4710 60000000
#
Experience Gained Multiplier
0
bungholio
0 0047C3C4 1D29Z
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
/*
If you set to 2710, you
will get more Praxis
points than needed to
purchase every upgrade
from doing anything.
*/
#
Hacking Attempts Never Decrease
0
bungholio
0 00546F20 39200000
#
Button Enable Code
0
bungholio
0 00E09448 3D4001EF
0 00E0944C 893C0215
0 00E09450 992AF004
0 00E09454 48000020
0 00E09474 893C0217
0 00E09478 992AF005
0 00E0947C A12AF004
0 00E09480 48000020
0 00E094A0 71290401
0 00E094A4 A10AF00C
0 00E094A8 7F894040
0 00E094AC 48000020
0 00E094CC 419E005C
0 00E094D0 B12AF00C
0 00E094D4 2B890401
0 00E094D8 48000020
0 00E094F8 409E0030
0 00E094FC 892AF006
0 00E09500 69290001
0 00E09504 48000020
0 00E09524 992AF006
0 00E09528 A01C0214
0 00E0952C 481AA0AE
0 001AA0A8 48E0944A
/*
Needs to be turned on for
freezing enemies and
flying by jumping to work.
/*
#
Hold X To Fly
0
bungholio
0 00E092E8 3D2001EF
0 00E092EC A009F004
0 00E092F0 70000040
0 00E092F4 48000020
0 00E09314 2B800040
0 00E09318 409E0030
0 00E0931C 3C003F80
0 00E09320 48000020
0 00E09340 9009F008
0 00E09344 C1A9F008
0 00E09348 D1AB0000
0 00E0934C 4868E152
0 0068E14C 48E092EA
#
Freeze Enemies
0
bungholio
0 00E0936C 3D2001EF
0 00E09370 8809F006
0 00E09374 2B800000
0 00E09378 48000020
0 00E09398 419E008C
0 00E0939C 3D200100
0 00E093A0 81293C74
0 00E093A4 48000020
0 00E093C4 812980C0
0 00E093C8 81290000
0 00E093CC 81290000
0 00E093D0 48000020
0 00E093F0 81290004
0 00E093F4 81290058
0 00E093F8 81290014
0 00E093FC 48000020
0 00E0941C 7F9F4840
0 00E09420 4C9E0020
0 00E09424 F821FEE1
0 00E09428 4869BF52
0 0069BF4C 48E0936E
/*
L2 + R3 = Toggle Enemies Freeze

Enemies never see you but
they will investigate
sounds you make after
you return them to normal.

If you touch them they
will be alert the instant
you unfreeze them
*/
#