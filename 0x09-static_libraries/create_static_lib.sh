#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fno-pic -c *.c
ar rc liball.a *.o
