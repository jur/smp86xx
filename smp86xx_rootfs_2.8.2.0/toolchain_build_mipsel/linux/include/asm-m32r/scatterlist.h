#ifndef _ASM_M32R_SCATTERLIST_H
#define _ASM_M32R_SCATTERLIST_H

/* $Id: scatterlist.h 5224 2004-10-21 15:15:40Z mmazur $ */

struct scatterlist {
    char *  address;    /* Location data is to be transferred to, NULL for
                         * highmem page */
    struct page * page; /* Location for highmem page, if any */
    unsigned int offset;/* for highmem, page offset */

    dma_addr_t dma_address;
    unsigned int length;
};

#define ISA_DMA_THRESHOLD (0x1fffffff)

#endif /* _ASM_M32R_SCATTERLIST_H */
