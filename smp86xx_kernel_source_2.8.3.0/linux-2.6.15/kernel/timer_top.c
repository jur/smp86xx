/*
 * kernel/timer_top.c
 *
 * Export Timers information to /proc/timer_info
 *
 * Copyright (C) 2005 Instituto Nokia de Tecnologia - INdT - Manaus
 * Written by Daniel Petrini <d.pensator@gmail.com>
 *
 * This utility should be used to get information from the system timers
 * and maybe optimize the system once you know which timers are being used
 * and the process which starts them.
 * This is particular useful above dynamic tick implementation. One can
 * see who is starting timers and make the HZ value increase.
 *
 * We export the addresses and counting of timer functions being called,
 * the pid and cmdline from the owner process if applicable.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */


#include <linux/list.h>
#include <linux/proc_fs.h>
#include <linux/module.h>
#include <linux/spinlock.h>
#include <linux/sched.h>
#include <linux/seq_file.h>
#include <asm/uaccess.h>

#define VERSION		"Timer Top v0.9.8"

struct timer_top_info {
	unsigned int		func_pointer;
	unsigned long		counter;
	pid_t			pid;
	char 			comm[TASK_COMM_LEN];
	struct list_head 	list;
};

struct timer_top_root {
	spinlock_t		lock;
	struct list_head	list;
	kmem_cache_t		*cache;
	int			record;	/* if currently collecting data */
};

static struct timer_top_root top_root = {
	.lock		= SPIN_LOCK_UNLOCKED,
	.list		= LIST_HEAD_INIT(top_root.list),
};

static struct list_head *timer_list = &top_root.list;
static spinlock_t *top_lock = &top_root.lock;

static inline int update_top_info(unsigned long function, pid_t pid_info)
{
	struct timer_top_info *top;

	list_for_each_entry(top, timer_list, list) {
		/* if it is in the list increment its count */
		if (top->func_pointer == function && top->pid == pid_info) {
			top->counter++;
			return 1;
		}
	}

	return 0;
}

int account_timer(unsigned long function, unsigned long data)
{
	struct timer_top_info *top;
	struct task_struct * task_info;
	pid_t pid_info = 0;
	char name[TASK_COMM_LEN] = "";
	unsigned long flags;

	if (!top_root.record)
		goto out;

	spin_lock_irqsave(top_lock, flags);

	if (data) {
	       task_info = (struct task_struct *) data;
		/* little sanity ... not enough yet */
		if ((task_info->pid > 0) && (task_info->pid < PID_MAX_LIMIT)) {
			pid_info = task_info->pid;
			strncpy(name, task_info->comm, sizeof(task_info->comm));
		}
	}

	if (update_top_info(function, pid_info))
		goto out_unlock;

	/* Function not found so insert it in the list */
	top = kmem_cache_alloc(top_root.cache, GFP_ATOMIC);
	if (unlikely(!top))
		goto out_unlock;

	top->func_pointer = function;
	top->counter = 1;
	top->pid = pid_info;
	strncpy(top->comm, name, sizeof(name));
	list_add(&top->list, timer_list);

out_unlock:
	spin_unlock_irqrestore(top_lock, flags);

out:
	return 0;
}

EXPORT_SYMBOL(account_timer);

/*
 * Must hold top_lock
 */
static void timer_list_del(void)
{
	struct list_head *aux1, *aux2;
	struct timer_top_info *entry;

	list_for_each_safe(aux1, aux2, timer_list) {
		entry = list_entry(aux1, struct timer_top_info, list);
		list_del(aux1);
		kmem_cache_free(top_root.cache, entry);
	}
}

/* PROC_FS_SECTION  */

static struct proc_dir_entry *top_info_file;
static struct proc_dir_entry *top_info_file_out;

/* Statistics output - timer_info*/
static int proc_read_top_info(struct seq_file *m, void *v)
{
	struct timer_top_info *top;

	seq_printf(m, "Function counter - %s\n", VERSION);

	list_for_each_entry(top, timer_list, list) {
		seq_printf(m, "%x %lu %d %s\n", top->func_pointer,
			top->counter, top->pid, top->comm);
	}

	if (!top_root.record)
		seq_printf(m, "Disabled\n");

	return 0;
}

static int proc_timertop_open(struct inode *inode, struct file *file)
{
	return single_open(file, proc_read_top_info, NULL);
}

static struct file_operations proc_timertop_operations = {
	.open		= proc_timertop_open,
	.read		= seq_read,
	.llseek		= seq_lseek,
	.release	= single_release,
};

#define MAX_INPUT_TOP	10

/* Receive some commands from user - timer_input */
static int proc_write_timer_input(struct file *file, const char *page,
                                 unsigned long count, void *data)
{
	int len;
	char input_data[MAX_INPUT_TOP];
	unsigned long flags;

	/* input size checking */
	if (count > MAX_INPUT_TOP - 1)
		len = MAX_INPUT_TOP - 1;
	else
		len = count;

	if (copy_from_user(input_data, page, len))
		return -EFAULT;

	input_data[len] = '\0';

	spin_lock_irqsave(top_lock, flags);
	if (!strncmp(input_data, "clear", 5))
		timer_list_del();
	else if (!strncmp(input_data, "start", 5))
		top_root.record = 1;
	else if (!strncmp(input_data, "stop", 4)) {
		top_root.record = 0;
		timer_list_del();
	}
	spin_unlock_irqrestore(top_lock, flags);

	return len;
}

/* Print a sample string showing the possible inputs - timer_input */
static int proc_read_timer_input(char *page, char **start, off_t off,
                                int count, int *eof, void *data)
{
	int len = sprintf(page, "clear start stop\n");

	return len;
}

static int __init init_top_info(void)
{
	top_root.cache = kmem_cache_create("top_info",
		sizeof(struct timer_top_info), 0, SLAB_PANIC, NULL, NULL);

	top_info_file = create_proc_entry("timer_info", 0444, NULL);
	if (top_info_file == NULL)
		return -ENOMEM;

	top_info_file_out = create_proc_entry("timer_input", 0666, NULL);
	if (top_info_file_out == NULL)
		return -ENOMEM;

	/* Statistics output */
	top_info_file->proc_fops = &proc_timertop_operations;

	/* Control */
	top_info_file_out->write_proc = &proc_write_timer_input;
	top_info_file_out->read_proc = &proc_read_timer_input;

	return 0;
}

module_init(init_top_info);
