Alternative Names
0
PARAM.SFO
/*
Die Hüter Des Lichts
El Origen De Los Guardianes
Le 5 Leggende
Les Cinq Légendes
*/
#
Porting Info
0
EBOOT.ELF
/*
BLES01760 and BLUS31067
are mostly easy to port
codes between.

Things are operation-wise
the same up until
0x00084BF8 to
BLES01760 0x00084DA8 and
BLUS31067 0x00084DAC
where things start
syncing up operation-wise
again.

BLUS31067 then has
an unused nop at 
0x00084E5C, then at
BLUS31067 0x00084E60 and
BLES01760 0x00084E58 they
start syncing up again.

Then for BLUS31067 at
0x000BEBD8 are 2
consecutive unused nop
lines and then at
BLES01760 0x000BEBD0 and
BLUS31067 0x000BEBE0
things start syncing
again.

BLUS31067 has an extra 16
bytes of zeroes at
0x0024AE70 and then syncs
with BLES01760 at
0x0024AE60 again. By this
point, we've gone past
the point where asm code
ended and you have what
you need for easy
porting.
*/
#
Memory Infinite Sand Of Dreams
0
jgduff1
0 002BB68C 00060000
0 002BB6A8 00060000
#
ASM Infinite Sand Of Dreams
0
jgduff1
0 00087DA8 60000000
0 00087DD4 60000000
#
Memory Infinite Magic
0
jgduff1
0 31253408 00000168
0 312534B0 00000168
#
ASM Infinite Magic
0
jgduff1
0 0003F898 7C802010
0 0003F8B0 60000000
0 000523F4 901F00E8
#
Memory Instant Health Regeneration
0
jgduff1
0 312502FC 000000B0
#
ASM Instant Health Regeneration
0
jgduff1
0 00165000 7C692014
#