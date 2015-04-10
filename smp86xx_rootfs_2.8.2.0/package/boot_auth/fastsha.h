/*****************************************
 Copyright © 2006-2007
 Sigma Designs, Inc. All Rights Reserved
 Proprietary and Confidential
 *****************************************/
/**
  @file   fastsha.h
  @brief  

  SHA-1: minor rework of the ROM code for unaligned data support.
  SHA-256: wrapping of reference implementation with proper flags.

  @author Emmanuel Michon
  @date   2006 dec 11th
*/

#ifndef __FASTSHA_H__
#define __FASTSHA_H__

#define BLOCK_SIZE 64

struct sha1_ctx {
	unsigned long sha1block[BLOCK_SIZE/4];
	unsigned long digest[5];
	unsigned long pos;
	unsigned long size;
};
void sha1_init(struct sha1_ctx *ctx);
void sha1_input(struct sha1_ctx *ctx, const unsigned char *src, unsigned long size);
void sha1_done(struct sha1_ctx *ctx);

struct sha256_ctx {
	unsigned long sha256block[BLOCK_SIZE/4];
	unsigned long digest[8];
	unsigned long pos;
	unsigned long size;
};
void sha256_init(struct sha256_ctx *ctx);
void sha256_input(struct sha256_ctx *ctx, const unsigned char *src, unsigned long size);
void sha256_done(struct sha256_ctx *ctx);

#endif /* __FASTSHA_H__ */
