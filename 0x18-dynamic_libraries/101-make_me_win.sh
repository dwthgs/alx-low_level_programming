#!/bin/bash
wget -P /tmp/ wget https://raw.githubusercontent.com/dwthgs/alx-low_level_programming/main/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
