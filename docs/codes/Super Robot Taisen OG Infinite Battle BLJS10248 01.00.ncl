Infinite Ammo
0
games24.blog.fc2.com/blog-entry-222.html
0 00087658 60000000
#
PP Never Decreases
0
nichecode.blog.fc2.com/blog-category-12.html
0 0088354C 7C681B78
#
Money Never Decreases (Except For Arsenal)
0
nichecode.blog.fc2.com/blog-category-12.html
0 00014C38 60000000
#
Arsenal Never Decreases Money
0
nichecode.blog.fc2.com/blog-category-12.html
0 000FF914 60000000
#
Money Multiplier
0
nichecode.blog.fc2.com/blog-category-12.html
0 003F4394 1C63Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
Exp Multiplier
0
nichecode.blog.fc2.com/blog-category-12.html
/* Main unit display */
0 003F3A74 1C63Z
/* Main unit actual */
0 003F4C90 1C63Z
/* Sub unit display */
0 003F3DA4 1C63Z
/* Sub unit actual */
0 003F5030 1C63Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
PP Multiplier
0
nichecode.blog.fc2.com/blog-category-12.html
/* Main unit display */
0 003F3A94 1C63Z
/* Main unit actual */
0 003F4C6C 1C63Z
/* Sub unit display */
0 003F3DC4 1C63Z
/* Sub unit actual */
0 003F500C 1C63Z
[Z]000A=10x;0064=100x;03E8=1,000x;2710=10,000x[/Z]
#
Exp Never Decreases For Sub Units
0
nichecode.blog.fc2.com/blog-category-12.html
0 004A0924 60000000
#
PP Never Decreases For Sub Units
0
nichecode.blog.fc2.com/blog-category-12.html
0 0049FE00 60000000
#
SR PP Amount Modifier
0
nichecode.blog.fc2.com/blog-category-12.html
0 00441108 38DCZ
[Z]000A=Default 10;0064=100;03E8=1,000;2710=10,000[/Z]
#
Current Power Change
0
nichecode.blog.fc2.com/blog-category-12.html
0 00FFC000 2D040022
0 00FFC004 418A000C
0 00FFC008 88C50007
0 00FFC00C 4E800020
0 00FFC010 38C000C8 /* Change 00C8 */
0 00FFC014 98C50000
0 00FFC018 4BFFFFF0
0 007274D0 48FFC003
/*
Change the character's
power to anything. You
can also use it to
enemies. The status can
not be effective with
the status open. You can
set the power to 170, but
if you do not possess the
power limit breakthrough,
150 after battle Will be
corrected.
*/
#
Keypad Operation Current Power Change
0
nichecode.blog.fc2.com/blog-category-12.html
0 007274D0 88C50007
0 00FFC000 2D040022
0 00FFC004 418A000C
0 00FFC008 88C50007
0 00FFC00C 4E800020
0 00FFC010 38C00064
0 00FFC014 98C50000
0 00FFC018 4BFFFFF0
/* Select + Square */
D2 300CF0F8 00008001
0 007274D0 48FFC003
0 00FFC010 38C000nn
/* Select + Triangle */
D2 300CF0F8 00001001
0 007274D0 48FFC003
0 00FFC010 38C000nn
/*
Put the cursor on the
character.


Because of the
relationship between the
program read frequency
and the Constant Write
write cycle, it may not
be effective if you do
not hold it for about
one second.


If you release the button
before it works properly,
the current power is 105.


This version adds keypad
operations for NetCheat.
There is no effect when
the simplified status
screen is open.
*/
#
Keypad address candidate
0
nichecode.blog.fc2.com/blog-category-12.html
/*
300CF0F8
300CF108

Normal type plus form
(logical sum form)
Neutral: 0x00000000
Select: 0x00000001
Start: 0x00000008
Top: 0x00000010
Right: 0x00000020
Bottom: 0x00000040
Left: 0x00000080
△: 0x00001000
O: 0x00002000
X: 0x00004000
□: 0x00008000
L1: 0x00000400
R1: 0x00000800
L2: 0x00000100
R2: 0x00000200
L3: 0x00000002
R3: 0x00000004
*/
#
General Purpose Full Remodeling Bonus Resettable
0
nichecode.blog.fc2.com/blog-category-12.html
0 0013E134 7F063000
0 00145298 7F8C6000
/*
You can change the bonus
any number of times.
*/
#
All Aircraft Reinforced Parts Frame 4
0
nichecode.blog.fc2.com/blog-category-12.html
0 0072A6CC 38600004
0 001708E8 38600004
0 0002F954 3B800004
0 001704AC 3B600004
0 00175C9C 3B600004
0 001D3218 3B600004
0 001D82D8 3B200004
0 0002F8A8 3B800004
0 000A37C4 3B000004
0 000A40FC 39600004
0 0016CC24 38C00004
0 001703B4 3B600004
0 001D312C 3B600004
0 001D8150 3B200004
#
All Skills Can Be Acquired
0
nichecode.blog.fc2.com/blog-category-12.html
0 006ECF94 38600001
0 006ECFC4 38600001
/*
Skills with Level, such
as infights, cancer
fights, and mental power,
can not be raised from +1
even if they are
acquired.


Even if you change it
manually from the memory
that stores normal skill
Level, the display will
change. It seems that the
processing is different
because the actual skill
Level increase effect was
not obtained.


Also, the special skill
with "*" on the left of
the skill name now does
not go through the memory
manually. This also 
requires analysis because
it can not be erased
(it can not be
overwritten) even if it
is remembered.
*/
#
Can Overwrite Skills With * (Asterisk)
0
nichecode.blog.fc2.com/blog-category-12.html
0 00129DA0 3BA00001
#
Exp Never Decreases For Map Weapons
0
nichecode.blog.fc2.com/blog-category-12.html
0 004A0798 7C0C6000
#
PP Never Decreases For Map Weapons
0
nichecode.blog.fc2.com/blog-category-12.html
0 0049FD3C 7C129000
#
Transit Limit Release
0
nichecode.blog.fc2.com/blog-category-12.html
0 006F8240 38600001
0 00AA8F64 38600001
/*
The upper part is the
pilot's transfer
restriction, but the
aircraft's transfer
restriction pilot and the
aircraft are tied and the
map is forced to be sent
back.


It freezes when carrying
a battleship pilot or sub
pilot.
*/
#
Aircraft + Pilot Change Keypad Operation Increment + Decrement
0
nichecode.blog.fc2.com/blog-category-12.html
0 00FFC01C 38800000
0 00FFC020 6084FFF0
0 00FFC024 6484CF8F
0 00FFC028 3CA0300C
0 00FFC02C 60A5F0FA
0 00FFC030 A0640000
0 00FFC034 A0A50000
0 00FFC038 2B850200
0 00FFC03C 419E0058
0 00FFC040 2B850600
0 00FFC044 419E0058
0 00FFC048 2B850A00
0 00FFC04C 419E0058
0 00FFC050 2B850100
0 00FFC054 419E0058
0 00FFC058 2B850500
0 00FFC05C 419E0058
0 00FFC060 2B850900
0 00FFC064 419E0058
0 00FFC068 2B850E00
0 00FFC06C 419E0058
0 00FFC070 2B850D00
0 00FFC074 419E0058
0 00FFC078 7C630734
0 00FFC07C 2F830000
0 00FFC080 419C0054
0 00FFC084 2F83013F
0 00FFC088 419D0054
0 00FFC08C B0640000
0 00FFC090 4E800020
0 00FFC094 38630001
0 00FFC098 4BFFFFE0
0 00FFC09C 38630010
0 00FFC0A0 4BFFFFD8
0 00FFC0A4 38630030
0 00FFC0A8 4BFFFFD0
0 00FFC0AC 3863FFFF
0 00FFC0B0 4BFFFFC8
0 00FFC0B4 3863FFF0
0 00FFC0B8 4BFFFFC0
0 00FFC0BC 3863FFD0
0 00FFC0C0 4BFFFFB8
0 00FFC0C4 3860013F
0 00FFC0C8 4BFFFFC4
0 00FFC0CC 38600000
0 00FFC0D0 4BFFFFBC
0 00FFC0D4 38630140
0 00FFC0D8 4BFFFFB4
0 00FFC0DC 3863FEC0
0 00FFC0E0 4BFFFFAC
0 0003D00C 48FFC01F
/*
Each time the cursor is
moved to the appropriate
aircraft on the unit
formation screen and L2
or R2 is used to display
"Information 1" at the
bottom of the screen, the
value of HP of the
aircraft increases or
decreases. This HP number
is matched to the target
aircraft ID or pilot ID,
and the aircraft or pilot
is changed with the code
described below.


When "Information 1" is
displayed, the amount of
increase or decrease of
the value changes
depending on the button
pressed.
L2: -0x1
L1 + L2: -0x10
R1 + L2: -0x30
R2: +0x1
L1 + R2: +0x10
R1 + R2: +0x30
L1 + R1 + L2: Forced 0x0
L1 + R1 + R2: Forced 0x13F


Also, 0x13F (319), the
maximum pilot ID, is the
upper limit.
*/
#
Pilot Change (Prototype Not Completed)
0
nichecode.blog.fc2.com/blog-category-12.html
0 00FFC118 3CA0300C
0 00FFC11C 60A5F0FA
0 00FFC120 A0A50000
0 00FFC124 2B858C00
0 00FFC128 40BE001C
0 00FFC12C 38A00000
0 00FFC130 60A5FFF0
0 00FFC134 64A5CF8F
0 00FFC138 A0A50000
0 00FFC13C B0A40000
0 00FFC140 4E800020
0 00FFC144 A0A40000
0 00FFC148 4BFFFFF8
0 0072F5B4 48FFC11B
/*
Set the cursor to the
pilot you want to change
on the unit formation
screen, after aligning
the desired ID with the
keypad operation above,
while pressing L1 + R1,
open the detail screen
with the □ button, then
cancel twice and exit the
unit formation screen. It
is successful if the
confirmation screen
saying "Change to the set
contents" is displayed.
After pressing "Yes",
when you open the unit
formation screen again,
it is changed to the
desired pilot.


If the numerical
operation with the keypad
is troublesome,
00FFC138 A0A50000 → 38A00nnn
replace and insert the
pilot ID in nnn.


Ace bonus or Mental
command will be the
target pilot's thing, the
skill is just the
original.


If you change a pilot
that has a forced
dispatch, the operation
may be wrong.


There is also an
interesting defect that
the forced dispatch pilot
rejoins with Leve1 while
leaving the changed pilot
as it is.


The pilot ID has been
analyzed by "Cheat's
Room", so please check
there.
*/
#
Aircraft Change (Not Completed On Trial)
0
nichecode.blog.fc2.com/blog-category-12.html
0 00FFC0E4 3D00300C
0 00FFC0E8 6108F0FA
0 00FFC0EC A1080000
0 00FFC0F0 2B881C00
0 00FFC0F4 40BE001C
0 00FFC0F8 39000000
0 00FFC0FC 6108FFF0
0 00FFC100 6508CF8F
0 00FFC104 A1080000
0 00FFC108 B10A000C
0 00FFC10C 4E800020
0 00FFC110 A10A000C
0 00FFC114 4BFFFFF8
0 00727774 48FFC0E7
/*
Usage is almost the same
as the pilot change, move
the cursor to the
aircraft to be changed in
the unit formation screen,
L1 + R1 + △ open and
change the ability screen
and then exit.


In addition, the aircraft
change is applied even if
you open the ability
screen with L1 + R1 + △
from the aircraft list
etc. However, once it
opens the unit formation
screen, the trouble is
almost the same.


If you change the
aircraft with forced
dispatch, the operation
is weird.


There is also an
interesting bug that the
aircraft which has been
changed remains as it is,
the forced launcher
rejoins without
modification. In
addition, there is a
possibility that a
non-progressive defect
may occur. If you are
having trouble with
numerical operations with
the keypad, replace
00FFC104 with A1080000 → 39000 nnn
and insert the desired
aircraft ID in nnn.


Please also check the
aircraft ID with "Cheat
Room".
#
AoB Infinite Ammo
0
games24.blog.fc2.com/blog-entry-222.html
B 00010000 04000000
B 3084FFFF2C0400004180000860870000 600000002C0400004180000860870000
#