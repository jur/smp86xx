/*
 *
 * i8259.c:  Generic support for the i8259 PIC
 *
 * Code copied from arch/mips/kernel/irq.c with minor changes.
 *
 *  This should really go into some architecture independent place
 */

#include <linux/errno.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kernel_stat.h>
#include <linux/sched.h>
#include <linux/interrupt.h>
#include <linux/malloc.h>
#include <linux/random.h>

#include <asm/io.h>
#include <asm/ptrace.h>
#include <asm/sgint23.h>
#include <asm/i8259.h>

/*
 * This contains the irq mask for both 8259A irq controllers, it's an
 * int so we can deal with the third PIC in some systems like the RM300.
 */

static unsigned int cached_irq_mask = 0xfffb;

#define __byte(x,y) (((unsigned char *)&(y))[x])
//#define __word(x,y) (((unsigned short *)&(y))[x])
//#define __long(x,y) (((unsigned int *)&(y))[x])

/* These are for big endian machines */
#define cached_21       (__byte(3,cached_irq_mask))
#define cached_A1       (__byte(2,cached_irq_mask))

static struct irqaction *i8259_irq_action[16] = {
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
};

static inline void i8259_mask_irq(unsigned int irq)
{
	cached_irq_mask |= 1 << irq;
	if (irq & 8) {
		outb(cached_A1, 0xa1);
	} else {
		outb(cached_21, 0x21);
	}
}

static inline void i8259_unmask_irq(unsigned int irq)
{
        cached_irq_mask &= ~(1 << irq);
        if (irq & 8) {
		outb(cached_A1, 0xa1);
        } else {
		outb(cached_21, 0x21);
	}
}


int i8259_setup_irq(int irq, struct irqaction * new)
{
	int shared = 0;
	struct irqaction *old, **p;
	unsigned long flags;

	p = i8259_irq_action + irq;
	if ((old = *p) != NULL) {
		/* Can't share interrupts unless both agree to */
		if (!(old->flags & new->flags & SA_SHIRQ))
			return -EBUSY;

		/* Can't share interrupts unless both are the same type */
		if ((old->flags ^ new->flags) & SA_INTERRUPT)
			return -EBUSY;
	
		/* add new interrupt at end of irq queue */
		do {
			p = & old->next;
			old = *p;
		} while (old);
		shared = 1;
	}

	if (new->flags & SA_SAMPLE_RANDOM)
		rand_initialize_irq(irq);

	save_and_cli(flags);
	*p = new;

	if (!shared) {
		i8259_unmask_irq(irq);
	}
	restore_flags(flags);
	return 0;
}


/* enable and disable for EISA irqs */

void i8259_disable_irq(unsigned int irq_nr)
{
	unsigned long flags;

	save_and_cli(flags);
	i8259_mask_irq(irq_nr);
	restore_flags(flags);
}

void i8259_enable_irq(unsigned int irq_nr)
{
	unsigned long flags;

	save_and_cli(flags);
	i8259_unmask_irq(irq_nr);
	restore_flags(flags);
}


int i8259_request_irq(unsigned int irq, 
		      void (*handler)(int, void *, struct pt_regs *),
                      unsigned long flags, 
		      const char *device, 
		      void *dev_id)
{
	int retval;
	struct irqaction *action;
	
	/* We only have 0-15 for (E)ISA irqs */
	if (irq >= 16)
		return -EINVAL;
	if (!handler)
		return -EINVAL;

	action = (struct irqaction *)kmalloc(sizeof(struct irqaction), GFP_KERNEL);
	if (!action)
		return -ENOMEM;

	action->handler = handler;
	action->flags = flags;
	action->mask = 0;
	action->name = device;
	action->next = NULL;
	action->dev_id = dev_id;

	retval = i8259_setup_irq(irq, action);

	if (retval)
		kfree(action);
	return retval;
}

void i8259_free_irq(unsigned int irq, void *dev_id)
{
	struct irqaction *action, **p;
	unsigned long flags;

	if ( irq > 15) { 
		printk("Trying to free (E)ISA IRQ%d\n", irq);
		return;
	}
	for (p = irq + i8259_irq_action; (action = *p) != NULL; p = &action->next) {
		if (action->dev_id != dev_id)
			continue;

		/* Found it - now free it */
		save_and_cli(flags);
		*p = action->next;
		if (!irq[i8259_irq_action])
			i8259_mask_irq(irq);
		restore_flags(flags);
		kfree(action);
		return;
	}
	printk("Trying to free free (E)ISA IRQ%d\n", irq);
}

static inline void i8259_mask_and_ack_irq(int irq)
{
	cached_irq_mask |= 1 << irq;
	if (irq & 8) {
		inb(0xa1);
		outb(cached_A1, 0xa1);
		outb(0x62, 0x20);               /* Specific EOI to cascade */
		outb(0x20, 0xa0);
	} else {
		inb(0x21);
		outb(cached_21, 0x21);
		outb(0x20, 0x20);
	}
}


asmlinkage void i8259_do_irq(int irq, struct pt_regs *regs)
{
	struct irqaction *action;
	int do_random, cpu;

	cpu = smp_processor_id();
	hardirq_enter(cpu);

	if (irq >= 16)
		goto out;

	i8259_mask_and_ack_irq(irq);

	kstat.irqs[cpu][irq]++;

	action = *(irq + i8259_irq_action);
	if (!action)
		goto out;

	if (!(action->flags & SA_INTERRUPT))
		__sti();
	action = *(irq + i8259_irq_action);
	do_random = 0;
	do {
		do_random |= action->flags;
		action->handler(irq, action->dev_id, regs);
		action = action->next;
	} while (action);
	if (do_random & SA_SAMPLE_RANDOM)
		add_interrupt_randomness(irq);
	__cli();
	i8259_unmask_irq (irq);

out:
	hardirq_exit(cpu);
}	

__initfunc(void i8259_init(void))
{
	/* Init master interrupt controller */
	outb(0x11, (0x20)); /* Start init sequence */
	outb(0x00, (0x21)); /* Vector base */
	outb(0x04, (0x21)); /* edge tiggered, Cascade (slave) on IRQ2 */
	outb(0x01, (0x21)); /* Select 8086 mode */
	outb(0xff, (0x21)); /* Mask all */

	/* Init slave interrupt controller */
	outb(0x11, (0xa0)); /* Start init sequence */
	outb(0x08, (0xa1)); /* Vector base */
	outb(0x02, (0xa1)); /* edge triggered, Cascade (slave) on IRQ2 */
	outb(0x01, (0xa1)); /* Select 8086 mode */
	outb(0xff, (0xa1)); /* Mask all */

	outb(cached_A1, (0xa1));
	outb(cached_21, (0x21));
}
