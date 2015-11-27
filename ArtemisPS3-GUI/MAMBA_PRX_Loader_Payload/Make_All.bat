@echo off

set PS3DEV=./ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

if exist mamba del mamba\*.lz.bin>nul
if exist mamba rmdir mamba

if exist mamba\bin del mamba\bin\*.bin>nul
if exist mamba\bin rmdir mamba\bin

del *.bin>nul

make clean

make all

if not exist mamba mkdir mamba

if exist mamba_3_55DEX.lz.bin  move  mamba_3_55DEX.lz.bin  mamba\mamba_355D.lz.bin>nul
if exist mamba_3_55.lz.bin     move  mamba_3_55.lz.bin     mamba\mamba_355C.lz.bin>nul
if exist mamba_4_21.lz.bin     move  mamba_4_21.lz.bin     mamba\mamba_421C.lz.bin>nul
if exist mamba_4_21DEX.lz.bin  move  mamba_4_21DEX.lz.bin  mamba\mamba_421D.lz.bin>nul
if exist mamba_4_30DEX.lz.bin  move  mamba_4_30DEX.lz.bin  mamba\mamba_430D.lz.bin>nul
if exist mamba_4_30.lz.bin     move  mamba_4_30.lz.bin     mamba\mamba_430C.lz.bin>nul
if exist mamba_4_31.lz.bin     move  mamba_4_31.lz.bin     mamba\mamba_431C.lz.bin>nul
if exist mamba_4_40.lz.bin     move  mamba_4_40.lz.bin     mamba\mamba_440C.lz.bin>nul
if exist mamba_4_41.lz.bin     move  mamba_4_41.lz.bin     mamba\mamba_441C.lz.bin>nul
if exist mamba_4_41DEX.lz.bin  move  mamba_4_41DEX.lz.bin  mamba\mamba_441D.lz.bin>nul
if exist mamba_4_46.lz.bin     move  mamba_4_46.lz.bin     mamba\mamba_446C.lz.bin>nul
if exist mamba_4_46DEX.lz.bin  move  mamba_4_46DEX.lz.bin  mamba\mamba_446D.lz.bin>nul
if exist mamba_4_50.lz.bin     move  mamba_4_50.lz.bin     mamba\mamba_450C.lz.bin>nul
if exist mamba_4_50DEX.lz.bin  move  mamba_4_50DEX.lz.bin  mamba\mamba_450D.lz.bin>nul
if exist mamba_4_53.lz.bin     move  mamba_4_53.lz.bin     mamba\mamba_453C.lz.bin>nul
if exist mamba_4_53DEX.lz.bin  move  mamba_4_53DEX.lz.bin  mamba\mamba_453D.lz.bin>nul
if exist mamba_4_55.lz.bin     move  mamba_4_55.lz.bin     mamba\mamba_455C.lz.bin>nul
if exist mamba_4_55DEX.lz.bin  move  mamba_4_55DEX.lz.bin  mamba\mamba_455D.lz.bin>nul
if exist mamba_4_60.lz.bin     move  mamba_4_60.lz.bin     mamba\mamba_460C.lz.bin>nul
if exist mamba_4_60DEX.lz.bin  move  mamba_4_60DEX.lz.bin  mamba\mamba_460D.lz.bin>nul
if exist mamba_4_65.lz.bin     move  mamba_4_65.lz.bin     mamba\mamba_465C.lz.bin>nul
if exist mamba_4_65DEX.lz.bin  move  mamba_4_65DEX.lz.bin  mamba\mamba_465D.lz.bin>nul
if exist mamba_4_66.lz.bin     move  mamba_4_66.lz.bin     mamba\mamba_466C.lz.bin>nul
if exist mamba_4_66DEX.lz.bin  move  mamba_4_66DEX.lz.bin  mamba\mamba_466D.lz.bin>nul
if exist mamba_4_70.lz.bin     move  mamba_4_70.lz.bin     mamba\mamba_470C.lz.bin>nul
if exist mamba_4_70DEX.lz.bin  move  mamba_4_70DEX.lz.bin  mamba\mamba_470D.lz.bin>nul
if exist mamba_4_75.lz.bin     move  mamba_4_75.lz.bin     mamba\mamba_475C.lz.bin>nul
if exist mamba_4_75DEX.lz.bin  move  mamba_4_75DEX.lz.bin  mamba\mamba_475D.lz.bin>nul
if exist mamba_4_76.lz.bin     move  mamba_4_76.lz.bin     mamba\mamba_476C.lz.bin>nul
if exist mamba_4_76DEX.lz.bin  move  mamba_4_76DEX.lz.bin  mamba\mamba_476D.lz.bin>nul

if not exist mamba\bin mkdir mamba\bin

if exist mamba_3_55DEX.bin  move  mamba_3_55DEX.bin  mamba\bin\mamba_355D.bin>nul
if exist mamba_3_55.bin     move  mamba_3_55.bin     mamba\bin\mamba_355C.bin>nul
if exist mamba_4_21.bin     move  mamba_4_21.bin     mamba\bin\mamba_421C.bin>nul
if exist mamba_4_21DEX.bin  move  mamba_4_21DEX.bin  mamba\bin\mamba_421D.bin>nul
if exist mamba_4_30DEX.bin  move  mamba_4_30DEX.bin  mamba\bin\mamba_430D.bin>nul
if exist mamba_4_30.bin     move  mamba_4_30.bin     mamba\bin\mamba_430C.bin>nul
if exist mamba_4_31.bin     move  mamba_4_31.bin     mamba\bin\mamba_431C.bin>nul
if exist mamba_4_40.bin     move  mamba_4_40.bin     mamba\bin\mamba_440C.bin>nul
if exist mamba_4_41.bin     move  mamba_4_41.bin     mamba\bin\mamba_441C.bin>nul
if exist mamba_4_41DEX.bin  move  mamba_4_41DEX.bin  mamba\bin\mamba_441D.bin>nul
if exist mamba_4_46.bin     move  mamba_4_46.bin     mamba\bin\mamba_446C.bin>nul
if exist mamba_4_46DEX.bin  move  mamba_4_46DEX.bin  mamba\bin\mamba_446D.bin>nul
if exist mamba_4_50.bin     move  mamba_4_50.bin     mamba\bin\mamba_450C.bin>nul
if exist mamba_4_50DEX.bin  move  mamba_4_50DEX.bin  mamba\bin\mamba_450D.bin>nul
if exist mamba_4_53.bin     move  mamba_4_53.bin     mamba\bin\mamba_453C.bin>nul
if exist mamba_4_53DEX.bin  move  mamba_4_53DEX.bin  mamba\bin\mamba_453D.bin>nul
if exist mamba_4_55.bin     move  mamba_4_55.bin     mamba\bin\mamba_455C.bin>nul
if exist mamba_4_55DEX.bin  move  mamba_4_55DEX.bin  mamba\bin\mamba_455D.bin>nul
if exist mamba_4_60.bin     move  mamba_4_60.bin     mamba\bin\mamba_460C.bin>nul
if exist mamba_4_60DEX.bin  move  mamba_4_60DEX.bin  mamba\bin\mamba_460D.bin>nul
if exist mamba_4_65.bin     move  mamba_4_65.bin     mamba\bin\mamba_465C.bin>nul
if exist mamba_4_65DEX.bin  move  mamba_4_65DEX.bin  mamba\bin\mamba_465D.bin>nul
if exist mamba_4_66.bin     move  mamba_4_66.bin     mamba\bin\mamba_466C.bin>nul
if exist mamba_4_66DEX.bin  move  mamba_4_66DEX.bin  mamba\bin\mamba_466D.bin>nul
if exist mamba_4_70.bin     move  mamba_4_70.bin  	 mamba\bin\mamba_470C.bin>nul
if exist mamba_4_70DEX.bin  move  mamba_4_70DEX.bin  mamba\bin\mamba_470D.bin>nul
if exist mamba_4_75.bin     move  mamba_4_75.bin  	 mamba\bin\mamba_475C.bin>nul
if exist mamba_4_75DEX.bin  move  mamba_4_75DEX.bin  mamba\bin\mamba_475D.bin>nul
if exist mamba_4_76.bin     move  mamba_4_76.bin  	 mamba\bin\mamba_476C.bin>nul
if exist mamba_4_76DEX.bin  move  mamba_4_76DEX.bin  mamba\bin\mamba_476D.bin>nul
del *.bin>nul

pause
