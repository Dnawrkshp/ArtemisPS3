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

if exist payload_3_55.bin     move  payload_3_55.bin     payloads\mpl_payload_355C.bin>nul
if exist payload_3_55DEX.bin  move  payload_3_55DEX.bin  payloads\mpl_payload_355D.bin>nul
if exist payload_4_21.bin     move  payload_4_21.bin     payloads\mpl_payload_421C.bin>nul
if exist payload_4_21DEX.bin  move  payload_4_21DEX.bin  payloads\mpl_payload_421D.bin>nul
if exist payload_4_30.bin     move  payload_4_30.bin     payloads\mpl_payload_430C.bin>nul
if exist payload_4_30DEX.bin  move  payload_4_30DEX.bin  payloads\mpl_payload_430D.bin>nul
if exist payload_4_31.bin     move  payload_4_31.bin     payloads\mpl_payload_431C.bin>nul
if exist payload_4_40.bin     move  payload_4_40.bin     payloads\mpl_payload_440C.bin>nul
if exist payload_4_41.bin     move  payload_4_41.bin     payloads\mpl_payload_441C.bin>nul
if exist payload_4_41DEX.bin  move  payload_4_41DEX.bin  payloads\mpl_payload_441D.bin>nul
if exist payload_4_46.bin     move  payload_4_46.bin     payloads\mpl_payload_446C.bin>nul
if exist payload_4_46DEX.bin  move  payload_4_46DEX.bin  payloads\mpl_payload_446D.bin>nul
if exist payload_4_50.bin     move  payload_4_50.bin     payloads\mpl_payload_450C.bin>nul
if exist payload_4_50DEX.bin  move  payload_4_50DEX.bin  payloads\mpl_payload_450D.bin>nul
if exist payload_4_53.bin     move  payload_4_53.bin     payloads\mpl_payload_453C.bin>nul
if exist payload_4_53DEX.bin  move  payload_4_53DEX.bin  payloads\mpl_payload_453D.bin>nul
if exist payload_4_55.bin     move  payload_4_55.bin     payloads\mpl_payload_455C.bin>nul
if exist payload_4_55DEX.bin  move  payload_4_55DEX.bin  payloads\mpl_payload_455D.bin>nul
if exist payload_4_60.bin     move  payload_4_60.bin     payloads\mpl_payload_460C.bin>nul
if exist payload_4_60DEX.bin  move  payload_4_60DEX.bin  payloads\mpl_payload_460D.bin>nul
if exist payload_4_65.bin     move  payload_4_65.bin     payloads\mpl_payload_465C.bin>nul
if exist payload_4_65DEX.bin  move  payload_4_65DEX.bin  payloads\mpl_payload_465D.bin>nul
if exist payload_4_66.bin     move  payload_4_66.bin     payloads\mpl_payload_466C.bin>nul
if exist payload_4_66DEX.bin  move  payload_4_66DEX.bin  payloads\mpl_payload_466D.bin>nul
if exist payload_4_70.bin     move  payload_4_70.bin     payloads\mpl_payload_470C.bin>nul
if exist payload_4_70DEX.bin  move  payload_4_70DEX.bin  payloads\mpl_payload_470D.bin>nul
if exist payload_4_75.bin     move  payload_4_75.bin     payloads\mpl_payload_475C.bin>nul
if exist payload_4_75DEX.bin  move  payload_4_75DEX.bin  payloads\mpl_payload_475D.bin>nul
if exist payload_4_76.bin     move  payload_4_76.bin     payloads\mpl_payload_476C.bin>nul
if exist payload_4_76DEX.bin  move  payload_4_76DEX.bin  payloads\mpl_payload_476D.bin>nul
if exist payload_4_78.bin     move  payload_4_78.bin     payloads\mpl_payload_478C.bin>nul
if exist payload_4_78DEX.bin  move  payload_4_78DEX.bin  payloads\mpl_payload_478D.bin>nul

:copy *.bin ..\datas\*

pause
