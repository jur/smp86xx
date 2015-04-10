/*
 * $Id: physmap.c,v 1.39 2005/11/29 14:49:36 gleixner Exp $
 *
 * Normal mappings of chips in physical memory
 *
 * Copyright (C) 2003 MontaVista Software Inc.
 * Author: Jun Sun, jsun@mvista.com or jsun@junsun.net
 *
 * 031022 - [jsun] add run-time configure and partition setup
 */

#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <asm/io.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/map.h>
#include <linux/config.h>
#include <linux/mtd/partitions.h>
#include <linux/mtd/physmap.h>

#if defined(CONFIG_TANGOX) && defined(CONFIG_TANGOX_XENV_READ)

#ifdef CONFIG_TANGO2
#include <asm/tango2/emhwlib_registers_tango2.h>
#include <asm/tango2/tango2_gbus.h>
#elif defined(CONFIG_TANGO3)
#include <asm/tango3/emhwlib_registers_tango3.h>
#include <asm/tango3/tango3_gbus.h>
#endif

#define XENV_MAX_FLASH    4
#define XENV_MAX_FLASH_PARTITIONS   16
static struct mtd_info *mymtds[XENV_MAX_FLASH] = { NULL, NULL, NULL, NULL };
static struct mtd_partition *mtd_parts[XENV_MAX_FLASH] = { NULL, NULL, NULL, NULL };
static unsigned int p_cnts[XENV_MAX_FLASH] = { 0, 0, 0, 0 };
static unsigned int f_sizes[XENV_MAX_FLASH] = { 0, 0, 0, 0 };

struct map_info physmap_maps[XENV_MAX_FLASH] = {
	{
		.name = "CS0: Physically mapped flash",
		.phys = 0x40000000,
		.size = 0, /* To be filled by XENV */
		.bankwidth = 2, /* To be checked by PBI registers */
	},
	{
		.name = "CS1: Physically mapped flash",
		.phys = 0x44000000,
		.size = 0, /* To be filled by XENV */
		.bankwidth = 2, /* To be checked by PBI registers */
	},
	{
		.name = "CS2: Physically mapped flash",
		.phys = 0x48000000,
		.size = 0, /* To be filled by XENV */
		.bankwidth = 2, /* To be checked by PBI registers */
	},
	{
		.name = "CS3: Physically mapped flash",
		.phys = 0x4c000000,
		.size = 0, /* To be filled by XENV */
		.bankwidth = 2, /* To be checked by PBI registers */
	},
};
int tangox_flash_get_info(int cs, unsigned int *size, unsigned int *part_count);
int tangox_flash_get_parts(int cs, unsigned int offset[], unsigned int size[]);
#else
static struct mtd_info *mymtd;

struct map_info physmap_map = {
	.name = "phys_mapped_flash",
	.phys = CONFIG_MTD_PHYSMAP_START,
	.size = CONFIG_MTD_PHYSMAP_LEN,
	.bankwidth = CONFIG_MTD_PHYSMAP_BANKWIDTH,
};

#ifdef CONFIG_MTD_PARTITIONS
static struct mtd_partition *mtd_parts;
static int                   mtd_parts_nb;

static int num_physmap_partitions;
static struct mtd_partition *physmap_partitions;

static const char *part_probes[] __initdata = {"cmdlinepart", "RedBoot", NULL};

void physmap_set_partitions(struct mtd_partition *parts, int num_parts)
{
	physmap_partitions=parts;
	num_physmap_partitions=num_parts;
}
#endif /* CONFIG_MTD_PARTITIONS */
#endif /* CONFIG_TANGOX && CONFIG_TANGOX_XENV_READ */

static int __init init_physmap(void)
{
	static const char *rom_probe_types[] = { "cfi_probe", "jedec_probe", "map_rom", NULL };
	const char **type;

#if defined(CONFIG_TANGOX) && defined(CONFIG_TANGOX_XENV_READ)
	int cs;
	int part_num = 0;
	unsigned long csconfig = gbus_read_uint32(pGBus, REG_BASE_host_interface + PB_CS_config) & 0xf;

	for (cs = 0; cs < XENV_MAX_FLASH; cs++) {
		
		/* Check XENV for availability */
		f_sizes[cs] = p_cnts[cs] = 0;

		tangox_flash_get_info(cs, &f_sizes[cs], &p_cnts[cs]);
		if (f_sizes[cs] == 0)
			continue;
		else {
			physmap_maps[cs].size = f_sizes[cs];
			physmap_maps[cs].bankwidth = ((csconfig >> cs) & 0x1) ? 1 : 2;
		}

		printk(KERN_NOTICE "physmap flash device CS%d: %lx at %lx\n", 
				cs, physmap_maps[cs].size, physmap_maps[cs].phys);
		physmap_maps[cs].virt = ioremap(physmap_maps[cs].phys, physmap_maps[cs].size);

		if (!physmap_maps[cs].virt) {
			printk("Failed to ioremap\n");
			continue;
		}

		simple_map_init(&physmap_maps[cs]);

		mymtds[cs] = NULL;
		type = rom_probe_types;
		for(; !mymtds[cs] && *type; type++) {
			mymtds[cs] = do_map_probe(*type, &physmap_maps[cs]);
		}

		if (mymtds[cs] && (mymtds[cs]->size != f_sizes[cs])) { 
			/* Redo ioremap if size specified is not the same as detected */ 
			iounmap((void *)physmap_maps[cs].virt);
			physmap_maps[cs].size = mymtds[cs]->size;
			physmap_maps[cs].virt = ioremap(physmap_maps[cs].phys, physmap_maps[cs].size);

			if (!physmap_maps[cs].virt) { 
				printk(KERN_NOTICE "Failed to ioremap at 0x%08lx, size 0x%08lx\n", 
						physmap_maps[cs].phys, physmap_maps[cs].size);
				continue;
			} 
			printk(KERN_NOTICE "CS%d: flash size mismatched, re-do probing/initialization.\n", cs);
			printk(KERN_NOTICE "physmap flash device CS%d: %lx at %lx (remapped %x)\n", 
					cs, physmap_maps[cs].size, physmap_maps[cs].phys, (u32)physmap_maps[cs].virt);

			/* Re-do initialization */
			simple_map_init(&physmap_maps[cs]);
			mymtds[cs] = NULL;
			type = rom_probe_types;
			for(; !mymtds[cs] && *type; type++) {
				mymtds[cs] = do_map_probe(*type, &physmap_maps[cs]);
			}
		}

		if (mymtds[cs]) {
			mymtds[cs]->owner = THIS_MODULE;
			add_mtd_device(mymtds[cs]);
			part_num++;

#ifdef CONFIG_MTD_PARTITIONS
			if (p_cnts[cs] > 0) {
				int p, pcnt;
				struct mtd_partition *part_ptr;
				unsigned int offsets[XENV_MAX_FLASH_PARTITIONS];
				unsigned int szs[XENV_MAX_FLASH_PARTITIONS];

				if ((mtd_parts[cs] = (struct mtd_partition *)kmalloc(
						sizeof(struct mtd_partition) * p_cnts[cs], GFP_KERNEL)) == NULL) {
					printk(KERN_NOTICE "Out of memory.\n");
					return -ENOMEM;
				}
				memset(mtd_parts[cs], 0, sizeof(struct mtd_partition) * p_cnts[cs]);
				tangox_flash_get_parts(cs, offsets, szs);

				printk(KERN_NOTICE "Using physmap partition definition\n");

				/* Initialize each partition */
				for (pcnt = 0, part_ptr = mtd_parts[cs], p = 0; p < p_cnts[cs]; p++) {
					if (((szs[p] & 0x7fffffff) + offsets[p]) > physmap_maps[cs].size) {
						printk(KERN_NOTICE "CS%d-Part%d (offset:0x%x, size:0x%x) outside physical map, removed.\n", 
								cs, p + 1, offsets[p], szs[p] & 0x7fffffff);
							continue;
					}
					part_ptr->size = szs[p] & 0x7fffffff;
					part_ptr->offset = offsets[p];
					if (part_ptr->size & 0x80000000)
						part_ptr->mask_flags = MTD_WRITEABLE;
					part_ptr->name = (char *)kmalloc(16, GFP_KERNEL); 
					if (part_ptr->name != NULL) 
						sprintf(part_ptr->name, "CS%d-Part%d", cs, p + 1);
					pcnt++;
					part_ptr++;
				}
				p_cnts[cs] = pcnt;

				if (p_cnts[cs] > 0) {
					printk(KERN_NOTICE "Adding partition #%d-#%d\n", part_num, part_num + p_cnts[cs] - 1);
					add_mtd_partitions(mymtds[cs], mtd_parts[cs], p_cnts[cs]);
					part_num += p_cnts[cs];
				}
			}
#endif
		}
	}
	return 0;
#else
       	printk(KERN_NOTICE "physmap flash device: %lx at %lx\n", physmap_map.size, physmap_map.phys);
	physmap_map.virt = ioremap(physmap_map.phys, physmap_map.size);

	if (!physmap_map.virt) {
		printk("Failed to ioremap\n");
		return -EIO;
	}

	simple_map_init(&physmap_map);

	mymtd = NULL;
	type = rom_probe_types;
	for(; !mymtd && *type; type++) {
		mymtd = do_map_probe(*type, &physmap_map);
	}
	if (mymtd) {
		mymtd->owner = THIS_MODULE;

#ifdef CONFIG_MTD_PARTITIONS
		mtd_parts_nb = parse_mtd_partitions(mymtd, part_probes,
						    &mtd_parts, 0);

		if (mtd_parts_nb > 0)
		{
			add_mtd_partitions (mymtd, mtd_parts, mtd_parts_nb);
			return 0;
		}

		if (num_physmap_partitions != 0)
		{
			printk(KERN_NOTICE
			       "Using physmap partition definition\n");
			add_mtd_partitions (mymtd, physmap_partitions, num_physmap_partitions);
			return 0;
		}

#endif
		add_mtd_device(mymtd);

		return 0;
	}

	iounmap(physmap_map.virt);
	return -ENXIO;
#endif /* CONFIG_TANGOX && CONFIG_TANGOX_XENV_READ */
}

static void __exit cleanup_physmap(void)
{
#if defined(CONFIG_TANGOX) && defined(CONFIG_TANGOX_XENV_READ)
	int cs, p;
	struct mtd_partition *part_ptr;

	for (cs = 0; cs < XENV_MAX_FLASH; cs++) {
		if (f_sizes[cs] != 0) {
			if (p_cnts[cs] != 0) {
				for (part_ptr = mtd_parts[cs], p = 0; p < p_cnts[cs]; p++, part_ptr++) {
					if (part_ptr->name) {
						kfree(part_ptr->name);
						part_ptr->name = NULL;
					}
				}
				del_mtd_partitions(mymtds[cs]);
				kfree(mtd_parts[cs]);
				mtd_parts[cs] = NULL;
			}
			del_mtd_device(mymtds[cs]);
			map_destroy(mymtds[cs]);
			iounmap(physmap_maps[cs].virt);
			physmap_maps[cs].virt = NULL;
		}
	}
#else
#ifdef CONFIG_MTD_PARTITIONS
	if (mtd_parts_nb) {
		del_mtd_partitions(mymtd);
		kfree(mtd_parts);
	} else if (num_physmap_partitions) {
		del_mtd_partitions(mymtd);
	} else {
		del_mtd_device(mymtd);
	}
#else
	del_mtd_device(mymtd);
#endif
	map_destroy(mymtd);

	iounmap(physmap_map.virt);
	physmap_map.virt = NULL;
#endif /* CONFIG_TANGOX && CONFIG_TANGOX_XENV_READ */
}

module_init(init_physmap);
module_exit(cleanup_physmap);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Generic configurable MTD map driver");
