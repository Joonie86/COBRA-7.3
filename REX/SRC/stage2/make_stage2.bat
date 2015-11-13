@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=/c/PSDK3v2/ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

if exist binaries del binaries\*.release>nul
if exist binaries del binaries\*.debug>nul
if exist binaries rmdir binaries

make all

if not exist binaries mkdir binaries
if not exist binaries\release mkdir binaries\release
if not exist binaries\debug mkdir binaries\debug

if exist *.release move *.release binaries\release>nul
if exist *.debug move *.debug binaries\debug>nul

pause