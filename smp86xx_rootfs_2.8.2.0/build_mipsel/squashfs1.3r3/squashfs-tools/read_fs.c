/*
 * Read a squashfs filesystem.  This is a highly compressed read only filesystem.
 *
 * Copyright (c) 2003 Phillip Lougher <phillip@lougher.demon.co.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * read_fs.c
 */

extern void read_bytes(int, unsigned int, int, char *);
extern int duplicate(unsigned char *(read_from_file)(unsigned int *, unsigned int), unsigned int, int, unsigned short **, int *, int);
extern unsigned char *read_from_file(unsigned int *, unsigned int);

#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <zlib.h>
#include <sys/mman.h>

#include <endian.h>
#include "read_fs.h"
#include <squashfs_fs.h>

#include <stdlib.h>

#ifdef SQUASHFS_TRACE
#define TRACE(s, args...)		printf("mksquashfs: "s, ## args)
#else
#define TRACE(s, args...)
#endif

#define ERROR(s, args...)		fprintf(stderr, s, ## args)

int swap;

int read_block(int fd, int *start, unsigned char *block, squashfs_super_block *sBlk)
{
	unsigned short c_byte;
	int offset = 2;
	
	if(swap) {
		read_bytes(fd, *start, 2, block);
		((unsigned char *) &c_byte)[1] = block[0];
		((unsigned char *) &c_byte)[0] = block[1]; 
	} else 
		read_bytes(fd, *start, 2, (char *)&c_byte);

	if(SQUASHFS_CHECK_DATA(sBlk->flags))
		offset = 3;
	if(SQUASHFS_COMPRESSED(c_byte)) {
		unsigned char buffer[SQUASHFS_METADATA_SIZE];
		int bytes = SQUASHFS_METADATA_SIZE, res;

		c_byte = SQUASHFS_COMPRESSED_SIZE(c_byte);
		read_bytes(fd, *start + offset, c_byte, buffer);

		if((res = uncompress(block, (unsigned long *) &bytes, (const char *) buffer, c_byte)) != Z_OK) {
			if(res == Z_MEM_ERROR)
				ERROR("zlib::uncompress failed, not enough memory\n");
			else if(res == Z_BUF_ERROR)
				ERROR("zlib::uncompress failed, not enough room in output buffer\n");
			else
				ERROR("zlib::uncompress failed, unknown error %d\n", res);
			return 0;
		}
		*start += offset + c_byte;
		return bytes;
	} else {
		c_byte = SQUASHFS_COMPRESSED_SIZE(c_byte);
		read_bytes(fd, *start + offset, c_byte, block);
		*start += offset + c_byte;
		return c_byte;
	}
}


int scan_inode_table(int fd, int start, int end, int root_inode_start, squashfs_super_block *sBlk,
		squashfs_dir_inode_header *dir_inode, unsigned char **inode_table, unsigned int *root_inode_block,
		unsigned int *uncompressed_file, unsigned int *uncompressed_directory, int *file_count, int *sym_count,
		int *dev_count, int *dir_count, int *fifo_count, int *sock_count)
{
	unsigned char *cur_ptr;
	int bytes = 0, size = 0, files = 0;
	squashfs_reg_inode_header inode;
	unsigned int directory_start_block;

	TRACE("scan_inode_table: start 0x%x, end 0x%x, root_inode_start 0x%x\n", start, end, root_inode_start);
	while(start < end) {
		if(start == root_inode_start) {
			TRACE("scan_inode_table: read compressed block 0x%x containing root inode\n", start);
			*root_inode_block = bytes;
		}
		if((size - bytes < SQUASHFS_METADATA_SIZE) &&
				((*inode_table = realloc(*inode_table, size += SQUASHFS_METADATA_SIZE)) == NULL))
			return FALSE;
		TRACE("scan_inode_table: reading block 0x%x\n", start);
		if((bytes += read_block(fd, &start, *inode_table + bytes, sBlk)) == 0) {
			free(*inode_table);
			return FALSE;
		}
	}

	/*
	 * Read last inode entry which is the root directory inode, and obtain the last
	 * directory start block index.  This is used when calculating the total uncompressed
	 * directory size.  The directory bytes in the last block will be counted as normal.
	 *
	 * The root inode is ignored in the inode scan.  This ensures there is
	 * always enough bytes left to read a regular file inode entry
	 */
	bytes -= sizeof(squashfs_dir_inode_header);
	if(swap) {
		squashfs_dir_inode_header sinode;
		memcpy((void *)&sinode, (void *)(*inode_table + bytes), sizeof(*dir_inode));
		SQUASHFS_SWAP_DIR_INODE_HEADER(dir_inode, &sinode);
	} else
		memcpy((void *)dir_inode, (void *)(*inode_table + bytes), sizeof(*dir_inode));
	directory_start_block = dir_inode->start_block;

	for(cur_ptr = *inode_table; cur_ptr < *inode_table + bytes; files ++) {
		if(swap) {
			squashfs_reg_inode_header sinode;
			memcpy((void *)&sinode, (void *)cur_ptr, sizeof(inode));
			SQUASHFS_SWAP_REG_INODE_HEADER(&inode, &sinode);
		} else
			memcpy((void *)&inode, (void *)cur_ptr, sizeof(inode));

		TRACE("scan_inode_table: processing inode @ byte position 0x%x, type 0x%x\n", cur_ptr - *inode_table,
				inode.inode_type);
		switch(inode.inode_type == SQUASHFS_IPC_TYPE ? SQUASHFS_IPC_TYPE : (inode.inode_type - 1) % SQUASHFS_TYPES + 1) {
			case SQUASHFS_FILE_TYPE: {
				int blocks = (inode.file_size + sBlk->block_size - 1) >> sBlk->block_log, file_bytes = 0,
					i, start = inode.start_block;
				unsigned short block_list[blocks], *block_listp = block_list;

				TRACE("scan_inode_table: regular file, file_size %d, blocks %d\n", inode.file_size, blocks);

				cur_ptr += sizeof(inode);
				if(swap) {
					unsigned short sblock_list[blocks];
					memcpy((void *)sblock_list, (void *)cur_ptr, blocks * sizeof(unsigned short));
					SQUASHFS_SWAP_SHORTS(block_list, sblock_list, blocks);
				} else
					memcpy((void *)block_list, (void *)cur_ptr, blocks * sizeof(unsigned short));

				*uncompressed_file += inode.file_size;
				(*file_count) ++;

				for(i = 0; i < blocks; i++)
					file_bytes += SQUASHFS_COMPRESSED_SIZE(block_list[i]);

	                        duplicate(read_from_file, start, file_bytes, &block_listp, &start, blocks);
				cur_ptr += blocks * sizeof(unsigned short);
				break;
			}	
			case SQUASHFS_SYMLINK_TYPE: {
				squashfs_symlink_inode_header inodep;
	
				if(swap) {
					squashfs_symlink_inode_header sinodep;
					memcpy((void *)&sinodep, (void *)cur_ptr, sizeof(sinodep));
					SQUASHFS_SWAP_SYMLINK_INODE_HEADER(&inodep, &sinodep);
				} else
					memcpy((void *)&inodep, (void *)cur_ptr, sizeof(inodep));
				(*sym_count) ++;
				cur_ptr += sizeof(inodep) + inodep.symlink_size;
				break;
			}
			case SQUASHFS_DIR_TYPE: {
				squashfs_dir_inode_header dir_inode;

				if(swap) {
					squashfs_dir_inode_header sinode;
					memcpy((void *)&sinode, (void *)cur_ptr, sizeof(dir_inode));
					SQUASHFS_SWAP_DIR_INODE_HEADER(&dir_inode, &sinode);
				} else
					memcpy((void *)&dir_inode, (void *)cur_ptr, sizeof(dir_inode));
				if(dir_inode.start_block < directory_start_block)
					*uncompressed_directory += dir_inode.file_size;
				(*dir_count) ++;
				cur_ptr += sizeof(squashfs_dir_inode_header);
				break;
			}
		 	case SQUASHFS_BLKDEV_TYPE:
		 	case SQUASHFS_CHRDEV_TYPE:
				(*dev_count) ++;
				cur_ptr += sizeof(squashfs_dev_inode_header);
				break;

			case SQUASHFS_IPC_TYPE: {
				squashfs_ipc_inode_header ipc_inode;

				if(swap) {
					squashfs_ipc_inode_header sinode;
					memcpy((void *)&sinode, (void *)cur_ptr, sizeof(ipc_inode));
					SQUASHFS_SWAP_IPC_INODE_HEADER(&ipc_inode, &sinode);	
				} else
					memcpy((void *)&ipc_inode, (void *)cur_ptr, sizeof(ipc_inode));
				if(ipc_inode.type == SQUASHFS_FIFO_TYPE)
					(*fifo_count) ++;
				else
					(*sock_count) ++;
				cur_ptr += sizeof(squashfs_ipc_inode_header);
				break;
			}
		 	default:
				ERROR("Unknown inode type %d in scan_inode_table!\n", inode.inode_type);
				free(*inode_table);
				return FALSE;
		}
	}
	
	return files;
}


int read_super(int fd, squashfs_super_block *sBlk, int *be, char *source)
{
	read_bytes(fd, SQUASHFS_START, sizeof(squashfs_super_block), (char *) sBlk);

	/* Check it is a SQUASHFS superblock */
	swap = 0;
	if(sBlk->s_magic != SQUASHFS_MAGIC) {
		if(sBlk->s_magic == SQUASHFS_MAGIC_SWAP) {
			squashfs_super_block sblk;
			ERROR("Reading a different endian SQUASHFS filesystem on %s - ignoring -le/-be options\n", source);
			SQUASHFS_SWAP_SUPER_BLOCK(&sblk, sBlk);
			memcpy(sBlk, &sblk, sizeof(squashfs_super_block));
			swap = 1;
		} else  {
			ERROR("Can't find a SQUASHFS superblock on %s\n", source);
			goto failed_mount;
		}
	}

	/* Check the MAJOR & MINOR versions */
	if(sBlk->s_major != SQUASHFS_MAJOR || sBlk->s_minor > SQUASHFS_MINOR) {
		ERROR("Major/Minor mismatch, filesystem on %s is (%d:%d), I support (%d: <= %d)\n",
				source, sBlk->s_major, sBlk->s_minor, SQUASHFS_MAJOR, SQUASHFS_MINOR);
		goto failed_mount;
	}

#if __BYTE_ORDER == __BIG_ENDIAN
	*be = !swap;
#else
	*be = swap;
#endif

	printf("Found a valid SQUASHFS superblock on %s.\n", source);
	printf("\tInodes are %scompressed\n", SQUASHFS_UNCOMPRESSED_INODES(sBlk->flags) ? "un" : "");
	printf("\tData is %scompressed\n", SQUASHFS_UNCOMPRESSED_DATA(sBlk->flags) ? "un" : "");
	printf("\tCheck data is %s present in the filesystem\n", SQUASHFS_CHECK_DATA(sBlk->flags) ? "" : "not");
	printf("\tFilesystem size %d bytes\n", sBlk->bytes_used);
	printf("\tBlock size %d\n", sBlk->block_size);
	printf("\tNumber of inodes %d\n", sBlk->inodes);
	printf("\tNumber of uids %d\n", sBlk->no_uids);
	printf("\tNumber of gids %d\n", sBlk->no_guids);
	TRACE("sBlk->inode_table_start %x\n", sBlk->inode_table_start);
	TRACE("sBlk->directory_table_start %x\n", sBlk->directory_table_start);
	TRACE("sBlk->uid_start %x\n", sBlk->uid_start);
	printf("\n");

	return TRUE;

failed_mount:
	return FALSE;
}


unsigned char *squashfs_readdir(int fd, int root_entries, int start, int offset, int size, squashfs_super_block *sBlk,
		void (push_directory_entry)(char *, squashfs_inode, int))
{
	squashfs_dir_header dirh;
	char buffer[sizeof(squashfs_dir_entry) + SQUASHFS_NAME_LEN + 1];
	squashfs_dir_entry *dire = (squashfs_dir_entry *) buffer;
	unsigned char *directory_table = NULL;
	int bytes = 0, dir_count;

	size += offset;
	if((directory_table = malloc((size + SQUASHFS_METADATA_SIZE * 2 - 1) & ~(SQUASHFS_METADATA_SIZE - 1))) == NULL)
		return NULL;
	while(bytes < size) {
		TRACE("squashfs_readdir: reading block 0x%x, bytes read so far %d\n", start, bytes);
		if((bytes += read_block(fd, &start, directory_table + bytes, sBlk)) == 0) {
			free(directory_table);
			return NULL;
		}
	}

	if(!root_entries)
		goto all_done;

	bytes = offset;
 	while(bytes < size) {			
		if(swap) {
			squashfs_dir_header sdirh;
			memcpy((void *)&sdirh, directory_table + bytes, sizeof(sdirh));
			SQUASHFS_SWAP_DIR_HEADER(&dirh, &sdirh);
		} else
			memcpy((void *)&dirh, directory_table + bytes, sizeof(dirh));

		dir_count = dirh.count + 1;
		TRACE("squashfs_readdir: Read directory header @ byte position 0x%x, 0x%x directory entries\n", bytes, dir_count);
		bytes += sizeof(dirh);

		while(dir_count--) {
			if(swap) {
				squashfs_dir_entry sdire;
				memcpy((void *)&sdire, directory_table + bytes, sizeof(sdire));
				SQUASHFS_SWAP_DIR_ENTRY(dire, &sdire);
			} else
				memcpy((void *)dire, directory_table + bytes, sizeof(dire));
			bytes += sizeof(*dire);

			memcpy((void *)dire->name, directory_table + bytes, dire->size + 1);
			dire->name[dire->size + 1] = '\0';
			TRACE("squashfs_readdir: pushing directory entry %s, inode %x:%x, type 0x%x\n", dire->name, dirh.start_block, dire->offset, dire->type);
			push_directory_entry(dire->name, SQUASHFS_MKINODE(dirh.start_block, dire->offset), dire->type);
			bytes += dire->size + 1;
		}
	}

all_done:
	return directory_table;
}


int read_filesystem(char *root_name, int fd, squashfs_super_block *sBlk, char **cinode_table, int *inode_bytes,
		char **data_cache, int *cache_bytes, int *cache_size,
		char **cdirectory_table, int *directory_bytes,
		char **directory_data_cache, int *directory_cache_bytes, int *directory_cache_size,
		int *file_count, int *sym_count, int *dev_count, int *dir_count, int *fifo_count, int *sock_count,
		squashfs_uid *uids, unsigned short *uid_count, squashfs_uid *guids, unsigned short *guid_count,
		unsigned int *uncompressed_file, unsigned int *uncompressed_inode, unsigned int *uncompressed_directory,
		void (push_directory_entry)(char *, squashfs_inode, int))
{
	unsigned char *inode_table = NULL, *directory_table;
	unsigned int start = sBlk->inode_table_start, end = sBlk->directory_table_start,
		root_inode_start = start + SQUASHFS_INODE_BLK(sBlk->root_inode),
		root_inode_offset = SQUASHFS_INODE_OFFSET(sBlk->root_inode), root_directory_offset;
	squashfs_dir_inode_header inode;
	unsigned int files, root_inode_block;

	printf("Scanning existing filesystem...\n");
	if((files = scan_inode_table(fd, start, end, root_inode_start, sBlk, &inode, &inode_table, &root_inode_block,
			uncompressed_file, uncompressed_directory, file_count, sym_count, dev_count, dir_count, fifo_count, sock_count)) == 0) {
		ERROR("read_filesystem: inode table read failed\n");
		goto error;
	}

	*uncompressed_inode = root_inode_block;

	printf("Read existing filesystem, %d inodes scanned\n", files);

	if(((inode.inode_type - 1) % SQUASHFS_TYPES + 1) == SQUASHFS_DIR_TYPE) {
		if((directory_table = squashfs_readdir(fd, !((int) root_name), sBlk->directory_table_start + inode.start_block,
						inode.offset, inode.file_size, sBlk, push_directory_entry)) == NULL) {
			ERROR("read_filesystem: Could not read root directory\n");
			goto error;
		}

		if((*cinode_table = (char *) malloc(root_inode_start - start)) == NULL) {
			ERROR("read_filesystem: failed to alloc space for existing filesystem inode table\n");
			goto error;
		}

	       	read_bytes(fd, start, root_inode_start - start, *cinode_table);

		if((*cdirectory_table = (char *) malloc(inode.start_block)) == NULL) {
			ERROR("read_filesystem: failed to alloc space for existing filesystem inode table\n");
			goto error;
		}

		read_bytes(fd, sBlk->directory_table_start, inode.start_block, *cdirectory_table);

		*inode_bytes =  root_inode_start - start;
		*directory_bytes = inode.start_block;

		root_inode_offset += sizeof(inode);
		root_directory_offset = inode.offset + inode.file_size;
		(*dir_count) ++;

		if(((*data_cache = (char *) malloc(root_inode_offset)) == NULL) || 
				((*directory_data_cache = (char *) malloc(root_directory_offset)) == NULL)) {
			ERROR("read_filesystem: failed to alloc inode/directory caches\n");
			goto error;
		}

		memcpy(*data_cache, inode_table + root_inode_block, root_inode_offset);
		memcpy(*directory_data_cache, directory_table, root_directory_offset);
		*cache_size = root_inode_offset;
		*directory_cache_size = root_directory_offset;

		if(root_name) {
			push_directory_entry(root_name, sBlk->root_inode, SQUASHFS_DIR_TYPE);
			*cache_bytes = root_inode_offset;
			*directory_cache_bytes = root_directory_offset;
		} else {
			*cache_bytes = root_inode_offset - sizeof(inode);
			*directory_cache_bytes = inode.offset;
		}

		read_bytes(fd, sBlk->uid_start, sBlk->no_uids * sizeof(squashfs_uid), (char *) uids);
		read_bytes(fd, sBlk->guid_start, sBlk->no_guids * sizeof(squashfs_uid), (char *) guids);
		*uid_count = sBlk->no_uids;
		*guid_count = sBlk->no_guids;

		free(inode_table);
		free(directory_table);
		return sBlk->inode_table_start;
	}

error:
	return 0;
}
