
/*****************************************
 *  Copyright © 2001-2004
 *  Sigma Designs, Inc. All Rights Reserved
 *  Proprietary and Confidential
 ******************************************/

/* 
 * FIP user level API
 */

#ifndef __FIP_USER_H__
#define __FIP_USER_H__

#include <linux/autoconf.h>
#include <asm/tango2/fip.h>

/* Initialize fip device */
int fipInit(int block_mode, const char *devname);

/* Release FIP device */
int fipRelease(void);

/* Show symbol (defined in fip.h) */
int fipShowSymbol(int symbol, int on);

/* Show Hour:Minute:Second */
int fipShowHMS(int hour, int minute, int second);

/* Write a text (center aligned) */
int fipWriteText(const char *text);

/* Write a text with more control */
int fipShowText(int pos, int flags, const char *text);

/* Show raw form */
int fipShowRaw(int byte, int bit, int on);

/* Show a character */
int fipShowChar(int pos, const char ch);

/* Clear FIP display */
int fipClear(void);

/* Get key press from FIP, 0 = no key */
unsigned long fipGetKey(void);

#endif

