@echo off

set PS3DEV=./ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

if exist mamba\bin del mamba\bin\*.bin>nul
if exist mamba\bin rmdir mamba\bin

if exist mamba del mamba\*lz.bin>nul
if exist mamba rmdir mamba

del *.bin>nul

make clean

pause