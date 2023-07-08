#!/bin/bash
gcc -wall -pandantic -werror -wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a
