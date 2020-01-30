Eboot Enable Code
0
Medo
0 00010064 01CD0000
0 0001006C 01CD0000
/*
Just turn it on, it will
not cause any problems
and will make sure my
codes with routines will
not crash your game.
*/
#
System Software Mode Partial Saving + Loading Fixes
0
bungholio
0 0080DBFC 38600000
0 008100B4 4800007C
/*
0206E7E4 an 02073200 are
the important addresses
with the same values.

00 = Normal continuation
02 = load profile data for profile screen
03 = save profiles
04 = load profiles
06 = delete profiles
07 = break your game


You will need at least 1
profile created already.

Anywhere you save in 1
profile will be where you
will always continue in
any profile until you
turn off the code.

Use the rebug mode trick,
and once you get to the
spot where you can load a
profile, then you can
connect to your PS3.

It disables loading and
saving, but is better
than nothing when
combined with all of the
unlock and access codes
and whatever else to do
whatever you need for
testing or code hunting.
*/
#
Button Enable Code
0
bungholio
0 01CDF53C 3C60029D
0 01CDF540 889E0009
0 01CDF544 9883F000
0 01CDF548 889E000B
0 01CDF54C 9883F001
0 01CDF550 A083F000
0 01CDF554 70850201 /* L2 + L3 */
0 01CDF558 A0C3F006
0 01CDF55C B0A3F006
0 01CDF560 2B850201
0 01CDF564 409E0028
0 01CDF568 7F853040
0 01CDF56C 419E0020
0 01CDF570 88E3F008
0 01CDF574 68E70001
0 01CDF578 3CC0022D
0 01CDF57C 38A00001
0 01CDF580 90A6CE5C
0 01CDF584 98A3F009
0 01CDF588 98E3F008
0 01CDF58C 70850401 /* L2 + R3 */
0 01CDF590 A0C3F00E
0 01CDF594 B0A3F00E
0 01CDF598 2B850401
0 01CDF59C 409E0018
0 01CDF5A0 7F853040
0 01CDF5A4 419E0010
0 01CDF5A8 88E3F010
0 01CDF5AC 68E70010
0 01CDF5B0 98E3F010
0 01CDF5B4 70851002 /* R2 + ^ */
0 01CDF5B8 A0C3F01E
0 01CDF5BC B0A3F01E
0 01CDF5C0 2B851002
0 01CDF5C4 409E0024
0 01CDF5C8 7F853040
0 01CDF5CC 419E001C
0 01CDF5D0 88E3F011
0 01CDF5D4 38E70001
0 01CDF5D8 2B87000A
0 01CDF5DC 409D0008
0 01CDF5E0 38E00000
0 01CDF5E4 98E3F011
0 01CDF5E8 70851001 /* L2 + ^ */
0 01CDF5EC A0C3F028
0 01CDF5F0 B0A3F028
0 01CDF5F4 2B851001
0 01CDF5F8 409E0018
0 01CDF5FC 7F853040
0 01CDF600 419E0010
0 01CDF604 88E3F010
0 01CDF608 68E70001
0 01CDF60C 98E3F010
0 01CDF610 70852001 /* L2 + > */
0 01CDF614 A0C3F02A
0 01CDF618 B0A3F02A
0 01CDF61C 2B852001
0 01CDF620 409E0018
0 01CDF624 7F853040
0 01CDF628 419E0010
0 01CDF62C 88E3F010
0 01CDF630 68E70002
0 01CDF634 98E3F010
0 01CDF638 70854001 /* L2 + \/ */
0 01CDF63C A0C3F02C
0 01CDF640 B0A3F02C
0 01CDF644 2B854001
0 01CDF648 409E0018
0 01CDF64C 7F853040
0 01CDF650 419E0010
0 01CDF654 88E3F010
0 01CDF658 68E70004
0 01CDF65C 98E3F010
0 01CDF660 70858001 /* L2 + < */
0 01CDF664 A0C3F02E
0 01CDF668 B0A3F02E
0 01CDF66C 2B858001
0 01CDF670 409E0018
0 01CDF674 7F853040
0 01CDF678 419E0010
0 01CDF67C 88E3F010
0 01CDF680 68E70008
0 01CDF684 98E3F010
0 01CDF688 E8810038
0 01CDF68C 4E800020
0 00CE4F10 49CDF53F
/*
Dump Address = 0x0253F000

0001 = L2
0002 = R2
0004 = L1
0008 = R1
0010 = Triangle
0020 = O
0040 = X
0080 = []
0100 = Select
0200 = L3
0400 = R3
0800 = Start
1000 = ^
2000 = >
4000 = \/
8000 = <
*/
#
Marker For The Dwarf Gekko That Raiden Controls In File R-02
0
bungholio
0 0168505C 3C60029D
0 01685060 93E3F020
0 01685064 63E30000
0 01685068 4E800020
0 002DD5B4 4968505F
/*
In Chapter 2, you will
encounter a spot where
you will need to control
a Dwarf Gekko to continue
on, and this works for
it without marking the
other Dwarf Gekkos around
you.
*/
#
Marker For The Turrets That Raiden Can Control In File R-04
0
bungholio
0 01685088 3C60029D
0 0168508C 93E3F024
0 01685090 807C0000
0 01685094 4E800020
0 000F48D0 4968508B
/*
In the very beginning
room in Chapter 4 after
you go up the steps but
before you get on the
elevator, there are 2
turrets you can use on
the enemies.
*/
#
Can Access The Collection Menu From The Main Menu Without Having Any Of Them Unlocked
0
bungholio
0 007F8EDC 60000000
#
Enter The Collection Menu To Unlock All Titles
0
bungholio
0 01684E78 9003000C
0 01684E7C 7C0B0034
0 01684E80 4E800020
0 007D1A3C 7D604378
0 007D1A44 49684E7B
#
Enter The Collection Menu To Unlock All IDs
0
bungholio
0 01684EA4 90030004
0 01684EA8 7C090034
0 01684EAC 4E800020
0 007D1AA4 7F404B78
0 007D1AAC 49684EA7
#
Enter The Collection Menu To Unlock All MIBs
0
bungholio
0 01684ED0 90030008
0 01684ED4 7C090034
0 01684ED8 4E800020
0 007D1B1C 7F204B78
0 007D1B24 49684ED3
#
Enter The Collection Menu To Unlock All Data
0
bungholio
0 01684EFC 90030000
0 01684F00 7C090034
0 01684F04 4E800020
0 007D1B94 7F204B78
0 007D1B9C 49684EFF
#
Enter The Collection Menu To Unlock All Jetstream Titles
0
bungholio
0 01684F28 901D2894
0 01684F2C 7C080034
0 01684F30 4E800020
0 007D1C20 7D204378
0 007D1C2C 49684F2B
#
Enter The Collection Menu To Unlock All Jetstream Data
0
bungholio
0 01684F54 901D2890
0 01684F58 7C080034
0 01684F5C 4E800020
0 007D1CA4 7D404378
0 007D1CB0 49684F57
#
Enter The Collection Menu To Unlock All Blade Wolf Titles
0
bungholio
0 01684F80 901D28AC
0 01684F84 7C080034
0 01684F88 4E800020
0 007D1DB0 7D404378
0 007D1DBC 49684F83
#
Enter The Collection Menu To Unlock All Blade Wolf Data
0
bungholio
0 01684FAC 901D28A8
0 01684FB0 7C060034
0 01684FB4 4E800020
0 007D1E30 7D003378
0 007D1E3C 49684FAF
#
Can Access The VR Missions Menu From The Main Menu Without Having Any Of Them Unlocked
0
bungholio
0 007F8E78 60000000
#
Enter The VR Missions Menu To Unlock All VR Missions
0
bungholio
0 01684E50 7C031B78
0 01684E54 7C65212E
0 01684E58 4E800020
0 007FD4DC 7C05202E
0 007FD4E0 49684E53
0 007FD528 7C05202E
0 007FD52C 49684E53
#
Can Access The Chapters Menu Without Having Any Of Them Unlocked
0
bungholio
0 007F950C 38600001
#
Enter The Chapters Menu To Unlock All Chapters On All Difficulties + Unlock Customize Menu
0
bungholio
0 0080C68C 38000001
0 0080C690 7C03212E
0 0080C694 7C030034
#
Enter The Chapters Menu To Unlock All Difficulties
0
bungholio
0 0080C880 38A00001
0 0080C884 90A41EE0
0 0080C888 48000010
0 0080C930 38A00001
0 0080C934 90A41F98
0 0080C938 48000010
#
Can Access The Customize Menu From The Main Menu Without Having Anything Unlocked
0
bungholio
0 007F951C 38600001
#
Enter The Customize Menu To Unlock All Equipment
0
bungholio
0 007DF5E4 38600003
0 007DF5E8 987B28CC
0 007DF5F8 4800000C
0 007DFC9C 38600003
0 007DFCA0 987628CC
0 007DFCB0 4800000C
0 007EBAFC 38A00003
0 007EBB00 98A428CC
0 007EBB10 4800000C
#
Always Get A No Damage Bonus At The End Of A Chapter
0
bungholio
0 00B22924 39200000
/*
You can take all the
damage you want and this
will still work.
*/
#
Always Get A No Alert Bonus At The End Of Blade Wolf's Chapters
0
bungholio
0 00B22708 38600000
#
Always Get A No Kills Bonus At The End Of A Chapter
0
bungholio
0 00B22948 39200000
/*
You can still kill as
many enemies as you want
and this will still work.
*/
#
Total Chapter Time Never Increases
0
bungholio
0 00B22964 60000000
0 00B2296C 3D200000
#
Alternative Total Chapter Time Never Increases
0
bungholio
0 00B22780 EC210828
#
Combo Timer Modifier
0
bungholio
0 00B22FDC 3CA0Z
[Z]40C0=Default 6 Seconds;4120=10 Seconds;41A0=20 Seconds;41F0=30 Seconds;7F80=+Infinity[/Z]
#
Combo Multiplier
0
bungholio
0 00B23B64 30E7Z
[Z]0001=Default;000A=10x;0064=100x;03E8=1,000x;2710=1 0,000x[/Z]
#
Parts Multiplier
0
bungholio
0 00B23BE4 30C6Z
[Z]0001=Default;000A=10x;0064=100x;03E8=1,000x;2710=1 0,000x[/Z]
#
No Chapter Failures
0
bungholio
0 0080D2E4 38800000
#
Zandatsus Multiplier
0
bungholio
0 00B23EA0 30A5Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
BP Gained Multiplier
0
bungholio
0 01685030 1C84Z
0 01685034 7D6B2014
0 01685038 48B23C4E
0 00B23C48 49685032
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
/*
The code to have all
items has a side effect
of triggering this
nonstop when you restart
areas, so disable that if
you need.
*/
#
Kills Multiplier
0
bungholio
0 00B23D30 30A5Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
Individual Battle Timers Never Increase
0
bungholio
0 00B22640 EC210828
#Damage Multiplier
0
bungholio
0 01684FD8 38E00000
0 01684FDC 1C84Z
0 01684FE0 488E0896
0 008E0890 49684FDA
[Z]0001=Default;0002=2x;0003=3x;0004=4x;0005=5x;0006= 6x;0007=7x;0008=8x;0009=9x;000A=10x[/Z]
#
Press L2 + \/ To Toggle Any Damage Kills Everything
0
CodeUnique3
0 01CDF4D0 3D20029D
0 01CDF4D4 8929F010
0 01CDF4D8 71290004
0 01CDF4DC 2B890004
0 01CDF4E0 7C844010
0 01CDF4E4 409E0008
0 01CDF4E8 38800000
0 01CDF4EC 488E089A
0 008E0894 49CDF4D2
/*
This also affects you, so
activate other codes as
necessary.

This will not instantly
kill enemies using a
shield against you.

There is a separate code
to destroy their shield
with any damage.
*/
#
Instant Zandatsu Square Size Modifier
0
bungholio
0 01685004 3C60Z
0 01685008 90780030
0 0168500C C0380030
0 01685010 4E800020
0 00B14D60 49685007
[Z]4120=Default 10;41A0=2x;41F0=3x;4220=4x;4248=5x;42C8=10x;447A=1 00x[/Z]
/*
Unlike the other one, you
can use this to instantly
change the size of any
square while playing.
*/
#
Zandatsu Square Size Multiplier
0
bungholio
0 00B14828 Z
0 00B14AF4 60000000
/*
Normally this only works
for Easy Assist Mode, I
have it working for any
difficulty.

This sets the size of the
square the 1st time you
see it while playing. If
you change the value and
have already seen the
square size for an enemy,
it will not change until
restart your checkpoint.
*/
[Z]40000000=Default 2x;40400000=3x;40800000=4x;40A00000=5x;40C00000=6x ;40E00000=7x;41000000=8x;41100000=9x;41200000=10x; 42C80000=100x[/Z]
#
Any Damage Breaks Enemy Shields
0
bungholio
0 003643B0 38E00000 /* Blade Wolf */
0 004CAE40 38E00000 /* Sam */
0 009DF80C 38E00000 /* Raiden */
#Any Damage Stuns Raiden's Cyborgs
0
bungholio
0 009D3ED4 60000000
0 009D3F28 38600001
#
Any Damage Makes Raiden's Cyborgs Completely Blue
0
bungholio
0 009D36F4 38600001
#
Any Damage Electrically Stuns Raiden's Cyborgs
0
bungholio
0 009D3BA4 38600001
#
Any Damage Electrically Stuns Raiden's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 00984C44 3CC00002
#
Any Damage Decapitates Raiden's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 009850CC 3CA00002
#
Any Damage Stuns Raiden's Heavily Armed Cyborgs
0
bungholio
0 009D53D0 60000000
0 009D54F0 60000000
0 009D5500 38600001
#
Any Damage Makes Raiden's Heavily Armed Cyborgs Completely Blue
0
bungholio
0 009D52B4 38600001
#
Any Damage Electrically Stuns Raiden's Heavily Armed Cyborgs
0
bungholio
0 009D5438 38600001
#
Any Damage Stuns Raiden's Fenrirs
0
bungholio
0 00215BC8 38600001
0 00215BE8 60000000
#
Any Damage Makes Raiden's Fenrirs Completely Blue
0
bungholio
0 002171F0 38600002
#
Any Damage Electrically Stuns Raiden's Fenrirs
0
bungholio
0 00215EAC 3C600002
#
Any Damage Stuns Raiden's GRADs
0
bungholio
0 000E9DC0 38600001
0 000E9DD4 60000000
0 000E9DEC 60000000
#
Any Damage Makes Raiden's GRADs Completely Blue
0
bungholio
0 000EA904 38800002
#
Any Damage Electrically Stuns Raiden's GRADs
0
bungholio
0 000E9D90 3C800002
#
Any Damage Stuns Raiden's Mastiffs
0
bungholio
0 000BA03C 60000000
0 000BA078 38800001
0 000BA098 60000000
#
Any Damage Makes Raiden's Mastiffs Completely Blue
0
bungholio
0 000BA2C4 38600002
#
Any Damage Stuns Raiden's Raptors
0
bungholio
0 00096C98 38600001
0 00096CAC 60000000
#
Any Damage Makes Raiden's Raptors Completely Blue
0
bungholio
0 00096010 38600002
#
Any Damage Electrically Stuns Raiden's Raptors
0
bungholio
0 00096BA8 3C600002
#
Any Damage Stuns Raiden's Vodomjerkas
0
bungholio
0 0010DE88 38600001
0 0010DEA0 60000000
#
Any Damage Makes Raiden's Vodomjerkas Completely Blue
0
bungholio
0 0010D780 38600001
#
Any Damage Electrically Stuns Raiden's Vodomjerkas
0
bungholio
0 0010DF04 38600001
#
Any Damage Stuns Raiden's Gekkos
0
bungholio
0 009F9C24 60000000
0 009F9C78 38600001
#
Any Damage Makes Raiden's Gekkos Completely Blue
0
bungholio
0 009F9930 38600002
#
Any Damage Stuns Raiden's Hammerheads
0
bungholio
0 001991D4 60000000
0 00199200 60000000
0 00199218 60000000
#
Any Damage Makes Raiden's Hammerheads Completely Blue
0
bungholio
0 00199160 38600002
#
Any Damage Electrically Stuns Raiden's Manned Sliders And Detaches Their Cyborgs
0
bungholio
0 0015EE58 3C600002
#
Any Damage To 1 Of Raiden's Manned Sliders Triggers Temporary Slow Motion
0
bungholio
0 0015F634 38C00021
#
Any Damage Electrically Stuns Raiden's Unmanned Sliders
0
bungholio
0 0015FB40 3C600002
#
Any Damage To 1 Of Raiden's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
0 0015FDD4 38C00021
#
Any Damage Electrically Stuns Raiden's Mistral + B.D. Mistal
0
bungholio
0 0013E954 3C800002
#
Any Damage Electrically Stun Raiden's Sundowner
0
bungholio
0 0023A5D8 3C600002
#
Any Damage Electrically Stuns Raiden's File R-06's Sam
0
bungholio
0 0005C074 3C600002
#Any Damage Stuns Sam's Cyborgs
0
bungholio
0 004BF5C0 60000000
0 004BF5D0 38600001
#
Any Damage Makes Sam's Cyborgs Completely Blue
0
bungholio
0 004BECB0 38600001
#
Any Damage Electrically Stuns Sam's Cyborgs
0
bungholio
0 004BF294 38600001
#
Any Damage Stuns Sam's Heavily Armed Cyborgs
0
bungholio
0 004C0C44 38600001
0 004C0DEC 60000000
0 004C0DFC 38600001
#
Any Damage Makes Sam's Heavily Armed Cyborgs Completely Blue
0
bungholio
0 004C0B34 38600001
#
Any Damage Stuns Sam's Vodomjerkas
0
bungholio
0 005AE510 38600001
#
Any Damage Makes Sam's Vodomjerkas Completely Blue
0
bungholio
0 005ADCE8 38600001
#
Any Damage Stuns Sam's Mastiffs
0
bungholio
0 0056AFF0 60000000
0 0056B02C 60000000
0 0056B034 38800001
0 0056B054 60000000
#
Any Damage Makes Sam's Mastiffs Completely Blue
0
bungholio
0 0056B280 38600002
#
Any Damage Stuns Sam's Gekkos
0
bungholio
0 004E4194 60000000
0 004E41E8 38600001
#
Any Damage Makes Sam's Gekkos Completely Blue
0
bungholio
0 004E437C 60000000
#
Any Damage Electrically Gekkos Sam's Raptors
0
bungholio
0 004E4260 38600001
#
Any Damage Electrically Stuns Sam's Unmanned Sliders
0
bungholio
0 005C74E0 38800001
#
Any Damage To 1 Of Sam's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
0 005C76F4 38C00021
#
Any Damage Stuns Sam's Raptors
0
bungholio
0 0054C0F0 38600001
0 0054C104 60000000
#
Any Damage Makes Sam's Raptors Completely Blue
0
bungholio
0 0054B764 38600002
#
Any Damage Electrically Stuns Sam's Raptors
0
bungholio
0 0054C044 60000000
/*
These lines seem to do
the same if you find
this is not working:

0 0054BFC0 60000000
0 0054BFEC 60000000
0 0054C018 60000000
*/
#
Any Damage Electrically Stuns Sam's Manned Sliders And Detaches Their Cyborgs
0
bungholio
0 005C66D0 3C600002
#
Any Damage To 1 Of Sam's Manned Sliders Triggers Temporary Slow Motion
0
bungholio
0 004BFDFC 38C00021
#
Any Damage Stuns Sam's Fenrirs
0
bungholio
0 0062D458 38600001
0 0062D478 60000000
#
Any Damage To Sam's Fenrirs Makes Them Completely Blue
0
bungholio
0 0062EAC4 38600002
#
Any Damage Stuns Sam's GRADs
0
bungholio
0 005973F0 38600001
0 0059741C 60000000
#
Any Damage Makes Sam's GRADs Completely Blue
0
bungholio
0 00597F18 38600001
#
Any Damage Stuns Sam's Hammerheads
0
bungholio
0 005E98DC 60000000
0 005E9920 60000000
#
Any Damage Makes Sam's Hammerheads Completely Blue
0
bungholio
0 005E9868 38600002
#
Any Damage Electrically Stuns Sam's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 005200B4 3CC00002
#
Any Damage Decapitates Sam's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 0052052C 3CA00002
#
Any Damage Stuns Blade Wolf's Cyborgs
0
bungholio
0 00358F5C 60000000
0 00358F6C 38600001
#
Any Damage Makes Blade Wolf's Cyborgs Completely Blue
0
bungholio
0 00358788 38600001
#
Any Damage Electrically Stuns Blade Wolf's Cyborgs
0
bungholio
0 00358C30 38600001
#
Any Damage Stuns Blade Wolf's Mastiffs
0
bungholio
0 003FBAA0 60000000
0 003FBADC 38800001
0 003FBAFC 60000000
#
Any Damage Makes Blade Wolf's Mastiffs Completely Blue
0
bungholio
0 003FBD28 38600002
#
Any Damage Stuns Blade Wolf's GRADs
0
bungholio
0 0042B4C8 38600001
0 0042B4DC 60000000
0 0042B4F4 60000000
#
Any Damage Makes Blade Wolf's GRADs Completely Blue
0
bungholio
0 0042C1C0 38600001
#
Any Damage Stuns Blade Wolf's Raptors
0
bungholio
0 003DA080 38600001
0 003DA094 60000000
#
Any Damage Makes Blade Wolf's Raptors Completely Blue
0
bungholio
0 003D96C4 38600002
#
Any Damage Stuns Blade Wolf's Heavily Armed Cyborgs
0
bungholio
0 0035A6F8 60000000
0 0035A708 38600001
#
Any Damage Makes Blade Wolf's Heavily Armed Cyborgs Completely Blue
0
bungholio
0 0035A3E8 38600001
#
Any Damage Stuns Blade Wolf's Fenrirs
0
bungholio
0 0046E5E8 38600001
0 0046E608 60000000
#
Any Damage Makes Blade Wolf's Fenrirs Completely Blue
0
bungholio
0 00470254 38600002
#
Any Damage Electrically Stuns Blade Wolf's Unmanned Sliders
0
bungholio
0 00448B00 3C800002
#
Any Damage To 1 Of Blade Wolf's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
0 00448D18 38C00021
#
Any Damage Stuns Blade Wolf's Gekkos
0
bungholio
0 0037B54C 60000000
0 0037B5A0 38600001
#
Any Damage Makes Blade Wolf's Gekkos Completely Blue
0
bungholio
0 0037B258 38600002
#
Any Damage Electrically Stuns Blade Wolf's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 003A9FCC 3CC00002
#
Any Damage Decapitates Blade Wolf's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
0 003AA464 3CA00002
#
Any Damage Electrically Stuns Blade Wolf's Khamsin
0
bungholio
0 003099F0 3C600002
#Invincibility For Raiden
0
bungholio
/* btl_sam_3 */
0 01CDEF1C 62746C5F
0 01CDEF20 73616D5F
0 01CDEF24 3300
/* P740_ARMSTRONG */
0 01CDEF28 50373430
0 01CDEF2C 5F41524D
0 01CDEF30 5354524F
0 01CDEF34 4E4700
/* Invincibility Effect */
0 01CDEF38 3C80022C
0 01CDEF3C 6084F1A7
0 01CDEF40 3CA001CD
0 01CDEF44 60A5EF1B
0 01CDEF48 8CC40001
0 01CDEF4C 8C050001
0 01CDEF50 7F860040
0 01CDEF54 409E0038
0 01CDEF58 2B800000
0 01CDEF5C 419E0008
0 01CDEF60 4BFFFFE8
0 01CDEF64 3C80020C
0 01CDEF68 80843A70
0 01CDEF6C 70840010
0 01CDEF70 2B840010
0 01CDEF74 4C9E0020
0 01CDEF78 3C800224
0 01CDEF7C 8084CC30
0 01CDEF80 2B840001
0 01CDEF84 4C9E0020
0 01CDEF88 48000050
0 01CDEF8C 3C80022C
0 01CDEF90 6084F1A7
0 01CDEF94 3CA001CD
0 01CDEF98 60A5EF27
0 01CDEF9C 8CC40001
0 01CDEFA0 8C050001
0 01CDEFA4 7F860040
0 01CDEFA8 4C9E0020
0 01CDEFAC 2B800000
0 01CDEFB0 419E0008
0 01CDEFB4 4BFFFFE8
0 01CDEFB8 3C800224
0 01CDEFBC 8084CBE8
0 01CDEFC0 2B840005
0 01CDEFC4 4C9E0020
0 01CDEFC8 3C800224
0 01CDEFCC 8084CC30
0 01CDEFD0 2B840004
0 01CDEFD4 4C9E0020
0 01CDEFD8 F821FD61
0 01CDEFDC 48A718F6
0 00A718F0 49CDEF3A
/*
This has been remade to
put in 2 exceptions.


In File R-00 at the very
end you will fight Sam.
While limping, Sam will
need to be able to hit
you to trigger the
chapter to end. It checks
if the area you are in is
"btl_sam_3", then if the
limping bit is set, and
then if the character is
File R-00 Raiden to
determine whether to
apply the exception.

The other exception is
File R-07 at the end
while fighting the
Senator. It will get to a
point where you will
fight him bare-handed,
and during that fight he
will need to be able to
hit you to be able to
trigger the game to get
to the next scene. It
checks if the area you
are in is
"P740_ARMSTRONG", then
if the Unique Weapon is
set to fists, because
Raiden's bare fists are
technically a unique
weapon just like the
Pole-Arm, Sai, and Pincer
Blades, and then it
checks if it is Raiden
value 04 to determine
whether to apply the
exception to the code.


I do not know what 04 is
for the character values,
but it is what shows in
memory whenever I do this
battle. 04 does not seem
to give me bare hands
outside of this battle,
but 07 can since it
forces Raiden to use his
Unique Weapon.


If you want it to work
for even those, use this:
0 00A718F0 4E800020


There are 2 separate
codes to just instantly
trigger both of those
scenes to skip too if
you wanted.
*/
#
Invincibility For Sam
0
bungholio
0 0068CFF0 4E800020
#
Invincibility For Blade Wolf
0
bungholio
0 006E47B0 4E800020
#
Invincibility From Running Into Mines While Running Up The Building In File R-04
0
bungholio
0 00A6BD84 60000000
#
Damage Fully Refills Health
0
bungholio
0 01CDEFE0 7C842810
0 01CDEFE4 3CA0020C
0 01CDEFE8 80A53A70
0 01CDEFEC 38E00110
0 01CDEFF0 64E78000
0 01CDEFF4 7F872840
0 01CDEFF8 419E0008
0 01CDEFFC 80830844
0 01CDF000 48A8299E
0 00A82998 49CDEFE2
#
Invincibility For Things Raiden Controls
0
bungholio
0 01CDF498 38600000
0 01CDF49C 3CC0029D
0 01CDF4A0 8006F020
0 01CDF4A4 2B800000
0 01CDF4A8 419E000C
0 01CDF4AC 9066F020
0 01CDF4B0 4E800020
0 01CDF4B4 8006F024
0 01CDF4B8 2B800000
0 01CDF4BC 419E000C
0 01CDF4C0 9066F024
0 01CDF4C4 4E800020
0 01CDF4C8 7C7BE010
0 01CDF4CC 4E800020
0 002DCE10 49CDF49B
/*
Requires the Marker codes
for either the Dwarf
Gekko in Chapter 2 or the
Turrets in Chapter 4 or
this will do nothing.

The only unwanted effect
of the code is that 1
enemy might not respond
to damage for the 1st
time they take damage,
but after that the effect
is gone again until you
either control the Dwarf
Gekko or Turrets again.
*/
#
Damage Fully Refills Health For Things Raiden Controls
0
bungholio
0 01CDF460 7C872014
0 01CDF464 3CA0029D
0 01CDF468 38000000
0 01CDF46C 80C5F020
0 01CDF470 7F833040
0 01CDF474 409E000C
0 01CDF478 80860844
0 01CDF47C 9005F020
0 01CDF480 80C5F024
0 01CDF484 7F833040
0 01CDF488 409E000C
0 01CDF48C 80860844
0 01CDF490 9005F024
0 01CDF494 488E08B6
0 008E08B0 49CDF462
/*
Requires the Marker codes
for either the Dwarf
Gekko in Chapter 2 or the
Turrets in Chapter 4 or
this will do nothing.

The only unwanted effect
of the code is that 1
enemy might not take
damage for the 1st time
they take damage, but
after that the effect is
gone again until you
either control the Dwarf
Gekko or Turrets again.
*/
#
Raiden Cannot Be Stunned
0
bungholio
0 00A3C0BC 48000020
0 00A72A50 48000044
#
Raiden Can Easily Decapitate Enemies Without Ripper Mode
0
bungholio
0 010D8964 38600001
#
Raiden Can Always Toggle Ripper Mode
0
bungholio
0 00A340F8 38600001
#
Sam Can Easily Decapitate Enemies Without Taunting Them
0
bungholio
0 008D00A8 38800001
#
Enemies Stay Taunted Forever
0
bungholio
0 008E7458 3C007F80
0 008E745C 901F0E24
#
Sam's Charge Attacks Are Instantly Fully Charged
0
bungholio
/* Standing And Doing Triangle */
0 00683ED4 38800000 /* This line activates it by just pressing Triangle. Remove it if you still want the choice of doing it by holding Triangle. */
0 00684064 38600001
/* Any Combo Then Triangle Charge Attacks */
0 00684C10 38600001
/* Air Charge Attack */
0 0068077C 38600001 /* This line activates it by just pressing Triangle. Remove it if you still want the choice of doing it by holding Triangle. */
0 0068086C 38600001
/* Running Charge Attack */
0 00682174 38600001
/* Zandatsu Charge Attack */
0 006B6698 38600001
0 006B68F0 38800000 /* Remove this if you still want to aim the attack while holding Triangle, or else it will instantly trigger. */
#
Fuel Cells Always Full
0
bungholio
0 01CDEEF0 808336A8
0 01CDEEF4 2B840000
0 01CDEEF8 409D001C
0 01CDEEFC 7C8903A6
0 01CDEF00 80A336A0
0 01CDEF04 8085000C
0 01CDEF08 90850004
0 01CDEF0C 38A50018
0 01CDEF10 4200FFF4
0 01CDEF14 808336A8
0 01CDEF18 48A082EA
0 00A082E4 49CDEEF2
/*
Tested and working for
Raiden, Sam, & Blade Wolf
with and without fuel
cell capacity upgrades.
It adjusts to the correct
amounts.
*/
#
Raiden Can Jump In The Air
0
bungholio
0 01CDF27C F861FFF8
0 01CDF280 F881FFF0
0 01CDF284 F8A1FFE8
0 01CDF288 3C60029D
0 01CDF28C A083F000
0 01CDF290 70840040
0 01CDF294 A0A3F002
0 01CDF298 B083F002
0 01CDF29C 2B840040
0 01CDF2A0 409E0014
0 01CDF2A4 7F842840
0 01CDF2A8 419E000C
0 01CDF2AC 38600000
0 01CDF2B0 907F05EC
0 01CDF2B4 E861FFF8
0 01CDF2B8 E881FFF0
0 01CDF2BC E8A1FFE8
0 01CDF2C0 2C040001
0 01CDF2C4 4E800020
0 01CDF2C8 F861FFF8
0 01CDF2CC F881FFF0
0 01CDF2D0 F8A1FFE8
0 01CDF2D4 3C60029D
0 01CDF2D8 A083F000
0 01CDF2DC 70840040
0 01CDF2E0 A0A3F004
0 01CDF2E4 B083F004
0 01CDF2E8 2B840040
0 01CDF2EC 409E0014
0 01CDF2F0 7F842840
0 01CDF2F4 419E000C
0 01CDF2F8 38600004
0 01CDF2FC 907F05E8
0 01CDF300 E861FFF8
0 01CDF304 E881FFF0
0 01CDF308 E8A1FFE8
0 01CDF30C 2C030007
0 01CDF310 4E800020
0 00A689A4 49CDF27F
0 00A34960 49CDF2CB
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
Sam Can Jump In The Air
0
bungholio
0 01CDF160 F861FFF8
0 01CDF164 F881FFF0
0 01CDF168 3C60029D
0 01CDF16C A083F000
0 01CDF170 70840040
0 01CDF174 A043F018
0 01CDF178 B083F018
0 01CDF17C 2B840040
0 01CDF180 409E0014
0 01CDF184 7F841040
0 01CDF188 419E000C
0 01CDF18C 38600000
0 01CDF190 907F05EC
0 01CDF194 E861FFF8
0 01CDF198 E881FFF0
0 01CDF19C E8410028
0 01CDF1A0 4E800020
0 01CDF1A4 F861FFF8
0 01CDF1A8 F8A1FFF0
0 01CDF1AC 3C60029D
0 01CDF1B0 A083F000
0 01CDF1B4 70840040
0 01CDF1B8 A0A3F01A
0 01CDF1BC B083F01A
0 01CDF1C0 2B840040
0 01CDF1C4 409E001C
0 01CDF1C8 7F842840
0 01CDF1CC 419E0014
0 01CDF1D0 3C600010
0 01CDF1D4 60630004
0 01CDF1D8 907F05E8
0 01CDF1DC 48000008
0 01CDF1E0 E861FFF8
0 01CDF1E4 E8A1FFF0
0 01CDF1E8 3C800010
0 01CDF1EC 4E800020
0 00688848 49CDF163
0 00689C58 49CDF1A7
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
Blade Wolf Can Jump In The Air
0
bungholio
0 01CDF1F0 F861FFF8
0 01CDF1F4 F881FFF0
0 01CDF1F8 F8A1FFE8
0 01CDF1FC 3C60029D
0 01CDF200 A083F000
0 01CDF204 70840040
0 01CDF208 A0A3F01C
0 01CDF20C B083F01C
0 01CDF210 2B840040
0 01CDF214 409E0014
0 01CDF218 7F842840
0 01CDF21C 419E000C
0 01CDF220 38600000
0 01CDF224 907F05EC
0 01CDF228 E861FFF8
0 01CDF22C E881FFF0
0 01CDF230 E8A1FFE8
0 01CDF234 4E800020
0 01CDF238 F861FFF8
0 01CDF23C F8A1FFF0
0 01CDF240 3C60029D
0 01CDF244 A083F000
0 01CDF248 70840040
0 01CDF24C A0A3F01E
0 01CDF250 B083F01E
0 01CDF254 2B840040
0 01CDF258 409E0014
0 01CDF25C 7F842840
0 01CDF260 419E000C
0 01CDF264 38600005
0 01CDF268 B07F05EA
0 01CDF26C E861FFF8
0 01CDF270 E8A1FFF0
0 01CDF274 3C800001
0 01CDF278 4E800020
0 006D5530 49CDF1F3
0 006D71B8 49CDF23B
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
Dwarf Gekko Can Jump In The Air
0
bungholio
0 01CDF004 F881FFF8
0 01CDF008 F8A1FFF0
0 01CDF00C 3C80029D
0 01CDF010 A0A4F000
0 01CDF014 A004F00A
0 01CDF018 70A50040
0 01CDF01C B0A4F00A
0 01CDF020 2B850040
0 01CDF024 409E0014
0 01CDF028 7F850040
0 01CDF02C 419E000C
0 01CDF030 38800002
0 01CDF034 909F05EC
0 01CDF038 E881FFF8
0 01CDF03C E8A1FFF0
0 01CDF040 63E30000
0 01CDF044 4E800020
0 01CDF048 3C60029D
0 01CDF04C A083F000
0 01CDF050 A003F00C
0 01CDF054 70840040
0 01CDF058 B083F00C
0 01CDF05C 2B840040
0 01CDF060 409E0014
0 01CDF064 7F840040
0 01CDF068 419E000C
0 01CDF06C 38800008
0 01CDF070 909F05E8
0 01CDF074 63E30000
0 01CDF078 4E800020
0 002E3770 49CDF007
0 002E8D60 49CDF04B
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.

It is a very small part
of the game in Chapter 2
where you control it, but
the code is here if you
want it.
*/
#
Max Items From Use
0
games24.blog.fc2.com/blog-entry-165.html
0 007A0304 80830058
0 007A21C0 3909FFFF
/*
I originally had line 2
just load 0x0060(r3), but
that gave me 6 instead of
5 rounds of ammo for the
items that use this line.
*/
#
Automatically Pick Up All Items You Do Not Have Any Of
0
bungholio
0 00798A58 38600001
/*
Normally as soon as the
game completely generates
an item into the level
somewhere, like a Hand
Grenade always being in a
certain spot in the level
or the special green left
arm the game creates
after you correctly chop
one off, this will cause
it to instantly be picked
up without you needing to
walk over it.
*/
#
Have All Items
0
bungholio
0 01CDF380 F821FFF9
0 01CDF384 7C0802A6
0 01CDF388 F8010000
0 01CDF38C 3FE00000
0 01CDF390 3FC00206
0 01CDF394 83DEE734
0 01CDF398 3FA00206
0 01CDF39C 83BDEB74
0 01CDF3A0 63BC0000
0 01CDF3A4 807E0000
0 01CDF3A8 3863FFF8
0 01CDF3AC 80830010
0 01CDF3B0 80BC0000
0 01CDF3B4 2B850000
0 01CDF3B8 419E0018
0 01CDF3BC 80A50010
0 01CDF3C0 7F842840
0 01CDF3C4 419E0010
0 01CDF3C8 3B9C0004
0 01CDF3CC 4BFFFFE4
0 01CDF3D0 48793BCB
0 01CDF3D4 3BFF0001
0 01CDF3D8 3BDE0004
0 01CDF3DC 2B9F000B
0 01CDF3E0 419CFFC0
0 01CDF3E4 3FC00206
0 01CDF3E8 83DEE74C
0 01CDF3EC 2B9E0000
0 01CDF3F0 419E003C
0 01CDF3F4 3B9D002C
0 01CDF3F8 807E006C
0 01CDF3FC 80830000
0 01CDF400 2B84002C
0 01CDF404 409E0028
0 01CDF408 3863FFF8
0 01CDF40C 80830010
0 01CDF410 80BC0000
0 01CDF414 2B850000
0 01CDF418 419E0010
0 01CDF41C 80A50010
0 01CDF420 7F842840
0 01CDF424 419E0008
0 01CDF428 48793BCB
0 01CDF42C E8010000
0 01CDF430 7C0803A6
0 01CDF434 38210008
0 01CDF438 E80100C0
0 01CDF43C 4E800020
0 01CDF440 2B830000
0 01CDF444 419E0014
0 01CDF448 80A3FFFC
0 01CDF44C 38C0FFFC
0 01CDF450 7CA53038
0 01CDF454 90A3FFFC
0 01CDF458 60650000
0 01CDF45C 4E800020
0 00793D90 4800002C
0 00793FA0 4800002C
0 00798AA8 49CDF383
0 00CEBD48 49CDF443
/*
It has no effect on
File R-00 Raiden.


It will give you these 11
items:

RPG
Surface-to-Air Homing Missile
Grenade
Jamming Grenade
Red Phosphorus Grenade
Electromagnetic Grenade
Drum Can
Cardboard Box
3D Photo Frame
Electrolyte Pack
Repair Nanopaste


If you are playing Blade
Wolf's DLC, his Heat
Knife will appear in your
inventory too as it only
appears in his DLC. I
tried using it as Raiden
or Sam, they cannot throw
it.
*/
#
Running Speed Modifier
0
bungholio
0 01CDF690 3C60029D
0 01CDF694 A063F000
0 01CDF698 2B830008
0 01CDF69C C03E0004
0 01CDF6A0 409E0010
0 01CDF6A4 3C60Z
0 01CDF6A8 9061FFFC
0 01CDF6AC C021FFFC
0 01CDF6B0 4E800020
0 00771DAC 49CDF693
[Z]3F80=Default Running Speed;3FA0=1.25x;3FC0=1.5x;3FE0=1.75x;4000=2x;4040 =3x;4080=4x;40A0=5x[/Z]
/*
Requires the button
enable code or nothing
will happen while
holding the run button.


It is also made to work
only if you are holding
only R1 to run, so if
you are holding other
buttons at the same time
the speed increase will
not take effect. I did it
this way because having
the speed increase in
effect while doing
certain things can mess
things up. In File R-01,
there is a point where
Raiden runs across a
bridge that is being
destroyed, and this speed
can make that difficult.
Holding any other button
with R1 will fix that so
you can run at normal
speed.


This also affects
enemies, so you can hold
R1 to make them move
quicker if needed in
certain areas to make
them patrol quicker if
needed.
*/
#
Animation Speed Modifiers
0
bungholio
0 01CDF6B4 3CC0029D
0 01CDF6B8 88C6F010
0 01CDF6BC 80A30004
0 01CDF6C0 70C00002
0 01CDF6C4 2B800002
0 01CDF6C8 409E0008
0 01CDF6CC 2B850001
0 01CDF6D0 409E000C
0 01CDF6D4 3C00Z
0 01CDF6D8 4800001C
0 01CDF6DC 70C00008
0 01CDF6E0 2B800008
0 01CDF6E4 409E0008
0 01CDF6E8 2B850002
0 01CDF6EC 409E000C
0 01CDF6F0 3C00ZZ
0 01CDF6F4 90040000
0 01CDF6F8 C0240000
0 01CDF6FC 4E800020
0 00D07294 49CDF6B7
[Z]3F80=Default Player Animation Speed;3F40=0.75x;3F50=0.8125x;3F60=0.875x;3F70=0.9 375x;3F90=1.125x;3FA0=1.25x;3FB0=1.375x;3FC0=1.5x; 3FD0=1.625x;3FE0=1.75x;3FF0=1.875x;4000=2x;4010=2. 25x;4020=2.5x;4030=2.75x;4040=3x[/Z]
[ZZ]3F80=Default Enemy Animation Speed;3D00=0.03125x;3D80=0.0625x;3E00=0.125x;3E80= 0.25x;3EC0=0.375x;3F00=0.5x;3F20=0.625x;3F40=0.75x ;3F60=0.875x;3FA0=1.25x;3FC0=1.5x;3FE0=1.75x;4000= 2x;4010=2.25x;4020=2.5x;4030=2.75x;4040=3x[/ZZ]
/*
Messing with the speed of
things can de-synchronize
other things and break
parts of the game, so
disable it off as needed.
*/
#Objective Marker Display
0
bungholio
0 00BFB3AC Z
0 00BFC1C4 ZZ
[Z]80630030=Normal;38600040=Always On;38600000=Always Off[/Z]
[ZZ]80A50030=Normal;38A00040=Always On;38A00000=Always Off[/ZZ]
#
Infrared Sensor Lasers
0
bungholio
0 002B2B20 Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
Electrical Panels
0
bungholio
0 00C499CC Z
0 00C49B20 Z
[Z]80710030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
HUD
0
bungholio
0 00BBD6EC Z
[Z]80630030=Normal;38600000=Always Visible;38600040=Never Visible[/Z]
#
Map
0
bungholio
0 00BABDB4 Z
0 00BC152C Z
0 00BC1580 Z
[Z]80630030=Normal;38600000=Always Visible;38600040=Never Visible[/Z]
#
Enemy Distance
0
bungholio
0 00BCBF68 Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
Enemy Display
0
bungholio
0 00C1A684 Z
0 00C1A768 Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
Item Cube Icons
0
bungholio
0 00C07D64 Z
[Z]80840030=Normal;38800040=Always Visible;38800000=Never Visible[/Z]
#
Item Text + Brackets
0
bungholio
0 00C08648 Z
0 00C1A684 ZZ
0 00C1A768 ZZ
[Z]807C0030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
[ZZ]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/ZZ]
#
Orange Item Brackets
0
bungholio
0 00C1A684 Z
0 00C1A768 Z
0 00C499CC ZZ
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
[ZZ]80710030=Normal;38600040=Always Visible;38600000=Never Visible[/ZZ]
#
Yellow AR Display
0
bungholio
0 00C1A6B4 38800001
[Z]38800001=Normal;38800000=Never Visible[/Z]
#
Press L2 + R3 To Toggle Freezing All Things That Are Not Raiden, Sam, Or Blade Wolf
0
bungholio
0 01CDF314 F821FFF1
0 01CDF318 7C0802A6
0 01CDF31C F8010000
0 01CDF320 F8610008
0 01CDF324 3C60029D
0 01CDF328 8863F010
0 01CDF32C 70630010
0 01CDF330 2B830010
0 01CDF334 E8610008
0 01CDF338 409E0034
0 01CDF33C 3C0000A8
0 01CDF340 60000050
0 01CDF344 7F850040
0 01CDF348 419E0010
0 01CDF34C 3C000066
0 01CDF350 60004958
0 01CDF354 7F850040
0 01CDF358 419E0014
0 01CDF35C 3C00006D
0 01CDF360 6000FD50
0 01CDF364 7F850040
0 01CDF368 409E0008
0 01CDF36C 4E9E0421
0 01CDF370 E8010000
0 01CDF374 7C0803A6
0 01CDF378 38210010
0 01CDF37C 4E800020
0 008DF3A4 49CDF317
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press the
buttons.

This might risk breaking
some things in the game
while things are frozen.
*/
#
Difficulty Modifier
0
bungholio
0 0080B1FC 386000Z
[Z]00=Easy;01=Normal;02=Hard;03=Very Hard;04=Revengeance[/Z]
#
Easy Assist Is Enabled On Any Difficulty
0
bungholio
0 0080B718 60000000
0 0080B728 38600001
#
Blade Wolf's Stealth Grab Skips
0
bungholio
0 00714464 60000000 /* Ground */
0 00CF8B78 38600001 /* Air */
/*
You might need this if
you use the character
modifier to be Blade Wolf
outside of his DLC.
*/
#
Raiden Combo Crash Skips
0
bungholio
0 00C87100 60000000
/*
You might need this if
you use the character
modifier to be Raiden
outside of his chapters.
*/
#
Enemies Never Shoot
0
bungholio
0 009A6A10 4E800020
#
Instantly Complete File R-07 Bare-Handed Fight With Senator
0
bungholio
0 002845AC 38600001
/*
This might automatically
complete other things
too, use as needed.
*/
#
Instantly Complete File R-00 Train Battle With Sam While Limping And Bleeding
0
bungholio
0 00C5BEE0 38600001
/*
Also has the unwanted
effect of skipping the
movie that plays after it
too.

This might automatically
complete other things
too, use as needed.
*/
#
Press L2 + L3 To Toggle Whether Enemies Ignore You Or Not
0
bungholio
/* Enemies ignoring you effect */
0 01CDF07C 3F80029D
0 01CDF080 8B9CF008
0 01CDF084 739C0001
0 01CDF088 2B9C0001
0 01CDF08C 409E0008
0 01CDF090 38600001
0 01CDF094 2C030000
0 01CDF098 4E800020
0 008BFF64 49CDF07F
/* For non-File R-00 Raiden */
0 01CDF09C C03F0388
0 01CDF0A0 3C60029D
0 01CDF0A4 8803F009
0 01CDF0A8 2B800001
0 01CDF0AC 409E0010
0 01CDF0B0 38000000
0 01CDF0B4 9803F009
0 01CDF0B8 EC210828
0 01CDF0BC 4E800020
0 00BB9404 49CDF09F
/* For non-File R-00 Raiden displayed whole number */
0 01CDF0C0 3FA0029D
0 01CDF0C4 8BBDF008
0 01CDF0C8 73BD0001
0 01CDF0CC 2B9D0001
0 01CDF0D0 83A1007C
0 01CDF0D4 409E0008
0 01CDF0D8 3BA0FFFF
0 01CDF0DC 4E800020
0 00BB7D34 49CDF0C3
/* For non-File R-00 Raiden displayed percentage number */
0 01CDF0E0 3FA0029D
0 01CDF0E4 8BBDF008
0 01CDF0E8 73BD0001
0 01CDF0EC 2B9D0001
0 01CDF0F0 83A1007C
0 01CDF0F4 409E0008
0 01CDF0F8 3BA00000
0 01CDF0FC 4E800020
0 00BB7E60 49CDF0E3
/* For File R-00 Raiden */
0 01CDF100 3C60029D
0 01CDF104 8803F009
0 01CDF108 2B800001
0 01CDF10C 38000000
0 01CDF110 9803F009
0 01CDF114 419E0008
0 01CDF118 EC210828
0 01CDF11C 4E800020
0 00BBEF84 49CDF103
/* For File R-00 Raiden displayed whole number */
0 01CDF120 3FC0029D
0 01CDF124 8BDEF008
0 01CDF128 73DE0001
0 01CDF12C 2B9E0001
0 01CDF130 83C1007C
0 01CDF134 409E0008
0 01CDF138 3BC0FFFF
0 01CDF13C 4E800020
0 00BBECB4 49CDF123
/* For File R-00 Raiden displayed percentage number */
0 01CDF140 3FC0029D
0 01CDF144 8BDEF008
0 01CDF148 73DE0001
0 01CDF14C 2B9E0001
0 01CDF150 83C1007C
0 01CDF154 409E0008
0 01CDF158 3BC00000
0 01CDF15C 4E800020
0 00BBED70 49CDF143
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press
L2 + L3.

It will visibly display
-1.0% as your remaining
health while enemies are
unable to see you, but it
will not affect your
actual health, it is only
a visual effect so you
can see if the code is on
or not.

You can walk into enemies
or into their line of
sight and they won't
respond.

They will respond if you
attack, but they will
quickly end up blind and
have no idea of where
you are.

If you toggle this while
enemies are alert,
enemies will stay in
alert mode even after the
timer has ran out.
*/
#
Toggle AR Display For Sam With L2 + ^
0
bungholio
0 01CDF4F0 3C800224
0 01CDF4F4 8084CC30
0 01CDF4F8 2B840008
0 01CDF4FC 409E0038 /* Delete this line with 60000000 if you want it to work for everyone. */
0 01CDF500 3C80029D
0 01CDF504 8884F010
0 01CDF508 70840001
0 01CDF50C 2B840001
0 01CDF510 806E0030
0 01CDF514 409E0014
0 01CDF518 38800000
0 01CDF51C 909F5218
0 01CDF520 60630040
0 01CDF524 4800000C
0 01CDF528 3880FFBF
0 01CDF52C 7C632038
0 01CDF530 906E0030
0 01CDF534 38600000
0 01CDF538 4E800020
0 008E54D4 49CDF4F3
/*
All of the same things
that disable it for
Raiden + Blade Wolf also
disable it for Sam, but
this code will constantly
force it to remain on so
you will instead see the
flicker as if you just
activated it each time
you attack or do other
things. Use the other
code to disable the
things that deactivate
the AR Display if needed.
*/
#
Nothing Disables The AR Display
0
bungholio
0 00A0AAD0 60000000
0 00A0C534 60000000
0 00A0C628 60000000
0 00A111A4 60000000
0 00A11D30 60000000
0 00A20818 60000000
0 00A6F444 60000000
0 00AEB090 60000000
0 00B23210 60000000
/* Blade Wolf specific */
0 006C74E4 60000000
0 006C7874 60000000
0 006D1780 60000000
0 006D23EC 60000000
0 006D2944 60000000
0 006D3BEC 60000000
0 006D4120 60000000
0 006D4754 60000000
0 006E5CE4 60000000
0 0070FD54 60000000
0 008E54D0 60000000
/* Sam specific */
0 00664DCC 60000000
0 00671BB8 60000000
0 0068EDB0 60000000
0 00690FE8 60000000
0 006C3178 60000000
/*
Entering blade mode will
still partially disable
the AR Display, but it
should stay on through
everything else until you
press Up on the Direction
Pad to turn it off.

You will also need this
for Sam if you want him
to be able to use it.
*/
#
Character Modifier
0
bungholio
/* Normal Raiden */
0 01CDF700 00000000
0 01CDF704 00000000
0 01CDF708 00000000
0 01CDF70C 00000000
0 01CDF710 00000000
0 01CDF714 00000000
0 01CDF718 00000000
0 01CDF71C FFFFFFFF
/* Sam */
0 01CDF720 00000008
0 01CDF724 00000001
0 01CDF728 0000000F
0 01CDF72C 0000000A
0 01CDF730 FFFFFFFF
0 01CDF734 80000000
0 01CDF738 80000000
0 01CDF73C FFFFFFFF
/* Blade Wolf */
0 01CDF740 00000009
0 01CDF744 00000002
0 01CDF748 00000010
0 01CDF74C 0000000B
0 01CDF750 FFFFFFFF
0 01CDF754 80000000
0 01CDF758 80000000
0 01CDF75C FFFFFFFF
/* Fists Raiden */
0 01CDF760 00000007
0 01CDF764 00000000
0 01CDF768 00000000
0 01CDF76C 00000000
0 01CDF770 00000000
0 01CDF774 00000005
0 01CDF778 00000000
0 01CDF77C FFFFFFFF
/* File R-00 Raiden */
0 01CDF780 00000001
0 01CDF784 00000000
0 01CDF788 0000000E
0 01CDF78C 00000009
0 01CDF790 00000000
0 01CDF794 00000000
0 01CDF798 00000000
0 01CDF79C FFFFFFFF
/* Custom Character 1 */
0 01CDF7A0 0000Z
0 01CDF7A4 000000ZZ
0 01CDF7A8 000000ZZZ
0 01CDF7AC 000000ZZZZ
0 01CDF7B0 ZZZZZ
0 01CDF7B4 ZZZZZZ
0 01CDF7B8 ZZZZZZZ
0 01CDF7BC FFFFFFFF
/* Custom Character 2 */
0 01CDF7C0 0000Z
0 01CDF7C4 000000ZZ
0 01CDF7C8 000000ZZZ
0 01CDF7CC 000000ZZZZ
0 01CDF7D0 ZZZZZ
0 01CDF7D4 ZZZZZZ
0 01CDF7D8 ZZZZZZZ
0 01CDF7DC FFFFFFFF
/* Custom Character 3 */
0 01CDF7E0 0000Z
0 01CDF7E4 000000ZZ
0 01CDF7E8 000000ZZZ
0 01CDF7EC 000000ZZZZ
0 01CDF7F0 ZZZZZ
0 01CDF7F4 ZZZZZZ
0 01CDF7F8 ZZZZZZZ
0 01CDF7FC FFFFFFFF
/* Custom Character 4 */
0 01CDF800 0000Z
0 01CDF804 000000ZZ
0 01CDF808 000000ZZZ
0 01CDF80C 000000ZZZZ
0 01CDF810 ZZZZZ
0 01CDF814 ZZZZZZ
0 01CDF818 ZZZZZZZ
0 01CDF81C FFFFFFFF
/* Character Data Setup */
0 01CDF820 3FE0029D
0 01CDF824 8BDFF011
0 01CDF828 2B9E0000
0 01CDF82C 419E004C
0 01CDF830 3FE001CD
0 01CDF834 63FFF700
0 01CDF838 3BDEFFFF
0 01CDF83C 3BA00000
0 01CDF840 3860FFFF
0 01CDF844 63FC0000
0 01CDF848 837C0000
0 01CDF84C 2B9BFFFF
0 01CDF850 419E000C
0 01CDF854 639F0000
0 01CDF858 38630001
0 01CDF85C 7F9E1840
0 01CDF860 419E0014
0 01CDF864 3B9C0020
0 01CDF868 3BBD0001
0 01CDF86C 2B9D0008
0 01CDF870 409DFFD8
0 01CDF874 2F83FFFF
0 01CDF878 419E0028
0 01CDF87C 3FC00223
0 01CDF880 63DECB84
0 01CDF884 83BF0000
0 01CDF888 93BE00AC
0 01CDF88C 3BA00007
0 01CDF890 7FA903A6
0 01CDF894 87BF0004
0 01CDF898 97BE0014
0 01CDF89C 4200FFF8
0 01CDF8A0 E80100C0
0 01CDF8A4 4E800020
0 00AFEAC4 49CDF823
/* Combo moves + sound stuff */
0 01CDF8A8 3C800224
0 01CDF8AC 8084CC30
0 01CDF8B0 2B840008
0 01CDF8B4 38600000
0 01CDF8B8 4D9C0020
0 01CDF8BC 38600001
0 01CDF8C0 4E800020
0 008D2E80 49CDF8AB
/* Zandatsu stuff */
0 01CDF8C4 3CC00224
0 01CDF8C8 88C6CC30
0 01CDF8CC 2B860008
0 01CDF8D0 38800000
0 01CDF8D4 4D9C0020
0 01CDF8D8 38800C00
0 01CDF8DC 4E800020
0 008D6118 49CDF8C7
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press the
buttons.


Make sure you have the
necessary DLC installed
for various characters
and costumes.


You start with things
loading their normal
ways. Each time you press
the button combo, it
cycles up 1 with you
having 10 choices:

Disable, so whoever is normal for a certain area
Normal Raiden
Sam
Blade Wolf
Bare-Handed Raiden
File R-00 Raiden
Your creation 1
Your creation 2
Your creation 3
Your creation 4


They will take effect
once you restart a
checkpoint or load or
start a game.


They will likely break
various things in the
game, they were not all
designed to be able to
do all of the same
things as each other, so
be wary.


To disable a slot that
you do not want, change
the value of the 1st line
to 0000FFFF. So if you do
not have Sam or Blade
Wolf, change their values
from 00000008 and
00000009 to 0000FFFF and
their slots will be
skipped.


This is designed to
specifically go to the
next slot that is not
disabled as the current
slot. If you set the
value to 02 for Sam, then
disable Sam's slot, it
will do Blade Wolf. If
you then disabled Blade
Wolf's slot too, it will
do Fists Raiden.


It will correctly adjust
the gaps too, so if you
then change the value to
03, it will do File R-00
Raiden instead of Blade
Wolf or Fists Raiden.
Change it to 04, you get
custom character 01.
Enable Sam's slot again,
and 04 will do File R-00
Raiden again. Enable
Blade Wolf's slot, and
04 gets you Fists Raiden
again.


I also wrote it to
disable the code if you
accidentally disable all
slots and forget so it
does not crash trying to
load character 0000FFFF.


I also wrote it so going
over the limit chooses
your highest slot that is
not disabled. 0A will get
you custom character 4.
0B will get you custom
character 4 too. Disable
custom character 4, and
you will get custom
character 3. Change to
value 0F, still the same.
Enable custom character 4
again and you will have
him again.


You should not be able to
cause a crash from odd
little mistakes unless
you try odd values for
things which is your
gamble.


The 3 choice thing for
Raiden, Sam, and Blade
Wolf is a mystery to me,
but the game will crash
if you make those
different than the
character value. So value
01 for Sam will crash if
you do stuff with values
00 to 07 or value 09.


Raiden can have Sam's
costume, and Sam can have
Raiden's costumes. Blade
Wolf can only have his
own appearance, I have
never had it do anything
except crash if they do
not match.


I did not try Wigs or
Unique Weapons with Sam
or Blade Wolf.


I do not know what the
thing is that is 00000000
for Raiden or 80000000
for Sam or Blade Wolf,
try doing whatever you
want with it.


I also do not know what
the thing is that is
always FFFFFFFF for all
characters, but feel free
to mess around with it
and see what happens.


There are more values in
the area that might
affect things, but others
can explore them if they
have the patience.


Do not try character
value 02, it crashed my
game. When I did it under
older circumstances, it
instead moved the camera
far under the ground from
the starting point of a
level without a character
and crashed from various
input.

The old character
modifier was a 1 line
modification here:
00AFE6D4 607D0000 mr r29,r3


You could use this
for the old code:
0 00AFE6D4 3BA0????


It was really a chapter
section modifier value
that could give you a few
more effects that I did
not figure out in the
function. These were some
values for that:
0380 = Normal Raiden, can choose costume, all 4 item choices and can choose main weapon.
0740 = Normal Raiden with red electric sword and some blue sword slashes. No custom weapon option available, main weapon choice shows empty with no choices. Can choose costume.
0750 = Normal Raiden with red electric sword and reddish orange sword slashes. No custom weapon option choice, main weapon shows HF Murasama Blade with no ability to change it. Can choose costume.
0C00 = Sam
0D00 = Blade Wolf
0E00 = Raiden with electric sword, likely from the main menu where you choose which profile to load. Mostly black, weapons on back, strap from top right head over left eye. All 4 item choices and can choose any main weapon.
0E40 = Raiden fighting with bare hands, no swords or anything.
0EF2 = Same as 0E00?
0EF4 = Raiden from File 0? Cover on left eye, yellow shoulders and butt, blue chest and shoulder blades, black front and back, pale pink and white arms and legs, knife and sword on left hip, gun on right hip, knife on inner right leg. No AR Display. L1 doesn't do the fancy thing at full, and no HUD or item/weapon select.


I went with the new
method for a little less
crashes and other
problems, but probably
lost a few simple effects
in the process due to my
laziness in figuring out
things, like the red
slash effect of Ripper
Mode Raiden and possibly
other unique things.
*/
[Z]FFFF=Disable character slot;0000=Normal Raiden;0001=File R-00 Raiden;0003=Normal Raiden;0004=Bare-handed fists fighting Raiden from chapter 7, even though alone it does not work.;0005=Normally ripper Raiden with orange sword swings and only 1 weapon.;0006=Same as 0E00 from the other thing.;0007=Forced unique weapon usage Raiden, can be used to fight bare handed.;0008=Sam;0009=Blade Wolf[/Z]
[ZZ]00=Use if a Raiden;01=Use if Sam;02=Use if Blade Wolf[/ZZ]
[ZZZ[00=Custom Body;01=Custom Body (Red);02=Custom Body (Blue);03=Custom Body (Yellow);04=Custom Body (Desperado Version);05=Suit;06=Mariachi Uniform;07=Standard Body;08=Original Body;09=Gray Fox;0A=White Armor;0B=Inferno Armor;0C=Commando Armor;0D=Same as 00? I can't spot a single difference.;0E=Standard Body, except sword is on left hip instead of on his back.;0F=Sam;10=Blade Wolf, do not ever use this with Raiden or Sam or the game will load forever, and don't give Blade Wolf any of their values or you will have the same problem.[/ZZZ]
[ZZZZ]00=HF Blade;01=Stun Blade;02=Armor Breaker;03=HF Long Sword;04=HF Wooden Sword;05=HF Murasama Blade;06=Fox Blade;07=HF Machete;08=HF Blade, seems identical to 00.;09=HF Blade, different grip with a cable attached.;0A=Sam's HF Murasama Blade;0B=Blade Wolf's HF Chainsaw;0C=Says HF Blade, but you're swinging nothing with an electrical glow around it.[/ZZZZ]
[ZZZZZ]00000000=Normal;00000001=Brown Infinite Wig 1 (ammo);00000002=Blue Infinite Wig 2 (fuel-cell energy);00000003=Blonde Blade Mode Wig;FFFFFFFF=Sam or Blade Wolf[/ZZZZZ]
[ZZZZZZ]00000000=None Equipped;00000001=crash, probably removed from game.;00000002=Pole-Arm "L'Étranger";00000003=Tactical Sai "Dystopia";00000004=Pincer Blades "Bloodlust";00000005=Bare-handed fist fighting, requires character thing to be 7 to work even though it is 4 in the fight with the senator;80000000=Sam or Blade Wolf[/ZZZZZZ]
[ZZZZZZZ]00000000=Raiden;80000000=Sam or Blade Wolf[/ZZZZZZZ]
#
AoB Big OGP/COP Enable Code
0
bungholio
B 00010000 04000000
B 01684E5C016851F801010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 01684E5C016851F801010000000000000000000000000000000000000000000000000000000000000000000000000000808336A82B840000409D001C7C8903A680A336A08085000C9085000438A500184200FFF4808336A848A082EA62746C5F73616D5F33000000503734305F41524D5354524F4E4700003C80022C6084F1A73CA001CD60A5EF1B8CC400018C0500017F860040409E00382B800000419E00084BFFFFE83C80020C80843A70708400102B8400104C9E00203C8002248084CC302B8400014C9E0020480000503C80022C6084F1A73CA001CD60A5EF278CC400018C0500017F8600404C9E00202B800000419E00084BFFFFE83C8002248084CBE82B8400054C9E00203C8002248084CC302B8400044C9E0020F821FD6148A718F67C8428103CA0020C80A53A7038E0011064E780007F872840419E00088083084448A8299EF881FFF8F8A1FFF03C80029DA0A4F000A004F00A70A50040B0A4F00A2B850040409E00147F850040419E000C38800002909F05ECE881FFF8E8A1FFF063E300004E8000203C60029DA083F000A003F00C70840040B083F00C2B840040409E00147F840040419E000C38800008909F05E863E300004E8000203F80029D8B9CF008739C00012B9C0001409E0008386000012C0300004E800020C03F03883C60029D8803F0092B800001409E0010380000009803F009EC2108284E8000203FA0029D8BBDF00873BD00012B9D000183A1007C409E00083BA0FFFF4E8000203FA0029D8BBDF00873BD00012B9D000183A1007C409E00083BA000004E8000203C60029D8803F0092B800001380000009803F009419E0008EC2108284E8000203FC0029D8BDEF00873DE00012B9E000183C1007C409E00083BC0FFFF4E8000203FC0029D8BDEF00873DE00012B9E000183C1007C409E00083BC000004E800020F861FFF8F881FFF03C60029DA083F00070840040A043F018B083F0182B840040409E00147F841040419E000C38600000907F05ECE861FFF8E881FFF0E84100284E800020F861FFF8F8A1FFF03C60029DA083F00070840040A0A3F01AB083F01A2B840040409E001C7F842840419E00143C60001060630004907F05E848000008E861FFF8E8A1FFF03C8000104E800020F861FFF8F881FFF0F8A1FFE83C60029DA083F00070840040A0A3F01CB083F01C2B840040409E00147F842840419E000C38600000907F05ECE861FFF8E881FFF0E8A1FFE84E800020F861FFF8F8A1FFF03C60029DA083F00070840040A0A3F01EB083F01E2B840040409E00147F842840419E000C38600005B07F05EAE861FFF8E8A1FFF03C8000014E800020F861FFF8F881FFF0F8A1FFE83C60029DA083F00070840040A0A3F002B083F0022B840040409E00147F842840419E000C38600000907F05ECE861FFF8E881FFF0E8A1FFE82C0400014E800020F861FFF8F881FFF0F8A1FFE83C60029DA083F00070840040A0A3F004B083F0042B840040409E00147F842840419E000C38600004907F05E8E861FFF8E881FFF0E8A1FFE82C0300074E800020F821FFF17C0802A6F8010000F86100083C60029D8863F010706300102B830010E8610008409E00343C0000A8600000507F850040419E00103C000066600049587F850040419E00143C00006D6000FD507F850040409E00084E9E0421E80100007C0803A6382100104E800020F821FFF97C0802A6F80100003FE000003FC0020683DEE7343FA0020683BDEB7463BC0000807E00003863FFF88083001080BC00002B850000419E001880A500107F842840419E00103B9C00044BFFFFE448793BCB3BFF00013BDE00042B9F000B419CFFC03FC0020683DEE74C2B9E0000419E003C3B9D002C807E006C808300002B84002C409E00283863FFF88083001080BC00002B850000419E001080A500107F842840419E000848793BCBE80100007C0803A638210008E80100C04E8000202B830000419E001480A3FFFC38C0FFFC7CA5303890A3FFFC606500004E8000207C8720143CA0029D3800000080C5F0207F833040409E000C808608449005F02080C5F0247F833040409E000C808608449005F024488E08B6386000003CC0029D8006F0202B800000419E000C9066F0204E8000208006F0242B800000419E000C9066F0244E8000207C7BE0104E8000203D20029D8929F010712900042B8900047C844010409E000838800000488E089A3C8002248084CC302B840008409E00383C80029D8884F010708400012B840001806E0030409E001438800000909F5218606300404800000C3880FFBF7C632038906E0030386000004E8000203C60029D889E00099883F000889E000B9883F001A083F00070850201A0C3F006B0A3F0062B850201409E00287F853040419E002088E3F00868E700013CC0022D38A0000190A6CE5C98A3F00998E3F00870850401A0C3F00EB0A3F00E2B850401409E00187F853040419E001088E3F01068E7001098E3F01070851002A0C3F01EB0A3F01E2B851002409E00247F853040419E001C88E3F01138E700012B87000A409D000838E0000098E3F01170851001A0C3F028B0A3F0282B851001409E00187F853040419E001088E3F01068E7000198E3F01070852001A0C3F02AB0A3F02A2B852001409E00187F853040419E001088E3F01068E7000298E3F01070854001A0C3F02CB0A3F02C2B854001409E00187F853040419E001088E3F01068E7000498E3F01070858001A0C3F02EB0A3F02E2B858001409E00187F853040419E001088E3F01068E7000898E3F010E88100384E8000203C60029DA063F0002B830008C03E0004409E00103C60Z9061FFFCC021FFFC4E8000203CC0029D88C6F01080A3000470C000022B800002409E00082B850001409E000C3C00ZZ4800001C70C000082B800008409E00082B850002409E000C3C00ZZZ90040000C02400004E80002000000000000000000000000000000000000000000000000000000000FFFFFFFF00000008000000010000000F0000000AFFFFFFFF8000000080000000FFFFFFFF0000000900000002000000100000000BFFFFFFFF8000000080000000FFFFFFFF00000007000000000000000000000000000000000000000500000000FFFFFFFF00000001000000000000000E00000009000000000000000000000000FFFFFFFF0000FFFF000000000000000000000000000000000000000000000000FFFFFFFF0000FFFF000000000000000000000000000000000000000000000000FFFFFFFF0000FFFF000000000000000000000000000000000000000000000000FFFFFFFF0000FFFF000000000000000000000000000000000000000000000000FFFFFFFF3FE0029D8BDFF0112B9E0000419E004C3FE001CD63FFF7003BDEFFFF3BA000003860FFFF63FC0000837C00002B9BFFFF419E000C639F0000386300017F9E1840419E00143B9C00203BBD00012B9D0008409DFFD82F83FFFF419E00283FC0022363DECB8483BF000093BE00AC3BA000077FA903A687BF000497BE00144200FFF8E80100C04E8000203C8002248084CC302B840008386000004D9C0020386000014E8000203CC0022488C6CC302B860008388000004D9C002038800C004E800020
[Z]3F80=Default Running Speed;3FA0=1.25x;3FC0=1.5x;3FE0=1.75x;4000=2x;4040=3x;4080=4x;40A0=5x[/Z]
[ZZ]3F80=Default Player Animation Speed;3F40=0.75x;3F50=0.8125x;3F60=0.875x;3F70=0.9375x;3F90=1.125x;3FA0=1.25x;3FB0=1.375x;3FC0=1.5x;3FD0=1.625x;3FE0=1.75x;3FF0=1.875x;4000=2x;4010=2.25x;4020=2.5x;4030=2.75x;4040=3x[/ZZ]
[ZZZ]3F80=Default Enemy Animation Speed;3D00=0.03125x;3D80=0.0625x;3E00=0.125x;3E80=0.25x;3EC0=0.375x;3F00=0.5x;3F20=0.625x;3F40=0.75x;3F60=0.875x;3FA0=1.25x;3FC0=1.5x;3FE0=1.75x;4000=2x;4010=2.25x;4020=2.5x;4030=2.75x;4040=3x[/ZZZ]
/*
If you do all OGP/COP
stuff, use this. It is
most of the long routine
codes combined because
I kept running into
unsafe places in this
game that caused various
problems like freezing at
certain points or various
things not loading.
Because of that, I moved
everything together into
1 consecutive clump of
code. Activate this or
you will crash your game.


I left out the choice
stuff for the character
modifier because that
would be a massive amount
of choices. You will need
need manually edit the
values near the end as
needed.


It is required for these
codes, and has their
routines in this order:


Fuel Cells Always Full
Invincibility For Raiden
Damage Fully Refills Health
Dwarf Gekko Can Jump In The Air
Press L2 + L3 To Toggle Whether Enemies Ignore You Or Not
Sam Can Jump In The Air
Blade Wolf Can Jump In The Air
Raiden Can Jump In The Air
Press L2 + R3 To Toggle Freezing All Things That Are Not Raiden, Sam, Or Blade Wolf
Have All Items
Damage Fully Refills Health For Things Raiden Controls
Invincibility For Things Raiden Controls
Press L2 + \/ To Toggle Any Damage Kills Everything
Toggle AR Display For Sam With L2 + ^
Button Enable Code
Running Speed Modifier
Animation Speed Modifiers
Character Modifier With R2 + ^
*/
#
AoB Eboot Enable Code
0
Medo
B 00010000 04000000
B 000000000001000000000000000100000000000001CCEEE80000000001CCEEE8 000000000001000000000000000100000000000001CD00000000000001CD0000
/*
Just turn it on, it will
not cause any problems
and will make sure my
codes with routines will
not crash your game.
*/
#
AoB System Software Mode Partial Saving + Loading Fixes
0
bungholio
B 00010000 04000000
B 48000094809F00002C0400034082000C93DF00144800007C907F00105464203630BF00487C9F201478BB002030C4001833BD474C78DC00206363000063A4000038A0474C488411A1E841002863E300006384000063A500004BFFFD79807F0010636400006385000038C000004BFFFC65 48000094809F00002C0400034082000C93DF00144800007C907F00105464203630BF00487C9F201478BB002030C4001833BD474C78DC00206363000063A4000038A0474C488411A1E841002863E300006384000063A500004BFFFD79807F0010636400006385000038C0000038600000
B 00010000 04000000
B 607E0000FBA10088FB810080FB610078609F00004082000C38600000480000A0386000043C80020763FB00003BA00000907E0000806432002C0300004082007C 607E0000FBA10088FB810080FB610078609F00004082000C38600000480000A0386000043C80020763FB00003BA00000907E0000806432002C0300004800007C
/*
0206E7E4 an 02073200 are
the important addresses
with the same values.

00 = Normal continuation
02 = load profile data for profile screen
03 = save profiles
04 = load profiles
06 = delete profiles
07 = break your game


You will need at least 1
profile created already.

Anywhere you save in 1
profile will be where you
will always continue in
any profile until you
turn off the code.

Use the rebug mode trick,
and once you get to the
spot where you can load a
profile, then you can
connect to your PS3.

It disables loading and
saving, but is better
than nothing when
combined with all of the
unlock and access codes
and whatever else to do
whatever you need for
testing or code hunting.
*/
#
AoB Button Enable Code
0
bungholio
B 00010000 04000000
B 7CA308147CDE182E7884002078A50020306300087C6307B48084000490C500389085003C4200FFD8E881003830610100 7CA308147CDE182E7884002078A50020306300087C6307B48084000490C500389085003C4200FFD849CDF53F30610100
/*
Dump Address = 0x0253F000

0001 = L2
0002 = R2
0004 = L1
0008 = R1
0010 = Triangle
0020 = O
0040 = X
0080 = []
0100 = Select
0200 = L3
0400 = R3
0800 = Start
1000 = ^
2000 = >
4000 = \/
8000 = <
*/
#
AoB Marker For The Dwarf Gekko That Raiden Controls In File R-02
0
bungholio
B 00010000 04000000
B 01D7263400000000000000000000000000000000 01D726343C60029D93E3F02063E300004E800020
B 00010000 04000000
B 607E000063E3000048603371600000002C030000418100F4807F0E3C2C0300004182004C63E30000 607E00004968505F48603371600000002C030000418100F4807F0E3C2C0300004182004C63E30000
/*
In Chapter 2, you will
encounter a spot where
you will need to control
a Dwarf Gekko to continue
on, and this works for
it without marking the
other Dwarf Gekkos around
you.
*/
#
AoB Marker For The Turrets That Raiden Can Control In File R-04
0
bungholio
B 00010000 04000000
B 01D725D400000000000000000000000000000000 01D725D43C60029D93E3F024807C00004E800020
B 00010000 04000000
B 7F1CC0147C78E0102C03000041820490807C00002C8300012C0300004C423382 7F1CC0147C78E0102C030000418204904968508B2C8300012C0300004C423382
/*
In the very beginning
room in Chapter 4 after
you go up the steps but
before you get on the
elevator, there are 2
turrets you can use on
the enemies.
*/
#
AoB Can Access The Collection Menu From The Main Menu Without Having Any Of Them Unlocked
0
bungholio
B 00010000 04000000
B 2C030000418200083B800001388000062C1E00002F1D0000989F00C64082000C 2C030000600000003B800001388000062C1E00002F1D0000989F00C64082000C
#
AoB Enter The Collection Menu To Unlock All Titles
0
bungholio
B 00010000 04000000
B 01D723B0000000000000000000000000 01D723B09003000C7C0B00344E800020
B 00010000 04000000
B 7D6B4038794A00207D6B003430A50001556BDFFE30C6000430E700047D7F492E 7D604378794A002049684E7B30A50001556BDFFE30C6000430E700047D7F492E
#
AoB Enter The Collection Menu To Unlock All IDs
0
bungholio
B 00010000 04000000
B 01D72480000000000000000000000000 01D72480900300047C0900344E800020
B 00010000 04000000
B 7D2903A67F69283083430004550AE8FA78CB00207F4948387D4A20147D290034 7D2903A67F69283083430004550AE8FA78CB00207F404B787D4A201449684EA7
#
AoB Enter The Collection Menu To Unlock All MIBs
0
bungholio
B 00010000 04000000
B 01D72680000000000000000000000000 01D72680900300087C0900344E800020
B 00010000 04000000
B 83230008550AE8FA78CB00207F2948387D4A20147D290034794A00205529DFFE 83230008550AE8FA78CB00207F204B787D4A201449684ED3794A00205529DFFE
#
AoB Enter The Collection Menu To Unlock All Data
0
bungholio
B 00010000 04000000
B 01D7235C000000000000000000000000 01D7235C900300007C0900344E800020
B 00010000 04000000
B 7D2903A67F69283083230000550AE8FA78CB00207F2948387D4A20147D290034 7D2903A67F69283083230000550AE8FA78CB00207F204B787D4A201449684EFF
#
AoB Enter The Collection Menu To Unlock All Jetstream Titles
0
bungholio
B 00010000 04000000
B 01D7234C000000000000000000000000 01D7234C901D28947C0800344E800020
B 00010000 04000000
B 7F6820307C6301947D284038786317647C8A2E707D08003478AB00207D2A0194 7F6820307C6301947D204378786317647C8A2E7049684F2B78AB00207D2A0194
#
AoB Enter The Collection Menu To Unlock All Jetstream Data
0
bungholio
B 00010000 04000000
B 01D7248C000000000000000000000000 01D7248C901D28907C0800344E800020
B 00010000 04000000
B 7CE701947D48403878E717647C692E707D0800347D2901947CFD381478AA0020 7CE701947D40437878E717647C692E7049684F577D2901947CFD381478AA0020
#
AoB Enter The Collection Menu To Unlock All Blade Wolf Titles
0
bungholio
B 00010000 04000000
B 01D72550000000000000000000000000 01D72550901D28AC7C0800344E800020
B 00010000 04000000
B 7C6301947D484038786317647C892E707D0800347D2901947C63381478AA0020 7C6301947D404378786317647C892E7049684F837D2901947C63381478AA0020
#
AoB Enter The Collection Menu To Unlock All Blade Wolf Data
0
bungholio
B 00010000 04000000
B 01D722F0000000000000000000000000 01D722F0901D28A87C0600344E800020
B 00010000 04000000
B 7CA501947D06303878A517647C672E707CC600347CE701947CBD28147BC80020 7CA501947D00337878A517647C672E7049684FAF7CE701947CBD28147BC80020
#
AoB Can Access The VR Missions Menu From The Main Menu Without Having Any Of Them Unlocked
0
bungholio
B 00010000 04000000
B 600000002C030000418200083BA00001807B03D02C03000040820058807B03D8 600000002C030000600000003BA00001807B03D02C03000040820058807B03D8
#
AoB Enter The VR Missions Menu To Unlock All VR Missions
0
bungholio
B 00010000 04000000
B FF3626FD000000000000000000000000 FF3626FD7C031B787C65212E4E800020
B 00010000 04000000
B 7884002078C62EA47C6618107CE318307C85202E7C8318387C6300345463DFFE6863000148000078 7884002078C62EA47C6618107CE318307C05202E49684E537C6300345463DFFE6863000148000078
B 00010000 04000000
B 7884002078C62EA47C6618107CE318307C85202E7C8318387C6300345463DFFE686300014800002C 7884002078C62EA47C6618107CE318307C05202E49684E537C6300345463DFFE686300014800002C
#
AoB Can Access The Chapters Menu Without Having Any Of Them Unlocked
0
bungholio
B 00010000 04000000
B FB0100A0FAE10098FAC10090FAA10088FA81008063A30000480134A160000000 FB0100A0FAE10098FAC10090FAA10088FA81008063A30000480134A138600001
#
AoB Enter The Chapters Menu To Unlock All Chapters On All Difficulties + Unlock Customize Menu
0
bungholio
B 00010000 04000000
B 7C6328107C8407B47C633014786300207C63202E7C6300345463DFFE686300014E800020 7C6328107C8407B47C633014380000017C03212E7C0300345463DFFE686300014E800020
#
AoB Enter The Chapters Menu To Unlock All Difficulties
0
bungholio
B 00010000 04000000
B 2F0600002C8500004182000C386000014800007880A41EE02C05000040820010 2F0600002C8500004182000C386000014800007838A0000190A41EE048000010
B 00010000 04000000
B 2F0600002C8500004182000C386000014800007880A41F982C05000040820010 2F0600002C8500004182000C386000014800007838A0000190A41F9848000010
#
AoB Can Access The Customize Menu From The Main Menu Without Having Anything Unlocked
0
bungholio
B 00010000 04000000
B 600000003880FFFF607D000038600006909F009C909F00B0909F00B4909F00B8 386000013880FFFF607D000038600006909F009C909F00B0909F00B4909F00B8
#
AoB Enter The Customize Menu To Unlock All Equipment
0
bungholio
B 00010000 04000000
B 7F7BC014887B28CC2C0300012C8300002F0300022F8300034181000C40850010 7F7BC01438600003987B28CC2C8300002F0300022F8300034800000C40850010
B 00010000 04000000
B 7C7607B47ED6C014887628CC2C0300012C8300002F0300022F8300034181000C 7C7607B47ED6C01438600003987628CC2C8300002F0300022F8300034800000C
B 00010000 04000000
B 88A428CC2C0500012C8500002F0500022F8500034181000C408500104800010C 38A0000398A428CC2C8500002F0500022F8500034800000C408500104800010C
#
AoB Always Get A No Damage Bonus At The End Of A Chapter
0
bungholio
B 00010000 04000000
B 809E00AC913E0010813F00282C0900004182000C39200001913E0004813F0038 809E00AC913E0010813F00282C0900004182000C39200000913E0004813F0038
/*
You can take all the
damage you want and this
will still work.
*/
#
AoB Always Get A No Alert Bonus At The End Of Blade Wolf's Chapters
0
bungholio
B 00010000 04000000
B 600000002C03000041820024807E3978809F00807C632014809E3974907E3978807F00907C641814907E3974 600000002C03000041820024807E3978809F00807C632014809E3974907E3978807F009038600000907E3974
#
AoB Always Get A No Kills Bonus At The End Of A Chapter
0
bungholio
B 00010000 04000000
B 815F003C817F00407D2950147D2958142C0900004182000C39200001913E0008 815F003C817F00407D2950147D2958142C0900004182000C39200000913E0008
/*
You can still kill as
many enemies as you want
and this will still work.
*/
#
AoB Total Chapter Time Never Increases
0
bungholio
B 00010000 04000000
B C0490000FC011000418000103D204A5B6129B9FC913E00003D200098815E000C6129967F C0490000FC011000600000003D204A5B3D200000913E00003D200098815E000C6129967F
#
AoB Alternative Total Chapter Time Never Increases
0
bungholio
B 00010000 04000000
B F821FF717C0802A6F80100A0FBE100883C800207607F0000FBC100803084A09833C4373C7BDE0020C05E0000807E000CEC22082A F821FF717C0802A6F80100A0FBE100883C800207607F0000FBC100803084A09833C4373C7BDE0020C05E0000807E000CEC210828
#
AoB Combo Timer Modifier
0
bungholio
B 00010000 04000000
B 2C0500004182001038A0000090BF001090BF000C80BF000C2C050000418200183CA040C0 2C0500004182001038A0000090BF001090BF000C80BF000C2C050000418200183CA0Z
[Z]40C0=Default 6 Seconds;4120=10 Seconds;41A0=20 Seconds;41F0=30 Seconds;7F80=+Infinity[/Z]
#
AoB Combo Multiplier
0
bungholio
B 00010000 04000000
B 7C0428004182008030C3001038A0000078C600207CE6282830E7000178E700207CE6292D4082FFF0 7C0428004182008030C3001038A0000078C600207CE6282830E7Z78E700207CE6292D4082FFF0
[Z]0001=Default;000A=10x;0064=100x;03E8=1,000x;2710=1 0,000x[/Z]
#
AoB Parts Multiplier
0
bungholio
B 00010000 04000000
B 30A300143880000078A500207CC5202830C6000178C600207CC5212D4082FFF0 30A300143880000078A500207CC5202830C6Z78C600207CC5212D4082FFF0
[Z]0001=Default;000A=10x;0064=100x;03E8=1,000x;2710=1 0,000x[/Z]
#
AoB No Chapter Failures
0
bungholio
B 00010000 04000000
B 80A3003030A500017CA607B47CE520107C8620107C84FE767C8438387C852014908300304800003C 80A3003030A500017CA607B47CE520107C8620107C84FE767C84383838800000908300304800003C
#
AoB Zandatsus Multiplier
0
bungholio
B 00010000 04000000
B 3083006C38600000788400207CA4182830A5000178A500207CA4192D4082FFF04E800020 3083006C38600000788400207CA4182830A5Z78A500207CA4192D4082FFF04E800020
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
AoB BP Gained Multiplier
0
bungholio
B 00010000 04000000
B 01D72544000000000000000000000000 01D725441C84Z7D6B201448B23C4E
B 00010000 04000000
B 3CE0009830C3007038A0000060E7967F78C60020812300708163007039000000394000007D6B2014 3CE0009830C3007038A0000060E7967F78C600208123007081630070390000003940000049685032
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
/*
The code to have all
items has a side effect
of triggering this
nonstop when you restart
areas, so disable that if
you need.
*/
#
AoB Kills Multiplier
0
bungholio
B 00010000 04000000
B 7CC903A64E9E0421E8410028309F008838600000788400207CA4182830A50001 7CC903A64E9E0421E8410028309F008838600000788400207CA4182830A5Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
AoB Individual Battle Timers Never Increase
0
bungholio
B 00010000 04000000
B F821FF817C0802A6F8010090FBE10078607F0000806300C0FBC100702C030000418200EC3FC0020733DEA098307E37F478630020C043000480830008EC22082A F821FF817C0802A6F8010090FBE10078607F0000806300C0FBC100702C030000418200EC3FC0020733DEA098307E37F478630020C043000480830008EC210828
#
AoB Damage Multiplier
0
bungholio
B 00010000 04000000
B 01D724D8000000000000000000000000 01D724D838E000001C84Z488E0896
B 00010000 04000000
B 4E80002090830844908308404E800020908308444E800020908308404E8000208103084038C0000038E00000 4E80002090830844908308404E800020908308444E800020908308404E8000208103084038C0000049684FDA
[Z]0001=Default;0002=2x;0003=3x;0004=4x;0005=5x;0006= 6x;0007=7x;0008=8x;0009=9x;000A=10x[/Z]
#
AoB Press L2 + \/ To Toggle Any Damage Kills Everything
0
CodeUnique3
B 00010000 04000000
B 7C8440102C0500007C8807B47C8720107CC830107CC6FE767CC42038 49CDF4D22C0500007C8807B47C8720107CC830107CC6FE767CC42038
/*
This also affects you, so
activate other codes as
necessary.

This will not instantly
kill enemies using a
shield against you.

There is a separate code
to destroy their shield
with any damage.
*/
#
AoB Instant Zandatsu Square Size Modifier
0
bungholio
B 00010000 04000000
B 01D7253C00000000000000000000000000000000 01D7253C3C60Z90780030C03800304E800020
B 00010000 04000000
B 78A50020909D00087C4018CE7C40D1CE7C4028CE30B800707C40D9CEC0380030 78A50020909D00087C4018CE7C40D1CE7C4028CE30B800707C40D9CE49685007
[Z]4120=Default 10;41A0=2x;41F0=3x;4220=4x;4248=5x;42C8=10x;447A=1 00x[/Z]
/*
Unlike the other one, you
can use this to instantly
change the size of any
square while playing.
*/
#
AoB Zandatsu Square Size Multiplier
0
bungholio
B 00010000 04000000
B 4000000060000000F821FF517C0802A6F80100C0FBC100A0FB81009033C30160607C0000FBE100A8 Z60000000F821FF517C0802A6F80100C0FBC100A0FB81009033C30160607C0000FBE100A8
B 00010000 04000000
B 600000002C0300004182001C3C6000B1C03F003038634828C0430000EC2100B2 600000002C030000600000003C6000B1C03F003038634828C0430000EC2100B2
[Z]40000000=Default 2x;40400000=3x;40800000=4x;40A00000=5x;40C00000=6x ;40E00000=7x;41000000=8x;41100000=9x;41200000=10x; 42C80000=100x[/Z]
/*
Normally this only works
for Easy Assist Mode, I
have it working for any
difficulty.

This sets the size of the
square the 1st time you
see it while playing. If
you change the value and
have already seen the
square size for an enemy,
it will not change until
restart your checkpoint.
*/
#
AoB Any Damage Breaks Enemy Shields
0
bungholio
B 00010000 04000000
B 48555B0D60000000607A000080DC000480FE08A063C30000811E0000634400007CE63810 48555B0D60000000607A000080DC000480FE08A063C30000811E00006344000038E00000
B 00010000 04000000
B 483EF07D60000000607A000080DC000480FE08A063C30000811E0000634400007CE63810 483EF07D60000000607A000080DC000480FE08A063C30000811E00006344000038E00000
B 00010000 04000000
B 60000000607A000080DB000480FE08A063C30000811E0000634400007CE63810 60000000607A000080DB000480FE08A063C30000811E00006344000038E00000
#
AoB Any Damage Stuns Raiden's Cyborgs
0
bungholio
B 00010000 04000000
B 3B00000838A0000038E0000063E300006084000B38C000004BFB3D252C1A0000418200B862E3000038800014 3B00000838A0000038E0000063E300006084000B38C000004BFB3D252C1A00006000000062E3000038800014
B 00010000 04000000
B 3063FFFF2C030000418200203C80000A38E0000063E300006084001538A0000038C000004BFB3CD962E300003880001F4868738960000000 3063FFFF2C030000418200203C80000A38E0000063E300006084001538A0000038C000004BFB3CD962E300003880001F4868738938600001
#
AoB Any Damage Makes Raiden's Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B 62B8000048000EE863E300004BFB493D2C0300004182005C62E300003880001E48687BBD60000000 62B8000048000EE863E300004BFB493D2C0300004182005C62E300003880001E48687BBD38600001
#
AoB Any Damage Electrically Stuns Raiden's Cyborgs
0
bungholio
B 00010000 04000000
B 600000002C030000418200C8386000C8809F1684907F151C3064FFFF2C0300004082005C63E3000038800006 386000012C030000418200C8386000C8809F1684907F151C3064FFFF2C0300004082005C63E3000038800006
#
AoB Any Damage Electrically Stuns Raiden's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 807F10D464630002907F10D4480001F830BE008C78A5002080C5000054C6039C2C0600004182005463E3000038800006 807F10D464630002907F10D4480001F830BE008C78A5002080C500003CC000022C0600004182005463E3000038800006
#
AoB Any Damage Decapitates Raiden's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 5485039C546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200BC40860064807F00942C0300004182004463C300004BF6BE1D 3CA00002546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200BC40860064807F00942C0300004182004463C300004BF6BE1D
#
AoB Any Damage Stuns Raiden's Heavily Armed Cyborgs
0
bungholio
B 00010000 04000000
B 93BF1A586084001538A0000038C0000038E000004BFB28416239000063E300003880001348701EC5600000007C63BB782C03000040820198 93BF1A586084001538A0000038C0000038E000004BFB28416239000063E300003880001348701EC5600000007C63BB782C03000060000000
B 00010000 04000000
B 93BF1A642C19000040820D043075008C7863002080630000546307FE2C030000 93BF1A642C190000600000003075008C7863002080630000386000012C030000
#
AoB Any Damage Makes Raiden's Heavily Armed Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B 41820F6863E300004BFE1441807F18C82C03000040820F5462A300003880001E48685FFD60000000 41820F6863E300004BFE1441807F18C82C03000040820F5462A300003880001E48685FFD38600001
#
AoB Any Damage Electrically Stuns Raiden's Heavily Armed Cyborgs
0
bungholio
B 00010000 04000000
B 7C6300347C9620107863D1467C63FE767C6320387ED6181462A300003880000E48685E79600000002C0300004182006038A000C863E300003880000690BF151C 7C6300347C9620107863D1467C63FE767C6320387ED6181462A300003880000E48685E79386000012C0300004182006038A000C863E300003880000690BF151C
#
AoB Any Damage Stuns Raiden's Fenrirs
0
bungholio
B 00010000 04000000
B 546307FE2C030000418200843C600021C03F1960386359CCC0430004FC0110004181006C 386000012C030000418200843C600021C03F1960386359CCC0430004FC01100060000000
#
AoB Any Damage Makes Raiden's Fenrirs Completely Blue
0
bungholio
B 00010000 04000000
B 4800005C307B008C7863002080630000546307BC2C0300004182003C63E30000 4800005C307B008C7863002080630000386000022C0300004182003C63E30000
#
AoB Any Damage Electrically Stuns Raiden's Fenrirs
0
bungholio
B 00010000 04000000
B 80D300002C9500002F16000054C6039C2C0600004182001C3F600003637B000B 80D300002C9500002F1600003C6000022C0600004182001C3F600003637B000B
#
AoB Any Damage Stuns Raiden's GRADs
0
bungholio
B 00010000 04000000
B 546307FE2C030000418200B43C6000077C131800418200A83C60000FC03F22A838639010C0430010FC01100041810090 386000012C030000418200B43C6000077C131800600000003C60000FC03F22A838639010C0430010FC01100060000000
#
AoB Any Damage Makes Raiden's GRADs Completely Blue
0
bungholio
B 00010000 04000000
B 41860030809F221C607600002C040000418200F0309A008C607600007884002080840000548407BC2C040000 41860030809F221C607600002C040000418200F0309A008C607600007884002080840000388000022C040000
#
AoB Any Damage Electrically Stuns Raiden's GRADs
0
bungholio
B 00010000 04000000
B 60000000337A008C7B7B0020807B00005464039C2C040000418200283C800007 60000000337A008C7B7B0020807B00003C8000022C040000418200283C800007
#
AoB Any Damage Stuns Raiden's Mastiffs
0
bungholio
B 00010000 04000000
B 408200EC809F142C7C0418004181002C63E300003880003E93DF144838A0000038C0000038E0000048811BED6000000062B70000480000B880760000546407FE2C040000418200783C80000CC03F1478388498A0C044000CFC01100041810060 60000000809F142C7C0418004181002C63E300003880003E93DF144838A0000038C0000038E0000048811BED6000000062B70000480000B880760000388000012C040000418200783C80000CC03F1478388498A0C044000CFC01100060000000
#
AoB Any Damage Makes Raiden's Mastiffs Completely Blue
0
bungholio
B 00010000 04000000
B 4082000867180001807F14842C030000408200B0807D00002C0300924182001480760000546307BC 4082000867180001807F14842C030000408200B0807D00002C030092418200148076000038600002
#
AoB Any Damage Stuns Raiden's Raptors
0
bungholio
B 00010000 04000000
B 6000000093BF123C80780000546307FE2C03000041820098C03F1AE0FC01F8004181008C 6000000093BF123C80780000386000012C03000041820098C03F1AE0FC01F80060000000
#
AoB Any Damage Makes Raiden's Raptors Completely Blue
0
bungholio
B 00010000 04000000
B 2C0300022C83FFFF41820008408600203C6000093C80020C38A35AE030644020C025001048A783FD6000000080780000546307BC2C0300004182005863B7000062E4000063E3000038A00000 2C0300022C83FFFF41820008408600203C6000093C80020C38A35AE030644020C025001048A783FD6000000080780000386000022C0300004182005863B7000062E4000063E3000038A00000
#
AoB Any Damage Electrically Stuns Raiden's Raptors
0
bungholio
B 00010000 04000000
B 6000000093BF123C807800005463039C2C0300004182005863E30000 6000000093BF123C807800003C6000022C0300004182005863E30000
#
AoB Any Damage Stuns Raiden's Vodomjerkas
0
bungholio
B 00010000 04000000
B 600000002C0300004182006863E300004BFECC052C0300004182005863A300003880001F 386000012C0300004182006863E300004BFECC052C0300006000000063A300003880001F
#
AoB Any Damage Makes Raiden's Vodomjerkas Completely Blue
0
bungholio
B 00010000 04000000
B 600000002C0300004182002C63E300003880018F6205000038C000004BFEBCB1807F19402C0300004082000C63E300004BFEEC11807F19402C030000408205E063E30000 386000012C0300004182002C63E300003880018F6205000038C000004BFEBCB1807F19402C0300004082000C63E300004BFEEC11807F19402C030000408205E063E30000
#
AoB Any Damage Electrically Stuns Raiden's Vodomjerkas
0
bungholio
B 00010000 04000000
B 600000002C030000418200F863E300004BFECB892C0300004082002063E30000487BDCFD600000003C800006608400017C0320004082002C3C800006923F1EB8 386000012C030000418200F863E300004BFECB892C0300004082002063E30000487BDCFD600000003C800006608400017C0320004082002C3C800006923F1EB8
#
AoB Any Damage Stuns Raiden's Gekkos
0
bungholio
B 00010000 04000000
B 939F19386084000438A0000038C0000038E00000390000004BFE83AD62760000480001002C170000418200F880950000548305282C0300004182004480740000546503DE2C050000408200345463014A2C030000408200283C80000638E000006084000463E3000038A0000038C00000390000004BFE835180950000548307FE 939F19386084000438A0000038C0000038E00000390000004BFE83AD62760000480001002C1700006000000080950000548305282C0300004182004480740000546503DE2C050000408200345463014A2C030000408200283C80000638E000006084000463E3000038A0000038C00000390000004BFE83518095000038600001
#
AoB Any Damage Makes Raiden's Gekkos Completely Blue
0
bungholio
B 00010000 04000000
B 309F0E287884002080840004548502942C0500004082001C548502D62C05000040820010548403182C0400004182000C5398067263180020546307BC 309F0E287884002080840004548502942C0500004082001C548502D62C05000040820010548403182C0400004182000C539806726318002038600002
#
AoB Any Damage Stuns Raiden's Hammerheads
0
bungholio
B 00010000 04000000
B 48000468578307FE3B8000002C030000418200243C60001AC03F15A83B800000386390D8C0430000FC011000418100083B800001807E00002C9C00002C0300554182000841860110 60000000578307FE3B8000002C030000418200243C60001AC03F15A83B800000386390D8C0430000FC011000600000003B800001807E00002C9C00002C0300554182000860000000
#
AoB Any Damage Makes Raiden's Hammerheads Completely Blue
0
bungholio
B 00010000 04000000
B 90830E7C4182002C63A3000048732AF1600000002C03003E4182050063A3000048732ADD600000002C03003D418204EC33BE008C7BBD0020839D0000578307BC 90830E7C4182002C63A3000048732AF1600000002C03003E4182050063A3000048732ADD600000002C03003D418204EC33BE008C7BBD0020839D000038600002
#
AoB Any Damage Electrically Stuns Raiden's Manned Sliders And Detaches Their Cyborgs
0
bungholio
B 00010000 04000000
B C025000880A40000804400047CA903A64E9E0421E8410028833A00005723039C C025000880A40000804400047CA903A64E9E0421E8410028833A00003C600002
#
AoB Any Damage To 1 Of Raiden's Manned Sliders Triggers Temporary Slow Motion
0
bungholio
B 00010000 04000000
B 386000014800005080FF000063E30000F841002863A4000063C5000063260000 386000014800005080FF000063E30000F841002863A4000063C5000038C00021
#
AoB Any Damage Electrically Stuns Raiden's Unmanned Sliders
0
bungholio
B 00010000 04000000
B 837A00005763039C2C030000418200283C80000338E0000063E300006084000138A0000038C0000039000000 837A00003C6000022C030000418200283C80000338E0000063E300006084000138A0000038C0000039000000
#
AoB Any Damage To 1 Of Raiden's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
B 00010000 04000000
B 63C300004800005080FF0000F841002863E3000063A4000063C5000063660000 63C300004800005080FF0000F841002863E3000063A4000063C5000038C00021
#
AoB Any Damage Electrically Stuns Raiden's Mistral + B.D. Mistal
0
bungholio
B 00010000 04000000
B 3C600003606300017C1C18004082003C307B008C78630020806300005464039C 3C600003606300017C1C18004082003C307B008C78630020806300003C800002
#
AoB Any Damage Electrically Stun Raiden's Sundowner
0
bungholio
B 00010000 04000000
B 7C1D1800408200083BA0FFFF807F00002C03014641820024307F008C78630020806300005463039C 7C1D1800408200083BA0FFFF807F00002C03014641820024307F008C78630020806300003C600002
#
AoB Any Damage Electrically Stuns Raiden's File R-06's Sam
0
bungholio
B 00010000 04000000
B 62E30000480005105763039C2C9500002C0300004182002C3C80000463E30000 62E30000480005103C6000022C9500002C0300004182002C3C80000463E30000
#
AoB Any Damage Stuns Sam's Cyborgs
0
bungholio
B 00010000 04000000
B 2C1A0000418200B862E300003880001448B9BCE1600000002C03000041820030807F17343063FFFF2C030000418200203C80000A63E300006084001538A0000038C00000 2C1A00006000000062E300003880001448B9BCE1386000012C03000041820030807F17343063FFFF2C030000418200203C80000A63E300006084001538A0000038C00000
#
AoB Any Damage Makes Sam's Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B 38C0000038E000004BFB888D4800109463E300004BFB812D2C0300004182005C62E300003880001E48B9C60160000000 38C0000038E000004BFB888D4800109463E300004BFB812D2C0300004182005C62E300003880001E48B9C60138600001
#
AoB Any Damage Electrically Stuns Sam's Cyborgs
0
bungholio
B 00010000 04000000
B 600000002C030000418200302C1900004182002838C0001E3C80000A38A0000038E0000090DF173C63E300006084000C38C000004BFB829562E300003880000E48B9C01D60000000 600000002C030000418200302C1900004182002838C0001E3C80000A38A0000038E0000090DF173C63E300006084000C38C000004BFB829562E300003880000E48B9C01D38600001
#
AoB Any Damage Stuns Sam's Heavily Armed Cyborgs
0
bungholio
B 00010000 04000000
B 93BF1AEC6084001538A0000038C0000038E000004BFB68E96239000063E300003880001348BB249960000000 93BF1AEC6084001538A0000038C0000038E000004BFB68E96239000063E300003880001348BB249938600001
B 00010000 04000000
B 48000ED42C1900004082007462A300003880001F48B9A4B5600000002C030000 48000ED42C1900006000000062A300003880001F48B9A4B5386000012C030000
#
AoB Any Damage Makes Sam's Heavily Armed Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B 2C030000418211AC63E300004BFE2729807F19782C0300004082119862A300003880001E48B9A77D60000000 2C030000418211AC63E300004BFE2729807F19782C0300004082119862A300003880001E48B9A77D38600001
#
AoB Any Damage Stuns Sam's Vodomjerkas
0
bungholio
B 00010000 04000000
B 4081001C638300003880001F48AACDA1600000002C0300004182006C63E30000 4081001C638300003880001F48AACDA1386000012C0300004182006C63E30000
#
AoB Any Damage Makes Sam's Vodomjerkas Completely Blue
0
bungholio
B 00010000 04000000
B 90BF1A406084000238A0000038C00000390000004BFECD91638300003880001E48AAD5C9600000002C03000041820030 90BF1A406084000238A0000038C00000390000004BFECD91638300003880001E48AAD5C9386000012C03000041820030
#
AoB Any Damage Stuns Sam's Mastiffs
0
bungholio
B 00010000 04000000
B 408600F4809F14DC7C0418004181002C63E3000093DF14F83880003E38A0000038C0000038E0000048360C396000000062B70000480000C02C170000408200B880760000546407FE2C040000418200783C800057C03F15283884A7B4C044000CFC01100041810060 60000000809F14DC7C0418004181002C63E3000093DF14F83880003E38A0000038C0000038E0000048360C396000000062B70000480000C02C1700006000000080760000388000012C040000418200783C800057C03F15283884A7B4C044000CFC01100060000000
#
AoB Any Damage Makes Sam's Mastiffs Completely Blue
0
bungholio
B 00010000 04000000
B 807F15342C030000408200B0807D00002C0300924182001480760000546307BC 807F15342C030000408200B0807D00002C030092418200148076000038600002
#
AoB Any Damage Stuns Sam's Gekkos
0
bungholio
B 00010000 04000000
B 38A0000038C00000390000004BFE829D62760000480001002C170000418200F8 38A0000038C00000390000004BFE829D62760000480001002C17000060000000
B 00010000 04000000
B 408200283C80000663E300006084000438A0000038C0000038E00000390000004BFE824180950000548307FE 408200283C80000663E300006084000438A0000038C0000038E00000390000004BFE82418095000038600001
#
AoB Any Damage Makes Sam's Gekkos Completely Blue
0
bungholio
B 00010000 04000000
B 6084000138C0000038E00000390000004BFE80BD807400046463000490740004807A00002C030092408200485398067263E300003880000038A0000138C00001 6084000138C0000038E00000390000004BFE80BD807400046463000490740004807A00002C030092600000005398067263E300003880000038A0000138C00001
#
AoB Any Damage Electrically Gekkos Sam's Raptors
0
bungholio
B 00010000 04000000
B 809500005483039C2C030000418200243C80000663E300006084000238A00000 80950000386000012C030000418200243C80000663E300006084000238A00000
#
AoB Any Damage Electrically Stuns Sam's Unmanned Sliders
0
bungholio
B 00010000 04000000
B 807A00005464039C2C040000418200283C80000363E3000038E000006084000138A0000038C0000039000000 807A0000388000012C040000418200283C80000363E3000038E000006084000138A0000038C0000039000000
#
AoB Any Damage To 1 Of Sam's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
B 00010000 04000000
B 63C300004800005080FF000060660000F841002863E3000063A4000063C5000080E7019C81070000804700047D0903A64E9E0421C03C0030C05F0094 63C300004800005080FF000038C00021F841002863E3000063A4000063C5000080E7019C81070000804700047D0903A64E9E0421C03C0030C05F0094
#
AoB Any Damage Stuns Sam's Raptors
0
bungholio
B 00010000 04000000
B 80780000546307FE2C03000041820064C03F1B90FC01F8004181005880DF0000 80780000386000012C03000041820064C03F1B90FC01F8006000000080DF0000
#
AoB Any Damage Makes Sam's Raptors Completely Blue
0
bungholio
B 00010000 04000000
B 600000002C030000418200203C6000553C80020C38A3B1C030644020C0250010485C2CA96000000080780000546307BC2C0300004182005863B7000062E4000063E30000 600000002C030000418200203C6000553C80020C38A3B1C030644020C0250010485C2CA96000000080780000386000022C0300004182005863B7000062E4000063E30000
#
AoB Any Damage Electrically Stuns Sam's Raptors
0
bungholio
B 00010000 04000000
B 807F1A302C030000418200243C80000663E300006084000938A0000038C00000 807F1A302C030000600000003C80000663E300006084000938A0000038C00000
#
AoB Any Damage Electrically Stuns Sam's Manned Sliders And Detaches Their Cyborgs
0
bungholio
B 00010000 04000000
B 3C60005C88DC00103920000E38A3653C54C60E3C8104022038E0000E7C8930107CC73010C025000063E30000814800007CC5FE76F84100287D4903A6804800047CA5203863A400007CA9281438E000004E9E0421E8410028833A00005723039C 3C60005C88DC00103920000E38A3653C54C60E3C8104022038E0000E7C8930107CC73010C025000063E30000814800007CC5FE76F84100287D4903A6804800047CA5203863A400007CA9281438E000004E9E0421E8410028833A00003C600002
#
AoB Any Damage To 1 Of Sam's Manned Sliders Triggers Temporary Slow Motion
0
bungholio
B 00010000 04000000
B 2C1800004182003480FF0000F841002863E300006384000063C5000063060000 2C1800004182003480FF0000F841002863E300006384000063C5000038C00021
#
AoB Any Damage Stuns Sam's Fenrirs
0
bungholio
B 00010000 04000000
B 546307FE2C030000418200943C600063C03F1A103863D1DCC0430004FC0110004181007C 386000012C030000418200943C600063C03F1A103863D1DCC0430004FC01100060000000
#
AoB Any Damage To Sam's Fenrirs Makes Them Completely Blue
0
bungholio
B 00010000 04000000
B 4800005C307C008C7863002080630000546307BC2C0300004182003C63E30000 4800005C307C008C7863002080630000386000022C0300004182003C63E30000
#
AoB Any Damage Stuns Sam's GRADs
0
bungholio
B 00010000 04000000
B 600000002C030000418200B43C6000077C131800418200A83C600059C03F236838636500C0430010FC01100041810090 386000012C030000418200B43C6000077C131800418200A83C600059C03F236838636500C0430010FC01100060000000
#
AoB Any Damage Makes Sam's GRADs Completely Blue
0
bungholio
B 00010000 04000000
B 600000002C03000063960000418200D053BC067263E300006396002038800000 386000012C03000063960000418200D053BC067263E300006396002038800000
#
AoB Any Damage Stuns Sam's Hammerheads
0
bungholio
B 00010000 04000000
B 48000468578307FE3B8000002C030000418200243C60005FC03F15583B800000386397E0C0430000FC011000418100083B800001807E00002C9C00002C0300554182000841860110 60000000578307FE3B8000002C030000418200243C60005FC03F15583B800000386397E0C0430000FC011000418100083B800001807E00002C9C00002C0300554182000860000000
#
AoB Any Damage Makes Sam's Hammerheads Completely Blue
0
bungholio
B 00010000 04000000
B 90830E2C4182002C63A30000482E23E9600000002C03003E4182050063A30000482E23D5600000002C03003D418204EC33BE008C7BBD0020839D0000578307BC 90830E2C4182002C63A30000482E23E9600000002C03003E4182050063A30000482E23D5600000002C03003D418204EC33BE008C7BBD0020839D000038600002
#
AoB Any Damage Electrically Stuns Sam's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 4800001063E30000388000314BFE4DA5807F118464630002907F1184480001EC30BE008C78A5002080C5000054C6039C2C0600004182005463E3000038800006 4800001063E30000388000314BFE4DA5807F118464630002907F1184480001EC30BE008C78A5002080C500003CC000022C0600004182005463E3000038800006
#
AoB Any Damage Decapitates Sam's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 5485039C546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200CC40860064807F00942C0300004182004463C30000483D09BD 3CA00002546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200CC40860064807F00942C0300004182004463C30000483D09BD
#
AoB Any Damage Stuns Blade Wolf's Cyborgs
0
bungholio
B 00010000 04000000
B 418200B862E300003880001448D02345600000002C03000041820030807F17343063FFFF2C030000418200203C80000A 6000000062E300003880001448D02345386000012C03000041820030807F17343063FFFF2C030000418200203C80000A
#
AoB Any Damage Makes Blade Wolf's Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B 48000EDC63E300004BFB99652C0300004182005C62E300003880001E48D02B29600000002C0300004182004480DF0000 48000EDC63E300004BFB99652C0300004182005C62E300003880001E48D02B29386000012C0300004182004480DF0000
#
AoB Any Damage Electrically Stuns Blade Wolf's Cyborgs
0
bungholio
B 00010000 04000000
B 600000002C0300004182002838C0001E3C80000A38A0000038E0000090DF173C63E300006084000C38C000004BFB9C0962E300003880000E48D02681600000002C030000418200C8386000C8 600000002C0300004182002838C0001E3C80000A38A0000038E0000090DF173C63E300006084000C38C000004BFB9C0962E300003880000E48D02681386000012C030000418200C8386000C8
#
AoB Any Damage Stuns Blade Wolf's Mastiffs
0
bungholio
B 00010000 04000000
B 408600EC809F15047C0418004181002C63E3000093DF15203880004338A0000038C0000038E00000484D01896000000062960000480000B880750000546407FE2C040000418200783C800040C03F15503884B1C8C044000CFC01100041810060 60000000809F15047C0418004181002C63E3000093DF15203880004338A0000038C0000038E00000484D01896000000062960000480000B880750000388000012C040000418200783C800040C03F15503884B1C8C044000CFC01100060000000
#
AoB Any Damage Makes Blade Wolf's Mastiffs Completely Blue
0
bungholio
B 00010000 04000000
B 807F155C2C030000408200A0807D00002C0300924182001480750000546307BC 807F155C2C030000408200A0807D00002C030092418200148075000038600002
#
AoB Any Damage Stuns Blade Wolf's GRADs
0
bungholio
B 00010000 04000000
B 600000002C030000418200B43C6000077C121800418200A83C600043C03F23783863A4D0C0430010FC01100041810090 386000012C030000418200B43C6000077C121800600000003C600043C03F23783863A4D0C0430010FC01100060000000
#
AoB Any Damage Makes Blade Wolf's GRADs Completely Blue
0
bungholio
B 00010000 04000000
B 600000002C03000063950000418200B853BC067263E300006395002038800000 386000012C03000063950000418200B853BC067263E300006395002038800000
#
AoB Any Damage Stuns Blade Wolf's Raptors
0
bungholio
B 00010000 04000000
B 80780000546307FE2C03000041820064C03F1BC0FC01F8004181005880DF0000 80780000386000012C03000041820064C03F1BC0FC01F8006000000080DF0000
#
AoB Any Damage Makes Blade Wolf's Raptors Completely Blue
0
bungholio
B 00010000 04000000
B 600000002C030000418200203C60003E3C80020C38A3915030644020C025000C48734D496000000080780000546307BC2C0300004182005863B7000062E4000063E3000038A00000 600000002C030000418200203C60003E3C80020C38A3915030644020C025000C48734D496000000080780000386000022C0300004182005863B7000062E4000063E3000038A00000
#
AoB Any Damage Stuns Blade Wolf's Heavily Armed Cyborgs
0
bungholio
B 00010000 04000000
B 48000D342C1900004082007462A300003880001F48D00BA9600000002C030000 600000002C1900004082007462A300003880001F48D00BA9386000012C030000
#
AoB Any Damage Makes Blade Wolf's Heavily Armed Cyborgs Completely Blue
0
bungholio
B 00010000 04000000
B E84100284182106463E300004BFE37FD807F19782C0300004082105062A300003880001E48D00EC9600000002C030000 E84100284182106463E300004BFE37FD807F19782C0300004082105062A300003880001E48D00EC9386000012C030000
#
AoB Any Damage Stuns Blade Wolf's Fenrirs
0
bungholio
B 00010000 04000000
B E841002880750000546307FE2C030000418200943C600047C03F1A203863E39CC0430000FC0110004181007C63E30000 E841002880750000386000012C030000418200943C600047C03F1A203863E39CC0430000FC0110006000000063E30000
#
AoB Any Damage Makes Blade Wolf's Fenrirs Completely Blue
0
bungholio
B 00010000 04000000
B 6000000048000060807A0000546307BC2C03000040820010807B00002C030092 6000000048000060807A0000386000022C03000040820010807B00002C030092
#
AoB Any Damage Electrically Stuns Blade Wolf's Unmanned Sliders
0
bungholio
B 00010000 04000000
B 807900005464039C2C040000418200283C80000363E300006084000138A00000 807900003C8000022C040000418200283C80000363E300006084000138A00000
#
AoB Any Damage To 1 Of Blade Wolf's Unmanned Sliders Triggers Temporary Slow Motion
0
bungholio
B 00010000 04000000
B 63C30000480000A880FF0000F84100286066000063E3000063A4000063C50000 63C30000480000A880FF0000F841002838C0002163E3000063A4000063C50000
#
AoB Any Damage Stuns Blade Wolf's Gekkos
0
bungholio
B 00010000 04000000
B 63E30000939F19F86084000438A0000038C0000038E00000390000004BFEA7C562760000480001002C170000418200F880950000548305282C03000041820044 63E30000939F19F86084000438A0000038C0000038E00000390000004BFEA7C562760000480001002C1700006000000080950000548305282C03000041820044
B 00010000 04000000
B 38C00000390000004BFEA76980950000548307FE2C0300004182007080740000546503DE2C050000408200605463014A 38C00000390000004BFEA76980950000386000012C0300004182007080740000546503DE2C050000408200605463014A
#
AoB Any Damage Makes Blade Wolf's Gekkos Completely Blue
0
bungholio
B 00010000 04000000
B 60000000486F2645600000002C030000418200102C170000418200083B00004180750000546404202C0400004182003C309F0EE87884002080840004548502942C0500004082001C548502D62C05000040820010548403182C0400004182000C5398067263180020546307BC 60000000486F2645600000002C030000418200102C170000418200083B00004180750000546404202C0400004182003C309F0EE87884002080840004548502942C0500004082001C548502D62C05000040820010548403182C0400004182000C539806726318002038600002
#
AoB Any Damage Electrically Stuns Blade Wolf's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 307E008C7863002080C3000054C6039C2C0600004182005463E3000038800006 307E008C7863002080C300003CC000022C0600004182005463E3000038800006
#
AoB Any Damage Decapitates Blade Wolf's Dwarf Gekkos + Dwarf Gekko Humanoids
0
bungholio
B 00010000 04000000
B 5485039C546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200BC40860064807F00942C0300004182004463C3000048546A85 3CA00002546605AC2C8500002C0600004082001C5485035A2C050000408200105463056A2C030000418200083B800001548303DE2C030000408200BC40860064807F00942C0300004182004463C3000048546A85
#
AoB Any Damage Electrically Stuns Blade Wolf's Khamsin
0
bungholio
B 00010000 04000000
B 807A00005463039C2C030000418200243C80000363B8000038E0000063C30000 807A00003C6000022C030000418200243C80000363B8000038E0000063C30000
#
AoB Invincibility For Raiden
0
bungholio
B 00010000 04000000
B F821FD617C0802A6F80102B0DBC10290DBE10298380101D07F8001CE300000107FA001CE300000107FC001CE30000010 49CDEF3A7C0802A6F80102B0DBC10290DBE10298380101D07F8001CE300000107FA001CE300000107FC001CE30000010
/*
This has been remade to
put in 2 exceptions.


In File R-00 at the very
end you will fight Sam.
While limping, Sam will
need to be able to hit
you to trigger the
chapter to end. It checks
if the area you are in is
"btl_sam_3", then if the
limping bit is set, and
then if the character is
File R-00 Raiden to
determine whether to
apply the exception.


The other exception is
File R-07 at the end
while fighting the
Senator. It will get to a
point where you will
fight him bare-handed,
and during that fight he
will need to be able to
hit you to be able to
trigger the game to get
to the next scene. It
checks if the area you
are in is
"P740_ARMSTRONG", then
if the Unique Weapon is
set to fists, because
Raiden's bare fists are
technically a unique
weapon just like the
Pole-Arm, Sai, and Pincer
Blades, and then it
checks if it is Raiden
value 04 to determine
whether to apply the
exception to the code.


I do not know what 04 is
for the character values,
but it is what shows in
memory whenever I do this
battle. 04 does not seem
to give me bare hands
outside of this battle,
but 07 can since it
forces Raiden to use his
Unique Weapon.


If you want it to work
for even those, use this:


There are 2 separate
codes to just instantly
trigger both of those
scenes to skip too if
you wanted.
*/
#
AoB Invincibility For Sam
0
bungholio
B 00010000 04000000
B F821FDD17C0802A6F8010240DBC10220DBE1022838800000FBE1021880A304C4607F00002C050000908336DCFBC10210 4E8000207C0802A6F8010240DBC10220DBE1022838800000FBE1021880A304C4607F00002C050000908336DCFBC10210
#
AoB Invincibility For Blade Wolf
0
bungholio
B 00010000 04000000
B F821FDB17C0802A6F8010260DBC10240DBE10248380101D07F8001CE300000107FA001CE300000107FC001CE30000010 4E8000207C0802A6F8010260DBC10240DBE10248380101D07F8001CE300000107FA001CE300000107FC001CE30000010
#
AoB Invincibility From Running Into Mines While Running Up The Building In File R-04
0
bungholio
B 00010000 04000000
B 2C0400E9418100102C0400E840810B3448000B382C0400EA40810B382C0400EB 2C0400E9600000002C0400E840810B3448000B382C0400EA40810B382C0400EB
#
AoB Damage Fully Refills Health
0
bungholio
B 00010000 04000000
B 80A5003054A500002C0500004182000C80A308404800000880A308403CC0020C7C842810 80A5003054A500002C0500004182000C80A308404800000880A308403CC0020C49CDEFE2
#
AoB Invincibility For Things Raiden Controls
0
bungholio
B 00010000 04000000
B 839F064C63DD000078643E24786326E47C6320107C8318147F6320147F7CD8147C7BE010 839F064C63DD000078643E24786326E47C6320107C8318147F6320147F7CD81449CDF49B
/*
Requires the Marker codes
for either the Dwarf
Gekko in Chapter 2 or the
Turrets in Chapter 4 or
this will do nothing.

The only unwanted effect
of the code is that 1
enemy might not respond
to damage for the 1st
time they take damage,
but after that the effect
is gone again until you
either control the Dwarf
Gekko or Turrets again.
*/
#
AoB Damage Fully Refills Health For Things Raiden Controls
0
bungholio
B 00010000 04000000
B 7C87201490830840418200287C8507B438C0000138E000017CA628107CC43810 49CDF46290830840418200287C8507B438C0000138E000017CA628107CC43810
/*
Requires the Marker codes
for either the Dwarf
Gekko in Chapter 2 or the
Turrets in Chapter 4 or
this will do nothing.

The only unwanted effect
of the code is that 1
enemy might not take
damage for the 1st time
they take damage, but
after that the effect is
gone again until you
either control the Dwarf
Gekko or Turrets again.
*/
#
AoB Raiden Cannot Be Stunned
0
bungholio
B 00010000 04000000
B 7C8400347884D1467C84FE767C8318387C6518147C0618004180002063E30000 7C8400347884D1467C84FE767C8318387C6518147C0618004800002063E30000
B 00010000 04000000
B 2C9B00067C6320387C6618147C0718004080000840860040388000D063E30000 2C9B00067C6320387C6618147C0718004800004440860040388000D063E30000
#
AoB Raiden Can Easily Decapitate Enemies Without Ripper Mode
0
bungholio
B 00010000 04000000
B 48000060807F30642C0300014082000C386000024800004C63E300003BA00001 48000060386000012C0300014082000C386000024800004C63E300003BA00001
#
AoB Raiden Can Always Toggle Ripper Mode
0
bungholio
B 00010000 04000000
B F821FF617C0802A6F80100B0DBE10098FBE10090FBC10088FBA10080607F00004BFFFF312C0300004082001838600034 F821FF617C0802A6F80100B0DBE10098FBE10090FBC10088FBA10080607F0000386000012C0300004082001838600034
#
AoB Sam Can Easily Decapitate Enemies Without Taunting Them
0
bungholio
B 00010000 04000000
B F821FF617C0802A6F80100B0DBE10098FBE10090609F000080830E20FBC100882C040000418200F0309F008C F821FF617C0802A6F80100B0DBE10098FBE10090609F000038800001FBC100882C040000418200F0309F008C
#
AoB Enemies Stay Taunted Forever
0
bungholio
B 00010000 04000000
B C0230004EC3F0072D03F0E24E80100A07C0803A6CBE10088EBA10070EBC10078EBE10080382100904E800020 C02300043C007F80901F0E24E80100A07C0803A6CBE10088EBA10070EBC10078EBE10080382100904E800020
#
AoB Sam's Charge Attacks Are Instantly Fully Charged
0
bungholio
/* Standing And Doing Triangle */
B 00010000 04000000
B 7C8430142C04000041820020306300F43880000078630020489CB5E9E84100282C03000041820778807F05EC30630001907F05EC 388000002C04000041820020306300F43880000078630020489CB5E9E84100282C03000041820778807F05EC30630001907F05EC
B 00010000 04000000
B 78630020489CB471E84100282C0300004182060038600008907F05EC480005F4 7863002038600001E84100282C0300004182060038600008907F05EC480005F4
/* Any Combo Then Triangle Charge Attacks */
B 00010000 04000000
B 7C6518142C0300003BC00001418207EC386000083BC00001907F05EC480007DC307D000180BF0910 386000012C0300003BC00001418207EC386000083BC00001907F05EC480007DC307D000180BF0910
/* Air Charge Attack */
B 00010000 04000000
B 600000002C03000041820904807F05EC30630001907F05EC480008F43C6000683D000800 386000012C03000041820904807F05EC30630001907F05EC480008F43C6000683D000800
B 00010000 04000000
B 600000002C030000418208143C80001063E300006084001A38A0000038C0000038E00000 386000012C030000418208143C80001063E300006084001A38A0000038C0000038E00000
/* Running Charge Attack */
B 00010000 04000000
B 78630020489CD361E84100282C0300004182055C38600004907F05EC48000550 7863002038600001E84100282C0300004182055C38600004907F05EC48000550
/* Zandatsu Charge Attack */
B 00010000 04000000
B 600000002C0300004182013C835E0030335A0001309A000163E30000909E0030 386000012C0300004182013C835E0030335A0001309A000163E30000909E0030
B 00010000 04000000
B FC404090FC8439AEFCA42828FC25092EEC2118BAD03C03D8807D0C9854640630 FC404090FC8439AEFCA42828FC25092EEC2118BAD03C03D8807D0C9838800000
#
AoB Fuel Cells Always Full
0
bungholio
B 00010000 04000000
B 80840030C0250000548400002C0400004182000CC02336B048000048808336A878851F24 80840030C0250000548400002C0400004182000CC02336B04800004849CDEEF278851F24
/*
Tested and working for
Raiden, Sam, & Blade Wolf
with and without fuel
cell capacity upgrades.
It adjusts to the correct
amounts.
*/
#
AoB Raiden Can Jump In The Air
0
bungholio
B 00010000 04000000
B E8410028809F05EC2C030000807F05E84182000C38A0000090BF13782C040001 E8410028809F05EC2C030000807F05E84182000C38A0000090BF137849CDF27F
B 00010000 04000000
B 2C83005E2F03002B2F830010418104FC4185026C41990128419D00882C030007 2C83005E2F03002B2F830010418104FC4185026C41990128419D008849CDF2CB
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
AoB Sam Can Jump In The Air
0
bungholio
B 00010000 04000000
B 80BF0000909F2574F84100288085031880A4000080440004FBC10088FBA100807CA903A64E9E0421807F05ECE84100282C030000418100102C03FFFF40810564 80BF0000909F2574F84100288085031880A4000080440004FBC10088FBA100807CA903A64E9E0421807F05EC49CDF1632C030000418100102C03FFFF40810564
B 00010000 04000000
B 607F00003C6000106064003E807F05E87C0320004181042C3C8000106084001E7F832000419D02003C8000106084000E7F032000419900F03C80001060840006 607F00003C6000106064003E807F05E87C0320004181042C3C8000106084001E7F832000419D02003C8000106084000E7F032000419900F049CDF1A760840006
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
AoB Blade Wolf Can Jump In The Air
0
bungholio
B 00010000 04000000
B 600000002C030000418100102C03FFFF408105F0480000182C03000140810128 49CDF1F32C030000418100102C03FFFF408105F0480000182C03000140810128
B 00010000 04000000
B 3C800001608400097C0320004182062C3C800001608400087C03200041820610 49CDF23B608400097C0320004182062C3C800001608400087C03200041820610
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.
*/
#
AoB Dwarf Gekko Can Jump In The Air
0
bungholio
B 00010000 04000000
B 600000002C03000041820424807F05EC30630001907F05EC4800041463E30000 600000002C03000041820424807F05EC30630001907F05EC4800041449CDF007
B 00010000 04000000
B 600000002C0300124082001063E300004BFFCA194800020063E30000485E2EDD600000002C03000E4082001063E300004BFFC5D1480001E063E30000 600000002C0300124082001063E300004BFFCA194800020063E30000485E2EDD600000002C03000E4082001063E300004BFFC5D1480001E049CDF04B
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press X
to jump.

It is a very small part
of the game in Chapter 2
where you control it, but
the code is here if you
want it.
*/
#
AoB Max Items From Use
0
games24.blog.fc2.com/blog-entry-165.html
B 00010000 04000000
B 808300543084FFFF2C04000090830054418100183880000080A3000490830054 80830054808300582C04000090830054418100183880000080A3000490830054
B 00010000 04000000
B 8083005C38A000002C0400004081007080E3006C38A0000081230060394000007D072010 8083005C38A000002C0400004081007080E3006C38A0000081230060394000003909FFFF
/*
I originally had line 2
just load 0x0060(r3), but
that gave me 6 instead of
5 rounds of ammo for the
items that use this line.
*/
#
AoB Automatically Pick Up All Items You Do Not Have Any Of
0
bungholio
B 00010000 04000000
B 600000002C03000041820028809B000063630000F84100288084002080A40000804400047CA903A64E9E0421E8410028339C00047B9C0020807F0008809F00045463103A7C641814 386000012C03000041820028809B000063630000F84100288084002080A40000804400047CA903A64E9E0421E8410028339C00047B9C0020807F0008809F00045463103A7C641814
/*
Normally as soon as the
game completely generates
an item into the level
somewhere, like a Hand
Grenade always being in a
certain spot in the level
or the special green left
arm the game creates
after you correctly chop
one off, this will cause
it to instantly be picked
up without you needing to
walk over it.
*/
#
AoB Have All Items
0
bungholio
B 00010000 04000000
B 60000000807F0004546303DE2C030000418200143C600206809F00683063EA504BFFF5F5807F00502C0300004182002C 60000000807F0004546303DE2C030000418200143C600206809F00683063EA504BFFF5F5807F00502C0300004800002C
B 00010000 04000000
B E8410028807F0004546303DE2C030000418200143C600206809F00683063EA504BFFF3E5807F00502C0300004182002C E8410028807F0004546303DE2C030000418200143C600206809F00683063EA504BFFF3E5807F00502C0300004800002C
B 00010000 04000000
B 7B9C0020807F0008809F00045463103A7C6418147C1C18004082FD24E80100C0 7B9C0020807F0008809F00045463103A7C6418147C1C18004082FD2449CDF383
B 00010000 04000000
B 6065000060860000606400002C05000060C300004182009438C000002C040000 49CDF44360860000606400002C05000060C300004182009438C000002C040000
/*
It has no effect on
File R-00 Raiden.


It will give you these 11
items:

RPG
Surface-to-Air Homing Missile
Grenade
Jamming Grenade
Red Phosphorus Grenade
Electromagnetic Grenade
Drum Can
Cardboard Box
3D Photo Frame
Electrolyte Pack
Repair Nanopaste


If you are playing Blade
Wolf's DLC, his Heat
Knife will appear in your
inventory too as it only
appears in his DLC. I
tried using it as Raiden
or Sam, they cannot throw
it.
*/
#
AoB Running Speed Modifier
0
bungholio
B 00010000 04000000
B FBC10078607F00003BC41D70C05E0000FFE01090EFE107F24BFFFE29C03E0004EC21F82438600001 FBC10078607F00003BC41D70C05E0000FFE01090EFE107F24BFFFE2949CDF693EC21F82438600001
/*
Requires the button
enable code or nothing
will happen while
holding the run button.


It is also made to work
only if you are holding
only R1 to run, so if
you are holding other
buttons at the same time
the speed increase will
not take effect. I did it
this way because having
the speed increase in
effect while doing
certain things can mess
things up. In File R-01,
there is a point where
Raiden runs across a
bridge that is being
destroyed, and this speed
can make that difficult.
Holding any other button
with R1 will fix that so
you can run at normal
speed.


This also affects
enemies, so you can hold
R1 to make them move
quicker if needed in
certain areas to make
them patrol quicker if
needed.
*/
#
AoB Animation Speed Modifiers
0
bungholio
B 00010000 04000000
B 2C0500004182FEEC3C8000D02C9D000038C470E0808300042C040004C026000040800018548420367C8520143084004878840020C0240000 2C0500004182FEEC3C8000D02C9D000038C470E0808300042C040004C026000040800018548420367C852014308400487884002049CDF6B7
/*
Messing with the speed of
things can de-synchronize
other things and break
parts of the game, so
disable it off as needed.
*/
#
AoB Objective Marker Display
0
bungholio
B 00010000 04000000
B 807F003C30630001907F003C3C60020C30633A4080630030546306722C03000041820010 807F003C30630001907F003C3C60020C30633A40Z546306722C03000041820010
B 00010000 04000000
B 4E800020480000003CA0020C30A53A4080A5003054A506722C0500004182008838E000003CA0022D3900FFFF60E6000030A5E18878C900202F08FFFF7D25482E2C09FFFF7C89180040820010409A001860E80000480000104086000C60E800004800001430E7000130C600042807000A4180FFC42C08FFFF4182002C790617643CE0022D3D00022D7CC607B430E7E1B03108E1D8392000017C65312E7C87312E7D28312E4E8000204E800020 4E800020480000003CA0020C30A53A40ZZ54A506722C0500004182008838E000003CA0022D3900FFFF60E6000030A5E18878C900202F08FFFF7D25482E2C09FFFF7C89180040820010409A001860E80000480000104086000C60E800004800001430E7000130C600042807000A4180FFC42C08FFFF4182002C790617643CE0022D3D00022D7CC607B430E7E1B03108E1D8392000017C65312E7C87312E7D28312E4E8000204E800020
[Z]80630030=Normal;38600040=Always On;38600000=Always Off[/Z]
[ZZ]80A50030=Normal;38A00040=Always On;38A00000=Always Off[/ZZ]
#
AoB Infrared Sensor Lasers
0
bungholio
B 00010000 04000000
B 60000000887F08462C030000408201E83C60020C3C8000 2B30633A40388425343B80000080630030 60000000887F08462C030000408201E83C60020C3C8000 2B30633A40388425343B800000Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
AoB Electrical Panels
0
bungholio
B 00010000 04000000
B 7B5D00207C77E82E2C0300004182028C7F96E82E2C1C0000418202803C6000C5388398C080710030 7B5D00207C77E82E2C0300004182028C7F96E82E2C1C0000418202803C6000C5388398C0Z
B 00010000 04000000
B 5463003C907E0038480001347C72E82EFC9FF0002C0300004182002480710030 5463003C907E0038480001347C72E82EFC9FF0002C03000041820024Z
[Z]80710030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
AoB HUD
0
bungholio
B 00010000 04000000
B 2C0300004082000C3069FFFF907F0228807F02282C03000B2C8300002F030009408000F43C60020C30633A4080630030 2C0300004082000C3069FFFF907F0228807F02282C03000B2C8300002F030009408000F43C60020C30633A40Z
[Z]80630030=Normal;38600000=Always Visible;38600040=Never Visible[/Z]
#
AoB Map
0
bungholio
B 00010000 04000000
B 4E8000203C60020C30633A4080630030546306727C6300345463DFFE686300014E800020 4E8000203C60020C30633A40Z546306727C6300345463DFFE686300014E800020
B 00010000 04000000
B 408100143880000030630001909F0040907F003C3C60020C30633A4080630030 408100143880000030630001909F0040907F003C3C60020C30633A40Z
B 00010000 04000000
B 7C651814907F003C809F003C608300002C03000A408001D03C60020C30633A4080630030 7C651814907F003C809F003C608300002C03000A408001D03C60020C30633A40Z
[Z]80630030=Normal;38600000=Always Visible;38600040=Never Visible[/Z]
#
AoB Enemy Distance
0
bungholio
B 00010000 04000000
B 3C80022D607F000030849EC080640054FBC100802C030000418201F03C60020C30633A4080630030 3C80022D607F000030849EC080640054FBC100802C030000418201F03C60020C30633A40Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
AoB Enemy Display
0
bungholio
B 00010000 04000000
B 419E00C82C030001418200702C030000408201C43C60020C30633A4080630030 419E00C82C030001418200702C030000408201C43C60020C30633A40Z
B 00010000 04000000
B 2C040000418200EC30630001907F0094480000E03C60020C30633A4080630030 2C040000418200EC30630001907F0094480000E03C60020C30633A40Z
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
#
AoB Item Cube Icons
0
bungholio
B 00010000 04000000
B 3C80020C30843A4080840030548406722C0400004182007C38E000003C80022D3900FFFF60E500003084E690 3C80020C30843A40Z548406722C0400004182007C38E000003C80022D3900FFFF60E500003084E690
[Z]80840030=Normal;38800040=Always Visible;38800000=Never Visible[/Z]
#
AoB Item Text + Brackets
0
bungholio
B 00010000 04000000
B 809F001C80BF0018807C00302C050000546306727C630034547CDFFE6B9C0001 809F001C80BF0018Z2C050000546306727C630034547CDFFE6B9C0001
B 00010000 04000000
B 419E00C82C030001418200702C030000408201C43C60020C30633A4080630030 419E00C82C030001418200702C030000408201C43C60020C30633A40ZZ
B 00010000 04000000
B 2C040000418200EC30630001907F0094480000E03C60020C30633A4080630030 2C040000418200EC30630001907F0094480000E03C60020C30633A40ZZ
[Z]807C0030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
[ZZ]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/ZZ]
#
AoB Orange Item Brackets
0
bungholio
B 00010000 04000000
B 419E00C82C030001418200702C030000408201C43C60020C30633A4080630030 419E00C82C030001418200702C030000408201C43C60020C30633A40Z
B 00010000 04000000
B 2C040000418200EC30630001907F0094480000E03C60020C30633A4080630030 2C040000418200EC30630001907F0094480000E03C60020C30633A40Z
B 00010000 04000000
B 7B5D00207C77E82E2C0300004182028C7F96E82E2C1C0000418202803C6000C5388398C080710030 7B5D00207C77E82E2C0300004182028C7F96E82E2C1C0000418202803C6000C5388398C0ZZ
[Z]80630030=Normal;38600040=Always Visible;38600000=Never Visible[/Z]
[ZZ]80710030=Normal;38600040=Always Visible;38600000=Never Visible[/ZZ]
#
AoB Yellow AR Display
0
bungholio
B 00010000 04000000
B E8410028807F00142C0300004182000C3880000190830004807F00182C0300004182000C38800000 E8410028807F00142C0300004182000CZ90830004807F00182C0300004182000C38800000
[Z]38800001=Normal;38800000=Never Visible[/Z]
#
AoB Press L2 + R3 To Toggle Freezing All Things That Are Not Raiden, Sam, Or Blade Wolf
0
bungholio
B 00010000 04000000
B 807F04A05463077A2C0300004082FF84807F05402C0300004182002C809F0000F841002863E300008084010880A40000804400047CA903A64E9E0421E84100284BFFFF50809F0000F841002863E300008084005080A40000804400047CA903A64E9E0421 807F04A05463077A2C0300004082FF84807F05402C0300004182002C809F0000F841002863E300008084010880A40000804400047CA903A64E9E0421E84100284BFFFF50809F0000F841002863E300008084005080A40000804400047CA903A649CDF317
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press the
buttons.

This might risk breaking
some things in the game
while things are frozen.
*/
#
AoB Difficulty Modifier
0
bungholio
B 00010000 04000000
B 600000002C0300004182000C38600002480000143C6002073063A098806338187C6307B4 600000002C0300004182000C38600002480000143C6002073063A098386000Z7C6307B4
[Z]00=Easy;01=Normal;02=Hard;03=Very Hard;04=Revengeance[/Z]
#
AoB Easy Assist Is Enabled On Any Difficulty
0
bungholio
B 00010000 04000000
B 2C0300004182000C38600000480000143C6002073063A0988063381C7C6307B4E8010090 2C0300004182000C38600000600000003C6002073063A0988063381C38600001E8010090
#
AoB Blade Wolf's Stealth Grab Skips
0
bungholio
B 00010000 04000000
B 3063003C786300207C0328004082FFE43860000030630008786300204E800020 3063003C786300207C0328004082FFE46000000030630008786300204E800020
B 00010000 04000000
B 7C0418004082000C3860000148000014806300002C0300004082FFE838600000 7C0418004082000C3860000148000014806300002C0300004082FFE838600001
/*
You might need this if
you use the character
modifier to be Blade Wolf
outside of his DLC.
*/
#
AoB Raiden Combo Crash Skips
0
bungholio
B 00010000 04000000
B 1088200A7C5E09CE106C180A1045300A7C9D09CE7C7C09CE7C5B09CE408200F8 1088200A7C5E09CE106C180A1045300A7C9D09CE7C7C09CE7C5B09CE60000000
/*
You might need this if
you use the character
modifier to be Raiden
outside of his chapters.
*/
#
AoB Enemies Never Shoot
0
bungholio
B 00010000 04000000
B F821FF517C0802A6F80100C0DBE100A8FBE100A0607F0000806305EC2C0300002C830001FBC10098FBA100902F03FFFF4181000C409901484800000C408501084800013C3C60009A3C80016A3BC36A00 4E8000207C0802A6F80100C0DBE100A8FBE100A0607F0000806305EC2C0300002C830001FBC10098FBA100902F03FFFF4181000C409901484800000C408501084800013C3C60009A3C80016A3BC36A00
#
AoB Instantly Complete File R-07 Bare-Handed Fight With Senator
0
bungholio
B 00010000 04000000
B 2C03000041800010807E0B382C0300004182000C386000014800000838600000 2C03000041800010386000012C0300004182000C386000014800000838600000
/*
This might automatically
complete other things
too, use as needed.
*/
#
AoB Instantly Complete File R-00 Train Battle With Sam While Limping And Bleeding
0
bungholio
B 00010000 04000000
B 600000002C0300024082000C38600000907F012C807F011C2C03000041820078806311AC2C030000 600000002C0300024082000C38600000907F012C807F011C2C03000041820078386000012C030000
/*
Also has the unwanted
effect of skipping the
movie that plays after it
too.

This might automatically
complete other things
too, use as needed.
*/
#
AoB Press L2 + L3 To Toggle Whether Enemies Ignore You Or Not
0
bungholio
/* Enemies ignoring you effect */
B 00010000 04000000
B 607D000080630134FBE10088609E000060BF0000546301CEFB8100702C0300004082016C 607D000080630134FBE10088609E000060BF0000546301CEFB81007049CDF07F4082016C
/* For non-File R-00 Raiden */
B 00010000 04000000
B 2C030000408200083BC0000163A500004085000838A000013C60022D90BF03DCC3C3CE5C419A0010C03F0388 2C030000408200083BC0000163A500004085000838A000013C60022D90BF03DCC3C3CE5C419A001049CDF09F
/* For non-File R-00 Raiden displayed whole number */
B 00010000 04000000
B 3381007038A0000863840000C023000CC3A30010EC3E082AEC210772FC20081ED821007883A1007C 3381007038A0000863840000C023000CC3A30010EC3E082AEC210772FC20081ED821007849CDF0C3
/* For non-File R-00 Raiden displayed percentage number */
B 00010000 04000000
B C0230014C8410078FC40169CFC401018EC5E1778EC220072FC20081ED8210078C023001883A1007C C0230014C8410078FC40169CFC401018EC5E1778EC220072FC20081ED8210078C023001849CDF0E3
/* For File R-00 Raiden */
B 00010000 04000000
B 2C030000408200083BA0000163C3000040850008386000013C80022D907F00E0C3A4CE98419A0010C03F00C4FC01F80041820258C05F00C4 2C030000408200083BA0000163C3000040850008386000013C80022D907F00E0C3A4CE98419A001049CDF103FC01F80041820258C05F00C4
/* For File R-00 Raiden displayed whole number */
B 00010000 04000000
B C0230008FC1F080041800008FFC0F8903C6000BC3863EC1C3C80016A308447ECC023000C30610070EFDE0072FC20F01ED821007883C1007C7FDE07B463C50000 C0230008FC1F080041800008FFC0F8903C6000BC3863EC1C3C80016A308447ECC023000C30610070EFDE0072FC20F01ED821007849CDF1237FDE07B463C50000
/* For File R-00 Raiden displayed percentage number */
B 00010000 04000000
B 3C6000BC3863EC1CC0230010C8410078FC40169CFC401018EC5E1028EC220072FC20081ED8210078C023001483C1007C 3C6000BC3863EC1CC0230010C8410078FC40169CFC401018EC5E1028EC220072FC20081ED8210078C023001449CDF143
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press
L2 + L3.

It will visibly display
-1.0% as your remaining
health while enemies are
unable to see you, but it
will not affect your
actual health, it is only
a visual effect so you
can see if the code is on
or not.

You can walk into enemies
or into their line of
sight and they won't
respond.

They will respond if you
attack, but they will
quickly end up blind and
have no idea of where
you are.

If you toggle this while
enemies are alert,
enemies will stay in
alert mode even after the
timer has ran out.
*/
#
AoB Toggle AR Display For Sam With L2 + ^
0
bungholio
B 00010000 04000000
B 38600000809F0C9C80BF0DFC907F521C7C8328382C0300004182000C3860000F907F0E1C3C60008EC03F0CC83BA0000038634BE8 49CDF4F3809F0C9C80BF0DFC907F521C7C8328382C0300004182000C3860000F907F0E1C3C60008EC03F0CC83BA0000038634BE8
/*
All of the same things
that disable it for
Raiden + Blade Wolf also
disable it for Sam, but
this code will constantly
force it to remain on so
you will instead see the
flicker as if you just
activated it each time
you attack or do other
things. Use the other
code to disable the
things that deactivate
the AR Display if needed.
*/
#
AoB Nothing Disables The AR Display
0
bungholio
/*
B 00010000 04000000
B 3FA0020C3860000033BD3A40809D003080BD00345064067254A304E62C030000909D0030 3FA0020C3860000033BD3A40809D003080BD00345064067254A304E62C03000060000000
B 00010000 04000000
B 3FE0020C3BA00000FBC10090309F3A40607E000080A40030F841002853A5067290A40030 3FE0020C3BA00000FBC10090309F3A40607E000080A40030F841002853A5067260000000
B 00010000 04000000
B 63A3000048284BC560000000807F3A4033A1007063C400006465004063A3000090BF3A40 63A3000048284BC560000000807F3A4033A1007063C400006465004063A3000060000000
B 00010000 04000000
B 3FC0020C3C8000A1FBA10080FB610070339E3A403B641154FBE100903BA00000607F0000809C003053A40672909C0030 3FC0020C3C8000A1FBA10080FB610070339E3A403B641154FBE100903BA00000607F0000809C003053A4067260000000
B 00010000 04000000
B 80BD00345083067254A404E62C040000FBC10098FB810088FB610080907D0030 80BD00345083067254A404E62C040000FBC10098FB810088FB61008060000000
B 00010000 04000000
B 806F0030546306722C0300004182001440860010807F521868630001907F5218 806F0030546306722C0300004182001440860010807F52186863000160000000
B 00010000 04000000
B 600000002C030002408200146303000038800016486695A96000000038600019485FEF2D 600000002C030002408200146303000038800016486695A9600000003860001960000000
B 00010000 04000000
B 60000000337B0001577B063E2C1B00034180FF883C60020CC03D035430633A40D03F004C808300305304067290830030 60000000337B0001577B063E2C1B00034180FF883C60020CC03D035430633A40D03F004C808300305304067260000000
B 00010000 04000000
B 2C0300004182002438600000809E00303CA0022D38C0000150640672909E0030 2C0300004182002438600000809E00303CA0022D38C000015064067260000000
/* Blade Wolf specific */
B 00010000 04000000
B 80630030546306722C0300004182001440860010807F521868630001907F5218 80630030546306722C0300004182001440860010807F52186863000160000000
B 00010000 04000000
B 4E8000203C60020C3880000030633A4080A300305085067290A300304E800020 4E8000203C60020C3880000030633A4080A3003050850672600000004E800020
B 00010000 04000000
B 3BC0000030A33A403084000163E30000909F05EC8085003053C4067290850030 3BC0000030A33A403084000163E30000909F05EC8085003053C4067260000000
B 00010000 04000000
B 600000003C60020C38A0000030C33A4063E300003880000180E6003050A7067290E60030 600000003C60020C38A0000030C33A4063E300003880000180E6003050A7067260000000
B 00010000 04000000
B E84100283C60020C3880000130A33A4038C0000063E30000909F54108085003050C4067290850030 E84100283C60020C3880000130A33A4038C0000063E30000909F54108085003050C4067260000000
B 00010000 04000000
B 6000000063E300003880000148338F0D600000003C60020C3BC0000030833A4063E3000080A4003053C5067290A40030 6000000063E300003880000148338F0D600000003C60020C3BC0000030833A4063E3000080A4003053C5067260000000
B 00010000 04000000
B 600000003C80020C3C6041C038A0000030C43A4038800001907F08F090BE000063E3000080E6003050A7067290E60030 600000003C80020C3C6041C038A0000030C43A4038800001907F08F090BE000063E3000080E6003050A7067260000000
B 00010000 04000000
B 63E30000C044000CC0640010C08400148085030CF841002880A40000804400047CA903A64E9E0421E84100283C60020C3880000030A33A4063E3000080C500305086067290C50030 63E30000C044000CC0640010C08400148085030CF841002880A40000804400047CA903A64E9E0421E84100283C60020C3880000030A33A4063E3000080C500305086067260000000
B 00010000 04000000
B 2C0301C02C9C01BC418200084086000C38600005B07E0084307E008C786400203C60020C30A33A40806400046066080063A3000090C400048085003053E4067290850030 2C0301C02C9C01BC418200084086000C38600005B07E0084307E008C786400203C60020C30A33A40806400046066080063A3000090C400048085003053E4067260000000
B 00010000 04000000
B 3C600071C03B04E83863F7A0C0430008EC211028FC01F800D03B04E84CC113824186000C93BB04E893BB04E463C3000063E400004BFFC6F93C60020CC03B035430633A40D03E004C8083003053A4067290830030 3C600071C03B04E83863F7A0C0430008EC211028FC01F800D03B04E84CC113824186000C93BB04E893BB04E463C3000063E400004BFFC6F93C60020CC03B035430633A40D03E004C8083003053A4067260000000
B 00010000 04000000
B 806E0030546306722C0300004182001440860010807F521868630001907F5218 806E0030546306722C0300004182001440860010807F52186863000160000000
/* Sam specific */
B 00010000 04000000
B F821FF717C0802A6F80100A0DBE10088FBC100783FC0020C38800000FBE1008033DE3A40607F000080BE003050850672FBA1007090BE0030 F821FF717C0802A6F80100A0DBE10088FBC100783FC0020C38800000FBE1008033DE3A40607F000080BE003050850672FBA1007060000000
B 00010000 04000000
B 63E30000809E0030F841002853A40672909E0030809F0000808403A080A40000 63E30000809E0030F841002853A4067260000000809F0000808403A080A40000
B 00010000 04000000
B FBE100903BA00000607F0000809E003053A40672909E003048382EF560000000809F000063E30000 FBE100903BA00000607F0000809E003053A406726000000048382EF560000000809F000063E30000
B 00010000 04000000
B 9077000048000018809C00043860009460842000909C0004907700003C60020C30833A4062C3000080A4003053A5067290A40030 9077000048000018809C00043860009460842000909C0004907700003C60020C30833A4062C3000080A4003053A5067260000000
B 00010000 04000000
B 90830030C03C3EF4FC01F8004CC013824186002C638300004820573960000000C05C3EF4EC220828FC01F800D03C3EF44CC113824186000893BC3EF42C1F00004182005C809F0000 60000000C03C3EF4FC01F8004CC013824186002C638300004820573960000000C05C3EF4EC220828FC01F800D03C3EF44CC113824186000893BC3EF42C1F00004182005C809F0000
/*
Entering blade mode will
still partially disable
the AR Display, but it
should stay on through
everything else until you
press Up on the Direction
Pad to turn it off.

You will also need this
for Sam if you want him
to be able to use it.
*/
#
AoB Character Modifier
0
bungholio
B 00010000 04000000
B 600000003C600224388000019083CC68E80100C07C0803A6EB610088EB810090EBA10098EBC100A0EBE100A8382100B04E800020 600000003C600224388000019083CC6849CDF8237C0803A6EB610088EB810090EBA10098EBC100A0EBE100A8382100B04E800020
B 00010000 04000000
B 600000002C03000041820124809E0000F84100286359000063C3000033410078 49CDF8AB2C03000041820124809E0000F84100286359000063C3000033410078
B 00010000 04000000
B 2C0400004082000C3860FFFF480002083C80022D3084F140808400345484052E2C040C002C840D004182000840860190 2C0400004082000C3860FFFF480002083C80022D3084F14049CDF8C75484052E2C040C002C840D004182000840860190
/*
Requires the Button
Enable Code to be
activated or nothing will
happen when you press the
buttons.


Make sure you have the
necessary DLC installed
for various characters
and costumes.


You start with things
loading their normal
ways. Each time you press
the button combo, it
cycles up 1 with you
having 10 choices:

Disable, so whoever is normal for a certain area
Normal Raiden
Sam
Blade Wolf
Bare-Handed Raiden
File R-00 Raiden
Your creation 1
Your creation 2
Your creation 3
Your creation 4


They will take effect
once you restart a
checkpoint or load or
start a game.


They will likely break
various things in the
game, they were not all
designed to be able to
do all of the same
things as each other, so
be wary.


To disable a slot that
you do not want, change
the value of the 1st line
to 0000FFFF. So if you do
not have Sam or Blade
Wolf, change their values
from 00000008 and
00000009 to 0000FFFF and
their slots will be
skipped.


This is designed to
specifically go to the
next slot that is not
disabled as the current
slot. If you set the
value to 02 for Sam, then
disable Sam's slot, it
will do Blade Wolf. If
you then disabled Blade
Wolf's slot too, it will
do Fists Raiden.


It will correctly adjust
the gaps too, so if you
then change the value to
03, it will do File R-00
Raiden instead of Blade
Wolf or Fists Raiden.
Change it to 04, you get
custom character 01.
Enable Sam's slot again,
and 04 will do File R-00
Raiden again. Enable
Blade Wolf's slot, and
04 gets you Fists Raiden
again.


I also wrote it to
disable the code if you
accidentally disable all
slots and forget so it
does not crash trying to
load character 0000FFFF.


I also wrote it so going
over the limit chooses
your highest slot that is
not disabled. 0A will get
you custom character 4.
0B will get you custom
character 4 too. Disable
custom character 4, and
you will get custom
character 3. Change to
value 0F, still the same.
Enable custom character 4
again and you will have
him again.


You should not be able to
cause a crash from odd
little mistakes unless
you try odd values for
things which is your
gamble.


The 3 choice thing for
Raiden, Sam, and Blade
Wolf is a mystery to me,
but the game will crash
if you make those
different than the
character value. So value
01 for Sam will crash if
you do stuff with values
00 to 07 or value 09.


Raiden can have Sam's
costume, and Sam can have
Raiden's costumes. Blade
Wolf can only have his
own appearance, I have
never had it do anything
except crash if they do
not match.


I did not try Wigs or
Unique Weapons with Sam
or Blade Wolf.


I do not know what the
thing is that is 00000000
for Raiden or 80000000
for Sam or Blade Wolf,
try doing whatever you
want with it.


I also do not know what
the thing is that is
always FFFFFFFF for all
characters, but feel free
to mess around with it
and see what happens.


There are more values in
the area that might
affect things, but others
can explore them if they
have the patience.


Do not try character
value 02, it crashed my
game. When I did it under
older circumstances, it
instead moved the camera
far under the ground from
the starting point of a
level without a character
and crashed from various
input.


The old character
modifier was a 1 line
modification here:
00AFE6D4 607D0000 mr r29,r3


You could use this
for the old code:
0 00AFE6D4 3BA0????


It was really a chapter
section modifier value
that could give you a few
more effects that I did
not figure out in the
function. These were some
values for that:
0380 = Normal Raiden, can choose costume, all 4 item choices and can choose main weapon.
0740 = Normal Raiden with red electric sword and some blue sword slashes. No custom weapon option available, main weapon choice shows empty with no choices. Can choose costume.
0750 = Normal Raiden with red electric sword and reddish orange sword slashes. No custom weapon option choice, main weapon shows HF Murasama Blade with no ability to change it. Can choose costume.
0C00 = Sam
0D00 = Blade Wolf
0E00 = Raiden with electric sword, likely from the main menu where you choose which profile to load. Mostly black, weapons on back, strap from top right head over left eye. All 4 item choices and can choose any main weapon.
0E40 = Raiden fighting with bare hands, no swords or anything.
0EF2 = Same as 0E00?
0EF4 = Raiden from File 0? Cover on left eye, yellow shoulders and butt, blue chest and shoulder blades, black front and back, pale pink and white arms and legs, knife and sword on left hip, gun on right hip, knife on inner right leg. No AR Display. L1 doesn't do the fancy thing at full, and no HUD or item/weapon select.


I went with the new
method for a little less
crashes and other
problems, but probably
lost a few simple effects
in the process due to my
laziness in figuring out
things, like the red
slash effect of Ripper
Mode Raiden and possibly
other unique things.
*/
#