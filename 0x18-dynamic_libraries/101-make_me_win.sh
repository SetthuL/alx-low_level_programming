#!/bin/bash
wget -p .. https://raw.githubusercontent.com/SetthuL/alx-low_level_programming/blob/3a886829b8c579fd4ee1ee8899038bee22df68d0/0x18-dynamic_libraries/libsearch.so
export LD_PRELOAD="$PWD/libsearch.so"
