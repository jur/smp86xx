#ifndef _ASMi386_TIMER_H
#define _ASMi386_TIMER_H
#include <linux/jiffies.h>
#include <linux/init.h>
#include <linux/pm.h>

/**
 * struct timer_ops - used to define a timer source
 *
 * @name: name of the timer.
 * @init: Probes and initializes the timer. Takes clock= override 
 *        string as an argument. Returns 0 on success, anything else
 *        on failure.
 * @mark_offset: called by the timer interrupt.
 * @get_offset:  called by gettimeofday(). Returns the number of microseconds
 *               since the last timer interupt.
 * @monotonic_clock: returns the number of nanoseconds since the init of the
 *                   timer.
 * @delay: delays this many clock cycles.
 */
struct timer_opts {
	char* name;
	int (*mark_offset)(void);
	unsigned long (*get_offset)(void);
	unsigned long long (*monotonic_clock)(void);
	void (*delay)(unsigned long);
	unsigned long (*read_timer)(void);
	int (*suspend)(pm_message_t state);
	int (*resume)(void);
};

struct init_timer_opts {
	int (*init)(char *override);
	struct timer_opts *opts;
};

#define TICK_SIZE (tick_nsec / 1000)

extern struct timer_opts* __init select_timer(void);
extern void clock_fallback(void);
void setup_pit_timer(void);
extern void reprogram_pit_timer(unsigned long jiffies_to_skip);

/* Modifiers for buggy PIT handling */

extern int pit_latch_buggy;

extern struct timer_opts *cur_timer;
extern int timer_ack;

/* list of externed timers */
extern struct timer_opts timer_none;
extern struct timer_opts timer_pit;
extern struct init_timer_opts timer_pit_init;
extern struct init_timer_opts timer_tsc_init;
#ifdef CONFIG_X86_CYCLONE_TIMER
extern struct init_timer_opts timer_cyclone_init;
#endif

extern unsigned long calibrate_tsc(void);
extern unsigned long read_timer_tsc(void);
extern void init_cpu_khz(void);
extern int recalibrate_cpu_khz(void);
#ifdef CONFIG_HPET_TIMER
extern struct init_timer_opts timer_hpet_init;
extern unsigned long calibrate_tsc_hpet(unsigned long *tsc_hpet_quotient_ptr);
#endif

#ifdef CONFIG_X86_PM_TIMER
extern struct init_timer_opts timer_pmtmr_init;
#endif
#ifdef CONFIG_NO_IDLE_HZ
static inline void tsc_sanity_check(int lost)
{
}
#else /* CONFIG_NO_IDLE_HZ */
extern void cpufreq_delayed_get(void);

static inline void tsc_sanity_check(int lost)
{
	static int lost_count = 0;

	if (lost >= 2) {
		jiffies_64 += lost-1;

		/* sanity check to ensure we're not always losing ticks */
		if (lost_count++ > 100) {
			printk(KERN_WARNING "Losing too many ticks!\n");
			printk(KERN_WARNING "TSC cannot be used as a timesource.  \n");
			printk(KERN_WARNING "Possible reasons for this are:\n");
			printk(KERN_WARNING "  You're running with Speedstep,\n");
			printk(KERN_WARNING "  You don't have DMA enabled for your hard disk (see hdparm),\n");
			printk(KERN_WARNING "  Incorrect TSC synchronization on an SMP system (see dmesg).\n");
			printk(KERN_WARNING "Falling back to a sane timesource now.\n");

			clock_fallback();
		}
		/* ... but give the TSC a fair chance */
		if (lost_count > 25)
			cpufreq_delayed_get();
	} else
		lost_count = 0;
}
#endif /* CONFIG_NO_IDLE_HZ */
#endif
