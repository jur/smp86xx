/*
 *  include/asm-s390/debug.h
 *   S/390 debug facility
 *
 *    Copyright (C) 1999, 2000 IBM Deutschland Entwicklung GmbH,
 *                             IBM Corporation
 */

#ifndef DEBUG_H
#define DEBUG_H


/* Note:
 * struct __debug_entry must be defined outside of #ifdef __KERNEL__ 
 * in order to allow a user program to analyze the 'raw'-view.
 */

struct __debug_entry{
        union {
                struct {
                        unsigned long long clock:52;
                        unsigned long long exception:1;
                        unsigned long long level:3;
                        unsigned long long cpuid:8;
                } fields;

                unsigned long long stck;
        } id;
        void* caller;
} __attribute__((packed));


#define __DEBUG_FEATURE_VERSION      1  /* version of debug feature */

#endif				/* DEBUG_H */
