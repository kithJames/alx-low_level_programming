#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC -c *.c
gcc -shared -o liball.so *.o
