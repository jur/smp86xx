#! /bin/sh

tmpsrc=`mktemp /tmp/zlibtest.XXXXXX` && 
{ 
	echo "#include <zlib.h>" > $tmpsrc.c
	echo "int main(void) { return 0; }" >> $tmpsrc.c
	if gcc -lz -o $tmpsrc.out $tmpsrc.c > /dev/null 2>&1
	then 
		echo yes
	fi
	rm -f $tmpsrc* > /dev/null 2>&1
}
