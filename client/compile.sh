#!/bin/bash

cd gfx
cd text
gcc -c *.c
cd ..
cd state
gcc -c *.c
cd game
gcc -c *.c
cd entity
gcc -c *.c 
cd ..
cd ..
cd ..
cd component
gcc -c *.c 
cd ..
gcc -c *.c
cd ..

cd net
cd communication
gcc -c *.c
cd ..
gcc -c *.c
cd ..

gcc -c *.c

#dont forget to add new directories to this line to link them
#also add any new libraries here or gf your whole program
gcc -o main *.c gfx/*.c gfx/text/*.c gfx/state/*.c gfx/state/game/*.c gfx/state/game/entity/*.c gfx/component/*.c net/*.c net/communication/*.c -lSDL2 -lSDL2_ttf -lSDL2_image