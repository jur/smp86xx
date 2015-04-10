
/*****************************************
 *  Copyright © 2001-2004
 *  Sigma Designs, Inc. All Rights Reserved
 *  Proprietary and Confidential
 ******************************************/

/* 
 * FIP user level API
 */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>

#include "fiplib.h"

static const char *fipDev = "/dev/fip";
static int fno = -1;

/* Initialize fip device */
int fipInit(int block_mode, const char *devname)
{
	const char *dev = ((devname != NULL) ? devname : fipDev);
	int flags = O_RDWR | ((block_mode != 0) ? 0 : O_NONBLOCK);

	return(((fno = open(dev, flags)) < 0) ? -1 : 0);
}

/* Release FIP device */
int fipRelease(void)
{
	if (fno >= 0)
		close(fno);
	fno = -1;
	return(0);
}

/* Show symbol (defined in fip.h) */
int fipShowSymbol(int symbol, int on)
{
	unsigned long arg = (unsigned long)symbol;
	int res;

	if (fno < 0)
		return(-1);
	else if (on != 0)
		arg |= 0x80000000;
	res = ioctl(fno, FIP_IOCSHOWSYMBOL, arg);
	return(res);
}

/* Show Hour:Minute:Second */
int fipShowHMS(int hour, int minute, int second)
{
	unsigned long arg;
	int res;
	
	if (fno < 0)
		return(-1);
	arg = (hour << 16) | (minute << 8) | (second); 
	res = ioctl(fno, FIP_IOCSHOWHMS, arg);
	return(res);
}

/* Write a text (center aligned) */
int fipWriteText(const char *text)
{
	int res = 0;
	if (fno < 0)
		return(-1);
	res = write(fno, text, strlen(text) + 1);
	return(res == strlen(text));
}

/* Write a text with more control */
int fipShowText(int pos, int flags, const char *text)
{
	int res = 0;
	/* Not yet implemented */
	return(res);
}

/* Show raw form */
int fipShowRaw(int byte, int bit, int on)
{
	unsigned long arg;
	int res;
	
	if (fno < 0)
		return(-1);

	arg = (byte << 8) | (bit); 
	if (on != 0)
		arg |= 0x80000000;
	res = ioctl(fno, FIP_IOCSHOWHMS, arg);

	return(res);
}

/* Show a character */
int fipShowChar(int pos, const char ch)
{
	unsigned long arg;
	int res;
	
	if (fno < 0)
		return(-1);

	arg = (pos << 8) | (ch); 
	res = ioctl(fno, FIP_IOCDISPCHAR, arg);

	return(res);
}

/* Clear FIP display */
int fipClear(void)
{
	int res;

	if (fno < 0)
		return(-1);

	res = ioctl(fno, FIP_IOCCLEAR);
	return(res);
}

/* Get key press from FIP, 0 = no key */
unsigned long fipGetKey(void)
{
	unsigned long key;

	if (fno < 0)
		return(-1);

	if (read(fno, &key, sizeof(unsigned long)) == sizeof(unsigned long)) 
		return(key);
		
	return(0);
}

