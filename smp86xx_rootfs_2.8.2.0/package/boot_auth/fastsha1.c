#include "fastsha.h"
#include <string.h>

// to enable or disable the debug messages of this source file, put 1 or 0 below
#if 1
#define LOCALDBG ENABLE
#else
#define LOCALDBG DISABLE
#endif

void sha1_f0_19(void);
void sha1_f20_39_60_79(void);
void sha1_f40_59(void);

static const unsigned long sha1init[]={0xc3d2e1f0,0x10325476,0x98badcfe,0xefcdab89,0x67452301};
// first line is 0($t5) second line is 16($t5)
static const unsigned long F[]={(unsigned long)sha1_f0_19,(unsigned long)sha1_f20_39_60_79,(unsigned long)sha1_f40_59,(unsigned long)sha1_f20_39_60_79,
		0x5a827999,0x6ed9eba1,0x8f1bbcdc,0xca62c1d6};

static void sha1_run(struct sha1_ctx *ctx)
{
	unsigned long W[80],*w=W;
	unsigned long *src=(unsigned long *)&ctx->sha1block;

	__asm__ __volatile__(
".set noreorder\n"

"lw $16, 16(%2)\n"
"lw $17, 12(%2)\n"
"lw $18, 8(%2)\n"
"lw $19, 4(%2)\n"
"lw $20, 0(%2)\n" 

"computeW0_15:\n"
"move $9, %0\n"
"addu $15, %0, 64\n"

"1:\n"
"lw $12, 0($9)\n"
"addu $9, 4\n"
"wsbh $10, $12\n"
"rotr $10, $10, 16\n"
"sw $10, 0(%1)\n"
"bne $9, $15, 1b\n"
"addu %1, 4\n"

"computeW16_79:\n"
"addu $15, %1, 252\n"
"1:\n"
"lw $9, -12(%1)\n"
"lw $10, -32(%1)\n"
"lw $11, -56(%1)\n"
"xor $12, $9, $10\n"
"lw $9, -64(%1)\n"
"xor $12, $12, $11\n"
"xor $12, $12, $9\n"
"rotr $12, 31\n"
"sw $12, 0(%1)\n"
"bne %1, $15, 1b\n"
"addu %1, 4\n"

"subu %1, 324\n"

"eightyruns:\n"
"move $12, %3\n"
"addu $15, $12, 12\n"

// external loop (4 times)
"1:\n"
"lw $10, 0($12)\n"
"li $9, 19\n"

// inner loop (20 times)
"2:\n"
"j $10\n"
"addu %1, 4\n"

// (s1&s2)|(~s1&s3) [ rather do: (s1&(s2^s3))^s3 ]
"sha1_f0_19:\n"
"xor $8, $18, $19\n"
"and $8, $8, $17\n"
"b 3f\n"
"xor $8, $8, $19\n"

// (s1&s2)|(s1&s3)|(s2&s3) [ rather do: (s1|s2)&s3)|(s1&s2) ]
"sha1_f40_59:\n"
"or $8, $17, $18\n"
"and $8, $8, $19\n"
"and $11, $17, $18\n"
"b 3f\n"
"or $8, $8, $11\n"

// s1^s2^s3
"sha1_f20_39_60_79:\n"
"xor $8, $17, $18\n"
"xor $8, $8, $19\n"

"3:\n"
// add a<<<5
"rotr $11, $16, 27\n"
"addu $8, $11\n"
// add Wt
"lw $11, 0(%1)\n"
"addu $8, $11\n"
// add Kt
"lw $11, 16($12)\n"
"addu $8, $11\n"
// add e
"addu $8, $20\n"

// t0 holds TEMP. Rotate everybody:
"move $20, $19\n"
"move $19, $18\n"
"rotr $18, $17, 2\n"
"move $17, $16\n"
"move $16, $8\n"

"reviewpass:\n"
"bnez $9, 2b\n"
"subu $9, 1\n"
"bne $12, $15, 1b\n"
"addu $12, 4\n"

"lw $8, 16(%2)\n"
"lw $9, 12(%2)\n"
"lw $10, 8(%2)\n"
"lw $11, 4(%2)\n"
"lw $12, 0(%2)\n" 
"addu $16, $8\n"
"addu $17, $9\n"
"addu $18, $10\n"
"addu $19, $11\n"
"addu $20, $12\n"
"sw $16, 16(%2)\n"
"sw $17, 12(%2)\n"
"sw $18, 8(%2)\n"
"sw $19, 4(%2)\n"
"sw $20, 0(%2)\n"

".set reorder\n"
: "=&r" (src), "=&r" (w)
: "r" (&ctx->digest), "r" (F), "0" (src), "1" (w)
: "t0", "t1", "t2", "t3", "t4", "t7", "s0", "s1", "s2", "s3", "s4", "memory");
}

void sha1_init(struct sha1_ctx *ctx)
{
	memcpy(ctx->digest,(unsigned long *)sha1init,5 * 4);
	ctx->pos=0;
	ctx->size=0;
}

void sha1_input(struct sha1_ctx *ctx, const unsigned char *src, unsigned long size)
{
	unsigned long pos=ctx->pos;
	unsigned char *dst=pos+(unsigned char *)ctx->sha1block;
	ctx->size+=size;
	while (size>0) {
#if 0
		*dst=*src;
		dst++;
		pos++;
		src++;
		size--;
		
#else
		// proceed four by four when possible
		if ((size>=4)&&(pos<=BLOCK_SIZE-4)&&((unsigned long)dst%4==0)) {
			__asm__ __volatile__(
					     "ulw %0, 0(%1)\n"
					     "addu %1, 4\n"
					     "subu %2, 4\n"
					     : "=&r" (((unsigned long *)dst)[0]), "=&r" (src), "=&r" (size)
					     : "1" (src), "2" (size)); dst+=4; pos+=4;
		}
		else {
			__asm__ __volatile__(
					     "lbu %0, 0(%1)\n"
					     "addu %1, 1\n"
					     "subu %2, 1\n"
					     : "=&r" (dst[0]), "=&r" (src), "=&r" (size)
					     : "1" (src), "2" (size));dst++; pos++;
		}
#endif
		
		if(pos==BLOCK_SIZE) {
			sha1_run(ctx);
			pos=0;
			dst=(unsigned char *)ctx->sha1block;
		}
	}
	ctx->pos=pos;
}

void sha1_done(struct sha1_ctx *ctx)
{
	unsigned long pos=ctx->pos;
	unsigned char *sha1block=(unsigned char *)ctx->sha1block;
	
	// padding ...
	sha1block[pos]=0x80;
	pos++;
	
	while(pos!=BLOCK_SIZE-8) {
		if(pos==BLOCK_SIZE) {
			sha1_run(ctx);
			pos=0;
		}
		sha1block[pos++]=0;
	}
	
	ctx->sha1block[14]=0;
	__asm__ __volatile__(
			     ".set noreorder\n"
			     "sll %0, %1, 3\n"
			     "wsbh %0, %0\n"
			     "rotr %0, %0, 16\n"
			     ".set reorder\n"
			     : "=&r" (ctx->sha1block[15])
			     : "r" (ctx->size));
	sha1_run(ctx);
}
