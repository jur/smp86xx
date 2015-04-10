
#include "rsa_enc_dec.h"

static unsigned long a0,a1,a2;
static unsigned long im[MAX_SIZE+2];
static unsigned long t[2*MAX_SIZE];
static unsigned long q[MAX_SIZE+1];
static unsigned long r[MAX_SIZE+1];

int lt(const unsigned long *x,unsigned long sx,const unsigned long *y,unsigned long sy)
{
	int i=sx;

	while ((sx>0)&&(x[sx-1]==0)) sx--;
	while ((sy>0)&&(y[sy-1]==0)) sy--;

	if (sx<sy) return 1;

	while (1) {
		i--;

		if (x[i]<y[i]) return 1;
		if (x[i]>y[i]) return 0;

		if (i==0) break;
	}

	return 0;
}

static void sub(unsigned long* d,const unsigned long* x,const unsigned long* y, unsigned long * b, unsigned long cnt){
	unsigned long i;
	
	for(i=0;i<cnt;i++){
		unsigned long b1=0;
		unsigned long l0=*x - *b;
		unsigned long l1;
		if (l0>*x) b1=1;
		l1=l0 - *y;
		if (l1>l0) b1=1;
		*b=b1;
		*d++=l1;
		x++;
		y++;
	}
}

static void mul(unsigned long* d,const unsigned long* x,const unsigned long* y, unsigned long cnt)
{
	
#ifdef __mips__
	__asm__ __volatile__(
".set noreorder\n"
"       move     %0,  %1\n"
"       move     %1,  %2\n"
"       move     %2,  $zero\n"
"       move    $13,  $zero\n"
"       \n"
"       beqz     %5,  2f\n"
"       sll     $14,  %5, 2\n"
"       addu    $14, $14,  %3\n"
"       mtlo     %0\n"
"       mthi     %1\n"
"\n"
"1:\n"
"       lw      $11, 0( %3)\n"
"       lw      $12, 0( %4)\n"
"       addu     %2, $13\n"
"\n"
"       maddu   $11, $12\n"
"       addu     %3, 4\n"
"       subu     %4, 4\n"
"\n"
"       mfhi    $15\n"
"       sltu    $13, $15, %1\n"
"       bne      %3, $14, 1b\n"
"       move     %1, $15\n"
"       addu     %2, $13\n"
"       mflo     %0\n"
"2:\n"
".set reorder\n"

/*
  by chance a0 is only written to.
  If it was not the case we would overflow the 10 max allowed registers 
 */

// written %0          %1          %2        %3        %4
:   "=&r" (a0), "=&r" (a1), "=&r" (a2), "=&r" (x), "=&r" (y)
// read %5
: "r" (cnt), "1" (a1), "2" (a2), "3" (x), "4" (y)
// clobber
: "t3", "t4", "t5", "t6", "t7");

#else /* !__mips__ */

	unsigned long i;
	
	a0=a1;a1=a2;a2=0;
	for(i=0;i<cnt;i++) // Sometimes cnt=0
		{
		// The following code does
		// - Multiply 2 32bit unsigned numbers (into a 64 bit result)
		// - Accumulate to a 96 bit unsigned number
		
		unsigned long u00 = (*x & 0xFFFF) * (*y & 0xFFFF);
		unsigned long u01 = (*x & 0xFFFF) * (*y >> 16   );
		unsigned long u10 = (*x >> 16   ) * (*y & 0xFFFF);
		unsigned long u11 = (*x >> 16   ) * (*y >> 16   );
		
		unsigned long c1=0;
		unsigned long c2=0;
		a0 +=u00;     ; if (a0< u00       ) c1++;
		a0 +=u01 << 16; if (a0<(u01 << 16)) c1++;
		a0 +=u10 << 16; if (a0<(u10 << 16)) c1++;
		a1 +=c1;        if (a1<c1)			c2++;
		a1 +=u01 >> 16; if (a1<(u01 >> 16)) c2++;
		a1 +=u10 >> 16; if (a1<(u10 >> 16)) c2++;
		a1 +=u11;		if (a1<u11)			c2++;
		a2 +=c2;
		
		x++; y--;
 	}

#endif /* __mips__ */

	if (d) *d=a0;
}

//***************************************************
//* Calculate q=(q*c)								*
//***************************************************
static void modmul(unsigned long *c,const unsigned long *m,unsigned long msize)	
{
	unsigned long i,b;
		//---- t=q*c ----------------
		a1=0;a2=0;
		for(i=0;i<msize;i++) 
			mul(&t[i],&q[0],&c[i],i+1);
		
		for(i=msize;i<2*msize;i++) 
			mul(&t[i],&q[i-msize+1],&c[msize-1],2*msize-i-1);
		
		//---- q=t*im ---------------
		a1=0;a2=0;
		mul(0,&t[msize-2],&im[msize+1],msize+2);
		mul(0,&t[msize-1],&im[msize+1],msize+1);

		for(i=0;i<msize+1;i++) 
			mul(&q[i],&t[i+msize],&im[msize+1],msize-i); // !! 0 iter on last
		//---- r=q*m -----------------
		a1=0;a2=0;
		for(i=0;i<msize;i++) 
			mul(&r[i],&q[0],&m[i],i+1);

		mul(&r[msize],&q[1],&m[msize-1],msize);
		//---- q=t-r -----------------
		b=0;
		sub(&q[0],&t[0],&r[0],&b,msize+1);

		//---- r=q-m -----------------
		b=0;
		sub(&r[0],&q[0],&m[0],&b,msize);
		r[msize]=q[msize]-b;
		if ((r[msize] & 0x80000000)==0)
			for(i=0;i<msize;i++)
				q[i]=r[i];
}

void rsa_enc_dec(unsigned long *c,const unsigned long *m,unsigned long msize,const unsigned long *e,unsigned long esize){

	unsigned long i,j,k,b,l;

	//---- Calculate inverse modulo	---------------------
	for(i=0;i<msize-1;i++) q[i]=0;
	q[msize-1]=2;
	q[msize]=0;

	l=0;
	for(i=0;i<(msize+2)*32;i++){		
		
		l=l<<1;
		b=0;
		sub(&r[0],&q[0],&m[0],&b,msize);
		r[msize]=q[msize]-b;
		if ((r[msize]&0x80000000)==0) {
			for(j=0;j<msize+1;j++)
				q[j]=r[j];
			l|=1;
		}
		if ((i&31)==31)
			im[msize+1-(i>>5)]=l;
	
		b=0;
		for(j=0;j<msize+1;j++) {
			k=q[j];
			q[j]=(k<<1) | b;
			b=k>>31;
		}
	}

	//----------- Calculate (c^e)%m----------------------

	for(i=0;i<msize;i++)
		q[i]=c[i];

	b=0;
	for(i=0;i<32*esize;i++){
		j=32*esize-1-i;
		k=(e[j>>5] >> (j&31)) & 1;
		if (b) {
			modmul(q,m,msize);
			if (k) modmul(c,m,msize);
		}
		b|=k;
	}

	for(i=0;i<msize;i++)
		c[i]=q[i];
}			
