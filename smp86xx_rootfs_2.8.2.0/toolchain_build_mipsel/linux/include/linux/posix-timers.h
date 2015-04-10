#ifndef _linux_POSIX_TIMERS_H
#define _linux_POSIX_TIMERS_H


struct k_clock {
	int res;		/* in nano seconds */
	struct k_clock_abs *abs_struct;
	int (*clock_set) (struct timespec * tp);
	int (*clock_get) (struct timespec * tp);
	int (*timer_create) (struct k_itimer *timer);
	int (*nsleep) (int which_clock, int flags,
		       struct timespec * t);
	int (*timer_set) (struct k_itimer * timr, int flags,
			  struct itimerspec * new_setting,
			  struct itimerspec * old_setting);
	int (*timer_del) (struct k_itimer * timr);
	void (*timer_get) (struct k_itimer * timr,
			   struct itimerspec * cur_setting);
};

void register_posix_clock(int clock_id, struct k_clock *new_clock);

/* Error handlers for timer_create, nanosleep and settime */
int do_posix_clock_notimer_create(struct k_itimer *timer);
int do_posix_clock_nonanosleep(int which_clock, int flags, struct timespec * t);
int do_posix_clock_nosettime(struct timespec *tp);

/* function to call to trigger timer event */
int posix_timer_event(struct k_itimer *timr, int si_private);

struct now_struct {
	unsigned long jiffies;
};

#define posix_get_now(now) (now)->jiffies = jiffies;
#define posix_time_before(timer, now) \
                      time_before((timer)->expires, (now)->jiffies)

#define posix_bump_timer(timr, now)					\
         do {								\
              long delta, orun;						\
	      delta = now.jiffies - (timr)->it_timer.expires;		\
              if (delta >= 0) {						\
	           orun = 1 + (delta / (timr)->it_incr);		\
	          (timr)->it_timer.expires += orun * (timr)->it_incr;	\
                  (timr)->it_overrun += orun;				\
              }								\
            }while (0)
#endif

