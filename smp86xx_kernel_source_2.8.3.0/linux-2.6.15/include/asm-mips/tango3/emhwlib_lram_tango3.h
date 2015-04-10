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

/*
  Leaving 2.3KB to for some startup code and stack
  
  as long as the value of this symbol moves only up with time, backward compatibility is ok */
#define LR_STACKTOP              0x00000900

#define LR_VSYNC_STRUCT          0x00000900

/*
  shortcoming to be address with first hw releases
 */
#define LR_SHUTTLE_STACKTOP      0x00001800

#define LR_VSYNC_STRUCT_END      0x00001900

/*
  range from LR_STACKTOP to the first of the below block is 
  reserved for future use (~100 slots)
 */



/* To be approved. */
#define LR_IDMA                  0x00001968 /* 16bytes. Obsoletizes LR_HMMAD */
/* To be approved. */
#define LR_VSYNC_PERIOD          0x00001978 /* 0x20 bytes, up to 0x1998 */


#define LR_ZBOOTXENV_LOCATION    0x00001994
#define LR_BAT_D0                0x00001998
#define LR_BAT_D1                0x0000199c
#define LR_BAT_D2                0x000019a0
#define LR_CHANNEL_INDEX         0x000019a4
#define LR_HB_IPU                0x000019a8
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
