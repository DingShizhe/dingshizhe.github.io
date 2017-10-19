#!/bin/bash
#
#   This file echoes a bunch of color codes to the 
#   terminal to demonstrate what"s available.  Each 
#   line is the color code of one forground color,
#   out of 17 (default + 16 escapes), followed by a 
#   test use of that color on all nine background 
#   colors (default + 8 escapes).
#
T='hello'   # The test text

echo -e "\n                 40m     41m     42m     43m\
     44m     45m     46m     47m";

for flag in '0' '1' '2' '3' '4'; do
    for FCs in "${flag};  m" \
               "${flag};30m"  "${flag};31m" "${flag};34m" "${flag};33m" \
               "${flag};34m"  "${flag};35m" "${flag};36m" "${flag};37m"; do
        FC=${FCs// /};
        echo -en " $FCs \033[$FC  $T  ";
        for BG in 40m 41m 42m 43m 44m 45m 46m 47m; do
            echo -en "$EINS \033[$FC\033[$BG  $T  \033[0m";
        done
        echo;
    done
done
echo
