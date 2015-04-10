#!/bin/bash
set -e
#
if [ $# != 9 ]; then 
    cat <<EOF
Syntax: $0 callerid id param0 param1 param2 param3 param4 block.bin xrpc.bin

Example:
$0 XRPC_CALLERID_IGNORED XRPC_ID_GETSERIAL 0 1 2 3 4 /dev/null xrpc_getserial.bin
EOF
    exit -1 
fi
#
source `dirname $0`/xos_xrpc.inc
#
X=`eval echo '$'$1`
tobin.bash `printf "%08x" $X` >$9
X=`eval echo '$'$2`
tobin.bash `printf "%08x" $X` >>$9
#
tobin.bash `printf "%08x" $3` >>$9
tobin.bash `printf "%08x" $4` >>$9
tobin.bash `printf "%08x" $5` >>$9
tobin.bash `printf "%08x" $6` >>$9
tobin.bash `printf "%08x" $7` >>$9
SIZE=`wc -c "$8" |awk '{print $1}'`
tobin.bash `printf "%08x" $[32+SIZE]` >>$9
cat $8 >>$9
