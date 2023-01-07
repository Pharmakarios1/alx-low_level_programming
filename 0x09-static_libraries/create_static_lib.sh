#!/bin/bash
gcc -c *.c 
ar rcs liball.a *.o
ar -t liball.a
ranlib liball.a
nm liball.a
