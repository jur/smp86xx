INCLUDEDIR = .

CFLAGS := -I$(INCLUDEDIR) -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -O2 -Wall

mksquashfs: mksquashfs.o read_fs.o
	$(CC) mksquashfs.o read_fs.o -lz -o $@

read_fs.o: read_fs.c read_fs.h

mksquashfs.o: mksquashfs.c mksquashfs.h
