#!/bin/bash
set -e
#
if [ $# != 2 ]; then 
    cat <<EOF
Syntax: $0 file.bin M
pads the file with trailing zeroes until its size is multiple of M
EOF
    exit -1 
fi
#
SIZE=`wc -c "$1" |awk '{print $1}'`
REM=$[SIZE%$2]
if [ $REM != 0 ]; then 
    PAD=$[$2-REM]
    echo padding $1 with $PAD zeroes
    head -c $PAD /dev/zero >>$1
fi
