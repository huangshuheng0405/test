#!/bin/bash

target="$1"
src="${target}.cpp"

g++ -std=c++23 -Wall -Wextra -O2 "$src" -o "$target"

./"$target"
