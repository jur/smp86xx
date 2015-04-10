#!/bin/bash
set -e
#
cat <<EOF
------------------
xbin documentation
------------------

Inclusion of binary data in various
environments (especially cryptographic content)
requires to always represent them the same way

Three formats are supported:

(Format1) file.bin 
The byte at file offset zero is the lsb of the represented data.
Padding data is done by appending zeroes at end of file

(Format2) readable string
As a huge hex number, downcase, not starting with 0x, lsbs at right.
Padding data is done by adding zeroes at the beginning of the string.

(Format3) inside C code
As a RMuint32[] array. Each entry is a 2^32-base digit. The least significant
digits have lowest index.
Padding data is done by adding zeroes in highest array indices.

Conversion examples
-------------------
From (Format2) to (Format1) (the string below has 15 characters):
  $ tobin.bash 12345678abcdefa >sample.bin
From (Format1) to (Format2) (observe the added leading zero):
  $ frombin.bash sample.bin
  012345678abcdefa
From (Format1) to (Format3):
  $ toh.bash sample.bin

Simple manipulations
--------------------
Padding sample.bin with zeroes to the next 128-bytes multiple boundary
  $ zeropad.bash sample.bin 128
Keeping 5 first bytes of sample.bin
  $ head -c5 sample.bin |frombin.bash
Keeping 5 last bytes of sample.bin
  $ tail -c5 sample.bin |frombin.bash -
Keeping all but 5 first bytes of sample.bin
  $ tail -c+6 sample.bin |frombin.bash -
Reversing byte-per-byte (do NOT use tac)
  $ tobin.bash 12a45 |revbytes.pl - |frombin.bash -
EOF
