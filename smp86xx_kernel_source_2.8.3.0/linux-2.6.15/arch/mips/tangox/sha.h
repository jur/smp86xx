
/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#ifndef __SHA_H__
#define __SHA_H__

#ifdef CONFIG_CRYPTO_SHA1
#define SHA1_DIGEST_SIZE        20

struct sha1_ctx {
	u64 count;
        u32 state[5];
        u8 buffer[64];
};

void sha1_init(void *ctx);
void sha1_update(void *ctx, const u8 *data, unsigned int len);
void sha1_final(void* ctx, u8 *out);
#endif

#ifdef CONFIG_CRYPTO_SHA256
#define SHA256_DIGEST_SIZE      32

struct sha256_ctx {
	u32 count[2];
        u32 state[8];
        u8 buf[128];
};

void sha256_init(void *ctx);
void sha256_update(void *ctx, const u8 *data, unsigned int len);
void sha256_final(void* ctx, u8 *out);
#endif

#endif

