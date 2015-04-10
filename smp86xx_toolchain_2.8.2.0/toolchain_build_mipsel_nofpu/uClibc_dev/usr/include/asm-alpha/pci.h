#ifndef __ALPHA_PCI_H
#define __ALPHA_PCI_H

/* Values for the `which' argument to sys_pciconfig_iobase.  */
#define IOBASE_HOSE             0
#define IOBASE_SPARSE_MEM       1
#define IOBASE_DENSE_MEM        2
#define IOBASE_SPARSE_IO        3
#define IOBASE_DENSE_IO         4
#define IOBASE_ROOT_BUS         5
#define IOBASE_FROM_HOSE        0x10000

#endif /* __ALPHA_PCI_H */
