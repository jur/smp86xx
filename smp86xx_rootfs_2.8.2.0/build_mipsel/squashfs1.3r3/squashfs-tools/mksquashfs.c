/*
 * Create a squashfs filesystem.  This is a highly compressed read only filesystem.
 *
 * Copyright (c) 2002 Phillip Lougher <phillip@lougher.demon.co.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * mksquashfs.c
 */

#define TRUE 1
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>
#include <string.h>
#include <zlib.h>
#include <endian.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>
#include <sys/mman.h>

#include "mksquashfs.h"
#include <squashfs_fs.h>

#ifdef SQUASHFS_TRACE
#define TRACE(s, args...)		printf("mksquashfs: "s, ## args)
#else
#define TRACE(s, args...)
#endif

#define INFO(s, args...)		if(!silent) printf("mksquashfs: "s, ## args)
#define ERROR(s, args...)		fprintf(stderr, s, ## args)
#define EXIT_MKSQUASHFS()		if(restore)\
					restorefs();\
					exit(1)
#define BAD_ERROR(s, args...)		{\
					fprintf(stderr, "FATAL ERROR:" s, ##args);\
					EXIT_MKSQUASHFS();\
					}



int fd;

/* superblock attributes */
int noI = 0, noD = 0, check_data = 0, block_size = SQUASHFS_FILE_SIZE, block_log;
unsigned short uid_count = 0, guid_count = 0;
squashfs_uid uids[SQUASHFS_UIDS], guids[SQUASHFS_GUIDS];
int block_offset;

/* write position within data section */
unsigned int bytes = 0, total_bytes = 0;

/* in memory directory table - possibly compressed */
char *directory_table = NULL;
unsigned int directory_bytes = 0, directory_size = 0, total_directory_bytes = 0;

/* cached directory table */
char *directory_data_cache = NULL;
unsigned int directory_cache_bytes = 0, directory_cache_size = 0;

/* in memory inode table - possibly compressed */
char *inode_table = NULL;
unsigned int inode_bytes = 0, inode_size = 0, total_inode_bytes = 0;

/* cached inode table */
char *data_cache = NULL;
unsigned int cache_bytes = 0, cache_size = 0, inode_count = 0;

/* in memory directory header */
struct directory {
	unsigned int		start_block;
	unsigned int		size;
	unsigned char		*buff;
	unsigned char		*p;
	unsigned int		entry_count;
	squashfs_dir_header	*entry_count_p;
};

/* in memory file info */
struct file_info {
	unsigned int		bytes;
	unsigned short		checksum;
	unsigned int		start;
	unsigned short		*block_list;
	struct file_info	*next;
};

struct file_info *dupl[65536];
int dup_files = 0;

int swap, silent = TRUE;
int file_count = 0, sym_count = 0, dev_count = 0, dir_count = 0, fifo_count = 0, sock_count = 0;

/* list of exclude dirs/files */
struct exclude_info {
	dev_t			st_dev;
	ino_t			st_ino;
};

#define EXCLUDE_SIZE 8192
int exclude = 0;
struct exclude_info *exclude_paths = NULL;
int excluded(char *filename, struct stat *buf);

/* list of source dirs/files */
int source = 0;
char **source_path;

/* list of root directory entries read from original filesystem */
int old_root_entries = 0;
struct old_root_entry_info {
	char			name[SQUASHFS_NAME_LEN + 1];
	squashfs_inode		inode;
	int			type;
};

/* count of how many times SIGINT or SIGQUIT has been sent */
int interrupted = 0;

/* restore orignal filesystem state if appending to existing filesystem is cancelled */
jmp_buf env;
char *sdata_cache, *sdirectory_data_cache;
unsigned int sbytes, sinode_bytes, scache_bytes, sdirectory_bytes, sdirectory_cache_bytes, suid_count, sguid_count,
	stotal_bytes, stotal_inode_bytes, stotal_directory_bytes, sinode_count, sfile_count, ssym_count, sdev_count, sdir_count, sdup_files;
int restore = 0;

/*flag whether destination file is a block device */
int block_device = 0;

struct old_root_entry_info *old_root_entry;
int read_super(int fd, squashfs_super_block *sBlk, int *be, char *source);
void add_old_root_entry(char *name, squashfs_inode inode, int type);
int read_filesystem(char *root_name, int fd, squashfs_super_block *sBlk, char **inode_table, int *inode_bytes,
		char **data_cache, int *cache_bytes, int *cache_size, char **directory_table, int *directory_bytes,
		char **directory_data_cache, int *directory_cache_bytes, int *directory_cache_size,
		int *file_count, int *sym_count, int *dev_count, int *dir_count, int *fifo_count, int *sock_count,
		squashfs_uid *uids, unsigned short *uid_count, squashfs_uid *guids, unsigned short *guid_count,
		unsigned int *uncompressed_file, unsigned int *uncompressed_inode, unsigned int *uncompressed_directory,
		void (push_directory_entry)(char *, squashfs_inode, int));

#define FALSE 0

#define MKINODE(A)	((squashfs_inode)(((squashfs_inode) inode_bytes << 16) + (((char *)A) - data_cache)))

void restorefs()
{
	ERROR("Exiting - restoring original filesystem!\n\n");
	bytes = sbytes;
	memcpy(data_cache, sdata_cache, cache_bytes = scache_bytes);
	memcpy(directory_data_cache, sdirectory_data_cache, directory_cache_bytes = sdirectory_cache_bytes);
	inode_bytes = sinode_bytes;
	directory_bytes = sdirectory_bytes;
	uid_count = suid_count;
	guid_count = sguid_count;
	total_bytes = stotal_bytes;
	total_inode_bytes = stotal_inode_bytes;
	total_directory_bytes = stotal_directory_bytes;
	inode_count = sinode_count;
	file_count = sfile_count;
	sym_count = ssym_count;
	dev_count = sdev_count;
	dir_count = sdir_count;
	dup_files = sdup_files;
	longjmp(env, 1);
}


void sighandler()
{
	if(interrupted == 1)
		restorefs();
	else {
		ERROR("Interrupting will restore original filesystem!\n");
		ERROR("Interrupt again to quit\n");
		interrupted ++;
	}
}


unsigned int mangle(char *d, char *s, int size, int block_size, int uncompressed)
{
	unsigned long c_byte = block_size << 1;
	unsigned int res;

	if(!uncompressed && (res = compress2(d, &c_byte, s, size, 9)) != Z_OK) {
		if(res == Z_MEM_ERROR)
			BAD_ERROR("zlib::compress failed, not enough memory\n")
		else if(res == Z_BUF_ERROR)
			BAD_ERROR("zlib::compress failed, not enough room in output buffer\n")
		else
			BAD_ERROR("zlib::compress failed, unknown error %d\n", res)
		return 0;
	}

	if(uncompressed || c_byte >= size) {
		memcpy(d, s, size);
		return size | SQUASHFS_COMPRESSED_BIT;
	}

	return (unsigned int) c_byte;
}


squashfs_base_inode_header *get_inode(int req_size)
{
	int data_space;
	unsigned short c_byte;

	while(cache_bytes >= SQUASHFS_METADATA_SIZE) {
		if((inode_size - inode_bytes) < ((SQUASHFS_METADATA_SIZE << 1)) + 2) {
			if((inode_table = (char *) realloc(inode_table, inode_size + (SQUASHFS_METADATA_SIZE << 1) + 2))
					== NULL) {
				goto failed;
			}
			inode_size += (SQUASHFS_METADATA_SIZE << 1) + 2;
		}

		c_byte = mangle(inode_table + inode_bytes + block_offset, data_cache,
								SQUASHFS_METADATA_SIZE, SQUASHFS_METADATA_SIZE, noI);
		TRACE("Inode block @ %x, size %d\n", inode_bytes, c_byte);
		if(!swap)
			memcpy((void *) (inode_table + inode_bytes), (void *) &c_byte, sizeof(unsigned short));
		else
			SQUASHFS_SWAP_SHORTS((&c_byte), (inode_table + inode_bytes), 1);
		if(check_data)
			*((unsigned char *)(inode_table + inode_bytes + block_offset - 1)) = SQUASHFS_MARKER_BYTE;
		inode_bytes += SQUASHFS_COMPRESSED_SIZE(c_byte) + block_offset;
		total_inode_bytes += SQUASHFS_METADATA_SIZE + block_offset;
		memcpy(data_cache, data_cache + SQUASHFS_METADATA_SIZE, cache_bytes - SQUASHFS_METADATA_SIZE);
		cache_bytes -= SQUASHFS_METADATA_SIZE;
	}

	data_space = (cache_size - cache_bytes);
	if(data_space < req_size) {
			int realloc_size = cache_size == 0 ? ((req_size + SQUASHFS_METADATA_SIZE) & ~(SQUASHFS_METADATA_SIZE - 1)) : req_size - data_space;

			if((data_cache = (char *) realloc(data_cache, cache_size + realloc_size)) == NULL) {
				goto failed;
			}
			cache_size += realloc_size;
	}

	cache_bytes += req_size;

	return (squashfs_base_inode_header *)(data_cache + (cache_bytes - req_size));

failed:
	BAD_ERROR("Out of memory in inode table reallocation!\n");
}


void read_bytes(int fd, unsigned int byte, int bytes, char *buff)
{
	off_t off = byte;

	if(lseek(fd, off, SEEK_SET) == -1) {
		perror("Lseek on destination failed");
		EXIT_MKSQUASHFS();
	}

	if(read(fd, buff, bytes) == -1) {
		perror("Read on destination failed");
		EXIT_MKSQUASHFS();
	}
}


void write_bytes(int fd, unsigned int byte, int bytes, char *buff)
{
	off_t off = byte;

	if(off + bytes > ((long long)1<<32) - 1 )
		BAD_ERROR("Filesystem greater than maximum size 2^32 - 1\n");

	if(lseek(fd, off, SEEK_SET) == -1) {
		perror("Lseek on destination failed");
		EXIT_MKSQUASHFS();
	}

	if(write(fd, buff, bytes) == -1) {
		perror("Write on destination failed");
		EXIT_MKSQUASHFS();
	}
}


void write_inodes()
{
	unsigned short c_byte;
	int avail_bytes;
	char *datap = data_cache;

	while(cache_bytes) {
		if(inode_size - inode_bytes < ((SQUASHFS_METADATA_SIZE << 1) + 2)) {
			if((inode_table = (char *) realloc(inode_table, inode_size + ((SQUASHFS_METADATA_SIZE << 1) + 2))) == NULL) {
				BAD_ERROR("Out of memory in inode table reallocation!\n");
			}
			inode_size += (SQUASHFS_METADATA_SIZE << 1) + 2;
		}
		avail_bytes = cache_bytes > SQUASHFS_METADATA_SIZE ? SQUASHFS_METADATA_SIZE : cache_bytes;
		c_byte = mangle(inode_table + inode_bytes + block_offset, datap, avail_bytes, SQUASHFS_METADATA_SIZE, noI);
		TRACE("Inode block @ %x, size %d\n", inode_bytes, c_byte);
		if(!swap)
			memcpy((void *) (inode_table + inode_bytes), (void *) &c_byte, sizeof(unsigned short));
		else
			SQUASHFS_SWAP_SHORTS((&c_byte), (inode_table + inode_bytes), 1); 
		if(check_data)
			*((unsigned char *)(inode_table + inode_bytes + block_offset - 1)) = SQUASHFS_MARKER_BYTE;
		inode_bytes += SQUASHFS_COMPRESSED_SIZE(c_byte) + block_offset;
		total_inode_bytes += avail_bytes + block_offset;
		datap += avail_bytes;
		cache_bytes -= avail_bytes;
	}

	write_bytes(fd, bytes, inode_bytes, (char *) inode_table);
}


void write_directories()
{
	unsigned short c_byte;
	int avail_bytes;
	char *directoryp = directory_data_cache;

	while(directory_cache_bytes) {
		if(directory_size - directory_bytes < ((SQUASHFS_METADATA_SIZE << 1) + 2)) {
			if((directory_table = (char *) realloc(directory_table, directory_size +
					((SQUASHFS_METADATA_SIZE << 1) + 2))) == NULL) {
				BAD_ERROR("Out of memory in directory table reallocation!\n");
			}
			directory_size += (SQUASHFS_METADATA_SIZE << 1) + 2;
		}
		avail_bytes = directory_cache_bytes > SQUASHFS_METADATA_SIZE ? SQUASHFS_METADATA_SIZE : directory_cache_bytes;
		c_byte = mangle(directory_table + directory_bytes + block_offset, directoryp, avail_bytes, SQUASHFS_METADATA_SIZE, noI);
		TRACE("Directory block @ %x, size %d\n", directory_bytes, c_byte);
		if(!swap)
			memcpy((void *) (directory_table + directory_bytes), (void *) &c_byte, sizeof(unsigned short));
		else
			SQUASHFS_SWAP_SHORTS((&c_byte), (directory_table + directory_bytes), 1);
		if(check_data)
			*((unsigned char *)(directory_table + directory_bytes + block_offset - 1)) = SQUASHFS_MARKER_BYTE;
		directory_bytes += SQUASHFS_COMPRESSED_SIZE(c_byte) + block_offset;
		total_directory_bytes += avail_bytes + block_offset;
		directoryp += avail_bytes;
		directory_cache_bytes -= avail_bytes;
	}
	write_bytes(fd, bytes, directory_bytes, (char *) directory_table);
}


unsigned int get_uid(unsigned int *type, squashfs_uid uid)
{
	int i;

	for(i = 0; (i < uid_count) && uids[i] != uid; i++);
	if(i == uid_count) {
		if(uid_count == SQUASHFS_UIDS) {
			ERROR("Out of uids! - using uid 0 - probably not what's wanted!\n");
			i = 0;
		} else
			uids[uid_count++] = uid;
	}

	*type = (i / 16) * SQUASHFS_TYPES + *type;

	return i;
}


unsigned int get_guid(squashfs_uid uid, squashfs_uid guid)
{
	int i;

	if(uid == guid)
		return SQUASHFS_GUIDS;

	for(i = 0; (i < guid_count) && guids[i] != guid; i++);
	if(i == guid_count) {
		if(guid_count == SQUASHFS_GUIDS) {
			ERROR("Out of gids! - using gid 0 - probably not what's wanted!\n");
			return SQUASHFS_GUIDS;
		} else
			guids[guid_count++] = guid;
	}

	return i;
}


squashfs_inode create_inode(char *filename, int type, int byte_size,
squashfs_block start_block, unsigned int offset, unsigned short *block_list)
{
	squashfs_inode i_no;
	struct stat buf;
	squashfs_inode_header inode_header;
	squashfs_base_inode_header *inode, *base = &inode_header.base;
	int file_type = type;

	if(filename[0] == '\0') {
		/* dummy top level directory, if multiple sources specified on command line */
		buf.st_mode = S_IRWXU | S_IRWXG | S_IRWXO;
		buf.st_uid = getuid();
		buf.st_gid = getgid();
		buf.st_mtime = time(NULL);
	} else if(lstat(filename, &buf) == -1) {
		char buffer[8192];
		sprintf(buffer, "Cannot stat dir/file %s, ignoring", filename);
		perror(buffer);
		return SQUASHFS_INVALID;
	}

	base->mode = SQUASHFS_MODE(buf.st_mode);
	base->uid = get_uid(&file_type, (squashfs_uid) buf.st_uid);
	base->inode_type = file_type;
	base->guid = get_guid((squashfs_uid) buf.st_uid, (squashfs_uid) buf.st_gid);

	if(type == SQUASHFS_FILE_TYPE) {
		squashfs_reg_inode_header *reg = &inode_header.reg, *inodep;

		inodep = (squashfs_reg_inode_header *) inode = get_inode(sizeof(*reg) +
			offset * sizeof(unsigned short));
		reg->mtime = buf.st_mtime;
		reg->file_size = byte_size;
		reg->start_block = start_block;
		if(!swap) {
			memcpy((void *) inodep, (void *) reg, sizeof(*reg));
			memcpy((void *) inodep->block_list, block_list, offset * sizeof(unsigned short));
		} else {
			SQUASHFS_SWAP_REG_INODE_HEADER(reg, inodep);
			SQUASHFS_SWAP_SHORTS(block_list, inodep->block_list, offset);
		}
		TRACE("File inode, file_size %d, start_block %x, blocks %d\n", byte_size,
			start_block, offset);
	}
	else if(type == SQUASHFS_DIR_TYPE) {
		squashfs_dir_inode_header *dir = &inode_header.dir;

		inode = get_inode(sizeof(*dir));
		dir->mtime = buf.st_mtime;
		dir->file_size = byte_size;
		dir->offset = offset;
		dir->start_block = start_block;
		if(!swap)
			memcpy((void *) inode, (void *) dir, sizeof(*dir));
		else
			SQUASHFS_SWAP_DIR_INODE_HEADER(dir, inode);
		TRACE("Directory inode, file_size %d, start_block %x, offset %x\n", byte_size,
			start_block, offset);
	}
	else if(type == SQUASHFS_CHRDEV_TYPE || type == SQUASHFS_BLKDEV_TYPE) {
		squashfs_dev_inode_header *dev = &inode_header.dev;

		inode = get_inode(sizeof(*dev));
		dev->rdev = (unsigned short) ((major(buf.st_rdev) << 8) |
			(minor(buf.st_rdev) & 0xff));
		if(!swap)
			memcpy((void *) inode, (void *) dev, sizeof(*dev));
		else
			SQUASHFS_SWAP_DEV_INODE_HEADER(dev, inode);
		TRACE("Device inode, rdev %x\n", dev->rdev);
	}
	else if(type == SQUASHFS_SYMLINK_TYPE) {
		squashfs_symlink_inode_header *symlink = &inode_header.symlink, *inodep;
		int byte;
		char buff[65536];

		if((byte = readlink(filename, buff, 65536)) == -1) {
			perror("Error in reading symbolic link, skipping...");
			return SQUASHFS_INVALID;
		}

		if(byte == 65536) {
			ERROR("Symlink is greater than 65536 bytes! skipping...");
			return SQUASHFS_INVALID;
		}

		inodep = (squashfs_symlink_inode_header *) inode = get_inode(sizeof(*symlink) + byte);
		symlink->symlink_size = byte;
		if(!swap)
			memcpy((void *) inode, symlink, sizeof(*symlink));
		else
			SQUASHFS_SWAP_SYMLINK_INODE_HEADER(symlink, inode);
		strncpy(inodep->symlink, buff, byte);
		TRACE("Symbolic link inode, symlink_size %d\n",	 byte);
	}
	else if(type == SQUASHFS_FIFO_TYPE || type == SQUASHFS_SOCKET_TYPE) {
		squashfs_ipc_inode_header *ipc = &inode_header.ipc;

		inode = get_inode(sizeof(*ipc));
		ipc->inode_type = SQUASHFS_IPC_TYPE;
		ipc->type = type;
		ipc->offset = (file_type - type) / SQUASHFS_TYPES;
		if(!swap)
			memcpy((void *) inode, (void *) ipc, sizeof(*ipc));
		else
			SQUASHFS_SWAP_IPC_INODE_HEADER(ipc, inode);
		TRACE("ipc inode, type %s %d\n", type == SQUASHFS_FIFO_TYPE ? "fifo" : "socket");
	} else
		return SQUASHFS_INVALID;

	i_no = MKINODE(inode);
	inode_count ++;

	TRACE("Created inode 0x%Lx, type %d, uid %d, guid %d\n", i_no, type, base->uid, base->guid);

	return i_no;
}


void init_dir(struct directory *dir)
{
	if((dir->buff = (char *)malloc(SQUASHFS_METADATA_SIZE)) == NULL) {
		BAD_ERROR("Out of memory allocating directory buffer\n");
	}

	dir->size = SQUASHFS_METADATA_SIZE;
	dir->p = dir->buff;
	dir->entry_count = 256;
	dir->entry_count_p = NULL;
}


void add_dir(squashfs_inode inode, char *name, int type, struct directory *dir)
{
	char *buff;
	squashfs_dir_entry idir, *idirp;
	unsigned int start_block = inode >> 16;
	unsigned int offset = inode & 0xffff;
	unsigned int size;

	if((size = strlen(name)) > SQUASHFS_NAME_LEN) {
		size = SQUASHFS_NAME_LEN;
		ERROR("Filename is greater than %d characters, truncating! ...\n", SQUASHFS_NAME_LEN);
	}

	if(dir->p + sizeof(squashfs_dir_entry) + size + 6 >= dir->buff + dir->size) {
		if((buff = (char *) realloc(dir->buff, dir->size += SQUASHFS_METADATA_SIZE)) == NULL)  {
			BAD_ERROR("Out of memory reallocating directory buffer\n");
		}

		dir->p = (dir->p - dir->buff) + buff;
		if(dir->entry_count_p) 
			dir->entry_count_p = (squashfs_dir_header *) (((unsigned char *) dir->entry_count_p) -
				dir->buff + buff);
		dir->buff = buff;
	}

	if(dir->entry_count == 256 || start_block != dir->start_block) {
		if(dir->entry_count_p) {
			squashfs_dir_header dir_header;

			dir_header.count = dir->entry_count - 1;
			dir_header.start_block = dir->start_block;
			if(!swap)
				memcpy((void *) dir->entry_count_p, (void *) &dir_header, sizeof(dir_header));
			else
				SQUASHFS_SWAP_DIR_HEADER((&dir_header), dir->entry_count_p);
		}

		dir->entry_count_p = (squashfs_dir_header *) dir->p;
		dir->start_block = start_block;
		dir->entry_count = 0;
		dir->p += sizeof(squashfs_dir_header);
	}

	idirp = (squashfs_dir_entry *) dir->p;
	idir.offset = offset;
	idir.type = type;
	idir.size = size - 1;
	if(!swap)
		memcpy((void *) idirp, (void *) &idir, sizeof(idir));
	else
		SQUASHFS_SWAP_DIR_ENTRY((&idir), idirp);
	strncpy(idirp->name, name, size);
	dir->p += sizeof(squashfs_dir_entry) + size;
	dir->entry_count ++;
}


squashfs_inode write_dir(char *filename, struct directory *dir)
{
	squashfs_inode inode;
	unsigned int dir_size;
	int data_space;
	unsigned short c_byte;

	while(directory_cache_bytes >= SQUASHFS_METADATA_SIZE) {
		if((directory_size - directory_bytes) < ((SQUASHFS_METADATA_SIZE << 1) + 2)) {
			if((directory_table = (char *) realloc(directory_table,
							directory_size + (SQUASHFS_METADATA_SIZE << 1) + 2)) == NULL) {
				goto failed;
			}
			directory_size += SQUASHFS_METADATA_SIZE << 1;
		}

		c_byte = mangle(directory_table + directory_bytes + block_offset, directory_data_cache,
				SQUASHFS_METADATA_SIZE, SQUASHFS_METADATA_SIZE, noI);
		TRACE("Directory block @ %x, size %d\n", directory_bytes, c_byte);
		if(!swap)
			memcpy((void *) directory_table + directory_bytes, (void *) &c_byte, sizeof(unsigned short));
		else
			SQUASHFS_SWAP_SHORTS((&c_byte), (directory_table + directory_bytes), 1);
		if(check_data)
			*((unsigned char *)(directory_table + directory_bytes + block_offset - 1)) = SQUASHFS_MARKER_BYTE;
		directory_bytes += SQUASHFS_COMPRESSED_SIZE(c_byte) + block_offset;
		total_directory_bytes += SQUASHFS_METADATA_SIZE + block_offset;
		memcpy(directory_data_cache, directory_data_cache + SQUASHFS_METADATA_SIZE, directory_cache_bytes - SQUASHFS_METADATA_SIZE);
		directory_cache_bytes -= SQUASHFS_METADATA_SIZE;
	}

	dir_size = dir->p - dir->buff;
	data_space = (directory_cache_size - directory_cache_bytes);
	if(data_space < dir_size) {
		int realloc_size = directory_cache_size == 0 ? ((dir_size + SQUASHFS_METADATA_SIZE) & ~(SQUASHFS_METADATA_SIZE - 1)) : dir_size - data_space;

		if((directory_data_cache = (char *) realloc(directory_data_cache, directory_cache_size + realloc_size)) == NULL) {
			goto failed;
		}
		directory_cache_size += realloc_size;
	}

	if(dir_size) {
		squashfs_dir_header dir_header;

		dir_header.count = dir->entry_count - 1;
		dir_header.start_block = dir->start_block;
		if(!swap)
			memcpy((void *) dir->entry_count_p, (void *) &dir_header, sizeof(dir_header));
		else
			SQUASHFS_SWAP_DIR_HEADER((&dir_header), dir->entry_count_p);
		memcpy(directory_data_cache + directory_cache_bytes, dir->buff, dir_size);
	}

	inode = create_inode(filename, SQUASHFS_DIR_TYPE, dir_size, directory_bytes, directory_cache_bytes, NULL);

	directory_cache_bytes += dir_size;

#ifdef SQUASHFS_TRACE
	if(!swap) {
		unsigned char *dirp;
		int count;

		TRACE("Directory contents of inode 0x%Lx\n", inode);
		dirp = dir->buff;
		while(dirp < dir->p) {
			char buffer[SQUASHFS_NAME_LEN + 1];
			squashfs_dir_entry idir, *idirp;
			squashfs_dir_header *dirh = (squashfs_dir_header *) dirp;
			count = dirh->count + 1;
			dirp += sizeof(squashfs_dir_header);

			TRACE("\tStart block 0x%x, count %d\n", dirh->start_block, count);

			while(count--) {
				idirp = (squashfs_dir_entry *) dirp;
				memcpy((char *) &idir, (char *) idirp, sizeof(idir));
				strncpy(buffer, idirp->name, idir.size + 1);
				buffer[idir.size + 1] = '\0';
				TRACE("\t\tname %s, inode offset 0x%x, type %d\n", buffer,
						  idir.offset, idir.type);
				dirp += sizeof(squashfs_dir_entry) + idir.size + 1;
			}
		}
	}
#endif
	dir_count ++;

	return inode;

failed:
	BAD_ERROR("Out of memory in directory table reallocation!\n");
}


unsigned char *read_from_buffer(unsigned int *start, unsigned int avail_bytes)
{
	unsigned char *v = (unsigned char *) *start;
	*start += avail_bytes;	
	return v;
}


char read_from_file_buffer[SQUASHFS_FILE_MAX_SIZE];
inline unsigned char *read_from_file(unsigned int *start, unsigned int avail_bytes)
{
	read_bytes(fd, *start, avail_bytes, read_from_file_buffer);
	*start += avail_bytes;
	return read_from_file_buffer;
}


/*
 * Compute 16 bit BSD checksum over the data
 */
unsigned short get_checksum(unsigned char *(get_next_file_block)(unsigned int *, unsigned int), unsigned int file_start, int l)
{
	unsigned short chksum = 0;
	unsigned int bytes = 0, position = file_start;
	unsigned char *b;

	while(l--) {
		bytes = l > SQUASHFS_FILE_MAX_SIZE ? SQUASHFS_FILE_MAX_SIZE : l;
		l -= bytes;
		b = get_next_file_block(&position, bytes);
		while(bytes--) {
			chksum = (chksum & 1) ? (chksum >> 1) | 0x8000 : chksum >> 1;
			chksum += *b++;
		}
	}

	return chksum;
}


int duplicate(unsigned char *(get_next_file_block)(unsigned int *, unsigned int), unsigned int file_start, int bytes, unsigned short **block_list, int *start, int blocks)
{
	unsigned short checksum = get_checksum(get_next_file_block, file_start, bytes);
	struct file_info *dupl_ptr = dupl[checksum];

	for(; dupl_ptr; dupl_ptr = dupl_ptr->next)
		if(bytes == dupl_ptr->bytes) {
			unsigned char buffer1[SQUASHFS_FILE_MAX_SIZE];
			unsigned int dup_bytes = dupl_ptr->bytes, dup_start = dupl_ptr->start;
			unsigned int position = file_start;
			unsigned char *buffer;
			while(dup_bytes) {
				int avail_bytes = dup_bytes > SQUASHFS_FILE_MAX_SIZE ? SQUASHFS_FILE_MAX_SIZE : dup_bytes;

				buffer = get_next_file_block(&position, avail_bytes);
				read_bytes(fd, dup_start, avail_bytes, buffer1);
				if(memcmp(buffer, buffer1, avail_bytes) != 0)
					break;
				dup_bytes -= avail_bytes;
				dup_start += avail_bytes;
			}
			if(dup_bytes == 0) {
				TRACE("Found duplicate file, start 0x%x, size %d, checksum 0x%x\n", dupl_ptr->start,
					dupl_ptr->bytes, dupl_ptr->checksum);
				*block_list = dupl_ptr->block_list;
				*start = dupl_ptr->start;
				return 1;
			}
		}


	if((dupl_ptr = (struct file_info *) malloc(sizeof(struct file_info))) == NULL) {
		BAD_ERROR("Out of memory in dup_files allocation!\n");
	}

	dupl_ptr->bytes = bytes;
	dupl_ptr->checksum = checksum;
	dupl_ptr->start = *start;
	if((dupl_ptr->block_list = (unsigned short *) malloc(blocks * sizeof(unsigned short))) == NULL) {
		BAD_ERROR("Out of memory allocating block_list\n");
	}
	
	memcpy(dupl_ptr->block_list, *block_list, blocks * sizeof(unsigned short));
	dup_files ++;
	dupl_ptr->next = dupl[checksum];
	dupl[checksum] = dupl_ptr;

	return 0;
}


#define MINALLOCBYTES (1024 * 1024)
squashfs_inode write_file(char *filename, long long size, int *c_size)
{
	unsigned int file, start, file_bytes = 0, byte, block = 0;
	unsigned int c_byte;
	long long read_size = (size > SQUASHFS_MAX_FILE_SIZE) ? SQUASHFS_MAX_FILE_SIZE : size;
	unsigned int blocks = (read_size + block_size - 1) >> block_log;
	unsigned short block_list[blocks], *block_listp = block_list;
	char buff[block_size], *c_buffer;
	int allocated_blocks = blocks, i, bbytes, whole_file = 1;

	if(size > read_size)
		ERROR("file %s truncated to %Ld bytes\n", filename, SQUASHFS_MAX_FILE_SIZE);

	total_bytes += read_size;
	if((file = open(filename, O_RDONLY)) == -1) {
		perror("Error in opening file, skipping...");
		return SQUASHFS_INVALID;
	}

	do {
		if((c_buffer = (char *) malloc((allocated_blocks + 1) << block_log)) == NULL) {
			TRACE("Out of memory allocating write_file buffer, allocated_blocks %d, blocks %d\n", allocated_blocks, blocks);
			whole_file = 0;
			if((allocated_blocks << (block_log - 1)) < MINALLOCBYTES)
				BAD_ERROR("Out of memory allocating write_file buffer, could not allocate %d blocks (%d Kbytes)\n", allocated_blocks, allocated_blocks << (block_log - 10));
			allocated_blocks >>= 1;
		}
	} while(!c_buffer);

	size = read_size;
	start = bytes;
	while(block < blocks) {
		for(i = 0, bbytes = 0; (i < allocated_blocks) && (block < blocks); i++, size -= byte) {
			byte = read(file, buff, size < block_size ? size : block_size);
			c_byte = mangle(c_buffer + bbytes, buff, byte, block_size, noD);
			block_list[block ++] = c_byte;
			bbytes += SQUASHFS_COMPRESSED_SIZE(c_byte);
		}
		if(!whole_file) {
			write_bytes(fd, bytes, bbytes, c_buffer);
			bytes += bbytes;
		}
		file_bytes += bbytes;
	}
	
	close(file);
	
	if(whole_file) {
		if(duplicate(read_from_buffer, (unsigned int) c_buffer, file_bytes, &block_listp, &start, blocks)) {
			*c_size = 0;
			goto wr_inode;
		}
		write_bytes(fd, bytes, file_bytes, c_buffer);
		bytes += file_bytes;
	} else {
		if(duplicate(read_from_file, start, file_bytes, &block_listp, &start, blocks)) {
			bytes = start;
			if(!block_device)
				ftruncate(fd, bytes);
			*c_size = 0;
			goto wr_inode;
		}
	}
	*c_size = file_bytes;

wr_inode:
	free(c_buffer);
	file_count ++;
	return create_inode(filename, SQUASHFS_FILE_TYPE, read_size, start, blocks, block_listp);
}


struct linuxdir {
	DIR	*linuxdir;
	char	pathname[8192];
};


void *linux_opendir(char *pathname, struct directory *dir)
{
	struct linuxdir *linuxdir;
	if((linuxdir = malloc(sizeof(struct linuxdir))) == NULL)
		return NULL;
	if((linuxdir->linuxdir = opendir(pathname)) == NULL) {
		free(linuxdir);
		return NULL;
	}
	strcpy(linuxdir->pathname, pathname);
	return (void *) linuxdir;
}


int linux_readdir(void *l, char *filename, char *dir_name)
{
	struct dirent *d_name;
	struct linuxdir *linuxdir = (struct linuxdir *)l;

	do {
		if((d_name = readdir(linuxdir->linuxdir)) == NULL)
			return FALSE;
	} while(strcmp(d_name->d_name, ".") == 0 || strcmp(d_name->d_name, "..") == 0);
	strcat(strcat(strcpy(filename, linuxdir->pathname), "/"), d_name->d_name);
	strcpy(dir_name, d_name->d_name);
	return TRUE;
}


void linux_closedir(void *linuxdir)
{
	closedir(((struct linuxdir *)linuxdir)->linuxdir);
	free(linuxdir);
}


char b_buffer[8192];
char *name;
char *basename_r();

char *getbase(char *pathname)
{
	char *result;

	if(*pathname != '/') {
		result = getenv("PWD");
		strcat(strcat(strcpy(b_buffer, result), "/"), pathname);
	} else
		strcpy(b_buffer, pathname);
	name = b_buffer;
	if(((result = basename_r()) == NULL) || (strcmp(result, "..") == 0))
		return NULL;
	else
		return result;
}


char *basename_r()
{
	char *s;
	char *p;
	int n = 1;

	for(;;) {
		s = name;
		if(*name == '\0')
			return NULL;
		if(*name != '/') {
			while(*name != '\0' && *name != '/') name++;
			n = name - s;
		}
		while(*name == '/') name++;
		if(strncmp(s, ".", n) == 0)
			continue;
		if((*name == '\0') || (strncmp(s, "..", n) == 0) || ((p = basename_r()) == NULL)) {
			s[n] = '\0';
			return s;
		}
		if(strcmp(p, "..") == 0)
			continue;
		return p;
	}
}


char encomp_pathname[8192];
int encomp_entry = 0;

void *encomp_opendir(char *pathname, struct directory *dir)
{
	int i;

	for(i = 0; i < old_root_entries; i++)
		add_dir(old_root_entry[i].inode, old_root_entry[i].name, old_root_entry[i].type, dir);

	return (void *)source_path;
}


int encomp_readdir(void *l, char *filename, char *dir_name)
{
	char *basename;
	int n, pass = 1;

	while(encomp_entry < source) {
		if((basename = getbase(source_path[encomp_entry])) == NULL) {
			ERROR("Bad source directory %s - skipping ...\n", source_path[encomp_entry]);
			encomp_entry++;
			continue;
		}
        	strcpy(filename, source_path[encomp_entry]);
		strcpy(dir_name, basename);
		for(;;) {
			for(n = 0; n < old_root_entries && strcmp(old_root_entry[n].name, dir_name) != 0; n++);
			if(n == old_root_entries) {
				add_old_root_entry(dir_name, 0, 0);
				encomp_entry++;
				return TRUE;
			}
			ERROR("Source directory entry %s already used! - trying ", dir_name);
			sprintf(dir_name, "%s_%d", basename, pass++);
			ERROR("%s\n", dir_name);
		}
	}
	return FALSE;
}


void encomp_closedir(void *linuxdir)
{
}


void *single_opendir(char *pathname, struct directory *dir)
{
	encomp_opendir(pathname, dir);
	return linux_opendir(pathname, dir);
}


int single_readdir(void *l, char *filename, char *dir_name)
{
	int i, pass = 1;
	char name[SQUASHFS_NAME_LEN + 1];

	if(linux_readdir(l, filename, dir_name) == FALSE)
		return FALSE;

	strcpy(name, dir_name);
	for(;;) {
		for(i = 0; i < old_root_entries && strcmp(old_root_entry[i].name, dir_name) != 0; i++);
		if(i == old_root_entries) {
			add_old_root_entry(dir_name, 0, 0);
			return TRUE;
		}
		ERROR("Source directory entry %s already used! - trying ", dir_name);
		sprintf(dir_name, "%s_%d", name, pass++);
		ERROR("%s\n", dir_name);
	}
}


squashfs_inode dir_scan(char *pathname, void* (_opendir)(char *, struct directory *), int (_readdir)(void *, char *, char *),
		void (_closedir)(void *))
{
	void *linuxdir;
	struct stat buf;
	char filename[8192], dir_name[8192];
	int squashfs_type;
	squashfs_inode inode = SQUASHFS_INVALID;
	struct directory dir;
	
	init_dir(&dir);
	if((linuxdir = _opendir(pathname, &dir)) == NULL) {
		ERROR("Could not open %s, skipping...\n", pathname);
		goto error;
	}
	
	while(_readdir(linuxdir, filename, dir_name) != FALSE) {

		if(lstat(filename, &buf) == -1) {
			char buffer[8192];
			sprintf(buffer, "Cannot stat dir/file %s, ignoring", filename);
			perror(buffer);
			continue;
		}
		if(excluded(filename, &buf))
			continue;

		switch(buf.st_mode & S_IFMT) {
			case S_IFREG: {
				int c_size;

				squashfs_type = SQUASHFS_FILE_TYPE;
				inode = write_file(filename, buf.st_size, &c_size);
				INFO("file %s, size %d bytes, inode 0x%Lx\n", filename, c_size, inode);
				INFO("\t%.2f%% of uncompressed file size (%Ld bytes)\n", ((float) c_size / buf.st_size) * 100.0, buf.st_size);
				break;
			}
			case S_IFDIR:
				squashfs_type = SQUASHFS_DIR_TYPE;
				inode = dir_scan(filename, linux_opendir, linux_readdir, linux_closedir);
				break;

			case S_IFLNK:
				squashfs_type = SQUASHFS_SYMLINK_TYPE;
				inode = create_inode(filename, squashfs_type, 0, 0, 0, NULL);
				INFO("symbolic link %s inode 0x%Lx\n", dir_name, inode);
				sym_count ++;
				break;

			case S_IFCHR:
				squashfs_type = SQUASHFS_CHRDEV_TYPE;
				inode = create_inode(filename, squashfs_type, 0, 0, 0, NULL);
				INFO("character device %s inode 0x%Lx\n", dir_name, inode);
				dev_count ++;
				break;

			case S_IFBLK:
				squashfs_type = SQUASHFS_BLKDEV_TYPE;
				inode = create_inode(filename, squashfs_type, 0, 0, 0, NULL);
				INFO("block device %s inode 0x%Lx\n", dir_name, inode);
				dev_count ++;
				break;

			case S_IFIFO:
				squashfs_type = SQUASHFS_FIFO_TYPE;
				inode = create_inode(filename, squashfs_type, 0, 0, 0, NULL);
				INFO("fifo %s inode 0x%Lx\n", dir_name, inode);
				fifo_count ++;
				break;

			case S_IFSOCK:
				squashfs_type = SQUASHFS_SOCKET_TYPE;
				inode = create_inode(filename, squashfs_type, 0, 0, 0, NULL);
				INFO("unix domain socket %s inode 0x%Lx\n", dir_name, inode);
				sock_count ++;
				break;

			 default:
				ERROR("%s unrecognised file type, mode is %x\n", filename, buf.st_mode);
				continue;
			}

		if(inode != SQUASHFS_INVALID)
			add_dir(inode, dir_name, squashfs_type, &dir);
	}

	_closedir(linuxdir);
	inode = write_dir(pathname, &dir);
	INFO("directory %s inode 0x%Lx\n", pathname, inode);

error:
	free(dir.buff);

	return inode;
}


unsigned int log(unsigned int block)
{
	int i;

	for(i = 9; i <= 15; i++)
		if(block == (1 << i))
			return i;
	return 0;
}


int excluded(char *filename, struct stat *buf)
{
	int i;

	for(i = 0; i < exclude; i++)
		if((exclude_paths[i].st_dev == buf->st_dev) && (exclude_paths[i].st_ino == buf->st_ino))
			return TRUE;
	return FALSE;
}


#define ADD_ENTRY(buf) \
	if(exclude % EXCLUDE_SIZE == 0) {\
		if((exclude_paths = (struct exclude_info *) realloc(exclude_paths, (exclude + EXCLUDE_SIZE) * sizeof(struct exclude_info))) == NULL)\
			BAD_ERROR("Out of memory in exclude dir/file table\n");\
	}\
	exclude_paths[exclude].st_dev = buf.st_dev;\
	exclude_paths[exclude++].st_ino = buf.st_ino;
int add_exclude(char *path)
{
	int i;
	char buffer[4096], filename[4096];
	struct stat buf;

	if(path[0] == '/' || strncmp(path, "./", 2) == 0 || strncmp(path, "../", 3) == 0) {
		if(lstat(path, &buf) == -1) {
			sprintf(buffer, "Cannot stat exclude dir/file %s, ignoring", path);
			perror(buffer);
			return TRUE;
		}
		ADD_ENTRY(buf);
		return TRUE;
	}

	for(i = 0; i < source; i++) {
		strcat(strcat(strcpy(filename, source_path[i]), "/"), path);
		if(lstat(filename, &buf) == -1) {
			if(!(errno == ENOENT || errno == ENOTDIR)) {
				sprintf(buffer, "Cannot stat exclude dir/file %s, ignoring", filename);
				perror(buffer);
			}
			continue;
		}
		ADD_ENTRY(buf);
	}
	return TRUE;
}


void add_old_root_entry(char *name, squashfs_inode inode, int type)
{
	if((old_root_entry = (struct old_root_entry_info *) realloc(old_root_entry, sizeof(struct old_root_entry_info)
				* (old_root_entries + 1))) == NULL)
		BAD_ERROR("Out of memory in old root directory entries reallocation\n");

	strcpy(old_root_entry[old_root_entries].name, name);
	old_root_entry[old_root_entries].inode = inode;
	old_root_entry[old_root_entries++].type = type;
}


#define VERSION() \
	printf("mksquashfs version 1.3-r3, copyright (C) 2004 Phillip Lougher (phillip@lougher.demon.co.uk)\n"); \
	printf("Released under the GNU GPL licence (version 2 or later)\n");
int main(int argc, char *argv[])
{
	struct stat buf;
	int i;
	squashfs_super_block sBlk;
	char *b, *root_name = NULL;
	int be, nopad = FALSE, delete = FALSE, keep_as_directory = FALSE, orig_be;

#if __BYTE_ORDER == __BIG_ENDIAN
	be = TRUE;
#else
	be = FALSE;
#endif

	block_log = log(block_size);
	if(argc > 1 && strcmp(argv[1], "-version") == 0) {
		VERSION();
		exit(0);
	}
        for(i = 1; i < argc && argv[i][0] != '-'; i++);
	if(i < 3)
		goto printOptions;
	source_path = argv + 1;
	source = i - 2;
	for(; i < argc; i++) {
		if(strcmp(argv[i], "-b") == 0) {
			if((++i == argc) || (block_size = strtol(argv[i], &b, 10), *b !='\0')) {
				ERROR("%s: -b missing or invalid block size\n", argv[0]);
				exit(1);
			}

			if((block_log = log(block_size)) == 0) {
				ERROR("%s: -b block size not power of two or not between 512 and 64K\n", argv[0]);
				exit(1);
			}
		} else if(strcmp(argv[i], "-ef") == 0) {
			if(++i == argc) {
				ERROR("%s: -ef missing filename\n", argv[0]);
				exit(1);
			}
		} else if(strcmp(argv[i], "-noI") == 0 ||
				strcmp(argv[i], "-noInodeCompression") == 0)
			noI = TRUE;

		else if(strcmp(argv[i], "-noD") == 0 ||
				strcmp(argv[i], "-noDataCompression") == 0)
			noD = TRUE;

		else if(strcmp(argv[i], "-nopad") == 0)
			nopad = TRUE;

		else if(strcmp(argv[i], "-check_data") == 0)
			check_data = TRUE;

		else if(strcmp(argv[i], "-info") == 0)
			silent = 0;

		else if(strcmp(argv[i], "-be") == 0)
			be = TRUE;

		else if(strcmp(argv[i], "-le") == 0)
			be = FALSE;

		else if(strcmp(argv[i], "-e") == 0)
			break;

		else if(strcmp(argv[i], "-noappend") == 0)
			delete = TRUE;

		else if(strcmp(argv[i], "-keep-as-directory") == 0)
			keep_as_directory = TRUE;

		else if(strcmp(argv[i], "-root-becomes") == 0) {
			if(++i == argc) {
				ERROR("%s: -root-becomes: missing name\n", argv[0]);
				exit(1);
			}	
			root_name = argv[i];
		} else if(strcmp(argv[i], "-version") == 0) {
			VERSION();
		} else {
			ERROR("%s: invalid option\n\n", argv[0]);
printOptions:
			ERROR("SYNTAX:%s source1 source2 ...  dest [options] [-e list of exclude dirs/files]\n", argv[0]);
			ERROR("\nOptions are\n");
			ERROR("\t-info\t\t\t\tprint files written to filesystem\n");
			ERROR("\t-b block size\t\t\tsize of blocks in ");
			ERROR("filesystem, default %d\n", SQUASHFS_FILE_SIZE);
			ERROR("\t-noappend\t\t\tDo not append to existing filesystem on dest, write a new filesystem\n");
		        ERROR("\t\t\t\t\tThis is the default action if dest does not exist, or if no filesystem is on it\n");
			ERROR("\t-keep-as-directory\t\tIf one source directory is specified, create a root directory\n");
			ERROR("\t\t\t\t\tcontaining that directory, rather than the contents of the directory\n");
			ERROR("\t-root-becomes name\t\tWhen appending source files/directories, make the original\n");
			ERROR("\t\t\t\t\troot become a subdirectory in the new root called name, rather\n");
			ERROR("\t\t\t\t\tthan adding the new source items to the original root\n");
			ERROR("\t-noI -noInodeCompression\tdo not compress inode table\n");
			ERROR("\t-noD -noDataCompression\t\tdo not compress data blocks\n");
			ERROR("\t-nopad\t\t\t\tdo not pad filesystem to a multiple of 4K\n");
			ERROR("\t-check_data\t\t\tadd checkdata for greater filesystem checks\n");
			ERROR("\t-le\t\t\t\tcreate a little endian filesystem\n");
			ERROR("\t-be\t\t\t\tcreate a big endian filesystem\n");
			ERROR("\t-ef exclude file\t\tfile is a list of exclude dirs/files - one per line\n");
			ERROR("\t-version\t\t\tprint version, licence and copyright message\n");
			exit(1);
		}
	}

	if(stat(argv[source + 1], &buf) == -1) {
		if(errno == ENOENT) { /* Does not exist */
			if((fd = open(argv[source + 1], O_CREAT | O_TRUNC | O_RDWR, S_IRWXU)) == -1) {
				perror("Could not create destination file");
				exit(1);
			}
			delete = TRUE;
		} else {
			perror("Could not stat destination file");
			exit(1);
		}

	} else {
		if(S_ISBLK(buf.st_mode)) {
			if((fd = open(argv[source + 1], O_RDWR)) == -1) {
				perror("Could not open block device as destination");
				exit(1);
			}
			block_device = 1;

		} else if(S_ISREG(buf.st_mode))	 {
			if((fd = open(argv[source + 1], (delete ? O_TRUNC : 0) | O_RDWR)) == -1) {
				perror("Could not open regular file for writing as destination");
				exit(1);
			}
		}
		else {
			ERROR("Destination not block device or regular file\n");
			exit(1);
		}

		if(!delete) {
		        if(read_super(fd, &sBlk, &orig_be, argv[source + 1]) == 0) {
				if(S_ISREG(buf.st_mode)) { /* reopen truncating file */
					close(fd);
			                if((fd = open(argv[source + 1], O_TRUNC  | O_RDWR)) == -1) {
						perror("Could not open regular file for writing as destination");
						exit(1);
					}
				}
				delete = TRUE;
			}

		}
	}

	/* process the exclude files - must be done afer destination file has been possibly created */
	for(i = source + 2; i < argc; i++)
		if(strcmp(argv[i], "-ef") == 0) {
			FILE *fd;
			char filename[16385];
			if((fd = fopen(argv[++i], "r")) == NULL) {
				perror("Could not open exclude file...");
				exit(1);
			}
			while(fscanf(fd, "%16384[^\n]\n", filename) != EOF)
				add_exclude(filename);
			fclose(fd);
		} else if(strcmp(argv[i], "-e") == 0)
			break;
		else if(strcmp(argv[i], "-b") == 0 || strcmp(argv[i], "-root-becomes") == 0)
			i++;
	if(i != argc) {
		if(++i == argc) {
			ERROR("%s: -e missing arguments\n", argv[0]);
			exit(1);
		}
		while(i < argc && add_exclude(argv[i++]));
	}

	if(delete) {
		printf("Creating %s filesystem on %s, block size %d.\n",
				be ? "big endian" : "little endian", argv[source + 1], block_size);
		bytes = sizeof(squashfs_super_block);
	} else {
		be = orig_be;
		block_log = log(block_size = sBlk.block_size);
		noI = SQUASHFS_UNCOMPRESSED_INODES(sBlk.flags);
		noD = SQUASHFS_UNCOMPRESSED_DATA(sBlk.flags);
		check_data = SQUASHFS_CHECK_DATA(sBlk.flags) ? 1 : 0;
		
		if((bytes = read_filesystem(root_name, fd, &sBlk, &inode_table, &inode_bytes, &data_cache,
				&cache_bytes, &cache_size, &directory_table, &directory_bytes,
				&directory_data_cache, &directory_cache_bytes, &directory_cache_size,
				&file_count, &sym_count, &dev_count, &dir_count, &fifo_count, &sock_count, (squashfs_uid *) uids, &uid_count,
				(squashfs_uid *) guids, &guid_count,
				&total_bytes, &total_inode_bytes, &total_directory_bytes, add_old_root_entry)) == 0) {
			ERROR("Failed to read existing filesystem - will not overwrite - ABORTING!\n");
			exit(1);
		}

		printf("Appending to existing %s squashfs filesystem on %s, block size %d.\n", be ? "big endian" :
			"little endian", argv[source + 1], block_size);
		printf("All -be, -le, -b, -noI, noD and -check_data  options ignored.\n");
		printf("\nIf appending is not wanted, please re-run with -noappend specified!\n\n");

		inode_size = inode_bytes;
		directory_size = directory_bytes;

		/* save original filesystem state for restoring ... */
		sbytes = bytes;
		sinode_count = sBlk.inodes;
		inode_count = file_count + dir_count + sym_count + dev_count;
		sdata_cache = (char *)malloc(scache_bytes = cache_size);
		sdirectory_data_cache = (char *)malloc(sdirectory_cache_bytes = directory_cache_size);
		memcpy(sdata_cache, data_cache, scache_bytes);
		memcpy(sdirectory_data_cache, directory_data_cache, sdirectory_cache_bytes);
		sinode_bytes = inode_bytes;
		sdirectory_bytes = directory_bytes;
		suid_count = uid_count;
		sguid_count = guid_count;
		stotal_bytes = total_bytes;
		stotal_inode_bytes = total_inode_bytes;
		stotal_directory_bytes = total_directory_bytes;
		sfile_count = file_count;
		ssym_count = sym_count;
		sdev_count = dev_count;
		sdir_count = dir_count;
		sdup_files = dup_files;
		restore = TRUE;
		if(setjmp(env))
			goto restore_filesystem;
		signal(SIGTERM, sighandler);
		signal(SIGINT, sighandler);
		write_bytes(fd, SQUASHFS_START, 4, "\0\0\0\0");
	}

#if __BYTE_ORDER == __BIG_ENDIAN
	swap = !be;
#else
	swap = be;
#endif

	block_offset = check_data ? 3 : 2;

	if(stat(source_path[0], &buf) == -1) {
		perror("Cannot stat source directory");
		EXIT_MKSQUASHFS();
	}

	if(delete && !keep_as_directory && source == 1 && S_ISDIR(buf.st_mode))
		sBlk.root_inode = dir_scan(source_path[0], linux_opendir, linux_readdir, linux_closedir);
	else if(!keep_as_directory && source == 1 && S_ISDIR(buf.st_mode))
		sBlk.root_inode = dir_scan(source_path[0], single_opendir, single_readdir, linux_closedir);
	else
		sBlk.root_inode = dir_scan("", encomp_opendir, encomp_readdir, encomp_closedir);
	sBlk.inodes = inode_count;
	sBlk.s_magic = SQUASHFS_MAGIC;
	sBlk.s_major = SQUASHFS_MAJOR;
	sBlk.s_minor = SQUASHFS_MINOR;
	sBlk.block_size = block_size;
	sBlk.block_log = block_log;
	sBlk.flags = SQUASHFS_MKFLAGS(noI, noD, check_data);
	sBlk.inode_table_start = bytes;
	sBlk.mkfs_time = time(NULL);

restore_filesystem:
	write_inodes();
	bytes += inode_bytes;

	sBlk.directory_table_start = bytes;
	write_directories();
	bytes += directory_bytes;

	TRACE("sBlk->inode_table_start 0x%x\n", sBlk.inode_table_start);
	TRACE("sBlk->directory_table_start 0x%x\n", sBlk.directory_table_start);

	if(sBlk.no_uids = uid_count) {
		if(!swap)
			write_bytes(fd, bytes, uid_count * sizeof(squashfs_uid), (char *) uids);
		else {
			squashfs_uid uids_copy[uid_count];

			SQUASHFS_SWAP_DATA(uids, uids_copy, uid_count, sizeof(squashfs_uid) * 8);
			write_bytes(fd, bytes, uid_count * sizeof(squashfs_uid), (char *) uids_copy);
		}
		sBlk.uid_start = bytes;
		bytes += uid_count * sizeof(squashfs_uid);
	} else
		sBlk.uid_start = 0;

	if(sBlk.no_guids = guid_count) {
		if(!swap)
			write_bytes(fd, bytes, guid_count * sizeof(squashfs_uid), (char *) guids);
		else {
			squashfs_uid guids_copy[guid_count];

			SQUASHFS_SWAP_DATA(guids, guids_copy, guid_count, sizeof(squashfs_uid) * 8);
			write_bytes(fd, bytes, guid_count * sizeof(squashfs_uid), (char *) guids_copy);
		}
		sBlk.guid_start = bytes;
		bytes += guid_count * sizeof(squashfs_uid);
	} else
		sBlk.guid_start = 0;

	sBlk.bytes_used = bytes;

	if(!swap)
		write_bytes(fd, SQUASHFS_START, sizeof(squashfs_super_block), (char *) &sBlk);
	else {
		squashfs_super_block sBlk_copy;

		SQUASHFS_SWAP_SUPER_BLOCK((&sBlk), &sBlk_copy); 
		write_bytes(fd, SQUASHFS_START, sizeof(squashfs_super_block), (char *) &sBlk_copy);
	}

	if(!nopad && (i = bytes & (4096 - 1))) {
		unsigned char temp[4096] = {0};
		write_bytes(fd, bytes, 4096 - i, temp);
	}

	close(fd);

	total_bytes += total_inode_bytes + total_directory_bytes + uid_count
		* sizeof(unsigned short) + guid_count * sizeof(unsigned short) +
		sizeof(squashfs_super_block);

	printf("\n%s filesystem, data block size %d, %s data, %s metadata\n", be ?
		"Big endian" : "Little endian", block_size, noI ? "uncompressed" : "compressed", noD ?
	"uncompressed" : "compressed");
	printf("Filesystem size %.2f Kbytes (%.2f Mbytes)\n", bytes / 1024.0, bytes / (1024.0 * 1024.0));
	printf("\t%.2f%% of uncompressed filesystem size (%.2f Kbytes)\n",
		((float) bytes / total_bytes) * 100.0, total_bytes / 1024.0);
	printf("Inode table size %d bytes (%.2f Kbytes)\n",
		inode_bytes, inode_bytes / 1024.0);
	printf("\t%.2f%% of uncompressed inode table size (%d bytes)\n",
		((float) inode_bytes / total_inode_bytes) * 100.0, total_inode_bytes);
	printf("Directory table size %d bytes (%.2f Kbytes)\n",
		directory_bytes, directory_bytes / 1024.0);
	printf("\t%.2f%% of uncompressed directory table size (%d bytes)\n",
		((float) directory_bytes / total_directory_bytes) * 100.0, total_directory_bytes);
	printf("Number of duplicate files found %d\n", file_count - dup_files);
	printf("Number of inodes %d\n", inode_count);
	printf("Number of files %d\n", file_count);
	printf("Number of symbolic links  %d\n", sym_count);
	printf("Number of device nodes %d\n", dev_count);
	printf("Number of fifo nodes %d\n", fifo_count);
	printf("Number of socket nodes %d\n", sock_count);
	printf("Number of directories %d\n", dir_count);
	printf("Number of uids %d\n", uid_count);

	for(i = 0; i < uid_count; i++) {
		struct passwd *user = getpwuid(uids[i]);
		printf("\t%s (%d)\n", user == NULL ? "unknown" : user->pw_name, uids[i]);
	}

	printf("Number of gids %d\n", guid_count);

	for(i = 0; i < guid_count; i++) {
		struct group *group = getgrgid(guids[i]);
		printf("\t%s (%d)\n", group == NULL ? "unknown" : group->gr_name, guids[i]);
	}

	return 0;
}
