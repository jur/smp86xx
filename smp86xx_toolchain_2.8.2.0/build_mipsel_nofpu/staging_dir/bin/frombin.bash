#!/bin/bash
set -e
#
if [ $# != 1 ]; then 
    cat >&2 <<EOF
Syntax: $0 file.bin

Use "-" for stdin

Refer to xbin documentation (type: xbin.bash)
EOF
    exit -1 
fi
#
if [ "$1" = "-" ]; then
    od -A n -t x1 -v | tac -s ' ' | tr -d ' ' | tr -d '\n'
else
    od -A n -t x1 -v "$1" | tac -s ' ' | tr -d ' ' | tr -d '\n'
fi
echo
