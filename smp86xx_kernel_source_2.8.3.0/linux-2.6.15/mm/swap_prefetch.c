/*
 * linux/mm/swap_prefetch.c
 *
 * Copyright (C) 2005-2006 Con Kolivas
 *
 * Written by Con Kolivas <kernel@kolivas.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/swap.h>
#include <linux/swap-prefetch.h>
#include <linux/ioprio.h>
#include <linux/kthread.h>
#include <linux/pagemap.h>
#include <linux/syscalls.h>
#include <linux/writeback.h>

/*
 * Time to delay prefetching if vm is busy or prefetching unsuccessful. There
 * needs to be at least this duration of idle time meaning in practice it can
 * be much longer
 */
#define PREFETCH_DELAY	(HZ * 5)

/* sysctl - enable/disable swap prefetching */
int swap_prefetch __read_mostly = 1;

struct swapped_root {
	unsigned long		busy;		/* vm busy */
	spinlock_t		lock;		/* protects all data */
	struct list_head	list;		/* MRU list of swapped pages */
	struct radix_tree_root	swap_tree;	/* Lookup tree of pages */
	unsigned int		count;		/* Number of entries */
	unsigned int		maxcount;	/* Maximum entries allowed */
	kmem_cache_t		*cache;		/* Of struct swapped_entry */
};

static struct swapped_root swapped = {
	.lock		= SPIN_LOCK_UNLOCKED,
	.list  		= LIST_HEAD_INIT(swapped.list),
	.swap_tree	= RADIX_TREE_INIT(GFP_ATOMIC),
};

static task_t *kprefetchd_task;

/*
 * We check to see no part of the vm is busy. If it is this will interrupt
 * trickle_swap and wait another PREFETCH_DELAY. Purposefully racy.
 */
inline void delay_swap_prefetch(void)
{
	if (!test_bit(0, &swapped.busy))
		__set_bit(0, &swapped.busy);
}

/*
 * Drop behind accounting which keeps a list of the most recently used swap
 * entries.
 */
void add_to_swapped_list(struct page *page)
{
	struct swapped_entry *entry;
	unsigned long index;
	int wakeup;

	if (!swap_prefetch)
		return;

	wakeup = 0;

	spin_lock(&swapped.lock);
	if (swapped.count >= swapped.maxcount) {
		/*
		 * We limit the number of entries to 2/3 of physical ram.
		 * Once the number of entries exceeds this we start removing
		 * the least recently used entries.
		 */
		entry = list_entry(swapped.list.next,
			struct swapped_entry, swapped_list);
		radix_tree_delete(&swapped.swap_tree, entry->swp_entry.val);
		list_del(&entry->swapped_list);
		swapped.count--;
	} else {
		entry = kmem_cache_alloc(swapped.cache, GFP_ATOMIC);
		if (unlikely(!entry))
			/* bad, can't allocate more mem */
			goto out_locked;
	}

	index = page_private(page);
	entry->swp_entry.val = index;
	/*
	 * On numa we need to store the node id to ensure that we prefetch to
	 * the same node it came from.
	 */
	store_swap_entry_node(entry, page);

	if (likely(!radix_tree_insert(&swapped.swap_tree, index, entry))) {
		/*
		 * If this is the first entry, kprefetchd needs to be
		 * (re)started.
		 */
		if (!swapped.count)
			wakeup = 1;
		list_add(&entry->swapped_list, &swapped.list);
		swapped.count++;
	}

out_locked:
	spin_unlock(&swapped.lock);

	/* Do the wakeup outside the lock to shorten lock hold time. */
	if (wakeup)
		wake_up_process(kprefetchd_task);

	return;
}

/*
 * Removes entries from the swapped_list. The radix tree allows us to quickly
 * look up the entry from the index without having to iterate over the whole
 * list.
 */
void remove_from_swapped_list(const unsigned long index)
{
	struct swapped_entry *entry;
	unsigned long flags;

	if (list_empty(&swapped.list))
		return;

	spin_lock_irqsave(&swapped.lock, flags);
	entry = radix_tree_delete(&swapped.swap_tree, index);
	if (likely(entry)) {
		list_del_init(&entry->swapped_list);
		swapped.count--;
		kmem_cache_free(swapped.cache, entry);
	}
	spin_unlock_irqrestore(&swapped.lock, flags);
}

enum trickle_return {
	TRICKLE_SUCCESS,
	TRICKLE_FAILED,
	TRICKLE_DELAY,
};

struct node_stats {
	unsigned long	last_free;
	/* Free ram after a cycle of prefetching */
	unsigned long	current_free;
	/* Free ram on this cycle of checking prefetch_suitable */
	unsigned long	prefetch_watermark;
	/* Maximum amount we will prefetch to */
	unsigned long	highfree[MAX_NR_ZONES];
	/* The amount of free ram before we start prefetching */
	unsigned long	lowfree[MAX_NR_ZONES];
	/* The amount of free ram where we will stop prefetching */
	unsigned long	*pointfree[MAX_NR_ZONES];
	/* highfree or lowfree depending on whether we've hit a watermark */
};

/*
 * prefetch_stats stores the free ram data of each node and this is used to
 * determine if a node is suitable for prefetching into.
 */
struct prefetch_stats {
	nodemask_t	prefetch_nodes;
	/* Which nodes are currently suited to prefetching */
	unsigned long	prefetched_pages;
	/* Total pages we've prefetched on this wakeup of kprefetchd */
	struct node_stats node[MAX_NUMNODES];
};

static struct prefetch_stats sp_stat;

/*
 * This tries to read a swp_entry_t into swap cache for swap prefetching.
 * If it returns TRICKLE_DELAY we should delay further prefetching.
 */
static enum trickle_return trickle_swap_cache_async(const swp_entry_t entry,
	const int node)
{
	enum trickle_return ret = TRICKLE_FAILED;
	struct page *page;

	read_lock_irq(&swapper_space.tree_lock);
	/* Entry may already exist */
	page = radix_tree_lookup(&swapper_space.page_tree, entry.val);
	read_unlock_irq(&swapper_space.tree_lock);
	if (page) {
		remove_from_swapped_list(entry.val);
		goto out;
	}

	/*
	 * Get a new page to read from swap. We have already checked the
	 * watermarks so __alloc_pages will not call on reclaim.
	 */
	page = alloc_pages_node(node, GFP_HIGHUSER & ~__GFP_WAIT, 0);
	if (unlikely(!page)) {
		ret = TRICKLE_DELAY;
		goto out;
	}

	if (add_to_swap_cache(page, entry)) {
		/* Failed to add to swap cache */
		goto out_release;
	}

	/* Add them to the tail of the inactive list to preserve LRU order */
	lru_cache_add_tail(page);
	if (unlikely(swap_readpage(NULL, page))) {
		ret = TRICKLE_DELAY;
		goto out_release;
	}

	sp_stat.prefetched_pages++;
	sp_stat.node[node].last_free--;

	ret = TRICKLE_SUCCESS;
out_release:
	page_cache_release(page);
out:
	return ret;
}

static void clear_last_prefetch_free(void)
{
	int node;

	/*
	 * Reset the nodes suitable for prefetching to all nodes. We could
	 * update the data to take into account memory hotplug if desired..
	 */
	sp_stat.prefetch_nodes = node_online_map;
	for_each_node_mask(node, sp_stat.prefetch_nodes) {
		struct node_stats *ns = &sp_stat.node[node];

		ns->last_free = 0;
	}
}

static void clear_current_prefetch_free(void)
{
	int node;

	sp_stat.prefetch_nodes = node_online_map;
	for_each_node_mask(node, sp_stat.prefetch_nodes) {
		struct node_stats *ns = &sp_stat.node[node];

		ns->current_free = 0;
	}
}

/*
 * This updates the high and low watermarks of amount of free ram in each
 * node used to start and stop prefetching. We prefetch from pages_high * 4
 * down to pages_high * 3.
 */
static void examine_free_limits(void)
{
	struct zone *z;

	for_each_zone(z) {
		struct node_stats *ns;
		int idx;

		if (!z->present_pages)
			continue;

		ns = &sp_stat.node[z->zone_pgdat->node_id];
		idx = zone_idx(z);
		ns->lowfree[idx] = z->pages_high * 3 + z->lowmem_reserve[idx];
		ns->highfree[idx] = ns->lowfree[idx] + z->pages_high;

		if (z->free_pages > ns->highfree[idx]) {
			/*
			 * We've gotten above the high watermark of free pages
			 * so we can start prefetching till we get to the low
			 * watermark.
			 */
			ns->pointfree[idx] = &ns->lowfree[idx];
		}
	}
}

/*
 * We want to be absolutely certain it's ok to start prefetching.
 */
static int prefetch_suitable(void)
{
	unsigned long limit;
	struct zone *z;
	int node, ret = 0, test_pagestate = 0;

	/* Purposefully racy */
	if (test_bit(0, &swapped.busy)) {
		__clear_bit(0, &swapped.busy);
		goto out;
	}

	/*
	 * get_page_state is super expensive so we only perform it every
	 * SWAP_CLUSTER_MAX prefetched_pages. We also test if we're the only
	 * task running anywhere. We want to have as little impact on all
	 * resources (cpu, disk, bus etc). As this iterates over every cpu
	 * we measure this infrequently.
	 */
	if (!(sp_stat.prefetched_pages % SWAP_CLUSTER_MAX)) {
		unsigned long cpuload = nr_running();

		if (cpuload > 1)
			goto out;
		cpuload += nr_uninterruptible();
		if (cpuload > 1)
			goto out;

		test_pagestate = 1;
	}

	clear_current_prefetch_free();

	/*
	 * Have some hysteresis between where page reclaiming and prefetching
	 * will occur to prevent ping-ponging between them.
	 */
	for_each_zone(z) {
		struct node_stats *ns;
		unsigned long free;
		int idx;

		if (!z->present_pages)
			continue;

		node = z->zone_pgdat->node_id;
		ns = &sp_stat.node[node];
		idx = zone_idx(z);

		free = z->free_pages;
		if (free < *ns->pointfree[idx]) {
			/*
			 * Free pages have dropped below the low watermark so
			 * we won't start prefetching again till we hit the
			 * high watermark of free pages.
			 */
			ns->pointfree[idx] = &ns->highfree[idx];
			node_clear(node, sp_stat.prefetch_nodes);
			continue;
		}
		ns->current_free += free;
	}

	/*
	 * We iterate over each node testing to see if it is suitable for
	 * prefetching and clear the nodemask if it is not.
	 */
	for_each_node_mask(node, sp_stat.prefetch_nodes) {
		struct node_stats *ns = &sp_stat.node[node];
		struct page_state ps;

		/*
		 * We check to see that pages are not being allocated
		 * elsewhere at any significant rate implying any
		 * degree of memory pressure (eg during file reads)
		 */
		if (ns->last_free) {
			if (ns->current_free + SWAP_CLUSTER_MAX <
				ns->last_free) {
					ns->last_free = ns->current_free;
					node_clear(node,
						sp_stat.prefetch_nodes);
					continue;
			}
		} else
			ns->last_free = ns->current_free;

		if (!test_pagestate)
			continue;

		get_page_state_node(&ps, node);

		/* We shouldn't prefetch when we are doing writeback */
		if (ps.nr_writeback) {
			node_clear(node, sp_stat.prefetch_nodes);
			continue;
		}

		/*
		 * >2/3 of the ram on this node is mapped, slab, swapcache or
		 * dirty, we need to leave some free for pagecache.
		 * Note that currently nr_slab is innacurate on numa because
		 * nr_slab is incremented on the node doing the accounting
		 * even if the slab is being allocated on a remote node. This
		 * would be expensive to fix and not of great significance.
		 */
		limit = ps.nr_mapped + ps.nr_slab + ps.nr_dirty +
			ps.nr_unstable + total_swapcache_pages;
		if (limit > ns->prefetch_watermark) {
			node_clear(node, sp_stat.prefetch_nodes);
			continue;
		}
	}

	if (nodes_empty(sp_stat.prefetch_nodes))
		goto out;

	/* Survived all that? Hooray we can prefetch! */
	ret = 1;
out:
	return ret;
}

/*
 * Get previous swapped entry when iterating over all entries. swapped.lock
 * should be held and we should already ensure that entry exists.
 */
static inline struct swapped_entry *prev_swapped_entry
	(struct swapped_entry *entry)
{
	return list_entry(entry->swapped_list.prev->prev,
		struct swapped_entry, swapped_list);
}

/*
 * trickle_swap is the main function that initiates the swap prefetching. It
 * first checks to see if the busy flag is set, and does not prefetch if it
 * is, as the flag implied we are low on memory or swapping in currently.
 * Otherwise it runs until prefetch_suitable fails which occurs when the
 * vm is busy, we prefetch to the watermark, or the list is empty or we have
 * iterated over all entries
 */
static enum trickle_return trickle_swap(void)
{
	enum trickle_return ret = TRICKLE_DELAY;
	struct swapped_entry *entry;

	/*
	 * If laptop_mode is enabled don't prefetch to avoid hard drives
	 * doing unnecessary spin-ups
	 */
	if (!swap_prefetch || laptop_mode)
		return ret;

	examine_free_limits();
	entry = NULL;

	for ( ; ; ) {
		swp_entry_t swp_entry;
		int node;

		if (!prefetch_suitable())
			break;

		spin_lock(&swapped.lock);
		if (list_empty(&swapped.list)) {
			ret = TRICKLE_FAILED;
			spin_unlock(&swapped.lock);
			break;
		}

		if (!entry) {
			/*
			 * This sets the entry for the first iteration. It
			 * also is a safeguard against the entry disappearing
			 * while the lock is not held.
			 */
			entry = list_entry(swapped.list.prev,
				struct swapped_entry, swapped_list);
		} else if (entry->swapped_list.prev == swapped.list.next) {
			/*
			 * If we have iterated over all entries and there are
			 * still entries that weren't swapped out there may
			 * be a reason we could not swap them back in so
			 * delay attempting further prefetching.
			 */
			spin_unlock(&swapped.lock);
			break;
		}

		node = get_swap_entry_node(entry);
		if (!node_isset(node, sp_stat.prefetch_nodes)) {
			/*
			 * We found an entry that belongs to a node that is
			 * not suitable for prefetching so skip it.
			 */
			entry = prev_swapped_entry(entry);
			spin_unlock(&swapped.lock);
			continue;
		}
		swp_entry = entry->swp_entry;
		entry = prev_swapped_entry(entry);
		spin_unlock(&swapped.lock);

		if (trickle_swap_cache_async(swp_entry, node) == TRICKLE_DELAY)
			break;
	}

	if (sp_stat.prefetched_pages) {
		lru_add_drain();
		sp_stat.prefetched_pages = 0;
	}
	return ret;
}

static int kprefetchd(void *__unused)
{
	set_user_nice(current, 19);
	/* Set ioprio to lowest if supported by i/o scheduler */
	sys_ioprio_set(IOPRIO_WHO_PROCESS, 0, IOPRIO_CLASS_IDLE);

	do {
		try_to_freeze();

		/*
		 * TRICKLE_FAILED implies no entries left - we do not schedule
		 * a wakeup, and further delay the next one.
		 */
		if (trickle_swap() == TRICKLE_FAILED) {
			set_current_state(TASK_INTERRUPTIBLE);
			schedule();
		}
		clear_last_prefetch_free();
		schedule_timeout_interruptible(PREFETCH_DELAY);
	} while (!kthread_should_stop());

	return 0;
}

/*
 * Create kmem cache for swapped entries
 */
void __init prepare_swap_prefetch(void)
{
	struct zone *zone;

	swapped.cache = kmem_cache_create("swapped_entry",
		sizeof(struct swapped_entry), 0, SLAB_PANIC, NULL, NULL);

	/*
	 * Set max number of entries to 2/3 the size of physical ram  as we
	 * only ever prefetch to consume 2/3 of the ram.
	 */
	swapped.maxcount = nr_free_pagecache_pages() / 3 * 2;

	for_each_zone(zone) {
		unsigned long present;
		struct node_stats *ns;
		int idx;

		present = zone->present_pages;
		if (!present)
			continue;

		ns = &sp_stat.node[zone->zone_pgdat->node_id];
		ns->prefetch_watermark += present / 3 * 2;
		idx = zone_idx(zone);
		ns->pointfree[idx] = &ns->highfree[idx];
	}
}

static int __init kprefetchd_init(void)
{
	kprefetchd_task = kthread_run(kprefetchd, NULL, "kprefetchd");

	return 0;
}

static void __exit kprefetchd_exit(void)
{
	kthread_stop(kprefetchd_task);
}

module_init(kprefetchd_init);
module_exit(kprefetchd_exit);
