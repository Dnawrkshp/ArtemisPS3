Health Never Decreases
0
bungholio
0 001BEF20 60000000
#
Any Damage Kills
0
bungholio
0 0019ADC8 EDAD6828
#
Max Money On Gain
0
bungholio
0 001A64EC 60000000
#
Max Money On Buy
0
bungholio
0 001A62E8 60000000
#
Items + Total Ammo Never Decrease From Being Used
0
bungholio
0 001DCD94 60000000
#
Bandages Never Decrease
0
bungholio
0 001898C0 60000000
#
Current Ammo Never Decreases
0
bungholio
0 001C6AD4 38000000
0 001C6AD8 F80904A0
0 00E5F0E0 2B800000
0 00E5F0E4 409E0008
0 00E5F0E8 900B0000
0 00E5F0EC 480BF96E
0 000BF968 48E5F0E2
#
Pick Up An Item Or Ammo For The Max Amount
0
bungholio
0 001DCF50 48000008
#
Max ADAM On Buy
0
bungholio
0 001A5EAC 60000000
#
Max ADAM On Gain
0
bungholio
0 001A60E4 60000000
#
Eve Never Decreases
0
bungholio
0 001A0EF4 C1BF0CA0
#
Instant Little Sister ADAM Retrieval Speed
0
bungholio
0 000C0930 3FA00000
0 000C0934 93BA0000
0 000C0940 93AB0000
0 000C0944 EBA10098
#
Max Photo Points From Any Picture
0
bungholio
0 002516B8 3B807FFF
#
Buy 1 Plasmid Or Tonic Slot To Unlock All
0
bungholio
0 001D9004 90030048
#
Leftover Tonic + Buttons Junk
0
bungholio
/*
Tonic Modifier
001D93F4 80050004 lwz        r0,0x4(r5)		r0 = The base area, slot 1.
001D93F8 81650000 lwz        r11,0x0(r5)

001D93B8 8003003C r0 = base address.
001D93BC 54A51838 slwi       r5,r5,3 
001D93C0 81240000 lwz        r9,0x0(r4)	The specific plasmid/tonic.

001D93D4 91250000 <---When choosing a new Plasmid/Tonic. r3, r9, r11,

009EABF0 80030000 <---When I press L1 to see my Plasmids.
001D7538



All of these values seem to have multiple clones that become different from level to level which is pointless. Not all of them change from level to level, but many do.

Plasmids
1155 = Cyclone Trap 3 (Place TRAPS on walls and ceilings!)
1156 = Cyclone Trap 2 (Charge up your TRAPS with Plasmids for a variety of effects!)
1157 = Cyclone Trap (Create TRAPS that launch Splicers into the air - and hurt them badly on the way down!)
1158 = Telekinesis 3 (Pick up live enemies and throw them around!)
1159 = Telekinesis 2 (Stronger Telekinesis allows you to throw harder for more damage!)
115A = Telekinesis (PULLS an object to you, the HURLS it (even enemy grenades!). Also useful for holding objects as a SHIELD or grabbing objects OUT OF REACH.)
115B = Scout 3 (Your invisible SCOUT can HACK security!)
115C = Scout 2 (Your invisible SCOUT can HACK security!)
115D = Scout (Move through the world as an invisible, Plasmid-wielding SCOUT!)
115E = Security Command 3 (Summon UPGRADED BOTS with Security Command 3!)

1161 = Security Command 2 (Call in a friend with the added ability to SUMMON BOTS.)
1162 = Security Command (Retarget CAMERAS, BOTS and TURRETS at your whim!)
1163 = Insect Swarm 3 (Keep your insects working for you with the new SWARM BOMB ability.)
1164 = Insect Swarm 2 (Keep the room jumping with a more effective Insect Swarm!)

1168 = Insect Swarm (Release a swarm of stinging INSECTS that seek out enemies.)

116E = Incinerate! 3 (Set the world on fire with the new ERUPTION ability!)
116F = Incinerate! 2 (Light up the room with the new FIRE BOMB ability!)
1170 = Incinerate! (Set objects and creatures ON FIRE.)
1171 = Summon Eleanor (Summon Eleanor for a little help.)

1174 = Electro Bolt 3 (Become a master of electricity with the power of ELECTRICAL STORM.)

1176 = Electro Bolt 2 (Stun multiple opponents with the power of CHAIN LIGHTNING!)
1177 = Electro Bolt (A bolt of ELECTRICITY that STUNS both man and machine. DEVASTATING against enemies in WATER.)

117A = Decoy 3 (Creates a DECOY that draws attacks away from you, reflects damage back and gives it to your as health.)

117D = Decoy 2 (Creates a DECOY that draws attacks away from you and reflects damage back at foes.)
117E = Decoy (Creates a DECOY that draws attacks away from you.)
117F = Winter Blast 3 (Freeze and shatter multiple foes with continuous ICICLE ASSAULT ability!)
1180 = Winter Blast 2 (Freeze your foes in a solid ICE BLOCK!)
1181 = Winter Blast (Freeze your foes in place. Shatter them into a thousand pieces!)
1182 = Hypnotize 3 (Now you can BEFRIEND the big boys!)

1185 = Hypnotize 2 (Charge up to BEFRIEND splicers to join your cause!)
1186 = Hypnotize (Causes enemies to become HYPNOTIZED and attack anyone nearby!)



Tonics
6BF5 = Arms Race (You are able to salvage more ammunition from bodies and contrainers.)
6BF6 = Armored Shell 2 (Further reduces all physical damage.)
6BF7 = Natural Camouflage (When STANDING STILL, you become INVISIBLE.)
6BF8 = Thrifty Hacker (HACKED vending prices are EVEN CHEAPER.)
6BF9 = Elemental Storm (You emit a random burst of FIRE, ICE, or ELECTRICITY when struck by melee attacks, damaging all around you.)
6BFA = Fountain of Youth (Standing in water slowly restores HEALTH and EVE.)
6BFB = Drill Vampire (You gain small amounts of HEALTH and EVE when inflicting damage with the DRILL.)
6BFC = Scrounger (When SEARCHING containers or corpses, you can search again to get DIFFERENT LOOT.)
6BFD = Deadly Machines (Your hacked bots and turrets do more damage.)

AAFB = Quik-Hack (Hacking has fewer stages.)
AAFC = EZ-Hack (Hacking success zones become a little larger.)
AAFD = Careful Hacker (The hacking needle moves slightly slower.)
AAFE = Extended Reel (Research sessions last a bit longer.)
AAFF = Extra Nutrition (You gain a little extra HEALTH from SNACKS and BANDAGES.)
AB00 = Drill Specialist (Significantly decreases cost of Plasmids but limits weapon selection to the Drill, Hack Tool and Camera.)
AB01 = Ice Storm (You emit a burst of ICE when struck by melee attacks, with a chance to FREEZE foes.)
AB02 = Hacker's Delight (Every time you HACK something, you gain a little HEALTH and EVE.)

ABC3 = Handyman (Repair (and name) friendly bots and turrets by interacting with them.)

ABC7 = Electrical Storm (You emit a burst of ELECTRICITY when struck, shocking all around you.)
ABC8 = Drill Power (Your drill does more damage when you spin or swing it.)
ABC9 = Damage Research (Increases the value of the damage bonuses from research.)
ABCA = Armored Shell (Reduces all physical damage.)
ABCB = Short Circuit (Your electrical attacks disable security devices much longer.)
ABCD = Cure All (HEALTH STATIONS also refill your EVE.)
ABCE = EVE Expert (You can carry one more EVE HYPO.)
ABCF = Security Evasion (Cameras and turrets take longer to see you.)
ABD0 = Headhunter (Your headshots do more damage.)
ABD1 = Proud Parent (Your adopted Little sisters gather slightly more ADAM.)
ABD2 = Freezing Drill (You FREEZE enemies for LONGER and all DRILL attacks have a chance to FREEZE the target.)
ABD3 = Careful Hacker 2 (The hacking needle moves slower.)
ABD4 = Demanding Father (Little Sisters gather ADAM more quickly.)
ABD5 = Walking inferno (You take less DAMAGE from FIRE and inflict more DAMAGE when when you use FIRE.)
ABD6 = Medical Expert (You can carry one more FIRST AID KIT.)
ABD7 = Keen Observer 2 (Increases research bonuses even more, allowing you to progress faster at research.)
ABD8 = Vending Expert 2 (Further reduces PRICES in VENDING Machines.)
ABD9 = Keen Observer (Increases research bonuses, allowing you to progress faster at research.)
ABDA = Vending Expert (Reduces PRICES in VENDING Machines.)
ABDB = Hurried Hacker (Landing in a BLUE BONUS zone ends a hack instantly.)
ABDC = Hacker's Delight 2 (Every time you HACK something, you gain a little more HEALTH and EVE.)
ABDD = Short Circuit 2 (Your electrical attacks disable security devices permanently.)
ABDE = Shorten Alarms 2 (Further reduces DURATION of camera ALARMS.)
ABDF = Fire Storm (You emit a burst of FIRE when struck by melee attacks, damaging all around you.)
ABE0 = Hardy Machines (Hacking a turret or bot raises its max health.)
ABE1 = Sports Boost (You move slightly faster.)
ABE2 = EVE Link (FIRST AID Kits also give you EVE.)
ABE3 = Drill Lurker (Quiets your footsteps, and increases DAMAGE from melee attacks on UNAWARE opponents, especially with the DRILL swing.)
ABE4 = EVE Saver 2 (Plasmids use even less EVE.)
ABE5 = EVE Saver (Plasmids use less EVE.)
ABE6 = Machine Buster (Increases DAMAGE you deal to CAMERAS, BOTS and TURRETS.)
ABE7 = Electric Flesh (You take NO DAMAGE from ELECTRICITY. You deal more DAMAGE when you use ELECTRICAL attacks.)
ABE8 = Shorten Alarms (Reduces DURATION of camera ALARMS.)
ABE9 = Booze Hound (Drinking ALCOHOL restores a small amount of EVE, rather than draining it.)

D648 = Elemental Sponge (When you are damaged by elemental attacks, you gain a small amount of EVE.)
D653 = Elemental Vampire (You Level 3 elemental streams siphon off HEALTH from your enemies.)




0 001A0EF4 C1BF0CA0
0 001BEF20 60000000
0 0019ADC8 EDAD6828
0 001A64EC 60000000
0 001A62E8 60000000
0 001DCD94 60000000
0 000BF968 48E5F0E2
0 00E5F0E0 2B800000
0 00E5F0E4 409E0008
0 00E5F0E8 900B0000
0 00E5F0EC 480BF96E
0 001DCF50 48000008
0 001A5EAC 60000000
0 001A60E4 60000000
0 000C0930 3FA00000
0 000C0934 93BA0000
0 000C0940 93AB0000
0 000C0944 EBA10098
0 002516B8 3B807FFF
0 001D9004 90030048







My way around bad tonic values
0 001D6394 48E5F3A2
0 00E5F3A0 2B830000
0 00E5F3A4 419E0008
0 00E5F3A8 80630164
0 00E5F3AC 481D639A
0 001D8C4C 48E5F3B2
0 00E5F3B0 2B890000
0 00E5F3B4 419E0008
0 00E5F3B8 8BA9008D
0 00E5F3BC 481D8C52
0 001D45B0 48E5F3C2
0 00E5F3C0 2B830000
0 00E5F3C4 419E0008
0 00E5F3C8 E86300A8
0 00E5F3CC 481D45B6
0 009EAC28 FBC1FFF0
0 009EAC2C 48E5F3D2
0 00E5F3D0 3FC000E5
0 00E5F3D4 7F9E1840
0 00E5F3D8 419D0008
0 00E5F3DC 80030004
0 00E5F3E0 489EAC32
0 009EAC44 48E5F3E6
0 00E5F3E4 3FC000E5
0 00E5F3E8 7F9E1840
0 00E5F3EC 419D0008
0 00E5F3F0 80630000
0 00E5F3F4 489EAC4A
0 0094F624 48E5F3FA
0 00E5F3F8 3D6000E5
0 00E5F3FC 7F8B1840
0 00E5F400 419D0008
0 00E5F404 A0030000
0 00E5F408 4894F62A
0 0094F638 48E5F40E
0 00E5F40C 3C0000E5
0 00E5F410 7F801840
0 00E5F414 419D000C
0 00E5F418 A4030002
0 00E5F41C 4894F63E
0 00E5F420 4894F646








Buttons
41757050 = Select
41757051 = L3
41757052 = R3
41757053 = Start
41757054 = Up
41757055 = Right
41757056 = Down
41757057 = Left
41757058 = L2
41757059 = R2
4175705A = L1
4175705B = R1
4175705C = Triangle
4175705D = O
4175705E = X
4175705F = []




005541E8 88090698, r3 + 069C = X, r0 & r4 & r11 free
41C8E33C = X
41C8E33D = O
41C8E33E = []
41C8E33F = Triangle
41C8E340 = L1
41C8E341 = R1
41C8E342 = L2
41C8E343 = R2
41C8E344 = L3
41C8E345 = R3
41C8E346 = Start
41C8E347 = Select
41C8E348 = Left
41C8E349 = Right
41C8E34A = Up
41C8E34B = Down


Empty spot = 01450300



001C3364 r11, r14





0 005541E8 48E5F3A2
0 00E5F3A0 
*/
#