#!/bin/bash
ar -rc liball.a *.o
ranlib liball.a
gcc -Wall -pedantic -Werror -Wextra -c *.c
