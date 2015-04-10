/*********************************************************************
 Copyright (C) 2001-2008
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#include <linux/config.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/delay.h>

#include "setup.h"

#if !defined(CONFIG_TANGO2) && !defined(CONFIG_TANGO3)
#error Undefined Sigma's chip!!!
#endif

#ifdef CONFIG_TANGO3
#warning TANGO3 TODO IRQ assignment for W2/R2!!
/* Temporary as no W2/R2 IRQ assigned yet. */
#define LOG2_CPU_HOST_MBUS_W2_INT	62
#define LOG2_CPU_HOST_MBUS_R2_INT	63

/* Uncomment this only if W1/R1 can be used (typically not) */
// #define WITH_MBUS_W1R1

#endif /* CONFIG_TANGO3 */

/*
 * computed in prom.c
 */
extern unsigned long em8xxx_kmem_start;
extern unsigned long em8xxx_kmem_size;

/*
 * switchbox stuffs
 *
 * We keep  track of  current mapping using  this globals  rather than
 * reading hardware registers each time.
 */
static unsigned int g_sbox_map[SBOX_MAX];

static inline void sbox_update_route(void)
{
	int i;
#ifdef CONFIG_TANGO3
	u64 data = 0; /* to cover two 32 bits registers */
#else
	unsigned int data = 0;
#endif

	for (i = SBOX_MAX - 1; i >= 0; --i)
		data = (data << 4) | g_sbox_map[i];

#ifdef CONFIG_TANGO3
	gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, data & 0xffffffff);
	gbus_writel(REG_BASE_host_interface + SBOX_ROUTE2, (data >> 32) & 0xffffffff);
#else
	gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, data);
#endif
}

static void sbox_reset(void)
{
#ifdef CONFIG_TANGO3
#ifdef WITH_MBUS_W1R1
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0xffffffff);
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0xff00ff00);
#else
	/* Leave W1/R1 alone. */
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0xfdfdfdfd);
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0xfd00fd00);
#endif
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET2, 0x01010101);
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET2, 0x01000100);
#else
	/* Leave W1/R1 alone. */
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0x7d7d7d7d);
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, 0x7d007d00);
#endif
}

static void sbox_setup(void)
{
	unsigned long flags;

	local_irq_save(flags);

	/* W0 initially disconnected */
	g_sbox_map[SBOX_MBUS_W0] = 0xf;

#if defined(CONFIG_TANGO3) && defined(WITH_MBUS_W1R1)
	g_sbox_map[SBOX_MBUS_W1] = 0xf;
#else
	/* Leave W1 alone */
	g_sbox_map[SBOX_MBUS_W1] = 0;
#endif

	g_sbox_map[SBOX_PCIMASTER] = 0xf;
	g_sbox_map[SBOX_PCISLAVE] = SBOX_PCISLAVE + 1; /* Loopback */
	g_sbox_map[SBOX_SATA1] = 0xf;
	g_sbox_map[SBOX_IDEDVD] = 0xf;
	g_sbox_map[SBOX_IDEFLASH] = 0xf;
#ifdef CONFIG_TANGO3
	g_sbox_map[SBOX_SATA2] = 0xf;
	g_sbox_map[SBOX_MBUS_W2] = 0xf;
#else
	g_sbox_map[SBOX_UNUSED1] = 0xf;
#endif

	sbox_update_route();
	wmb();

	local_irq_restore(flags);
}

/*
 * Connect given interface to R?/W? channel
 */
#ifdef CONFIG_TANGO3
static int sbox_connect(int iface, int *channel, int any)
#else
static int sbox_connect(int iface)
#endif
{
	unsigned long flags;
	int res = 0;
#ifdef CONFIG_TANGO3
	int chan = 0;
#endif

	local_irq_save(flags);

#ifdef CONFIG_TANGO3
	/* Already connected? */
	if (g_sbox_map[SBOX_MBUS_W0] == (iface + 1) && g_sbox_map[iface] == (SBOX_MBUS_W0 + 1)) {
		*channel = 0; /* connected to W0/R0 */
		goto done;
#ifdef WITH_MBUS_W1R1
	} else if (g_sbox_map[SBOX_MBUS_W1] == (iface + 1) && g_sbox_map[iface] == (SBOX_MBUS_W1 + 1)) {
		*channel = 1; /* connected to W1/R1 */
		goto done;
#endif
	} else if (g_sbox_map[SBOX_MBUS_W2] == (iface + 1) && g_sbox_map[iface] == (SBOX_MBUS_W2 + 1)) {
		*channel = 2; /* connected to W2/R2 */
		goto done;
	}

	if (g_sbox_map[iface] != 0xf) { /* connect to something else already */
		res = 1;
		goto done;
	}

	/* In use ? */
	if (g_sbox_map[SBOX_MBUS_W0] != 0xf) {
		chan++; /* try next */
#ifdef WITH_MBUS_W1R1
		if (g_sbox_map[SBOX_MBUS_W1] != 0xf) {
#endif
			if (any == 0) {
#warning TO BE FIX in TANGO3 H/W!! (W2/R2 allocation)
				res = 1; /* TANGO3 TODO: allocate W2/R2 once IRQ is available */
				goto done;
			}
			chan++; /* try next */
			if (g_sbox_map[SBOX_MBUS_W2] != 0xf)  {
				res = 1; /* Both W0/W2 not available, and optional (W1 as well) */
				goto done;
			}
#ifdef WITH_MBUS_W1R1
		}
#endif
	}
#else
	/* Already connected? */
	if (g_sbox_map[SBOX_MBUS_W0] == (iface + 1) && g_sbox_map[iface] == (SBOX_MBUS_W0 + 1)) 
		goto done;

	/* In use ? */
	if (g_sbox_map[SBOX_MBUS_W0] != 0xf || g_sbox_map[iface] != 0xf) {
		res = 1;
		goto done;
	}
#endif /* CONFIG_TANGO3 */

#ifdef CONFIG_TANGO3
	switch(chan) {
		case 0: g_sbox_map[SBOX_MBUS_W0] = iface + 1;
			g_sbox_map[iface] = SBOX_MBUS_W0 + 1; /* W0/R0 */
			break;
#ifdef WITH_MBUS_W1R1
		case 1: g_sbox_map[SBOX_MBUS_W1] = iface + 1;
			g_sbox_map[iface] = SBOX_MBUS_W1 + 1; /* W1/R1 */
			break;
#endif
		case 2: g_sbox_map[SBOX_MBUS_W2] = iface + 1;
			g_sbox_map[iface] = SBOX_MBUS_W2 + 1; /* W2/R2 */
			break;

		default: BUG();
			break;
	}
	*channel = chan;
#else
	g_sbox_map[SBOX_MBUS_W0] = iface + 1;
	g_sbox_map[iface] = SBOX_MBUS_W0 + 1;
#endif
	sbox_update_route();
	wmb();

done:
	local_irq_restore(flags);

	return res;
}

#ifdef CONFIG_TANGO3
static void sbox_disconnect(int iface, int channel)
#else
static void sbox_disconnect(int iface)
#endif
{
	unsigned long flags;

	if (iface >= 0) {
		local_irq_save(flags);

#ifdef CONFIG_TANGO3
		switch(channel) {
			case 0: g_sbox_map[SBOX_MBUS_W0] = 0xf;
				break;
#ifdef WITH_MBUS_W1R1
			case 1: g_sbox_map[SBOX_MBUS_W1] = 0xf;
				break;
#endif
			case 2: g_sbox_map[SBOX_MBUS_W2] = 0xf;
				break;

			default: BUG();
				break;
		}
#else
		g_sbox_map[SBOX_MBUS_W0] = 0xf;
#endif
		g_sbox_map[iface] = 0xf;
		sbox_update_route();
		wmb();

		local_irq_restore(flags);
	}
}

static void sbox_init(void)
{
	sbox_setup();
	sbox_reset();
}


/*
 * mbus stuffs
 *
 * to  avoid   requesting/freeing  irq   each  time,  we   keep  given
 * handler/args  for each  dma  request and  call  it in  our own  irq
 * handler.
 */
#define MBUS_LINEAR_MAX		(0x2000 - 1)

#ifdef CONFIG_TANGO3
static mbus_irq_handler_t g_mbus_intr_handler[6];
static void *g_mbus_intr_handler_arg[6];
#else
static mbus_irq_handler_t g_mbus_intr_handler[4];
static void *g_mbus_intr_handler_arg[4];
#endif

/*
 * alloc_dma, need to be called before setup, will try to connect
 * needed sbox.
 */
int em86xx_mbus_alloc_dma(int sbox, int fromdev, unsigned long *pregbase, int *pirq, int any)
{
	int x;

#ifdef CONFIG_TANGO3
	int channel = 0;

	if (sbox_connect(sbox, &channel, any) != 0)
		return -1;

	switch(channel) {
		case 0: { 	/* Using W0/R0 pair */
				x = (fromdev ? 0 : 2);
				if (pirq)
					*pirq = LOG2_CPU_HOST_MBUS_W0_INT + IRQ_CONTROLLER_IRQ_BASE + x;
				if (pregbase)
					*pregbase = REG_BASE_host_interface + MIF_W0_ADD + (x * 0x40);
			}
			break;
#ifdef WITH_MBUS_W1R1
		case 1: { 	/* Using W1/R1 pair */
				x = (fromdev ? 0 : 2);
				if (pirq)
					*pirq = LOG2_CPU_HOST_MBUS_W1_INT + IRQ_CONTROLLER_IRQ_BASE + x;
				if (pregbase)
					*pregbase = REG_BASE_host_interface + MIF_W1_ADD + (x * 0x40);
			}
			break;
#endif
		case 2: { 	/* Using W2/R2 pair */
				x = (fromdev ? 0 : 1);
				if (pirq)
					*pirq = LOG2_CPU_HOST_MBUS_W2_INT + IRQ_CONTROLLER_IRQ_BASE + x;
				if (pregbase)
					*pregbase = REG_BASE_host_interface + MIF_W2_ADD + (x * 0x40);
			}
			break;

		default: BUG();
			break;
	}
#else
	if (sbox_connect(sbox) != 0)
		return -1;

	x = (fromdev ? 0 : 2);
	if (pirq)
		*pirq = LOG2_CPU_HOST_MBUS_W0_INT + IRQ_CONTROLLER_IRQ_BASE + x;
	if (pregbase)
		*pregbase = REG_BASE_host_interface + MIF_W0_ADD + x * 0x40;
#endif

	return 0;
}

#ifdef CONFIG_TANGO3
/* Convert MBUS register address to channel index */
static inline int mbus_idx2channel(unsigned int regbase)
{
	int idx = (regbase - (REG_BASE_host_interface + MIF_W0_ADD)) / 0x40;
	static const int channel[6] = { 0, 1, 0, 1, 2, 2 };
	return(channel[idx]);
}
#endif

/*
 * free_dma,  need to  be called  after  transfer is  done to  release
 * switchbox.
 */
void em86xx_mbus_free_dma(unsigned long regbase, int sbox)
{
	unsigned long flags;
	int idx = (regbase - (REG_BASE_host_interface + MIF_W0_ADD)) / 0x40;

	local_irq_save(flags);
	g_mbus_intr_handler[idx] = NULL;
	wmb();
	local_irq_restore(flags);

#ifdef CONFIG_TANGO3
	sbox_disconnect(sbox, mbus_idx2channel(regbase)); 
#else
	sbox_disconnect(sbox);
#endif
}

/*
 * irq handler for mbus interrupt
 */
static irqreturn_t mbus_intr(int irq, void *devinfo, struct pt_regs *regs)
{
	int idx = irq - (LOG2_CPU_HOST_MBUS_W0_INT + IRQ_CONTROLLER_IRQ_BASE);

#ifdef CONFIG_TANGO3
	if (idx >= 4)
		idx = irq - (LOG2_CPU_HOST_MBUS_W2_INT + IRQ_CONTROLLER_IRQ_BASE) + 4;
#endif
	if (g_mbus_intr_handler[idx]) {
		mbus_irq_handler_t f;

		f = g_mbus_intr_handler[idx];
		g_mbus_intr_handler[idx] = NULL;
		wmb();
		f(irq, g_mbus_intr_handler_arg[idx]);
	}

	return IRQ_HANDLED;
}

/*
 * check if mbus is in use for given regbase
 */
static inline int mbus_inuse(unsigned int regbase)
{
	return (gbus_readl(regbase + MIF_cmd_offset) & 0x7) != 0;
}

/*
 * setup mbus  register to start  a linear transfer (count  bytes from
 * addr, where count < MBUS_LINEAR_MAX)
 */
void mbus_setup_dma_linear(unsigned int regbase,
					 unsigned int addr,
					 unsigned int count,
					 unsigned int flags)
{
#if !defined(CONFIG_SD_DIRECT_DMA) 
	if ((addr < tangox_dma_address(CPHYSADDR(em8xxx_kmem_start))) || (addr >= (tangox_dma_address(CPHYSADDR(em8xxx_kmem_start)) + em8xxx_kmem_size)))
		printk("MBUS Warning (linear): bad transfer address 0x%08x\n", addr);
#endif

	gbus_writel(regbase + MIF_add_offset, addr);
	gbus_writel(regbase + MIF_cnt_offset, count);
	iob();
	gbus_writel(regbase + MIF_cmd_offset, (flags<<2)|0x1);
}

/*
 * setup mbus  register to start  a double transfer (count  bytes from
 * addr and count2 bytes from addr2, where count < MBUS_LINEAR_MAX and
 * count2 < MBUS_LINEAR_MAX)
 */
void mbus_setup_dma_double(unsigned int regbase,
					 unsigned int addr,
					 unsigned int count,
					 unsigned int addr2,
					 unsigned int count2,
					 unsigned int flags)
{
#if !defined(CONFIG_SD_DIRECT_DMA) 
	if ((addr < tangox_dma_address(CPHYSADDR(em8xxx_kmem_start))) || (addr >= (tangox_dma_address(CPHYSADDR(em8xxx_kmem_start)) + em8xxx_kmem_size)))
		printk("MBUS Warning (double): bad transfer address 0x%08x\n", addr);
	if ((addr2 < tangox_dma_address(CPHYSADDR(em8xxx_kmem_start))) || (addr2 >= (tangox_dma_address(CPHYSADDR(em8xxx_kmem_start)) + em8xxx_kmem_size)))
		printk("MBUS Warning (double): bad transfer address2 0x%08x\n", addr2);
#endif

	gbus_writel(regbase + MIF_add_offset, addr);
	gbus_writel(regbase + MIF_cnt_offset, (count2 << 16) | count);
	gbus_writel(regbase + MIF_add2_skip_offset, addr2);
	iob();
	gbus_writel(regbase + MIF_cmd_offset, (flags<<2)|0x2);
}

/*
 * setup mbus  register to start  a rectangle transfer (horiz  * lines
 * bytes  from  addr,  where  horiz  <  MBUS_LINEAR_MAX  and  lines  <
 * MBUS_LINEAR_MAX)
 */
void mbus_setup_dma_rectangle(unsigned int regbase,
					    unsigned int addr,
					    unsigned int horiz,
					    unsigned int lines,
					    unsigned int flags)
{
#if !defined(CONFIG_SD_DIRECT_DMA) 
	if ((addr < tangox_dma_address(CPHYSADDR(em8xxx_kmem_start))) || (addr >= (tangox_dma_address(CPHYSADDR(em8xxx_kmem_start)) + em8xxx_kmem_size)))
		printk("MBUS Warning (rectangle): bad transfer address 0x%08x\n", addr);
#endif

	gbus_writel(regbase + MIF_add_offset, addr);
	gbus_writel(regbase + MIF_cnt_offset, (lines << 16) | horiz);
	gbus_writel(regbase + MIF_add2_skip_offset, horiz);
	iob();
	gbus_writel(regbase + MIF_cmd_offset, (flags<<2)|0x3);
}

/*
 * register mbus interrupt if not done
 */
#ifdef CONFIG_TANGO3
static inline void mbus_register_intr(int channel)
#else
static inline void mbus_register_intr(void)
#endif
{
#ifdef CONFIG_TANGO3
	static int done[3] = { 0, 0, 0 };

	switch(channel) {
		case 0: {	/* Use W0/R0 then */
				if (done[0])
					return;
				done[0] = 1;
				request_irq(LOG2_CPU_HOST_MBUS_R0_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_r0", NULL);
				request_irq(LOG2_CPU_HOST_MBUS_W0_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_w0", NULL);
			}
			break;
#ifdef WITH_MBUS_W1R1
		case 1: {	/* Use W1/R1 instead */
				if (done[1])
					return;
				done[1] = 1;
				request_irq(LOG2_CPU_HOST_MBUS_R1_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_r1", NULL);
				request_irq(LOG2_CPU_HOST_MBUS_W1_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_w1", NULL);
			}
			break;
#endif
		case 2: {	/* Use W2/R2 instead */
				if (done[2])
					return;
				done[2] = 1;
				request_irq(LOG2_CPU_HOST_MBUS_R2_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_r2", NULL);
				request_irq(LOG2_CPU_HOST_MBUS_W2_INT + IRQ_CONTROLLER_IRQ_BASE,
					    mbus_intr, SA_INTERRUPT, "tangox_mbus_w2", NULL);
			}
			break;

		default: BUG();
			break;
	}
#else
	static int done = 0;

	if (done)
		return;
	done = 1;
	/*
	 * register irq handler for R0/W0 only (R1/W1 are not used for
	 * the moment)
	 */
	request_irq(LOG2_CPU_HOST_MBUS_R0_INT + IRQ_CONTROLLER_IRQ_BASE,
		    mbus_intr, SA_INTERRUPT, "tangox_mbus_r0", NULL);

	request_irq(LOG2_CPU_HOST_MBUS_W0_INT + IRQ_CONTROLLER_IRQ_BASE,
		    mbus_intr, SA_INTERRUPT, "tangox_mbus_w0", NULL);

#endif
}

/*
 * setup void transaction 
 */
void em86xx_mbus_setup_dma_void(unsigned int regbase)
{
	while (mbus_inuse(regbase) != 0)
		;
	gbus_writel(regbase + MIF_cmd_offset, 4);
}

/*
 * start  a   mbus  dma,   use  this  after   a  sucessfull   call  to
 * em86xx_mbus_alloc_dma
 */
int em86xx_mbus_setup_dma(unsigned int regbase, unsigned int addr,
			  unsigned int count, mbus_irq_handler_t handler,
			  void *arg, unsigned int tflags)
{
	unsigned long flags;
	unsigned int horiz, lines, sz;
	unsigned int idx = (regbase - (REG_BASE_host_interface + MIF_W0_ADD)) / 0x40;

	/*
	 * make sure no one uses the mbus before
	 */
	if (unlikely(mbus_inuse(regbase))) {
		printk(KERN_ERR "MBUS: error previous command is pending\n");
		return 1;
	}

	/*
	 * "register" given handler if any
	 */
	if (handler) {
#ifdef CONFIG_TANGO3
		mbus_register_intr(mbus_idx2channel(regbase));
#else
		mbus_register_intr();
#endif
		local_irq_save(flags);
		g_mbus_intr_handler[idx] = handler;
		g_mbus_intr_handler_arg[idx] = arg;
		wmb();
		local_irq_restore(flags);
	}

	/*
	 * decide which dma function to use depending on count
	 */
	if (count <= MBUS_LINEAR_MAX) {
		mbus_setup_dma_linear(regbase, addr, count, tflags);
		return 0;
	}

	if (count <= (MBUS_LINEAR_MAX * 2)) {
		mbus_setup_dma_double(regbase, addr, MBUS_LINEAR_MAX,
				      addr + MBUS_LINEAR_MAX,
				      count - MBUS_LINEAR_MAX, tflags);
		return 0;
	}

	/*
	 * we need to use rectangle, compute  horiz & lines
	 * values to use
	 */
	for (idx = 0, horiz = 1, sz = count; (idx < 10) && ((sz & 0x01) == 0); ++idx, horiz <<= 1, sz >>= 1)
		;
	lines = count >> idx;
	if ((horiz > MBUS_LINEAR_MAX) || (lines > MBUS_LINEAR_MAX)) {
		printk(KERN_ERR "MBUS: can't handle rectangle transfer "
		       "of %d bytes (h: %d, v: %d)\n", count, horiz, lines);
		BUG();
	}
	mbus_setup_dma_rectangle(regbase, addr, horiz, lines, tflags);

	return 0;
}

/*
 * Bit 0/8: MBUS_R0_SBOX
 * Bit 1/9: MBUS_R1_SBOX
 * Bit 2/10: PCI_MASTER_SBOX
 * Bit 3/11: PCI_SLAVE_SBOX
 * Bit 4/12: SATA1_SBOX
 * Bit 5/13: IDE_ISA_SBOX
 * Bit 6/14: IDE_DVD_SBOX
 * Bit 7/15: SATA2_SBOX (Tango3)
 * Bit 16/24: SBOX_MBUS_W0
 * Bit 17/25: SBOX_MBUS_W1
 * Bit 18/26: SBOX_PCI_MASTER
 * Bit 19/27: SBOX_PCI_SLAVE
 * Bit 20/28: SBOX_SATA1
 * Bit 21/29: SBOX_ISA
 * Bit 22/30: SBOX_DVD
 * Bit 23/31: SBOX_SATA2 (Tango3)
 *
 * Bit 32/40: MBUS_R2_SBOX (Tango3)
 * Bit 48/50: SBOX_MBUS_W2 (Tango3)
 */
#ifdef CONFIG_TANGO3
static const u64 sbox_reset_vals[4][6] = {
	{ 0x0000000001011010ULL, 0x0000000002021010ULL, 0x0000000010100101ULL, 0x0000000010100202ULL, 0x0101000000001010ULL, 0x0000010110100000ULL },
	{ 0x0000000001012020ULL, 0x0000000002022020ULL, 0x0000000020200101ULL, 0x0000000020200202ULL, 0x0101000000002020ULL, 0x0000010120200000ULL },
	{ 0x0000000001014040ULL, 0x0000000002024040ULL, 0x0000000040400101ULL, 0x0000000040400202ULL, 0x0101000000004040ULL, 0x0000010140400000ULL },
	{ 0x0000000001018080ULL, 0x0000000002028080ULL, 0x0000000080800101ULL, 0x0000000080800202ULL, 0x0101000000008080ULL, 0x0000010180800000ULL },
};
#else
static const unsigned int sbox_reset_vals[2][4] = {
	{ 0x01012020, 0x02022020, 0x20200101, 0x20200202 },
	{ 0x01014040, 0x02024040, 0x40400101, 0x40400202 }
};
#endif

/*
 * clear MBUS transaction for given regbase/sbox
 */
static void mbus_reset(unsigned int regbase, int sbox)
{
	int midx;
	int sidx;

#ifdef CONFIG_TANGO3
	unsigned int rl, rh;

	midx = (regbase - (REG_BASE_host_interface + MIF_W0_ADD)) / 0x40;
	sidx = sbox - SBOX_SATA1;

	if (((midx < 0) || (midx > 5)) || ((sidx < 0) || (sidx > 3))) {
		printk("MBUS reset: out of range, midx %d, sidx %d\n",
		       midx, sidx);
		return;
	}
	rl = sbox_reset_vals[sidx][midx] & 0xffffffff;
	rh = (sbox_reset_vals[sidx][midx] >> 32) & 0xffffffff;

	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, rl);
	if (rh) 
		gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET2, rh);
	iob();

	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET, rl & 0xff00ff00);
	if (rh) 
		gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET2, rh & 0xff00ff00);
	iob();
#else
	midx = (regbase - (REG_BASE_host_interface + MIF_W0_ADD)) / 0x40;
	sidx = sbox - SBOX_IDEFLASH;

	if (((midx < 0) || (midx > 3)) || ((sidx < 0) || (sidx > 2))) {
		printk("MBUS reset: out of range, midx %d, sidx %d\n",
		       midx, sidx);
		return;
	}

	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET,
		    sbox_reset_vals[sidx][midx]);
	iob();
	gbus_writel(REG_BASE_host_interface + SBOX_FIFO_RESET,
		    sbox_reset_vals[sidx][midx] & 0xff00ff00);
	iob();
#endif
}

/* Fancy version of memcpy, both dst and src need to be physical address */
/* The channels have to be allocated already */
int mbus_memcpy(unsigned int regbase, unsigned int dst, unsigned int src, unsigned int size)
{
	/* Save the old SBOX route */
	unsigned int sbox_route;
	unsigned int w_base;
	unsigned int r_base;
	int channel = 0;
/* 
 * TRANSFER defines 4 bits, bit 0: followed by void (1) or not (0),
 * bit 1: tiled buffer or not (tango3 only).
 * bit 3-2: 0 = 8 bit, 1 = 16 bit, 2 = 32 bit (tango3 only).
 */
#ifdef CONFIG_TANGO3
#define TRANSFER    0x1 /* or 0x9 for 32 bit transfer */
#else
#define TRANSFER    0x1
#endif

#ifdef CONFIG_TANGO3
	channel = mbus_idx2channel(regbase);

	if (channel == 0) /* W0/R0 channels are used */
#endif
	{
		w_base = REG_BASE_host_interface + MIF_W0_ADD;
		r_base = REG_BASE_host_interface + MIF_R0_ADD;
		sbox_route = gbus_readl(REG_BASE_host_interface + SBOX_ROUTE) & 0xffffff0f;

		/* Hook up W0/R0 and left W1/R1 the same as before */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, 0xffffff01);
	
		if (em86xx_mbus_setup_dma(w_base, dst, size, NULL, NULL, TRANSFER) != 0) {
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
			return(0);
		} else if (em86xx_mbus_setup_dma(r_base, src, size, NULL, NULL, TRANSFER) != 0) {
			/* TODO: should reset W0 */
			printk("MBUS: need to reset W0 channel.\n");
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
			return(0);
		}

		/* TODO: a timeout mechanism should be added to reset W0/R0 */
		while (mbus_inuse(r_base) != 0)
			;
		while (mbus_inuse(w_base) != 0)
			;

		/* Restore SBOX route once we're done */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
	}
#ifdef CONFIG_TANGO3
#ifdef WITH_MBUS_W1R1
	else if (channel == 1) { /* W1/R1 channels are used */
		w_base = REG_BASE_host_interface + MIF_W1_ADD;
		r_base = REG_BASE_host_interface + MIF_R1_ADD;
		sbox_route = gbus_readl(REG_BASE_host_interface + SBOX_ROUTE) & 0xfffffff0;

		/* Hook up W1/R1 and left W0/R0 the same as before */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, 0xffffff20);
	
		if (em86xx_mbus_setup_dma(w_base, dst, size, NULL, NULL, TRANSFER) != 0) {
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
			return(0);
		} else if (em86xx_mbus_setup_dma(r_base, src, size, NULL, NULL, TRANSFER) != 0) {
			/* TODO: should reset W1 */
			printk("MBUS: need to reset W1 channel.\n");
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
			return(0);
		}

		/* TODO: a timeout mechanism should be added to reset W0/R0 */
		while (mbus_inuse(r_base) != 0)
			;
		while (mbus_inuse(w_base) != 0)
			;

		/* Restore SBOX route once we're done */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE, sbox_route);
	}
#endif
	else { /* channel == 2: W2/R2 channels are used */
		w_base = REG_BASE_host_interface + MIF_W2_ADD;
		r_base = REG_BASE_host_interface + MIF_R2_ADD;
		sbox_route = gbus_readl(REG_BASE_host_interface + SBOX_ROUTE2);

		/* Hook up W2/R2 */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE2, 0xfffffff9);
	
		if (em86xx_mbus_setup_dma(w_base, dst, size, NULL, NULL, TRANSFER) != 0) {
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE2, sbox_route);
			return(0);
		} else if (em86xx_mbus_setup_dma(r_base, src, size, NULL, NULL, TRANSFER) != 0) {
			/* TODO: should reset W2 */
			printk("MBUS: need to reset W2 channel.\n");
			gbus_writel(REG_BASE_host_interface + SBOX_ROUTE2, sbox_route);
			return(0);
		}

		/* TODO: a timeout mechanism should be added to reset W0/R0 */
		while (mbus_inuse(r_base) != 0)
			;
		while (mbus_inuse(w_base) != 0)
			;

		/* Restore SBOX route once we're done */
		gbus_writel(REG_BASE_host_interface + SBOX_ROUTE2, sbox_route);
	}
#endif

	return(size);
}

/*
 * busy wait  for current mbus transfer  to finish, will  not wait for
 * more than 20 ms. 0 is ok, 1 timeout, 2 for timeout + reset error.
 */
#define MBUS_TIMEOUT	20000

int em86xx_mbus_wait(unsigned int regbase, int sbox)
{
	int timeout;

	/* wait for mbus to be released */
	timeout = 0;
	do {
		if (!mbus_inuse(regbase))
			break;
		udelay(1);
		timeout++;
	} while (timeout < MBUS_TIMEOUT);

	if (timeout < MBUS_TIMEOUT ) {
		/* ok */
		if (sbox == SBOX_IDEFLASH){
                        int i;
			unsigned int pb_count = 0;

			pb_count = gbus_readl(REG_BASE_host_interface + 
					       PB_automode_control) & 0xffff;

                        for (i = 0; pb_count && (i < MBUS_TIMEOUT); i++){
                                udelay(1);
				pb_count = gbus_readl(REG_BASE_host_interface +
					       PB_automode_control) & 0xffff;
			}

                        if (i < MBUS_TIMEOUT) 
				return 0;

		} else
			return 0;
	}

	/* timeout, let's dump some registers ! */
        if (sbox == SBOX_IDEFLASH) {
  		printk("MBUS timeout : MBUS CMD = %ld, PB Automode = %08x\n",
                	(unsigned long)gbus_readl(regbase + MIF_cmd_offset) & 0x7,
                	(unsigned int)gbus_readl(REG_BASE_host_interface + PB_automode_control));
        } else {
		printk("MBUS timeout : MBUS CMD = %08lx\n",
			gbus_readl(regbase + MIF_cmd_offset) & 0x7);
	}

	printk("MBUS registers : %08lx %08lx %08lx %08lx\n",
	       gbus_readl(regbase + MIF_add_offset),
	       gbus_readl(regbase + MIF_cnt_offset),
	       gbus_readl(regbase + MIF_add2_skip_offset),
	       gbus_readl(regbase + MIF_cmd_offset));

	printk(KERN_ERR "MBUS fails, resetting %d ..\n", sbox);
	mbus_reset(regbase, sbox);

	/* If not able to reset, return  1, so the DMA can be disabled
	   accordingly  */
	return mbus_inuse(regbase) ? 0 : 1;
}

int em86xx_mbus_init(void)
{
	static int done = 0;

	if (done)
		return 0;
	done = 1;

	/* reset sbox to default values */
	sbox_init();

	/* Give better MBUS bandwidth for Wx/Rx channel */
#ifdef CONFIG_TANGO3
	gbus_writel(REG_BASE_system_block + MARB_mid01_cfg, 0x12005);
	gbus_writel(REG_BASE_system_block + MARB_mid21_cfg, 0x12005);
	gbus_writel(REG_BASE_system_block + MARB_mid03_cfg, 0x12005);
	gbus_writel(REG_BASE_system_block + MARB_mid23_cfg, 0x12005);
#ifdef WITH_MBUS_W1R1
	gbus_writel(REG_BASE_system_block + MARB_mid02_cfg, 0x12005);
	gbus_writel(REG_BASE_system_block + MARB_mid22_cfg, 0x12005);
#endif
#else
	gbus_writel(REG_BASE_system_block + MARB_mid02_cfg, 0x11f1f);
	gbus_writel(REG_BASE_system_block + MARB_mid22_cfg, 0x11f1f);
#endif

	return 0;
}

EXPORT_SYMBOL(em86xx_mbus_alloc_dma);
EXPORT_SYMBOL(em86xx_mbus_free_dma);
EXPORT_SYMBOL(em86xx_mbus_setup_dma);
EXPORT_SYMBOL(em86xx_mbus_setup_dma_void);
EXPORT_SYMBOL(em86xx_mbus_wait);
EXPORT_SYMBOL(em86xx_mbus_init);
EXPORT_SYMBOL(mbus_setup_dma_linear);
EXPORT_SYMBOL(mbus_setup_dma_double);
EXPORT_SYMBOL(mbus_setup_dma_rectangle);
EXPORT_SYMBOL(mbus_memcpy);
