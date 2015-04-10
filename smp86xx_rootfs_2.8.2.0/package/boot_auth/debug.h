/*****************************************
 Copyright © 2006
 Sigma Designs, Inc. All Rights Reserved
 Proprietary and Confidential
 *****************************************/

/**
  @file   debug.h
  @ingroup application
  @brief  some debug macros

  @author David Bryson
  @date   02-23-2006
*/


#ifndef __DEBUG_H__
#define __DEBUG_H__

#ifdef DEBUG

#define DEBUG_STRING "%s line %d: "

#ifdef USE_SYSLOG
#include <syslog.h>

#define DEBUG_LOG(pri,fmt, ...)	\
		syslog(pri,DEBUG_STRING fmt, __FILE__, __LINE__, ##__VA_ARGS__ );\
		fprintf(stderr,DEBUG_STRING fmt, __FILE__, __LINE__, ##__VA_ARGS__ );
#else

#define DEBUG_LOG(pri,fmt, ...) \
		fprintf(stderr,DEBUG_STRING fmt, __FILE__, __LINE__, ##__VA_ARGS__ );

#endif /* USE_SYSLOG */
#else
#define DEBUG_LOG(pri,fmt, ...)\
		printf("");

#endif /* USE_DEBUG */

#endif
