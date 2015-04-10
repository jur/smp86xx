/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

/* 
 * Assembly routine to implement the change of frequency
 */

#include <asm/asm.h>
#include <asm/regdef.h>
#include <asm/mipsregs.h>

#ifdef CONFIG_TANGO2
#include <asm/tango2/emhwlib_registers_tango2.h>
#include <asm/tango2/emhwlib_dram_tango2.h>
#include <asm/tango2/emhwlib_lram.h>
#elif defined(CONFIG_TANGO3)
#include <asm/tango3/emhwlib_registers_tango3.h>
#include <asm/tango3/emhwlib_dram_tango3.h>
#include <asm/tango2/emhwlib_lram.h>
#endif

#ifndef INPUT_TABLE_SIZE
#define INPUT_TABLE_SIZE    32
#endif

#ifdef WITH_IR
#define IR_FLAG  1
#else
#define IR_FLAG  0
#endif

#ifdef WITH_FIP
#define FIP_FLAG  2
#else
#define FIP_FLAG  0
#endif

#ifdef WITH_ETH
#define ETH_FLAG  4
#else
#define ETH_FLAG  0
#endif

#define KSEG1_ADDR 0xa0000000
#define DELAY(reg1,reg2,value) \
		li reg1,value;	\
		move reg2,zero;	\
	1: 	bne reg1,reg2,1b;	\
		addiu reg2,reg2,1;

LEAF(__frequency_set)

	.align	4
entry_point:
	.word	_start
params_start:
	.word	param_area
ir_table:
	.word	ir_keys
fip_table:
	.word	fip_keys
return_key:
	.word	0
time_elapse:
	.word	0
input_ctrl:
	.word	(IR_FLAG | FIP_FLAG | ETH_FLAG)

	.align	4
param_area:
setting_pll3:
	.word   0	/* pll3 */
setting_pll2:
	.word   0	/* pll2 */
setting_pll1:
	.word   0	/* pll1 */
setting_pll0:
	.word   0	/* pll0 */
setting_mux:
	.word   0	/* mux */
setting_d0cfg:
	.word   0	/* d0cfg */
setting_d0delay:
	.word   0	/* d0delay */
setting_d1cfg:
	.word   0	/* d1cfg */
setting_d1delay:
	.word   0	/* d1delay */
setting_standby:
	.word	0	/* standby mode */
setting_desc:
	.word	0	/* desc */

	.align	4
ir_keys:
	.fill	INPUT_TABLE_SIZE

fip_keys:
	.fill	INPUT_TABLE_SIZE

	/* all cache should be flushed (i.e. written back), interrupt should be disabled at this point */
	/* a0 = standby mode (or not) */

	.align	5
	.set noreorder
	.set mips32r2

old_pll3:
	.word	0
old_pll1:
	.word	0
old_mux:
	.word	0

	.align	4
_start:
set_dram_auto_refesh:
	/* set DRAM0/1 to auto-refresh mode */
	li	t6,KSEG1_ADDR+REG_BASE_dram_controller_0+G2L_RESET_CONTROL
	li	t4,KSEG1_ADDR+REG_BASE_dram_controller_0+DRAM_dunit_delay0_ctrl
	li	t7,KSEG1_ADDR+REG_BASE_dram_controller_1+G2L_RESET_CONTROL
	li	t5,KSEG1_ADDR+REG_BASE_dram_controller_1+DRAM_dunit_delay0_ctrl
	addiu	t3,zero,1
	sw	t3,0(t6)
	sw	t3,0(t7)
	sync

	move	t3,zero
	lui	t3,0x8000
1:
	lw	t0,0(t4)  /* need the MSB of delay0_ctrl to be set */
	lw	t1,0(t5)
	and	t0,t0,t3
	and	t0,t0,t1
	beq	t0,zero,1b
	nop

set_new_freq:
	/* set CPU/SYS/DSP to new divider value */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,setting_mux
	la	t3,old_mux
	lw	t2,0(t0)
	sw	t2,0(t3)
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,255)

	/* Detach PLL from MUX, assumed it's been attached before */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,setting_mux
	lw	t2,0(t1)
	addiu	t2,t2,-1
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,255)
	
	/* set PLL3 to new frequency */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_clkgen3_pll
	la	t1,setting_pll3
	la	t3,old_pll3
	lw	t2,0(t0)
	sw	t2,0(t3)
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,0x28000)

	/* Re-attach PLL to MUX */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,setting_mux
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,255)

prepare_for_stand_by:
	/* We enter stand-by mode in local RAM */
	/* Setup the stack in local RAM */
	move	t1,sp
	li	t0,KSEG1_ADDR+REG_BASE_cpu_block
	addiu	sp,t0,LR_STACKTOP-16 
	sw	t1,0(sp)
	sw	ra,4(sp)

	/* Clear BSS */
	la	t0,_edata
	la	t1,_end
2:	beq	t0,t1,3f
	nop

	sb	zero,0(t0)
	j	2b
	addiu	t0,t0,1

3:
	/* ready to call entry point */
	DELAY	(t3,t2,255)

#ifdef WITH_INPUT_POLLING

	/* Check do we need to enter standby mode? */
	beq	a0,zero,not_standby
	nop

	/* Yes, we do */
poll_input:
	move	v0,zero
	la	a0,ir_keys
	la	a1,fip_keys
	la	a2,input_ctrl
	la	a3,time_elapse
	jal	polling_input
	nop

done_poll:
	la	t0,return_key
	sw	v0,0(t0)

resume_old_freq:
	/* set CPU/SYS/DSP to old divider value */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,old_mux
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,255)

	/* Detach PLL from MUX, assumed it's been attached before */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,old_mux
	lw	t2,0(t1)
	addiu	t2,t2,-1
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,255)
	/* set PLL3 back to old frequency */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_clkgen3_pll
	la	t1,old_pll3
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	DELAY	(t3,t2,0x28000)

	/* Re-attach PLL from MUX */
	li	t0,KSEG1_ADDR+REG_BASE_system_block+SYS_sysclk_mux
	la	t1,old_mux
	lw	t2,0(t1)
	sw	t2,0(t0)
	sync

	/* Restore stack */
	li	t0,KSEG1_ADDR+REG_BASE_cpu_block
	addiu	t1,t0,LR_STACKTOP-16
	lw	sp,0(t1)
	lw	ra,4(t1)

	b	unset_dram_auto_refresh
	nop

not_standby:

#else
	la	t0,return_key
	la	t1,time_elapse
	sw	zero,0(t0)
	sw	zero,0(t1)
#endif

	move	v0,zero

	/* Restore stack */
	li	t0,KSEG1_ADDR+REG_BASE_cpu_block
	addiu	t1,t0,LR_STACKTOP-16 
	lw	sp,0(t1)
	lw	ra,4(t1)

	/* reprogram DRAM0/1 configuration */
	li	t0,KSEG1_ADDR+REG_BASE_dram_controller_0+DRAM_dunit_cfg
	li	t1,KSEG1_ADDR+REG_BASE_dram_controller_1+DRAM_dunit_cfg

	la	t2,setting_d0cfg
	lw	t3,0(t2)
	sw	t3,0(t0)
	la	t2,setting_d1cfg
	lw	t3,0(t2)
	sw	t3,0(t1)

	la	t2,setting_d0delay
	lw	t3,0(t2)
	sw	t3,0(t4)
	la	t2,setting_d1delay
	lw	t3,0(t2)
	sw	t3,0(t5)
	sync

	DELAY	(t3,t2,255)

	b	unset_dram_auto_refresh
	nop

unset_dram_auto_refresh:
	/* bring DRAM0/1 out of auto-refresh mode */
	sw	zero,0(t6)
	sw	zero,0(t7)
	sync

	DELAY	(t3,t2,4096)

done:
	jr	ra
	nop

END(__frequency_set)

