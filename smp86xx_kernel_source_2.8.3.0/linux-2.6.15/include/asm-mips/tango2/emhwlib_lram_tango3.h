/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/
/**
  @file   emhwlib_lram_tango3.h
  @brief  

  Map of the localram (8KBytes)

  Traditionnally the start of localram is used to setup
  a few kilobytes bootstrap routine code+data
  (cache init, tlb init, load something bigger to DRAM, jump there).

  Fixed offsets are defined in this file as communication devices
  between hardware blocks.
  Even debug locations must be present here.

  The bootstrap routine is expected to preserve these and setup
  its stack under LR_STACKTOP.

  Keep addresses increasing in this file.

  See emhwlib_resources_shared.h how some resources bw. 0 and 0x100 are used already
  only when uCLinux is up with irq handler running

  @author Sebastien Beysserie
  @date   2007-06-26
*/

#ifndef __EMHWLIB_LRAM_TANGO3_H__
#define __EMHWLIB_LRAM_TANGO3_H__

/* Julien to clarify --- em07may31 */
#define LR_VSYNC_STRUCT          0x00000200 /* 2KB of data structures */
#define LR_VSYNC_CODE            0x00000a00 /* 2KB of code */
#define LR_VSYNC_END             0x00001200

/* as long as the value of this symbol moves only up with time, backward compatibility is ok */
#define LR_STACKTOP              0x00001800

/*
  range from LR_STACKTOP to the first of the below block is 
  reserved for future use (~100 slots)
 */
#define LR_PCI_INTERRUPT_ENABLE  0x000019ac
#define LR_HOST_INTERRUPT_STATUS 0x000019b0
#define LR_DRAM_DMA_SUSPEND      0x000019b4
#define LR_SUSPEND_ACK_MPEG0     0x000019b8
#define LR_SUSPEND_ACK_MPEG1     0x000019bc
#define LR_SUSPEND_ACK_AUDIO0    0x000019c0
#define LR_SUSPEND_ACK_AUDIO1    0x000019c4
#define LR_SUSPEND_ACK_DEMUX     0x000019c8
#define LR_SUSPEND_ACK_IH        0x000019cc
#define LR_HB_IH                 0x000019d0
#define LR_HB_HOST               0x000019d4
#define LR_HB_CPU                0x000019d8
#define LR_HB_MPEG0              0x000019dc
#define LR_HB_MPEG1              0x000019e0
#define LR_HB_AUDIO0             0x000019e4
#define LR_HB_AUDIO1             0x000019e8
#define LR_HB_DEMUX              0x000019ec
#define LR_HB_XPU                0x000019f0
#define LR_HB_VSYNC              0x000019f4
#define LR_SW_VAL_VSYNC_COUNT    0x000019f8 /* this location is used to count captured VSYNC */
#define LR_SW_VAL_PIXEL_ADDR     0x000019fc /* this location is used to store a pixel address to write the frame count */

#define LR_XENV2_RW              0x00001a00 /* up to 768 bytes */

#define LR_XENV2_RO              0x00001d00 /* up to the end, 768 bytes. This area is written by xpu, r.o. for others */

#endif // __EMHWLIB_LRAM_TANGO3_H__
