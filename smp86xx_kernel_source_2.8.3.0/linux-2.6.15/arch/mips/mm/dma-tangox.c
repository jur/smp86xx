/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 Sigma Designs, inc.
 * Copyright (C) 2000  Ani Joshi <ajoshi@unixbox.com>
 * Copyright (C) 2000, 2001  Ralf Baechle <ralf@gnu.org>
 * swiped from i386, and cloned for MIPS by Geert, polished by Ralf.
 */
#include <linux/config.h>
#include <linux/types.h>
#include <linux/mm.h>
#include <linux/module.h>
#include <linux/string.h>
#include <linux/dma-mapping.h>
#include <linux/pci.h>

#include <asm/cache.h>
#include <asm/io.h>

#ifdef CONFIG_TANGO2
#include <asm/tango2/hardware.h>
#elif defined(CONFIG_TANGO3)
#include <asm/tango3/hardware.h>
#endif

extern unsigned long g_pcimem_busaddr;
extern unsigned long g_pcimem_physaddr;
extern unsigned long g_pcimem_physaddr_end;

#ifdef CONFIG_PCI
#define IS_PCIDEV(x)	((x)->bus == &pci_bus_type)
#else
#define IS_PCIDEV(x)	0
#endif


#ifdef CONFIG_PCI
static inline unsigned long __pci_virt_to_bus(unsigned long addr)
{
	if ((CPHYSADDR(addr) < g_pcimem_physaddr) ||
	    (CPHYSADDR(addr) >= g_pcimem_physaddr_end))
		printk("virt2bus: Not a dma-able address: 0x%08lx\n", addr);
	return((unsigned long)(CPHYSADDR(addr) - g_pcimem_physaddr +
			       g_pcimem_busaddr));
}

static inline unsigned long __pci_bus_to_virt(unsigned long addr)
{
	if ((addr < g_pcimem_busaddr) ||
	    (addr >= (g_pcimem_busaddr +
		      (g_pcimem_physaddr_end - g_pcimem_physaddr))))
		printk("bus2virt: Not a valid bus address: 0x%08lx\n",
		       addr);
	return((unsigned long)(addr - g_pcimem_busaddr +
			       g_pcimem_physaddr + UNCAC_BASE));
}
#else
static inline unsigned long __pci_virt_to_bus(unsigned long addr)
{
	return(addr);
}

static inline unsigned long __pci_bus_to_virt(unsigned long addr)
{
	return(addr);
}
#endif

unsigned long pci_virt_to_bus(unsigned long addr)
{
	return __pci_virt_to_bus(addr);
}
EXPORT_SYMBOL(pci_virt_to_bus);

unsigned long pci_bus_to_virt(unsigned long addr)
{
	return __pci_bus_to_virt(addr);
}
EXPORT_SYMBOL(pci_bus_to_virt);
 

/*
 * Warning on the terminology - Linux calls an uncached area coherent;
 * MIPS terminology calls memory areas with hardware maintained coherency
 * coherent.
 */

void *dma_alloc_noncoherent(struct device *dev, size_t size,
	dma_addr_t * dma_handle, gfp_t gfp)
{
	void *ret;
	/* ignore region specifiers */
	gfp &= ~(__GFP_DMA | __GFP_HIGHMEM);

	// if (dev == NULL || (dev->coherent_dma_mask < 0xffffffff))
	//	gfp |= GFP_DMA;
	ret = (void *) __get_free_pages(gfp | __GFP_DMA, get_order(size));

	if (ret != NULL) {
		memset(ret, 0, size);
		if (IS_PCIDEV(dev))
			*dma_handle = __pci_virt_to_bus((unsigned long)ret);
		else
			*dma_handle = tangox_dma_address(CPHYSADDR(ret));
	}

	return ret;
}

EXPORT_SYMBOL(dma_alloc_noncoherent);

void *dma_alloc_coherent(struct device *dev, size_t size,
	dma_addr_t * dma_handle, gfp_t gfp)
{
	void *ret;

	ret = dma_alloc_noncoherent(dev, size, dma_handle, gfp);
	if (ret) {
		dma_cache_wback_inv((unsigned long) ret, size);
		ret = UNCAC_ADDR(ret);
	}

	return ret;
}

EXPORT_SYMBOL(dma_alloc_coherent);

void dma_free_noncoherent(struct device *dev, size_t size, void *vaddr,
	dma_addr_t dma_handle)
{
	free_pages((unsigned long) vaddr, get_order(size));
}

EXPORT_SYMBOL(dma_free_noncoherent);

void dma_free_coherent(struct device *dev, size_t size, void *vaddr,
	dma_addr_t dma_handle)
{
	unsigned long addr = (unsigned long) vaddr;

	addr = CAC_ADDR(addr);
//	dma_cache_inv(addr, size);
	free_pages(addr, get_order(size));
}

EXPORT_SYMBOL(dma_free_coherent);

static inline void __dma_sync(unsigned long addr, size_t size,
	enum dma_data_direction direction)
{
	switch (direction) {
	case DMA_TO_DEVICE:
		dma_cache_wback(addr, size);
		break;

	case DMA_FROM_DEVICE:
		dma_cache_inv(addr, size);
		break;

	case DMA_BIDIRECTIONAL:
		dma_cache_wback_inv(addr, size);
		break;

	default:
		BUG();
	}
}

dma_addr_t dma_map_single(struct device *dev, void *ptr, size_t size,
	enum dma_data_direction direction)
{
	unsigned long addr = (unsigned long) ptr;

	__dma_sync(addr, size, direction);

	if (IS_PCIDEV(dev)) {
		return __pci_virt_to_bus(addr);
	}
	return tangox_dma_address(CPHYSADDR(ptr));
}

EXPORT_SYMBOL(dma_map_single);

void dma_unmap_single(struct device *dev, dma_addr_t dma_addr, size_t size,
	enum dma_data_direction direction)
{
	unsigned long addr;

	if (IS_PCIDEV(dev)) {
		addr = CAC_ADDR(__pci_bus_to_virt(dma_addr));
	} else {
		addr = tangox_inv_dma_address(dma_addr) + PAGE_OFFSET;
	}
	//__dma_sync(addr, size, direction);
}

EXPORT_SYMBOL(dma_unmap_single);

int dma_map_sg(struct device *dev, struct scatterlist *sg, int nents,
	enum dma_data_direction direction)
{
	int i;

	BUG_ON(direction == DMA_NONE);

	for (i = 0; i < nents; i++, sg++) {
		unsigned long addr;

		addr = (unsigned long) page_address(sg->page);
		if (addr) {
			__dma_sync(addr + sg->offset, sg->length, direction);
			if (IS_PCIDEV(dev)) {
				sg->dma_address =
					__pci_virt_to_bus(page_to_phys(sg->page) + sg->offset);
			} else {
				sg->dma_address =
					tangox_dma_address((dma_addr_t)page_to_phys(sg->page) +
							sg->offset);
			}
		}
	}

	return nents;
}

EXPORT_SYMBOL(dma_map_sg);

dma_addr_t dma_map_page(struct device *dev, struct page *page,
	unsigned long offset, size_t size, enum dma_data_direction direction)
{
	unsigned long addr;

	BUG_ON(direction == DMA_NONE);

	addr = (unsigned long) page_address(page) + offset;
	dma_cache_wback_inv(addr, size);

	if (IS_PCIDEV(dev))
		return __pci_virt_to_bus(page_to_phys(page)) + offset;
	return tangox_dma_address(page_to_phys(page) + offset);
}

EXPORT_SYMBOL(dma_map_page);

void dma_unmap_page(struct device *dev, dma_addr_t dma_address, size_t size,
	enum dma_data_direction direction)
{
	BUG_ON(direction == DMA_NONE);

	if (direction != DMA_TO_DEVICE) {
		unsigned long addr;

		if (IS_PCIDEV(dev)) {
			addr = CAC_ADDR(__pci_bus_to_virt(dma_address));
		} else {
			addr = tangox_inv_dma_address(dma_address) + PAGE_OFFSET;
		}
		dma_cache_wback_inv(addr, size);
	}
}

EXPORT_SYMBOL(dma_unmap_page);

void dma_unmap_sg(struct device *dev, struct scatterlist *sg, int nhwentries,
	enum dma_data_direction direction)
{
	unsigned long addr;
	int i;

	BUG_ON(direction == DMA_NONE);

	if (direction == DMA_TO_DEVICE)
		return;

	for (i = 0; i < nhwentries; i++, sg++) {
		addr = (unsigned long) page_address(sg->page);
		if (addr)
			__dma_sync(addr + sg->offset, sg->length, direction);
	}
}

EXPORT_SYMBOL(dma_unmap_sg);

void dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle,
	size_t size, enum dma_data_direction direction)
{
	unsigned long addr;

	BUG_ON(direction == DMA_NONE);

	if (IS_PCIDEV(dev)) {
		addr = CAC_ADDR(__pci_bus_to_virt((unsigned long)dma_handle));
	} else {
		addr = tangox_inv_dma_address(dma_handle) + PAGE_OFFSET;
	}
	__dma_sync(addr, size, direction);
}

EXPORT_SYMBOL(dma_sync_single_for_cpu);

void dma_sync_single_for_device(struct device *dev, dma_addr_t dma_handle,
	size_t size, enum dma_data_direction direction)
{
	unsigned long addr;

	BUG_ON(direction == DMA_NONE);

	if (IS_PCIDEV(dev)) {
		addr = CAC_ADDR(__pci_bus_to_virt((unsigned long)dma_handle));
	} else {
		addr = tangox_inv_dma_address(dma_handle) + PAGE_OFFSET;
	}
	__dma_sync(addr, size, direction);
}

EXPORT_SYMBOL(dma_sync_single_for_device);

void dma_sync_single_range_for_cpu(struct device *dev, dma_addr_t dma_handle,
	unsigned long offset, size_t size, enum dma_data_direction direction)
{
	unsigned long addr;

	BUG_ON(direction == DMA_NONE);

	if (IS_PCIDEV(dev)) {
		addr = CAC_ADDR(__pci_bus_to_virt((unsigned long)dma_handle) + offset);
	} else {
		addr = tangox_inv_dma_address(dma_handle) + offset + PAGE_OFFSET;
	}
	__dma_sync(addr, size, direction);
}

EXPORT_SYMBOL(dma_sync_single_range_for_cpu);

void dma_sync_single_range_for_device(struct device *dev, dma_addr_t dma_handle,
	unsigned long offset, size_t size, enum dma_data_direction direction)
{
	unsigned long addr;

	BUG_ON(direction == DMA_NONE);

	if (IS_PCIDEV(dev)) {
		addr = CAC_ADDR(__pci_bus_to_virt((unsigned long)dma_handle) + offset);
	} else {
		addr = tangox_inv_dma_address(dma_handle) + offset + PAGE_OFFSET;
	}
	__dma_sync(addr, size, direction);
}

EXPORT_SYMBOL(dma_sync_single_range_for_device);

void dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg, int nelems,
	enum dma_data_direction direction)
{
	int i;

	BUG_ON(direction == DMA_NONE);

	/* Make sure that gcc doesn't leave the empty loop body.  */
	for (i = 0; i < nelems; i++, sg++)
		__dma_sync((unsigned long)page_address(sg->page),
		           sg->length, direction);
}

EXPORT_SYMBOL(dma_sync_sg_for_cpu);

void dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg, int nelems,
	enum dma_data_direction direction)
{
	int i;

	BUG_ON(direction == DMA_NONE);

	/* Make sure that gcc doesn't leave the empty loop body.  */
	for (i = 0; i < nelems; i++, sg++)
		__dma_sync((unsigned long)page_address(sg->page),
		           sg->length, direction);
}

EXPORT_SYMBOL(dma_sync_sg_for_device);

int dma_mapping_error(dma_addr_t dma_addr)
{
	return 0;
}

EXPORT_SYMBOL(dma_mapping_error);

int dma_supported(struct device *dev, u64 mask)
{
	/*
	 * we fall back to GFP_DMA when the mask isn't all 1s,
	 * so we can't guarantee allocations that must be
	 * within a tighter range than GFP_DMA..
	 */
	if (mask < 0x00ffffff)
		return 0;

	return 1;
}

EXPORT_SYMBOL(dma_supported);

int dma_is_consistent(dma_addr_t dma_addr)
{
	return 1;
}

EXPORT_SYMBOL(dma_is_consistent);

void dma_cache_sync(void *vaddr, size_t size, enum dma_data_direction direction)
{
	if (direction == DMA_NONE)
		return;

	dma_cache_wback_inv((unsigned long)vaddr, size);
}

EXPORT_SYMBOL(dma_cache_sync);
