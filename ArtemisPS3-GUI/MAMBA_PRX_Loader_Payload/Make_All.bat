@echo off

set PS3DEV=./ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

if exist payloads del payloads\*.bin>nul
if exist payloads rmdir payloads

del *.bin>nul

make clean

make all

if not exist payloads mkdir payloads

if exist payload_3_55.bin     move  payload_3_55.bin     payloads\payload_355C.bin>nul
if exist payload_3_55DEX.bin  move  payload_3_55DEX.bin  payloads\payload_355D.bin>nul
if exist payload_4_21.bin     move  payload_4_21.bin     payloads\payload_421C.bin>nul
if exist payload_4_21DEX.bin  move  payload_4_21DEX.bin  payloads\payload_421D.bin>nul
if exist payload_4_30.bin     move  payload_4_30.bin     payloads\payload_430C.bin>nul
if exist payload_4_30DEX.bin  move  payload_4_30DEX.bin  payloads\payload_430D.bin>nul
if exist payload_4_31.bin     move  payload_4_31.bin     payloads\payload_431C.bin>nul
if exist payload_4_40.bin     move  payload_4_40.bin     payloads\payload_440C.bin>nul
if exist payload_4_41.bin     move  payload_4_41.bin     payloads\payload_441C.bin>nul
if exist payload_4_41DEX.bin  move  payload_4_41DEX.bin  payloads\payload_441D.bin>nul
if exist payload_4_46.bin     move  payload_4_46.bin     payloads\payload_446C.bin>nul
if exist payload_4_46DEX.bin  move  payload_4_46DEX.bin  payloads\payload_446D.bin>nul
if exist payload_4_50.bin     move  payload_4_50.bin     payloads\payload_450C.bin>nul
if exist payload_4_50DEX.bin  move  payload_4_50DEX.bin  payloads\payload_450D.bin>nul
if exist payload_4_53.bin     move  payload_4_53.bin     payloads\payload_453C.bin>nul
if exist payload_4_53DEX.bin  move  payload_4_53DEX.bin  payloads\payload_453D.bin>nul
if exist payload_4_55.bin     move  payload_4_55.bin     payloads\payload_455C.bin>nul
if exist payload_4_55DEX.bin  move  payload_4_55DEX.bin  payloads\payload_455D.bin>nul
if exist payload_4_60.bin     move  payload_4_60.bin     payloads\payload_460C.bin>nul
if exist payload_4_60DEX.bin  move  payload_4_60DEX.bin  payloads\payload_460D.bin>nul
if exist payload_4_65.bin     move  payload_4_65.bin     payloads\payload_465C.bin>nul
if exist payload_4_65DEX.bin  move  payload_4_65DEX.bin  payloads\payload_465D.bin>nul
if exist payload_4_66.bin     move  payload_4_66.bin     payloads\payload_466C.bin>nul
if exist payload_4_66DEX.bin  move  payload_4_66DEX.bin  payloads\payload_466D.bin>nul
if exist payload_4_70.bin     move  payload_4_70.bin     payloads\payload_470C.bin>nul
if exist payload_4_70DEX.bin  move  payload_4_70DEX.bin  payloads\payload_470D.bin>nul
if exist payload_4_75.bin     move  payload_4_75.bin     payloads\payload_475C.bin>nul
if exist payload_4_75DEX.bin  move  payload_4_75DEX.bin  payloads\payload_475D.bin>nul
if exist payload_4_76.bin     move  payload_4_76.bin     payloads\payload_476C.bin>nul
if exist payload_4_76DEX.bin  move  payload_4_76DEX.bin  payloads\payload_476D.bin>nul
if exist payload_4_78.bin     move  payload_4_78.bin     payloads\payload_478C.bin>nul
if exist payload_4_78DEX.bin  move  payload_4_78DEX.bin  payloads\payload_478D.bin>nul
if exist payload_4_78DEH.bin  move  payload_4_78DEH.bin  payloads\payload_478E.bin>nul
if exist payload_4_80.bin     move  payload_4_80.bin     payloads\payload_480C.bin>nul
if exist payload_4_80DEX.bin  move  payload_4_80DEX.bin  payloads\payload_480D.bin>nul
if exist payload_4_80DEH.bin  move  payload_4_80DEH.bin  payloads\payload_480E.bin>nul
if exist payload_4_81.bin     move  payload_4_81.bin     payloads\payload_481C.bin>nul
if exist payload_4_81DEX.bin  move  payload_4_81DEX.bin  payloads\payload_481D.bin>nul
if exist payload_4_81DEH.bin  move  payload_4_81DEH.bin  payloads\payload_481E.bin>nul
if exist payload_4_82.bin     move  payload_4_82.bin     payloads\payload_482C.bin>nul
if exist payload_4_82DEX.bin  move  payload_4_82DEX.bin  payloads\payload_482D.bin>nul
if exist payload_4_82DEH.bin  move  payload_4_82DEH.bin  payloads\payload_482E.bin>nul
if exist payload_4_83.bin     move  payload_4_83.bin     payloads\payload_483C.bin>nul
if exist payload_4_83DEX.bin  move  payload_4_83DEX.bin  payloads\payload_483D.bin>nul
if exist payload_4_83DEH.bin  move  payload_4_83DEH.bin  payloads\payload_483E.bin>nul
if exist payload_4_84.bin     move  payload_4_84.bin     payloads\payload_484C.bin>nul
if exist payload_4_84DEX.bin  move  payload_4_84DEX.bin  payloads\payload_484D.bin>nul
if exist payload_4_84DEH.bin  move  payload_4_84DEH.bin  payloads\payload_484E.bin>nul

del /s/q *.o>nul

:copy *.bin ..\datas\*

pause
