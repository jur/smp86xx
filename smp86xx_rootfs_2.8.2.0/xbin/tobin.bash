#!/bin/bash
set -e
#
if [ $# != 1 ]; then 
    cat >&2 <<EOF 
Syntax: $0 10101464c457f

Refer to xbin documentation (type: xbin.bash)
EOF
    exit -1 
fi
#
X=$1
# if odd pad left with one zero
if [ $[${#X}%2] != 0 ]; then X=0$X; fi
#
S=${#X}
while [ $S != 0 ]; do
    Y=${X:$[S-2]:2}
    printf "\x$Y"
    S=$[S-2]
done
