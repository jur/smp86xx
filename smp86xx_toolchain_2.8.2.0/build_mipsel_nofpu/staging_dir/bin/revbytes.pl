#!/usr/bin/perl -0777
# -0777 causes perl to take the whole file at once (programming perl p.492)
use bytes;
print scalar reverse <>
