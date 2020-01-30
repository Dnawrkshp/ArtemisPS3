Enable Code For EBOOT.BIN Modding
0
Medo
00000064 0087B000
0000006C 0087B000
/*
This is only needed if
you are modifying the
eboot file. If you
modify the eboot file, go
to those 2 addresses of
the decrypted EBOOT.ELF
and make those changes,
or the list of below
codes will crash your
game because the game
will erase the routines
on startup.
*/
#
Dumb Opponents 1
0
bungholio
0 008D8DB0 00000000
/*
This can be useful for
road rage or marked man
because opponents drive in
circles backing up and and
moving forward like they
can not figure out how to
drive.
*/
#
Dumb Opponents 2
0
bungholio
0 008D8DB4 00000000
/*
This causes opponents to
lose control if you are
near them. At the
beginning of a race
opponents will not move,
but if you get far enough
away they will, and when
they catch up whatever
they are doing they will
keep doing, so if they are
driving forward in a
straight line they will do
that until they hit a
wall. If they were turning
they will drive in
circles. In Road Rage this
is not useful because
opponents will drive
straight into walls and
crash themselves.
*/
#
Unlimited Lives In Marked Man + Road Rage
0
bungholio
0 00126FBC 39200000
/*
In road rage it will still
tell you to repair your
car, but it affects
nothing, you can still
wreck your car 100
consecutive times and
never lose the event.
*/
#
Boost Never Decreases
0
bungholio
0 000C094C C0030098
/*
You will need to get some
boost first. If you crash
and lose boost, you lose
boost.
*/
#
9999 Road Rage Takedowns
0
bungholio
0 00127320 3960270E
#
Each Takedown In Road Rage Is 10 Takedowns
0
bungholio
0 00127328 396B000A
#
9999 Consecutive Road Rage Takedowns
0
bungholio
0 00172794 3960270E
#
Each Takedown In Road Rage Is 10 Consecutive Takedowns
0
bungholio
0 0017279C 396B000A
#
1000x Stunt Score Multiplier
0
bungholio
0 00107B98 39002710
/*
The game will not show
it, but it works.
*/
#
999,999 Stunt Score
0
bungholio
0 00107BBC 3D40000F
0 00107BC0 614A423F
/*
Do any stunt and you
will have that score.
*/
#
Every Stunt Is Worth 999,999 Amount
0
bungholio
0 00107BB4 3C00000F
0 00107BB8 6000423F
#
Speed Modifier For Everything
0
bungholio
0 008D3E48 Z
[Z]3F800000=Normal;3F000000=0.5x;3F100000=0.5625x;3F200000=0.625x;3F300000=0.6875x;3F400000=0.75x;3F500000=0.8125x;3F600000=0.875x;3F700000=0.9375x[/Z]
#
Button Enable Code
0
bungholio
0 0088A47C 3D60008F
0 0088A480 881E0009
0 0088A484 980BF000
0 0088A488 881E000B
0 0088A48C 980BF001
0 0088A490 881E0009
0 0088A494 F861FFF8
0 0088A498 F881FFF0
0 0088A49C A06BF000
0 0088A4A0 70640600
0 0088A4A4 A00BF002
0 0088A4A8 B08BF002
0 0088A4AC 2B840600
0 0088A4B0 409E0018
0 0088A4B4 7F840040
0 0088A4B8 419E0010
0 0088A4BC 880BF004
0 0088A4C0 68000001
0 0088A4C4 980BF004
0 0088A4C8 70641001
0 0088A4CC A00BF006
0 0088A4D0 B08BF006
0 0088A4D4 2B841001
0 0088A4D8 409E0018
0 0088A4DC 7F840040
0 0088A4E0 419E0010
0 0088A4E4 880BF004
0 0088A4E8 68000002
0 0088A4EC 980BF004
0 0088A4F0 70644001
0 0088A4F4 A00BF008
0 0088A4F8 B08BF008
0 0088A4FC 2B844001
0 0088A500 409E0018
0 0088A504 7F840040
0 0088A508 419E0010
0 0088A50C 880BF004
0 0088A510 68000004
0 0088A514 980BF004
0 0088A518 E861FFF8
0 0088A51C E881FFF0
0 0088A520 A17E0008
0 0088A524 4E800020
0 0062F1C4 4825B2B9
/*
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
Press L3 + R3 To Toggle Unlimited Ground Break
0
bungholio
0 0088A528 FD8D602E
0 0088A52C F861FFF8
0 0088A530 3C60008F
0 0088A534 8863F004
0 0088A538 70630001
0 0088A53C 2B830001
0 0088A540 409E0008
0 0088A544 C1890000
0 0088A548 E861FFF8
0 0088A54C 4E800020
0 000E9104 487A1425
#
/*
Requires the button
enable code to be
activated or nothing will
happen when you press the
button combo.
*/
#
Toggle Dumb AI With L2 + Up
0
bungholio
0 0088A550 3CA0008F
0 0088A554 88A5F004
0 0088A558 70A50002
0 0088A55C 2B850002
0 0088A560 4D9E0020
0 0088A564 380000B0
0 0088A568 4BC895E0
0 00513B44 48376A0C
/*
Requires the button
enable code to be
activated or nothing will
happen when you press the
button combo.
*/
#
Disable Crashes For You
0
bungholio
0 0088A46C 3CC00100
0 0088A470 7F862040
0 0088A474 4D9E0020
0 0088A478 7D800026
0 0088A47C 4BB43ED8
0 003CE350 484BC11C
#
No Opponent Drivers
0
bungholio
0 0051B3A4 4E800020 // 38000090
/*
1 side effect of this is
that if you crash into
something, you will not
respawn. Use the code to
disable crashes so you
don't need to worry about
that. Disabling the code
instantly fixes it, but
you will respawn in a
certain same spot once
you disable it.

Races will become easy
to win because your
opponents will not spawn
even though you will see
arrows for them on the
map.

If you encounter any
crashes somehow, this is
a potential alternative.

0 0051B4B4 48000310 // 419E0310 to turn off
*/
#
Unlimited Time For Burning Routes + Road Rage
0
bungholio
0 0012A8B0 4BFFFB60
0 001272EC 48000034
/*
You will still see the
timer increase doing a
Burning Route, but once
it reaches the limit it
stops increasing and you
have unlimited time to
complete the Burning
Route.

You will see the timer
decrease during Road Rage
too, but once it reaches
"0m00s" it will stop
decreasing and you can
continue doing Road Rage
as long as you like.

The 2nd line is
specifically for Road
Rage. If it is not
included, your
takedowns will not
increase once the timer
reaches "0m00s".
*/
#
Unlimited Time For Stunt Runs
0
bungholio
0 0012ADB8 480002C8
#
Boost Is Always Full
0
bungholio
0 000D0BC0 C0230098
0 000D0BC8 D0230094
#
Crash Score Multiplier
0
bungholio
0 00889F84 1D4AZ
0 00889F88 7C005214
0 00889F8C 4E800020
0 0010EABC 4877B4C9
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
/*
I know it already has a
normal multiplier, and
that is located at
0x0010EACC with r7 being
that +1 to the multiplier
you get from hitting a
bus if you need it.
*/
#