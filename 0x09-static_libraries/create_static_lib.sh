#!/bin/bash
gcc -Wall -pedantic -Werror -Werror  -c *.c 
ar rcs liball.a *.o
ranlib liball.a
