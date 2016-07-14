HP Never Decreases
0
bungholio
0 00781820 80FE00B0
0 00781824 2B870005
0 00781828 48000020
0 00781848 409E0008
0 0078184C 809C000C
0 00781850 909C0000
0 00781854 48291222
0 0029121C 48781822
#
Enemies Die From Any Damage
0
bungholio
0 00781874 7C842810
0 00781878 80FE0028
0 0078187C 2B870005
0 00781880 48000020
0 007818A0 419E0008
0 007818A4 38800000
0 007818A8 4829121E
0 00291218 48781876
#
MP Never Decreases
0
bungholio
0 00781924 807E00B0
0 00781928 2B830005
0 0078192C 409E0028
0 00781930 48000020
0 00781950 80A7000C
0 00781954 90A70000
0 00781958 4829103E
0 00291038 48781926
#
Enemies Have 0 MP After Use
0
bungholio
0 007818CC 7CDF3010
0 007818D0 807E00B0
0 007818D4 2B830005
0 007818D8 48000020
0 007818F8 419E0008
0 007818FC 7CC63010
0 00781900 4829102E
0 00291028 487818CE
/*
I do not know if this is
actually useful. I tried
this and saw it had no
effect no matter how many
different moves an enemy
performed. To make sure, I
used the health code to
check and see if enemies
had actual MP and I kept
seeing just 0 current MP
without any codes with a
max MP capacity of 1. This
might be useless but I did
not play the entire game
so I am not completely
certain if it is useless.
*/
#
Money Gained Multiplier
0
games24 fixed by bungholio
0 007818CC 1FFFZ
0 007818D0 7CA4F814
0 007818D4 4835EF56
0 0035EF50 487818CE
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
Alchemy Experience Gained Multiplier
0
games24
0 001E7D8C 3063Z
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
Experience Gained Multiplier
0
games24 fixed by bungholio
0 007818F8 1CA5Z
0 007818FC 7CA62814
0 00781900 481FA616
0 001FA610 487818FA
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
Burst Max On Gain
0
bungholio
0 002ABE58 60000000
#
Burst Never Decreases
0
bungholio
0 002ABECC 60000000
#
Alchemy Materials, Combat Equipment, And Search Equipment Never Decrease
0
games24
0 00185200 60000000
Switching Combat or Search Equipment duplicates the item you switched from.
#
Field Gauge Max On Change
0
games24
0 0010CEB4 60000000
#
Max Alchemy Level Effect On Creation
0
games24
0 0033548C 48000008
#
Shops Have Unlimited Merchandise
0
bungholio
0 00357578 60000000
#
Max Money On Buy
0
bungholio
0 0035EF98 48000008
#
Sell Something For Max Amount
0
bungholio
0 00196500 3860270F
#
Synthesize Recipe Modifier
0
bungholio
0 0083BA60 3FA000F1
0 0083BA64 88030041
0 0083BA68 981D1000
0 0083BA6C 88030043
0 0083BA70 981D1001
0 0083BA74 A01D1000
0 0083BA78 70098100
0 0083BA7C A3FD1002
0 0083BA80 B13D1002
0 0083BA84 2B898100
0 0083BA88 409E0018
0 0083BA8C 7F9F4840
0 0083BA90 419E0010
0 0083BA94 893D1008
0 0083BA98 69290001
0 0083BA9C 993D1008
0 0083BAA0 80BD100C
0 0083BAA4 70091100
0 0083BAA8 A3FD1004
0 0083BAAC B13D1004
0 0083BAB0 2B891100
0 0083BAB4 409E0040
0 0083BAB8 7F9F4840
0 0083BABC 419E0038
0 0083BAC0 38A50001
0 0083BAC4 2B850081
0 0083BAC8 409E000C
0 0083BACC 38A0008E
0 0083BAD0 48000010
0 0083BAD4 2B8500B5
0 0083BAD8 409E000C
0 0083BADC 38A000B6
0 0083BAE0 48000010
0 0083BAE4 2B8500E7
0 0083BAE8 409E0008
0 0083BAEC 38A00000
0 0083BAF0 90BD100C
0 0083BAF4 70094100
0 0083BAF8 A3FD1006
0 0083BAFC B13D1006
0 0083BB00 2B894100
0 0083BB04 409E0040
0 0083BB08 7F9F4840
0 0083BB0C 419E0038
0 0083BB10 38A5FFFF
0 0083BB14 2B85008D
0 0083BB18 409E000C
0 0083BB1C 38A00080
0 0083BB20 48000010
0 0083BB24 2B8500B5
0 0083BB28 409E000C
0 0083BB2C 38A000B4
0 0083BB30 48000010
0 0083BB34 2F85FFFF
0 0083BB38 409E0008
0 0083BB3C 38A000E6
0 0083BB40 90BD100C
0 0083BB44 A0A3003C
0 0083BB48 484539AE
0 0083BB4C 3FC000F1
0 0083BB50 8BFE1008
0 0083BB54 2B9F0001
0 0083BB58 409E0008
0 0083BB5C 809E100C
0 0083BB60 609E0000
0 0083BB64 4832D126
0 004539A8 4883BA62
0 0032D120 4883BB4E
/*
Select + < = Toggle whether to use specific Recipe
Select + ^ = Go up 1 Recipe
Select + \/ = Go down 1 Recipe

I modified this to skip
past the items that would
cause the game to crash.

Recipe List

0000 = Craft
0001 = Bomb
0002 = Ice Bomb
0003 = Lightning Bomb
0004 = Uni
0005 = Lava Cube
0006 = Dimension Bomb
0007 = Electrical Discharge Tube
0008 = Globe
0009 = Glass Rose
000A = Meteor
000B = Talisman of Ancient Beasts
000C = Shepherd's Flute
000D = Weight Stone
000E = Barrel
000F = Pumpkin Doll
0010 = Living Trash Can
0011 = Flying Board
0012 = Refueld Pads
0013 = Healing Salve
0014 = Herbal Soup
0015 = Apple Tart
0016 = Refresh Medicine
0017 = Buzzter Nuts
0018 = Stellard Medicine
0019 = Shelbani Bread
001A = Healing Aroma
001B = Stellapearl
001C = Medicine Bread
001D = Smoked Meat
001E = Golden Extract Soup
001F = Media Book
0020 = Fruit Ration
0021 = Slag Soup
0022 = Ritual Powder
0023 = SP Medicine
0024 = Awakening Medicine
0025 = Dragon Cup
0026 = Slag Essence
0027 = Traveler's Ration
0028 = Goddess Shield
0029 = Healthy Ration
002A = Time Watch
002B = Millionaire's Full Course
002C = Angel Powder
002D = Medicine of the Four Beasts
002E = Dragon's Secret
002F = Elixir
0030 = Fruit Tart
0031 = Plant Fertilizer
0032 = Demon Warding Charm
0033 = Dowsing Rod
0034 = Mysterious Monocle
0035 = Travel Gate
0036 = Handmade Bait
0037 = Shelbani Flour
0038 = Dried Herbs
0039 = Plant Oil
003A = Abrasive
003B = Handspun Rabbit Yarn
003C = Supplement - Red
003D = Supplement - Blue
003E = Supplement - Green
003F = Supplement - Yellow
0040 = Supplement - White
0041 = Supplement - Black
0042 = Supplement - Rainbow
0043 = Handmade Jam
0044 = Honey
0045 = Plant Syrup
0046 = Leather
0047 = Zettel
0048 = Palma Board
0049 = Powdered Glass
004A = Glass Tube
004B = Crystal Ball
004C = Medical Solution
004D = Stellard Fabric
004E = Fire Lord's Charcoal
004F = Iron Clay
0050 = Burning Gas
0051 = Black Powder
0052 = Frosty Crystal
0053 = Water Crystal
0054 = Electric Orb
0055 = Distilled Water
0056 = Super Pure Water
0057 = Unbreakable Glass
0058 = Mysterious Cloth
0059 = Gravicrystal
005A = Precious Stone
005B = Twin Color Corundum
005C = Polarized Gem
005D = Comet Crest Stone
005E = Holinic
005F = Dark Iron
0060 = Algemein Plywood
0061 = Ziegel Nugget
0062 = Cole Medapaid
0063 = Dark Steel Plate
0064 = Holinic Steel Plate
0065 = Aroma Materia
0066 = Sun Flower
0067 = Floater Unit
0068 = Ingot
0069 = Holinicait
006A = Shuvea Metal
006B = Alto Metal
006C = Meteonite
006D = Halmolium
006E = Cloth
006F = Mofcott
0070 = Silkis Feather
0071 = Alto Cloth
0072 = Scale Cloth
0073 = Velvetis
0074 = Lumber
0075 = Palma Wood
0076 = Mixed Wood
0077 = Alto Wood
0078 = Mystix
0079 = Yggdras
007A = Stone Coin
007B = Heart of Fire
007C = Planet Sphere
007D = Chronicle Shield
007E = Escape Jewel
007F = Thunder Outfit
0080 = Divine Soul
0081 = CRASH! Sythesis Item 78
0082 = CRASH! Sythesis Item 79
0083 = CRASH! Sythesis Item 80
0084 = CRASH! Sythesis Item 81
0085 = CRASH! Sythesis Item 82
0086 = CRASH! Sythesis Item 83
0087 = CRASH! Sythesis Item 84
0088 = CRASH! Sythesis Item 85
0089 = CRASH! Sythesis Item 86
008A = CRASH! Sythesis Item 87
008B = CRASH! Sythesis Item 88
008C = CRASH! Sythesis Item 89
008D = CRASH! Key Item 19
008E = Ship Clan's Bell
008F = Resonance Chime
0090 = White Winged Bell
0091 = Sea Alchemist's Bell
0092 = Convenient Broom
0093 = Stylish Broom
0094 = Magia Sumonitora
0095 = Alchemist's Broom
0096 = Sea Clan's Charm
0097 = Elemental Charm
0098 = Lunic Charm
0099 = Dragon Scale Charm
009A = Magician's Ring
009B = Sword Manipulation Ring
009C = Demonkin Ring
009D = Orbis Spiritis
009E = Crystal Twin Swords
009F = Silver Twin Swords
00A0 = Bloody Claws
00A1 = Air Foecutters
00A2 = Flame Bunker
00A3 = Armored Bunker
00A4 = Ancient Heat Bunker
00A5 = Chronicle Bunker
00A6 = Solis Gem
00A7 = Ignis Gem
00A8 = Zodiac Gem
00A9 = Diabolos Gem
00AA = Hayate
00AB = Demon Ore Sword
00AC = Mystical Beast Sword
00AD = Meteorite Sword
00AE = Sky Alchemy Staff
00AF = Golden Blue Staff
00B0 = Golden Wing Staff
00B1 = Lifetree Staff
00B2 = Management Board
00B3 = Plan Board
00B4 = Operation Plan Board
00B5 = CRASH! DLC_2_Weapon 4
00B6 = Cotton Shirt
00B7 = Thick Shirt
00B8 = High Collar Shirt
00B9 = Herbal Shirt
00BA = Leather Shirt
00BB = Fur Shirt
00BC = Combat Shirt
00BD = Riveted Shirt
00BE = Silver Threaded Shirt
00BF = Divine Shirt
00C0 = Chain Armor
00C1 = Bone Plate
00C2 = Holinic Full Metal
00C3 = Scale Plate
00C4 = Splint Mail
00C5 = Meteorite Armor
00C6 = Magic Plate
00C7 = Dragoon Mail
00C8 = Windbreaker
00C9 = Leather Coat
00CA = Agile Coat
00CB = Gold Embroidered Coat
00CC = Dragoon Coat
00CD = Divine Coat
00CE = Leather Gloves
00CF = Leather Boots
00D0 = Armoa Pouch
00D1 = Angel Ribbon
00D2 = Feather Ornament
00D3 = Blue Crystal Ring
00D4 = Gauntlet
00D5 = Metal Boots
00D6 = Spirit Belt
00D7 = Gunade Ring
00D8 = Glass Tiara
00D9 = Brother Call
00DA = Gold Coin of Fortune
00DB = Dragon Shield
00DC = Treasure Grimoire
00DD = Ancient Power Belt
00DE = One Angle Mascara
00DF = Meteor Gloves
00E0 = Meteor Boots
00E1 = Mirage Talisman
00E2 = Eyedrops of Truth
00E3 = Mini Sound Machine
00E4 = Wonder Drug of Tranquility
00E5 = Noble Suit
00E6 = Formal Dinner Suit
*/
#
Infinite Items In Battle
0
games24
0 001A0C54 33180000
0 00318F1C 30630000
#
99 Items When Bought
0
games24
0 00357574 38A00063
#
Field Gauge Max On Change
0
games24
0 0010CEB0 48000008
#
Field Event 3
0
games24
0 0010CEA8 7CA62B78
#
Unlimited Assists
0
games24
0 00295F00 38A00064
0 00295F3C 38A00064
#
(Map moves and varying) motivation Max
0
games24
0 0025C718 48000008
#
Life task (free) progression Max
0
games24
0 0035BDB8 388003E7
#
Motivation
0
games24
0 0025C8D0 C0441620
#
Growth Points Never Decrease
0
games24
0 0008E1C0 38A00000
#
Assist Deathblow Max
0
games24
0 002ABA50 38A003E8
#
Infinite Deathblows (special skill character)
0
games24
0 002ABA74 38A003E8
#
Infinite Field Burst Assists
0
games24
0 00295CF4 38A00064
#
Infinite Travel Gates
0
games24
0 00150240 30630000
#
Kill Increment Multiplier
0
games24
0 00206F0C 807B0007
0 00206F10 3063Z
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
Infinite Fishing Bait
0
games24
0 000B3BD4 307E0000
#
99 PP (Renkin time)
0
games24
0 001EB01C 60000000
#
Not a (free) attainment flag On life task 
0
games24
0 000925F0 4800007C
#
AoB HP Never Decreases
0
bungholio
B 00010000 04000000
B 0000000000000000000000002C000001000900020000000000000000007813080078144000A705D400000000000000000000000000000000 80FE00B02B870005480000202C000001000900020000000000000000007813080078144000A705D4409E0008809C000C909C000048291222
B 00010000 04000000
B 909C0000808300C02C0400004082009038800001 48781822808300C02C0400004082009038800001
#
AoB Enemies Die From Any Damage
0
bungholio
B 00010000 04000000
B 000000000000000000000000000000002C000001000900190000000000000000007813280078149800A705DC000000000000000000000000 7C84281080FE00282B870005480000202C000001000900190000000000000000007813280078149800A705DC419E0008388000004829121E
B 00010000 04000000
B 3C6000B77B9C002030639C8080BC00007C842810 3C6000B77B9C002030639C8080BC000048781876
#
AoB MP Never Decreases
0
bungholio
B 00010000 04000000
B 000000000000000000000000000000002C0000010009001D00000000000000000078136C0078159000A70554000000000000000000000000 807E00B02B830005409E0028480000202C0000010009001D00000000000000000078136C0078159000A7055480A7000C90A700004829103E
B 00010000 04000000
B 2C0600004180000860C5000048781926 2C0600004180000860C5000090A70000
#
AoB Enemies Have 0 MP After Use
0
bungholio
B 00010000 04000000
B 000000000000000000000000000000002C0000010009001800000000000000000078134C0078150000A70430000000000000000000000000 7CDF3010807E00B02B830005480000202C0000010009001800000000000000000078134C0078150000A70430419E00087CC630104829102E
B 00010000 04000000
B 78E700202C9F000080C700007CDF3010 78E700202C9F000080C70000487818CE
/*
I do not know if this is
actually useful. I tried
this and saw it had no
effect no matter how many
different moves an enemy
performed. To make sure, I
used the health code to
check and see if enemies
had actual MP and I kept
seeing just 0 current MP
without any codes with a
max MP capacity of 1. This
might be useless but I did
not play the entire game
so I am not completely
certain if it is useless.
*/
#
AoB Money Gained Multiplier
0
games24 fixed by bungholio
B 00010000 04000000
B 00A70644000000000000000000000000 00A706441FFFZ7CA4F8144835EF56
B 00010000 04000000
B 7C7F28107C041800408000087CA4F814 7C7F28107C04180040800008487818CE
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
AoB Alchemy Experience Gained Multiplier
0
games24
B 00010000 04000000
B 4800001880647F6830630001 4800001880647F683063Z
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
AoB Experience Gained Multiplier
0
games24 fixed by bungholio
B 00010000 04000000
B 00A70430000000000000000000000000 00A704301CA5Z7CA62814481FA616
B 00010000 04000000
B 6085000080C300083C80000F7CA62814 6085000080C300083C80000F487818FA
[Z]000A=10x;0064=100x;03E8=1000x;2710=10000x[/Z]
#
AoB Burst Max On Gain
0
bungholio
B 00010000 04000000
B 7CA520142C0600002C8505DC40820024388005DC4185000860A40000 7CA520142C0600002C8505DC40820024388005DC4185000860000000
#
AoB Burst Never Decreases
0
bungholio
B 00010000 04000000
B 7C8430147CA520142C8505DC40820024388005DC4185000860A40000 7C8430147CA520142C8505DC40820024388005DC4185000860000000
#
AoB Alchemy Materials, Combat Equipment, And Search Equipment Never Decrease
0
games24
B 00010000 04000000
B A0A80022A3C800027CA707347CE7F814 A0A80022A3C800027CA7073460000000
Switching Combat or Search Equipment duplicates the item you switched from.
#
AoB Field Gauge Max On Change
0
games24
B 00010000 04000000
B 38A0012C7CC6F0142C06012C4181000860C50000 38A0012C7CC6F0142C06012C4181000860000000
#
AoB Max Alchemy Level Effect On Creation
0
games24
B 00010000 04000000
B 40820008C3DB0004FC1E080041810008 40820008C3DB0004FC1E080048000008
#
AoB Shops Have Unlimited Merchandise
0
bungholio
B 00010000 04000000
B 7C6307B47CC4182E7CA530107CA4192E 7C6307B47CC4182E7CA5301060000000
#
AoB Max Money On Buy
0
bungholio
B 00010000 04000000
B 80BE00006084423F7C05200041810008 80BE00006084423F7C05200048000008
#
AoB Sell Something For Max Amount
0
bungholio
B 00010000 04000000
B 408100247C6600D033BD00017C651814 408100247C6600D033BD00013860270F
#
AoB Synthesize Recipe Modifier
0
bungholio
B 00010000 04000000
B FFFFFFFFFFFFFFFF000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 FFFFFFFFFFFFFFFF0000000000000000000000003FA000F188030041981D100088030043981D1001A01D100070098100A3FD1002B13D10022B898100409E00187F9F4840419E0010893D100869290001993D100880BD100C70091100A3FD1004B13D10042B891100409E00407F9F4840419E003838A500012B850081409E000C38A0008E480000102B8500B5409E000C38A000B6480000102B8500E7409E000838A0000090BD100C70094100A3FD1006B13D10062B894100409E00407F9F4840419E003838A5FFFF2B85008D409E000C38A00080480000102B8500B5409E000C38A000B4480000102F85FFFF409E000838A000E690BD100CA0A3003C484539AE3FC000F18BFE10082B9F0001409E0008809E100C609E00004832D126
B 00010000 04000000
B 480000943C6000B63880000080637F08A0A3003C 480000943C6000B63880000080637F084883BA62
B 00010000 04000000
B F821FF817C0802A6F8010090FBC10070FBE10078609E0000607F000063C30000 F821FF817C0802A6F8010090FBC10070FBE100784883BB4E607F000063C30000
/*
Select + < = Toggle whether to use specific Recipe
Select + ^ = Go up 1 Recipe
Select + \/ = Go down 1 Recipe

I modified this to skip
past the items that would
cause the game to crash.

Recipe List

0000 = Craft
0001 = Bomb
0002 = Ice Bomb
0003 = Lightning Bomb
0004 = Uni
0005 = Lava Cube
0006 = Dimension Bomb
0007 = Electrical Discharge Tube
0008 = Globe
0009 = Glass Rose
000A = Meteor
000B = Talisman of Ancient Beasts
000C = Shepherd's Flute
000D = Weight Stone
000E = Barrel
000F = Pumpkin Doll
0010 = Living Trash Can
0011 = Flying Board
0012 = Refueld Pads
0013 = Healing Salve
0014 = Herbal Soup
0015 = Apple Tart
0016 = Refresh Medicine
0017 = Buzzter Nuts
0018 = Stellard Medicine
0019 = Shelbani Bread
001A = Healing Aroma
001B = Stellapearl
001C = Medicine Bread
001D = Smoked Meat
001E = Golden Extract Soup
001F = Media Book
0020 = Fruit Ration
0021 = Slag Soup
0022 = Ritual Powder
0023 = SP Medicine
0024 = Awakening Medicine
0025 = Dragon Cup
0026 = Slag Essence
0027 = Traveler's Ration
0028 = Goddess Shield
0029 = Healthy Ration
002A = Time Watch
002B = Millionaire's Full Course
002C = Angel Powder
002D = Medicine of the Four Beasts
002E = Dragon's Secret
002F = Elixir
0030 = Fruit Tart
0031 = Plant Fertilizer
0032 = Demon Warding Charm
0033 = Dowsing Rod
0034 = Mysterious Monocle
0035 = Travel Gate
0036 = Handmade Bait
0037 = Shelbani Flour
0038 = Dried Herbs
0039 = Plant Oil
003A = Abrasive
003B = Handspun Rabbit Yarn
003C = Supplement - Red
003D = Supplement - Blue
003E = Supplement - Green
003F = Supplement - Yellow
0040 = Supplement - White
0041 = Supplement - Black
0042 = Supplement - Rainbow
0043 = Handmade Jam
0044 = Honey
0045 = Plant Syrup
0046 = Leather
0047 = Zettel
0048 = Palma Board
0049 = Powdered Glass
004A = Glass Tube
004B = Crystal Ball
004C = Medical Solution
004D = Stellard Fabric
004E = Fire Lord's Charcoal
004F = Iron Clay
0050 = Burning Gas
0051 = Black Powder
0052 = Frosty Crystal
0053 = Water Crystal
0054 = Electric Orb
0055 = Distilled Water
0056 = Super Pure Water
0057 = Unbreakable Glass
0058 = Mysterious Cloth
0059 = Gravicrystal
005A = Precious Stone
005B = Twin Color Corundum
005C = Polarized Gem
005D = Comet Crest Stone
005E = Holinic
005F = Dark Iron
0060 = Algemein Plywood
0061 = Ziegel Nugget
0062 = Cole Medapaid
0063 = Dark Steel Plate
0064 = Holinic Steel Plate
0065 = Aroma Materia
0066 = Sun Flower
0067 = Floater Unit
0068 = Ingot
0069 = Holinicait
006A = Shuvea Metal
006B = Alto Metal
006C = Meteonite
006D = Halmolium
006E = Cloth
006F = Mofcott
0070 = Silkis Feather
0071 = Alto Cloth
0072 = Scale Cloth
0073 = Velvetis
0074 = Lumber
0075 = Palma Wood
0076 = Mixed Wood
0077 = Alto Wood
0078 = Mystix
0079 = Yggdras
007A = Stone Coin
007B = Heart of Fire
007C = Planet Sphere
007D = Chronicle Shield
007E = Escape Jewel
007F = Thunder Outfit
0080 = Divine Soul
0081 = CRASH! Sythesis Item 78
0082 = CRASH! Sythesis Item 79
0083 = CRASH! Sythesis Item 80
0084 = CRASH! Sythesis Item 81
0085 = CRASH! Sythesis Item 82
0086 = CRASH! Sythesis Item 83
0087 = CRASH! Sythesis Item 84
0088 = CRASH! Sythesis Item 85
0089 = CRASH! Sythesis Item 86
008A = CRASH! Sythesis Item 87
008B = CRASH! Sythesis Item 88
008C = CRASH! Sythesis Item 89
008D = CRASH! Key Item 19
008E = Ship Clan's Bell
008F = Resonance Chime
0090 = White Winged Bell
0091 = Sea Alchemist's Bell
0092 = Convenient Broom
0093 = Stylish Broom
0094 = Magia Sumonitora
0095 = Alchemist's Broom
0096 = Sea Clan's Charm
0097 = Elemental Charm
0098 = Lunic Charm
0099 = Dragon Scale Charm
009A = Magician's Ring
009B = Sword Manipulation Ring
009C = Demonkin Ring
009D = Orbis Spiritis
009E = Crystal Twin Swords
009F = Silver Twin Swords
00A0 = Bloody Claws
00A1 = Air Foecutters
00A2 = Flame Bunker
00A3 = Armored Bunker
00A4 = Ancient Heat Bunker
00A5 = Chronicle Bunker
00A6 = Solis Gem
00A7 = Ignis Gem
00A8 = Zodiac Gem
00A9 = Diabolos Gem
00AA = Hayate
00AB = Demon Ore Sword
00AC = Mystical Beast Sword
00AD = Meteorite Sword
00AE = Sky Alchemy Staff
00AF = Golden Blue Staff
00B0 = Golden Wing Staff
00B1 = Lifetree Staff
00B2 = Management Board
00B3 = Plan Board
00B4 = Operation Plan Board
00B5 = CRASH! DLC_2_Weapon 4
00B6 = Cotton Shirt
00B7 = Thick Shirt
00B8 = High Collar Shirt
00B9 = Herbal Shirt
00BA = Leather Shirt
00BB = Fur Shirt
00BC = Combat Shirt
00BD = Riveted Shirt
00BE = Silver Threaded Shirt
00BF = Divine Shirt
00C0 = Chain Armor
00C1 = Bone Plate
00C2 = Holinic Full Metal
00C3 = Scale Plate
00C4 = Splint Mail
00C5 = Meteorite Armor
00C6 = Magic Plate
00C7 = Dragoon Mail
00C8 = Windbreaker
00C9 = Leather Coat
00CA = Agile Coat
00CB = Gold Embroidered Coat
00CC = Dragoon Coat
00CD = Divine Coat
00CE = Leather Gloves
00CF = Leather Boots
00D0 = Armoa Pouch
00D1 = Angel Ribbon
00D2 = Feather Ornament
00D3 = Blue Crystal Ring
00D4 = Gauntlet
00D5 = Metal Boots
00D6 = Spirit Belt
00D7 = Gunade Ring
00D8 = Glass Tiara
00D9 = Brother Call
00DA = Gold Coin of Fortune
00DB = Dragon Shield
00DC = Treasure Grimoire
00DD = Ancient Power Belt
00DE = One Angle Mascara
00DF = Meteor Gloves
00E0 = Meteor Boots
00E1 = Mirage Talisman
00E2 = Eyedrops of Truth
00E3 = Mini Sound Machine
00E4 = Wonder Drug of Tranquility
00E5 = Noble Suit
00E6 = Formal Dinner Suit
*/
#
AoB Growth Points Never Decrease
0
games24
B 00010000 04000000
B 5484103A7C8407B47CDD222E7CA62814 5484103A7C8407B47CDD222E38A00000
#