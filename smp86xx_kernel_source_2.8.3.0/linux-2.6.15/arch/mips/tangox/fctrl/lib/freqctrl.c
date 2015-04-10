/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

/*
 *
 */

#include "platform.h"
#include "freqctrl.h"

#include "fc/fcconfig.h"
#include "fc/fcbin.h"

#ifndef LOCALMEM_BASE
#error Anchor of handler need to be set
#endif

static unsigned long localmem[8096/4]; /* Up to 8KB */

struct engine_status
{
	unsigned long hb_addr;
	unsigned long suspend_addr;
	unsigned long hb;
	int active;
	int g2l_status;
	unsigned long g2lc_addr;
	const char *desc;
};

static struct engine_status engines[] = {
	{ REG_BASE_cpu_block + LR_HB_MPEG0, REG_BASE_cpu_block + LR_SUSPEND_ACK_MPEG0, 0, 0, 0, REG_BASE_mpeg_engine_0 + G2L_RESET_CONTROL, "MPEG0" },
	{ REG_BASE_cpu_block + LR_HB_MPEG1, REG_BASE_cpu_block + LR_SUSPEND_ACK_MPEG1, 0, 0, 0, REG_BASE_mpeg_engine_1 + G2L_RESET_CONTROL, "MPEG1" },
	{ REG_BASE_cpu_block + LR_HB_AUDIO0, REG_BASE_cpu_block + LR_SUSPEND_ACK_AUDIO0, 0, 0, 0, REG_BASE_audio_engine_0 + G2L_RESET_CONTROL, "AUDIO0" },
	{ REG_BASE_cpu_block + LR_HB_AUDIO1, REG_BASE_cpu_block + LR_SUSPEND_ACK_AUDIO1, 0, 0, 0, REG_BASE_audio_engine_1 + G2L_RESET_CONTROL, "AUDIO1" },
#ifdef CONFIG_TANGO2
	{ REG_BASE_cpu_block + LR_HB_DEMUX, REG_BASE_cpu_block + LR_SUSPEND_ACK_DEMUX, 0, 0, 0, REG_BASE_demux_engine + G2L_RESET_CONTROL, "DEMUX" },
#else /* for TANGO3 */
	{ REG_BASE_cpu_block + LR_HB_DEMUX, REG_BASE_cpu_block + LR_SUSPEND_ACK_DEMUX, 0, 0, 0, REG_BASE_demux_engine_0 + G2L_RESET_CONTROL, "DEMUX0" },
#if 0
#warning TANGO3 TODO
	/* Definitions? */
	{ REG_BASE_cpu_block + LR_HB_DEMUX1, REG_BASE_cpu_block + LR_SUSPEND_ACK_DEMUX1, 0, 0, 0, REG_BASE_demux_engine_1 + G2L_RESET_CONTROL, "DEMUX1" },
#endif
#endif
	{ REG_BASE_cpu_block + LR_HB_IH, REG_BASE_cpu_block + LR_SUSPEND_ACK_IH, 0, 0, 0, 0, "IH" },
};

#define SUSPEND_FLAG     1
#define RESUME_FLAG      0
#define MAX_DELTA        2700000 /* 100ms */
#define HB_MONITOR_TIME  100000  /* 100ms */

static unsigned long xtal_delta(unsigned long start, unsigned long end)
{
	return (end > start) ? (end - start) : (0xffffffff - start + end + 1);
}

/* Suspend all engines */
static void suspend_engines(void)
{
	const int num_engines = sizeof(engines) / sizeof(struct engine_status);
	unsigned long start, end, delta;
	int i;

	/* First determine which engine is running */
	for (i = 0; i < num_engines; i++) {
		engines[i].hb = tangox_gbus_readl(engines[i].hb_addr);
		if (engines[i].g2lc_addr != 0) /* update block status */
			engines[i].g2l_status = tangox_gbus_readl(engines[i].g2lc_addr);
	}

	tangox_udelay(HB_MONITOR_TIME); /* Wait for heartbeat update */

	/* Mark the active flag associate to each engine */
	for (i = 0; i < num_engines; i++) 
		engines[i].active = ((engines[i].hb != tangox_gbus_readl(engines[i].hb_addr)) ? 1 : 0);

	/* Start suspend */
	tangox_gbus_writel(REG_BASE_cpu_block + LR_DRAM_DMA_SUSPEND, SUSPEND_FLAG);

	/* Check all engines to be suspended */
	for (i = 0; i < num_engines; i++) {
		if (engines[i].active) {
			DBG_PRINT("Waiting for %s to be suspended.\n", engines[i].desc);
			for (delta = 0, start = tangox_gbus_readl(REG_BASE_system_block + SYS_xtal_in_cnt); 
					tangox_gbus_readl(engines[i].suspend_addr) != SUSPEND_FLAG; ) {
				end = tangox_gbus_readl(REG_BASE_system_block + SYS_xtal_in_cnt); 
				delta = xtal_delta(start, end);
				if (delta > MAX_DELTA)
					break;
			}
			if (delta <= MAX_DELTA)
				DBG_PRINT("%s is suspended.\n", engines[i].desc);
			else
				DBG_PRINT("Wait for %s timeout.\n", engines[i].desc);
		} else {
			DBG_PRINT("%s is not active.\n", engines[i].desc);
		}
		if ((engines[i].g2lc_addr != 0) && (engines[i].g2l_status == 0)) /* currently running */
			tangox_gbus_writel(engines[i].g2lc_addr, 1); /* pause the block */
	}
}

/* Resume all engines */
static void resume_engines(void)
{
	const int num_engines = sizeof(engines) / sizeof(struct engine_status);
	int i;
	unsigned long start, end, delta;

	for (i = num_engines - 1; i >= 0; i--) {
		if ((engines[i].g2lc_addr != 0) && (engines[i].g2l_status == 0)) /* used to be running */
			tangox_gbus_writel(engines[i].g2lc_addr, 0); /* undo pause */
	}

	/* Start resume */
	tangox_gbus_writel(REG_BASE_cpu_block + LR_DRAM_DMA_SUSPEND, RESUME_FLAG);

	/* Check all engines to be suspended, in reversed order */
	for (i = num_engines - 1; i >= 0; i--) {
		if (engines[i].active) {
			DBG_PRINT("Waiting for %s to be resumed.\n", engines[i].desc);
			for (delta = 0, start = tangox_gbus_readl(REG_BASE_system_block + SYS_xtal_in_cnt); 
					tangox_gbus_readl(engines[i].suspend_addr) == SUSPEND_FLAG; ) {
				end = tangox_gbus_readl(REG_BASE_system_block + SYS_xtal_in_cnt); 
				delta = xtal_delta(start, end);
				if (delta > MAX_DELTA)
					break;
			}
			if (delta <= MAX_DELTA)
				DBG_PRINT("%s is resumed.\n", engines[i].desc);
			else
				DBG_PRINT("Wait for %s timeout.\n", engines[i].desc);
		}
	}
}

/* Set to a given frequency profile */
#ifdef WITH_INPUT_POLLING
int set_freq_profile(const struct freq_profile *pptr, unsigned long *elapse, unsigned long *ret_key, unsigned long *ir_keys, unsigned long *fip_keys)
#else
int set_freq_profile(const struct freq_profile *pptr)
#endif
{
	unsigned long v_cr, v_ier, v_sr;
	unsigned long ehci_cmd, ohci_ctl;
	unsigned long flags, ret, old_pll2, old_pll1, old_pll0;
	int standby = 0;
	struct freq_handler_header *fs_hdr = (struct freq_handler_header *)(LOCALMEM_BASE+0x20);

#ifdef WITH_INPUT_POLLING
	if (elapse)
		*elapse = 0;
	if (ret_key)
		*ret_key = 0;
#endif

	if (pptr->pll3 == 0)
		return -EINVAL;
	standby = pptr->standby;

	DBG_PRINT("TangoX Frequency Control\n");
	DBG_PRINT("Installing handler to 0x%08x, size 0x%x.\n", LOCALMEM_BASE, sizeof(binout));

	/* Save localmem content first */
	memcpy(localmem, (void *)(LOCALMEM_BASE), sizeof(binout));
	memcpy((void *)(LOCALMEM_BASE), &binout[0], sizeof(binout));

	suspend_engines();

	DBG_PRINT("Stopping PCI bus artitration...\n");
	tangox_gbus_writel(REG_BASE_host_interface + PCI_host_reg4, 1);

	DBG_PRINT("Stoping TangoX ethernet...\n");
	v_cr = tangox_gbus_readl(ENET_DMA_CR);
	v_ier = tangox_gbus_readl(ENET_DMA_IER);
	v_sr = tangox_gbus_readl(ENET_DMA_SR);
	tangox_gbus_writel(ENET_DMA_CR, 0);
        tangox_gbus_writel(ENET_DMA_IER, 0);
        tangox_gbus_writel(ENET_DMA_SR, tangox_gbus_readl(ENET_DMA_SR));

	DBG_PRINT("Stopping TangoX EHCI\n");
        ehci_cmd = tangox_gbus_readl(EHCI_CMD);
        ehci_cmd &= ~CMD_RUN;
        tangox_gbus_writel(EHCI_CMD, ehci_cmd);

	DBG_PRINT("Stopping TangoX OHCI\n");
	ohci_ctl = tangox_gbus_readl(OHCI_CONTROL);
	tangox_gbus_writel(OHCI_CONTROL, ohci_ctl | HCCONTROL_HCFS);
	tangox_gbus_writel(OHCI_INT_DISABLE, OHCI_INTR_MIE);
	tangox_usdelay(16*125); /*need to wait 16*125us*/

	DBG_PRINT("Original config:\n");
	DBG_PRINT(" PLL3: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen3_pll)); 
	DBG_PRINT(" PLL2: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen2_pll)); 
	DBG_PRINT(" PLL1: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen1_pll)); 
	DBG_PRINT(" PLL0: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen0_pll)); 
	DBG_PRINT(" MUX:  0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_sysclk_mux)); 
	DBG_PRINT(" D0_CFG: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_0+DRAM_dunit_cfg));
	DBG_PRINT(" D0_DELAY: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_0+DRAM_dunit_delay0_ctrl));
	DBG_PRINT(" D1_CFG: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_1+DRAM_dunit_cfg));
	DBG_PRINT(" D1_DELAY: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_1+DRAM_dunit_delay0_ctrl));

	old_pll2 = tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen2_pll);
	if (pptr->pll2) {
		/* Change PLL2 if needed */
		DBG_PRINT("Change PLL2 from 0x%08lx to 0x%08lx\n", old_pll2, pptr->pll2);
		tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen2_pll, pptr->pll2);
	}
	old_pll1 = tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen1_pll);
	if (pptr->pll1) {
		/* Change PLL1 if needed */
		DBG_PRINT("Change PLL1 from 0x%08lx to 0x%08lx\n", old_pll1, pptr->pll1);
		tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen1_pll, pptr->pll1);
	}
	old_pll0 = tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen0_pll);
	if (pptr->pll0) {
		/* Change PLL0 if needed */
		DBG_PRINT("Change PLL0 from 0x%08lx to 0x%08lx\n", old_pll0, pptr->pll0);
		tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen0_pll, pptr->pll0);
	}
	tangox_usdelay(10);

	DBG_PRINT("Saving to data 0x%08x\n", (unsigned int)fs_hdr->param_area);
	memcpy((void *)fs_hdr->param_area, pptr, sizeof(*pptr));

#ifdef WITH_INPUT_POLLING
	DBG_PRINT("IR table at 0x%08lx, FIP table at 0x%08lx\n", (unsigned long)fs_hdr->ir_table, (unsigned long)fs_hdr->fip_table);

	/* Clear the input table first */
	memset(fs_hdr->ir_table, 0, INPUT_TABLE_SIZE);
	memset(fs_hdr->fip_table, 0, INPUT_TABLE_SIZE);

	if (tangox_ir_enabled() && (ir_keys != NULL)) {
		memcpy(fs_hdr->ir_table, ir_keys, INPUT_TABLE_SIZE);
		DBG_PRINT("Setting up IR table\n");
	}
	if (tangox_fip_enabled() && (fip_keys != NULL)) {
		memcpy(fs_hdr->fip_table, fip_keys, INPUT_TABLE_SIZE);
		DBG_PRINT("Setting up FIP table\n");
	}

	/* From XENV or other means, determine which input is available */
	fs_hdr->input_ctrl = 0;
	fs_hdr->input_ctrl |= (tangox_ir_enabled() ? 1 : 0);
	fs_hdr->input_ctrl |= (tangox_fip_enabled() ? 2 : 0);
	fs_hdr->input_ctrl |= (tangox_ethernet_enabled() ? 4 : 0);

	DBG_PRINT("Polling ctrl: %ld\n", fs_hdr->input_ctrl);
#endif

	DBG_PRINT("Disable interrupts, doing frequency adjustment\n");

#ifdef WITH_INPUT_POLLING
	if (standby)
		DBG_PRINT("Ready to enter stand-by mode at 0x%08x to %s\n", (unsigned int)fs_hdr->func_ptr, pptr->desc);
	else
		DBG_PRINT("Calling handler at 0x%08x\n", (unsigned int)fs_hdr->func_ptr);
#else
	DBG_PRINT("Calling handler at 0x%08x\n", (unsigned int)fs_hdr->func_ptr);
#endif

	tangox_save_flags(flags);
	tangox_flush_cache_all();

	ret = (*(fs_hdr->func_ptr))(standby);

#ifdef WITH_INPUT_POLLING
	if (elapse)
		*elapse = fs_hdr->elapse;
	if (ret_key)
		*ret_key = fs_hdr->ret_key;
#endif

	/* restore localmem content */
	memcpy((void *)(LOCALMEM_BASE), localmem, sizeof(binout));
	tangox_restore_flags(flags);

#ifdef WITH_INPUT_POLLING
	DBG_PRINT("\nReturning from standly mode.\n");
	if (standby) {
		if ((pptr->pll2) && (old_pll2 != tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen2_pll))) {
			DBG_PRINT("Restoring PLL2: 0x%08lx\n", old_pll2);
			tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen2_pll, old_pll2);
		}
		if ((pptr->pll1) && (old_pll1 != tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen1_pll))) {
			DBG_PRINT("Restoring PLL1: 0x%08lx\n", old_pll1);
			tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen1_pll, old_pll1);
		}
		if ((pptr->pll0) && (old_pll0 != tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen0_pll))) {
			DBG_PRINT("Restoring PLL0: 0x%08lx\n", old_pll0);
			tangox_gbus_writel(REG_BASE_system_block+SYS_clkgen0_pll, old_pll0);
		}
		tangox_usdelay(10);
	}
#else
	DBG_PRINT("\nReturning from handler.\n");
#endif

	DBG_PRINT("Re-enable TangoX OHCI\n");
	tangox_gbus_writel(OHCI_CONTROL, ohci_ctl);
	tangox_gbus_writel(OHCI_INT_ENABLE, OHCI_INTR_MIE);

	DBG_PRINT("Re-enable TangoX EHCI\n");
        ehci_cmd |= CMD_RUN;
        tangox_gbus_writel(EHCI_CMD, ehci_cmd);

	DBG_PRINT("Re-enable TangoX ethernet\n");
	tangox_gbus_writel(ENET_DMA_CR, v_cr);
        tangox_gbus_writel(ENET_DMA_IER, v_ier);
        tangox_gbus_writel(ENET_DMA_SR, v_sr);

	DBG_PRINT("Re-starting PCI bus artitration...\n");
	tangox_gbus_writel(REG_BASE_host_interface + PCI_host_reg4, 0);

#ifdef WITH_INPUT_POLLING
	/* Re-calibrate system timing */
	tangox_reset_timer(tangox_get_cpuclock(), tangox_get_sysclock());
#endif

	DBG_PRINT("NEW config:\n");
	DBG_PRINT(" PLL3: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen3_pll)); 
	DBG_PRINT(" PLL2: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen2_pll)); 
	DBG_PRINT(" PLL1: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen1_pll)); 
	DBG_PRINT(" PLL0: 0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_clkgen0_pll)); 
	DBG_PRINT(" MUX:  0x%08lx\n", tangox_gbus_readl(REG_BASE_system_block+SYS_sysclk_mux)); 
	DBG_PRINT(" D0_CFG: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_0+DRAM_dunit_cfg));
	DBG_PRINT(" D0_DELAY: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_0+DRAM_dunit_delay0_ctrl));
	DBG_PRINT(" D1_CFG: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_1+DRAM_dunit_cfg));
	DBG_PRINT(" D1_DELAY: 0x%08lx\n", tangox_gbus_readl(REG_BASE_dram_controller_1+DRAM_dunit_delay0_ctrl));

	DBG_PRINT("NEW CPU frequency: %ldHz\n", tangox_get_cpuclock());
	DBG_PRINT("NEW SYS frequency: %ldHz\n", tangox_get_sysclock());
	DBG_PRINT("NEW DSP frequency: %ldHz\n", tangox_get_dspclock());

	/* Resume the engines */
	resume_engines();

	return 0;
}

/* Calculate the sys_clkgen_pll value for certain frequency */
/* freq = desired frequency, ratio = 1 (for PLL), 2-4 (for CPU/SYS/DSP) */
unsigned long frequency_to_pll(unsigned int freq, unsigned int ratio) 
{
	unsigned int m, n;
	unsigned long pll = 0;
  
	if ((freq < 255) && (ratio != 4)) {
		// Frequency given in MHz. Use Intermediate Freq of 0.5MHz
		// !! Impossible if ratio=4.
		m = 54 / ratio; 
		n = freq * 2; 
		pll = 0x1000000 + ((m - 2) << 16) + (n - 2);
	} else {
		if (freq < 255) 
			freq *= 1000000;
		// Frequency in Hz. Find closest match (Try for all M's)
		unsigned int best_n, best_m, best_f, tmp;
		best_f = 1000000000;
		best_m = 0;
		best_n = 0;
		for (m = 65; m > 2; m--) {
			n =((freq / 1000) * m * ratio + 13500) / 27000;
			if ((n <= 513) && (n >= 2)) {
				tmp = (TANGOX_BASE_FREQUENCY / (m*ratio)) * n;
				if (tmp < freq) 
					tmp = 2 * freq - tmp;
				if (tmp <= best_f) {
					best_f = tmp; 
					best_m = m; 
					best_n = n;
				}
			}
		}
		if (best_m != 0)
			pll = 0x1000000 + ((best_m - 2) << 16) + (best_n - 2);
	}
	return(pll);
}

