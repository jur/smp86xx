
/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#include <linux/config.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/mm.h>
#include <linux/crypto.h>
#include <linux/cryptohash.h>
#include <asm/scatterlist.h>
#include <asm/byteorder.h>

#include "sha.h"
	
#ifdef CONFIG_CRYPTO_SHA1
void __init sha1_full(u8 *digest, const u8 *src, u32 len)
{
	struct sha1_ctx ctx;
	int i;
	u8 tmp;

	sha1_init(&ctx);
	sha1_update(&ctx, src, len);
	sha1_final(&ctx, digest);

	for (i = 0; i < SHA1_DIGEST_SIZE / 2; i++) {
		tmp = digest[i];
		digest[i] = digest[SHA1_DIGEST_SIZE - i - 1];
		digest[SHA1_DIGEST_SIZE - i - 1] = tmp;
	}
}
#endif

#ifdef CONFIG_CRYPTO_SHA256
void __init sha256_full(u8 *digest, const u8 *src, u32 len)
{
	struct sha256_ctx ctx;
	int i;
	u8 tmp;

	sha256_init(&ctx);
	sha256_update(&ctx, src, len);
	sha256_final(&ctx, digest);

	for (i = 0; i < SHA256_DIGEST_SIZE / 2; i++) {
		tmp = digest[i];
		digest[i] = digest[SHA256_DIGEST_SIZE - i - 1];
		digest[SHA256_DIGEST_SIZE - i - 1] = tmp;
	}
}
#endif
