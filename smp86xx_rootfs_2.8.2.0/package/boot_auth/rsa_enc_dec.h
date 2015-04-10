#ifndef __RSA_ENC_DEC_H__
#define __RSA_ENC_DEC_H__

/************************************************************
	RSA encryption decryption routine - calculate (c^e)%m -> c)

	c		= ciphertext/plaintext
	m		= modulo
	msize	= modulo size (in 32bit word units)
	e		= exponent
	esize	= exponent size (in 32bit word units)

	msize must be <= MAX_SIZE (i.e. 2048bit RSA)
	The modulo must be in the range 2^(32*(msize-1)) to 2^(32*msize))
	-->This means that m[msize-1] != 0
	The exponent must be less than 2^(32*esize)
	The exponent and ciphertext must be less than the modulo (obviously)

        Notes:

        - allocation: c must be allocated to the same size as m since
        the algorithm will poke there. So in case your cleartext is in
        a smaller buffer, duplicate it to a m-sized buffer first.

        - the most common attack against rsa is to have the owner of
        the private key use it to decrypt a message looking like
        random that actually allows to reconstruct the decryption of
        another message (refer to handbook of applied cryptography
        (Menezes-Oorschot-Vanstone) paragraph 8.2.2(v) or applied
        cryptography (Schneier) page 471).

        As a consequence RSA decryption results should never be
        disclosed; in case of a signature operation, never sign the
        message directly but a _hash_ of the message.

        - first reference, paragraph 8.2.2(viii) states that at least
        9 messages encrypt to themselves, among which three are
        trivial: m=0,1 and -1. The function below is not meant to
        check this (it is extremely unlikely to happen).

*************************************************************/

#define TRSA_VERSION 12
#define MAX_SIZE 64
typedef unsigned long romkey[64];

int lt(const unsigned long *x,unsigned long sx,const unsigned long *y,unsigned long sy);
void rsa_enc_dec(unsigned long *c,const unsigned long *m,unsigned long msize,const unsigned long *e,unsigned long esize);

int checkparm_rsa_enc_dec(unsigned long *c,const unsigned long *m,unsigned long msize,const unsigned long *e,unsigned long esize);

#endif // __RSA_ENC_DEC_H__
