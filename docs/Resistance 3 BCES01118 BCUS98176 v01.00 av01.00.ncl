Primary Ammo Never Decreases
0
bungholio
0 00570B6C 60000000
#
Secondary Ammo Never Decreases
0
bungholio
0 00571770 60000000
#
Grenades Never Decrease
0
bungholio
0 00158268 38600005
#
Can Not Die
0
bungholio
0 0017761C 3C607F80
0 00177620 907F00F8
0 00177624 3BC00000
0 00183D70 3C607F80
0 00183D74 907D00F8
0 00183D78 38600000
0 00183D7C 4BFFFF6C
#
Have All Weapons
0
bungholio
0 001BE7F0 3CA07FFF
0 001BE7F4 60A5FFFF
#
Invincibility
0
bungholio
0 00181BA0 4E800020
/*
It's better than the
health code because now
you no longer get blood on
the screen nor do enemy
attacks cause you to
flinch so it's easier for
you to shoot and see.

If anybody needs it I
found a static path to
player health that is
this:
F8(0(208(0101DCD8)))

At 00F0 and 00F4 there is
also 42C80000 which is the
float for 100.000 so one
of them is likely max
health.
*/
#
Hold X To Fly
0
bungholio
0 00C9E840 3D000199
0 00C9E844 893C0351
0 00C9E848 9928F000
0 00C9E84C 893C0353
0 00C9E850 9928F001
0 00C9E854 A128F000
0 00C9E858 712A0040
0 00C9E85C B148F002
0 00C9E860 78A80020
0 00C9E864 487E040E
0 00C9E868 3C600199
0 00C9E86C 93E3F004
0 00C9E870 C3DF00F4
0 00C9E874 48162102
0 00C9E878 D0830004
0 00C9E87C 3C800199
0 00C9E880 A0C4F002
0 00C9E884 2B860040
0 00C9E888 409E0010
0 00C9E88C 80C4F004
0 00C9E890 38C600F0
0 00C9E894 7F833040
0 00C9E898 409E000C
0 00C9E89C 3CC04080
0 00C9E8A0 90C30004
0 00C9E8A4 487C4F5E
0 007E0408 48C9E842
0 001620FC 48C9E86A
0 007C4F58 48C9E87A
#
Rapid Fire Primary
0
bungholio
0 0056B3B0 60000000
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.
*/
#
Rapid Fire Secondary v1
0
bungholio
0 007EEDE0 EC210828
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.
*/
#
Rapid Fire Secondary v2
0
bungholio
0 00C9E8BC EC211028
0 00C9E8C0 3C603000
0 00C9E8C4 7F9F1840
0 00C9E8C8 419C0024
0 00C9E8CC 807F0004
0 00C9E8D0 2B830A19
0 00C9E8D4 419E0008
0 00C9E8D8 2B830A1B
0 00C9E8DC 419E000C
0 00C9E8E0 2B830A1D
0 00C9E8E4 409E0008
0 00C9E8E8 EC210828
0 00C9E8EC 487EEDE6
0 007EEDE0 48C9E8BE
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.

It has a lazy check for
the Atomizer, Auger, and
Deadeye but it does not
work too well.
*/
#
Weapon Address Table Dumper
0
bungholio
0 00C9E950 3F600198
0 00C9E954 637BF010
0 00C9E958 1C7E0004
0 00C9E95C 7FBB192E
0 00C9E960 A09D01B8
0 00C9E964 4816135E
0 00161358 48C9E952
/*
This needs to be on 1st
before the 2 codes for
rapid fire otherwise you
will crash your game with
secondary fire and primary
fire just will not work.

This dumps their addresses
at 0198F010 to 0198F040.
*/
#
Rapid Fire Primary With Weapon Table
0
bungholio
0 00C9E8A8 3B40000C
0 00C9E8AC 7F4903A6
0 00C9E8B0 3F400198
0 00C9E8B4 635AF010
0 00C9E8B8 80BA0000
0 00C9E8BC 7F9F2840
0 00C9E8C0 419E0010
0 00C9E8C4 3B5A0004
0 00C9E8C8 4200FFF0
0 00C9E8CC FC22186E
0 00C9E8D0 4856B3B6
0 0056B3B0 48C9E8AA
/*
Requires the code that
dumps the weapon addresses
to be turned on 1st, or
else this will not work
but it will not crash your
game or anything.

This is specifically
useful if you want rapid
fire to only work for your
weapons and not for
enemies or turrets or
other things like that.
/*
#
Rapid Fire Secondary With Weapon Table
0
bungholio
0 00C9E8D4 EC211028
0 00C9E8D8 3860000C
0 00C9E8DC 7C6903A6
0 00C9E8E0 3C600198
0 00C9E8E4 6063F010
0 00C9E8E8 80A30000
0 00C9E8EC 7F9F2840
0 00C9E8F0 419E0010
0 00C9E8F4 38630004
0 00C9E8F8 4200FFF0
0 00C9E8FC 4800002C
0 00C9E900 80A50004
0 00C9E904 2B850A19
0 00C9E908 419E0008
0 00C9E90C 2B850A1A
0 00C9E910 419E0008
0 00C9E914 2B850A1B
0 00C9E918 419E0008
0 00C9E91C 2B850A1D
0 00C9E920 419E0008
0 00C9E924 EC210828
0 00C9E928 487EEDE6
0 007EEDE0 48C9E8D6
/*
Requires the code that
dumps the weapon addresses
to be turned on 1st, or
else this will crash your
game unlike the code for
primary fire.

This excludes the Atomizer,
Auger, Deadeye, and
Marksman so they will
function correctly.

It only works for your
weapons and not for enemies
or other things.
*/
#
Can Use All Grenade Types
0
bungholio
0 0015E06C 38E00005
0 0015E070 7CE9E9AE
0 0015E074 480000C8
/*
This completes the
collection now since
before I could only find
the weapons and not the
grenades.

Turn this on with the code
for grenades to never
decrease and you will have
unlimited of all 5 at the
start of the game.

There also seems to be a
5th grenade type but it
never displays an icon.
It is on the far left and
when you throw the grenade
it has multiple grenade
effects or whatever.
I did not use grenades
much.
*/
#
Weapon Experience Gained Multiplier
0
bungholio
0 00C9E968 80610204
0 00C9E96C 3CE00042
0 00C9E970 60E781A0
0 00C9E974 7F871840
0 00C9E978 409E0008
0 00C9E97C 1CC6Z
0 00C9E980 7C662814
0 00C9E984 48424C1E
0 00424C18 48C9E96A
[Z]10x=000A;100x;0064;1,000x=03E8;10,000x=2710[/Z]
/*
A value like 03E8 will
allow you to fully upgrade
a weapon from killing 1
enemy.
*/
#
Ally Health Never Decreases
0
bungholio
0 00C9E988 3F800199
0 00C9E98C 907CF008
0 00C9E990 FFE00890
0 00C9E994 4867F506
0 00C9E998 3C800199
0 00C9E99C 8084F008
0 00C9E9A0 7F841840
0 00C9E9A4 409E0008
0 00C9E9A8 C02300F4
0 00C9E9AC D02300F8
0 00C9E9B0 48641B16
0 0067F500 48C9E98A
0 00641B10 48C9E99A
/*
I have only tested this on
Charlie Rose or whoever
the guy is that is in that
barn looking building with
an elevator and a bunch of
feral grays, I have not
tried it on other allies
and it does not seem to
affect enemies yet either
so it should hopefully have
no issues with it.
*/
#
Have Game Beaten
0 001BBD78 38600001
0 0036A6AC 38600001
/*
This is needed to purchase
items in the Shop or
activate cheats while
playing, otherwise the
game will tell you to beat
the game once 1st to be
able to do things.

The memory address that
told the game whether it
was already beaten or not
was 011CF87D with a value
of 00 before you beat the
game and 01 after you
have beaten the game.
*/
#
Have All Shop Items Purchased
0 004382E0 7FC42378
0 004383A8 7C632378
/*
Make sure to activate the
code to make the game
think you have beaten it
or else you will not be
able to turn on cheats
while playing.

This will also get you the
stuff that you would
normally need to log into
RESISTANCE.NET or whatever
to unlock.
*/
#
AoB Primary Ammo Never Decreases
0
bungholio
B 00010000 04000000
B 10421C801041124C7C43F94E 10421C801041124C60000000
#
AoB Secondary Ammo Never Decreases
0
bungholio
B 00010000 04000000
B 2C0400007C43F94E 2C04000060000000
#
AoB Grenades Never Decrease
0
bungholio
B 00010000 04000000
B 7C632814987609EC 38600005987609EC
#
AoB Can Not Die
0
bungholio
B 00010000 04000000
B 63E30000484C9361607E0000 3C607F80907F00F83BC00000
B 00010000 04000000
B 63A30000484BCC0D2C0300004182FF6C 3C607F80907D00F8386000004BFFFF6C
#
AoB Have All Weapons
0
bungholio
B 00010000 04000000
B 418000087CE52B78 3CA07FFF60A5FFFF
#
AoB Invincibility
0
bungholio
B 00010000 04000000
B 4E8000206000000000000000410000003E99999A000000003E4AE92BA00000003F00000041A0000042C8000040400000F821FBA17C0802A6F8010470DBC10450DBE10458FBE104483CA00000FBC10440 4E8000206000000000000000410000003E99999A000000003E4AE92BA00000003F00000041A0000042C80000404000004E8000207C0802A6F8010470DBC10450DBE10458FBE104483CA00000FBC10440
/*
It's better than the
health code because now
you no longer get blood on
the screen nor do enemy
attacks cause you to
flinch so it's easier for
you to shoot and see.

If anybody needs it I
found a static path to
player health that is
this:
F8(0(208(0101DCD8)))

At 00F0 and 00F4 there is
also 42C80000 which is the
float for 100.000 so one
of them is likely max
health.
*/
#
AoB Hold X To Fly
0
bungholio
B 00010000 04000000
B 41F0000000000000526573697374616E63652033000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 41F0000000000000526573697374616E63652033000000003D000199893C03519928F000893C03539928F001A128F000712A0040B148F00278A80020487E040E3C60019993E3F004C3DF00F448162102D08300043C800199A0C4F0022B860040409E001080C4F00438C600F07F833040409E000C3CC0408090C30004487C4F5E
B 00010000 04000000
B 33BD00017BBD0020281D00074180FF24480001AC30BC034C30DC03CC78A80020 33BD00017BBD0020281D00074180FF24480001AC30BC034C30DC03CC48C9E842
B 00010000 04000000
B 2C030002C3DF00F4418200303C60001638631E94C0230000FC1F08004CC01382 2C03000248C9E86A418200303C60001638631E94C0230000FC1F08004CC01382
B 00010000 04000000
B C0640008C0C60008EC84287AEC23307AC066000CD063000CD0430000D0830004 C0640008C0C60008EC84287AEC23307AC066000CD063000CD043000048C9E87A
#
AoB Rapid Fire Primary
0
bungholio
B 00010000 04000000
B 3C60012EC03900003063AD68C05F00D8C06300A4EC621828FC411028FC22186E 3C60012EC03900003063AD68C05F00D8C06300A4EC621828FC41102860000000
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.
*/
#
AoB Rapid Fire Secondary v1
0
bungholio
B 00010000 04000000
B FC0110004CC113824186001438A000003860000190A4000048000010EC211028 FC0110004CC113824186001438A000003860000190A4000048000010
0 007EEDE0 EC210828
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.
*/
#
AoB Rapid Fire Secondary v2
0
bungholio
B 00010000 04000000
B 000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369 EC2110283C6030007F9F1840419C0024807F00042B830A19419E00082B830A1B419E000C2B830A1D409E0008EC210828487EEDE60000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369
B 00010000 04000000
B FC0110004CC113824186001438A000003860000190A4000048000010EC211028 FC0110004CC113824186001438A000003860000190A400004800001048C9E8BE
/*
This does not require the
code for the weapon list
to be on to work, so this
will also affect enemies
and other things.

It has a lazy check for
the Atomizer, Auger, and
Deadeye but it does not
work too well.

This AoB code can fail
because it is in the same
area as as the rapid fire
and weapon address table
dumper codes, so you will
need to choose whether
you want it like thise or
if you want any rapid
fire code involving the
weapon table and the
weapon table dumper, or
if you just want this
for secondary.
*/
#
AoB Weapon Address Table Dumper
0
bungholio
B 00010000 04000000
B 0000000000000000526573697374616E636520330000000000000000000000000000000000000000000000000000000000000000 0000000000000000526573697374616E6365203300000000000000003F600198637BF0101C7E00047FBB192EA09D01B84816135E
B 00010000 04000000
B 607D00002C1D00004182005083BD0040A07D00A02C03001E40820040A09D01B8 607D00002C1D00004182005083BD0040A07D00A02C03001E4082004048C9E952
/*
This needs to be on 1st
before the 2 codes for
rapid fire otherwise you
will crash your game with
secondary fire and primary
fire just will not work.

This dumps their addresses
at 0198F010 to 0198F040.

This will interfere with
the code for rapid fire
secondary v2 because it
occupies the same area, so
either choose that or the
rapid fire codes that need
the weapon address table.
*/
#
AoB Rapid Fire Primary With Weapon Table
0
bungholio
B 00010000 04000000
B 0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369 3B40000C7F4903A63F400198635AF01080BA00007F9F2840419E00103B5A00044200FFF0FC22186E4856B3B6000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369
B 00010000 04000000
B 3C60012EC03900003063AD68C05F00D8C06300A4EC621828FC411028FC22186E 3C60012EC03900003063AD68C05F00D8C06300A4EC621828FC41102848C9E8AA
/*
Requires the code that
dumps the weapon addresses
to be turned on 1st, or
else this will not work
but it will not crash your
game or anything.

This is specifically
useful if you want rapid
fire to only work for your
weapons and not for
enemies or turrets or
other things like that.

This will interfere with
the code for rapid fire
secondary v2 because it
occupies the same area, so
either choose that or the
rapid fire codes that need
the weapon address table.
/*
#
AoB Rapid Fire Secondary With Weapon Table
0
bungholio
B 00010000 04000000
B 000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369 EC2110283860000C7C6903A63C6001986063F01080A300007F9F2840419E0010386300044200FFF04800002C80A500042B850A19419E00082B850A1A419E00082B850A1B419E00082B850A1D419E0008EC210828487EEDE60000000000000000000000000000000052657369
B 00010000 04000000
B FC0110004CC113824186001438A000003860000190A4000048000010EC211028 FC0110004CC113824186001438A000003860000190A400004800001048C9E8D6
/*
Requires the code that
dumps the weapon addresses
to be turned on 1st, or
else this will crash your
game unlike the code for
primary fire.

This excludes the Atomizer,
Auger, Deadeye, and
Marksman so they will
function correctly.

It only works for your
weapons and not for enemies
or other things.

This will interfere with
the code for rapid fire
secondary v2 because it
occupies the same area, so
either choose that or the
rapid fire codes that need
the weapon address table.
*/
#
AoB Can Use All Grenade Types
0
bungholio
B 00010000 04000000
B 57BD063E7C1C280040800058313F09EC792900207CE9E8AE2C070000408200C8 57BD063E7C1C280040800058313F09EC7929002038E000057CE9E9AE480000C8
/*
This completes the
collection now since
before I could only find
the weapons and not the
grenades.

Turn this on with the code
for grenades to never
decrease and you will have
unlimited of all 5 at the
start of the game.

There also seems to be a
5th grenade type but it
never displays an icon.
It is on the far left and
when you throw the grenade
it has multiple grenade
effects or whatever.
I did not use grenades
much.
*/
#
AoB Weapon Experience Gained Multiplier
0
bungholio
B 00010000 04000000
B 00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369 
B 00010000 04000000
B 806102043CE0004260E781A07F871840409E00081CC6Z7C66281448424C1E0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369
[Z]10x=000A;100x;0064;1,000x=03E8;10,000x=2710[/Z]
/*
A value like 03E8 will
allow you to fully upgrade
a weapon from killing 1
enemy.

This AoB is found multiple
times in the elf file will
be the 2nd one in an
unmodified file, and if
done 1st can prevent the
codes for rapid fire
secondary v2 along with
weapon table ones from
being found.
*/
#
AoB Ally Health Never Decreases
0
bungholio
B 00010000 04000000
B 0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000052657369 3F800199907CF008FFE008904867F5063C8001998084F0087F841840409E0008C02300F4D02300F848641B16000000000000000052657369
B 00010000 04000000
B 7C8903A64E9E04218083000080840030808400007C8903A64E9E0421FFE00890 7C8903A64E9E04218083000080840030808400007C8903A64E9E0421
B 00010000 04000000
B C08300F4FC21106EFC200818FC400890FC422028FC401018FC22092ED02300F8 C08300F4FC21106EFC200818FC400890FC422028FC401018FC22092E48C9E99A
/*
I have only tested this on
Charlie Rose or whoever
the guy is that is in that
barn looking building with
an elevator and a bunch of
feral grays, I have not
tried it on other allies
and it does not seem to
affect enemies yet either
so it should hopefully have
no issues with it.

This AoB is found multiple
times in the elf file will
be the 2nd one in an
unmodified file, and if
done 1st can prevent the
codes for rapid fire
secondary v2 along with
weapon table ones from
being found along with
the weapon experience
gained multipler.
*/
#
AoB Have Game Beaten
B 00010000 04000000
B 306300CC38A000B97864002063E3000038C0000038E00000A08400004826D809 306300CC38A000B97864002063E3000038C0000038E00000A084000038600001
B 00010000 04000000
B 38E000027864002063C3000030C1011838A000B9A0840000B0810070480BEED5 38E000027864002063C3000030C1011838A000B9A0840000B081007038600001
/*
This is needed to purchase
items in the Shop or
activate cheats while
playing, otherwise the
game will tell you to beat
the game once 1st to be
able to do things.

The memory address that
told the game whether it
was already beaten or not
was 011CF87D with a value
of 00 before you beat the
game and 01 after you
have beaten the game.
*/
#
AoB Have All Shop Items Purchased
B 00010000 04000000
B 38A000E438E000014BFF12B5607E0000386000017C64F836386000007FC42038 38A000E438E000014BFF12B5607E0000386000017C64F836386000007FC42378
B 00010000 04000000
B A09E00CC38E0000080A500747CA507B44BFF11E5388000017C84E8307C632038 A09E00CC38E0000080A500747CA507B44BFF11E5388000017C84E8307C632378
/*
Make sure to activate the
code to make the game
think you have beaten it
or else you will not be
able to turn on cheats
while playing.

This will also get you the
stuff that you would
normally need to log into
RESISTANCE.NET or whatever
to unlock.
*/
#