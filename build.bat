@echo off

echo Assembling...
C:\Users\Bart\AppData\Local\nasm\nasm.exe -f win32 -l listing.lst -i src/ -o obj/main.obj src/main.asm

echo Linking...
"C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\link.exe" /ENTRY:main /OUT:project.exe /defaultlib:"C:\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib\kernel32.lib" /libpath:"C:\Program Files (x86)\Microsoft SDKs\Windows\v7.1A\Lib" /libpath:"C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\lib" /libpath:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.10150.0\ucrt\x86" obj/main.obj kernel32.lib user32.lib glfw3.lib glfw3dll.lib opengl32.lib msvcrt.lib msvcrtd.lib vcruntimed.lib ucrt.lib gdi32.lib shell32.lib

pause

echo Running...
project.exe

pause