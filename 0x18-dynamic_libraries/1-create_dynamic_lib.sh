#!/bin/bash
gcc -Wall -Wextra -Werror -pendatric -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_path=.:$LD_LIBRARY_PATH
