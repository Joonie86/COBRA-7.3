@echo off
cls

set PS3SDK=/c/PSDK3v2
set PS3DEV=/c/PSDK3v2/ps3dev2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;%SCETOOL%;
set SCETOOL=C:\PSDK3v2\MinGW\msys\1.0\bin

rm *.self lv2gen/*.exe
cd lv2gen
make
cd ../nocfw_kern_plugin/payload
make
cd ../../stage0_file
make -f Makefile all
pause