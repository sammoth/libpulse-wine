#!/bin/sh

gcc -m32 -c -o libpulse_main.o libpulse_main.c -I. -I./wine/include -I./wine/include/msvcrt -I./pulseaudio/src/pulse -D__WINESRC__ -D_UCRT -D_REENTRANT -fno-PIC -fasynchronous-unwind-tables -fno-builtin -fshort-wchar -W -pipe -fcf-protection=none -fno-stack-protector -fno-strict-aliasing -Wdeclaration-after-statement -Wempty-body -Wignored-qualifiers -Wno-packed-not-aligned -Wshift-overflow=2 -Wstrict-prototypes -Wtype-limits -Wunused-but-set-parameter -Wvla -Wwrite-strings -Wpointer-arith -Wlogical-op -gdwarf-2 -gstrict-dwarf -fno-omit-frame-pointer -g -O2 && \
winegcc -o libpulse-0.dll.so -m32 -fno-PIC -fasynchronous-unwind-tables -shared libpulse.spec -mno-cygwin libpulse_main.o -lkernel -lpulse && \
mv libpulse-0.dll.so libpulse-0.dll
