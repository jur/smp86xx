/*********************************************************************
 Copyright (C) 2001-2007
 Sigma Designs, Inc. All Rights Reserved

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as
 published by the Free Software Foundation.
 *********************************************************************/

#include <linux/module.h>
#include "setup.h"

int em86xx_gpio_read(int gpio)
{
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if ((gpio >= 0) && (gpio < 16))
		return (gbus_readl(REG_BASE_system_block +
				   SYS_gpio_data) >> gpio) & 1;
	/* Upper 16 */
	return (gbus_readl(REG_BASE_host_interface +
			   ETH_gpio_data2) >> (gpio - 16)) & 1;
#else
	return (gbus_readl(REG_BASE_system_block + SYS_gpio_data) >> gpio) & 1;
#endif
}

void em86xx_gpio_write(int gpio, int data)
{
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if ((gpio >= 0) && (gpio < 16))
		gbus_writel(REG_BASE_system_block + SYS_gpio_data, data ?
			    GPIO_DATA_SET(gpio) : GPIO_DATA_CLEAR(gpio));
	else /* Upper 16 */
		gbus_writel(REG_BASE_host_interface + ETH_gpio_data2, data ?
			    GPIO_DATA_SET(gpio - 16) : GPIO_DATA_CLEAR(gpio - 16));
#else
	gbus_writel(REG_BASE_system_block + SYS_gpio_data,
		    data ? GPIO_DATA_SET(gpio) : GPIO_DATA_CLEAR(gpio));
#endif
}

void em86xx_gpio_setdirection(int gpio, int dir)
{
#if (defined(CONFIG_TANGO2) && (EM86XX_REVISION > 3)) || defined(CONFIG_TANGO3)
	if ((gpio >= 0) && (gpio < 16))
		gbus_writel(REG_BASE_system_block + SYS_gpio_dir, dir ?
			    GPIO_DIR_OUTPUT(gpio) : GPIO_DIR_INPUT(gpio));
	else /* Upper 16 */
		gbus_writel(REG_BASE_host_interface + ETH_gpio_dir2, dir ?
			    GPIO_DIR_OUTPUT(gpio - 16) : GPIO_DIR_INPUT(gpio - 16));
#else
	gbus_writel(REG_BASE_system_block + SYS_gpio_dir,
		    dir ? GPIO_DIR_OUTPUT(gpio) : GPIO_DIR_INPUT(gpio));
#endif
}

EXPORT_SYMBOL(em86xx_gpio_read);
EXPORT_SYMBOL(em86xx_gpio_write);
EXPORT_SYMBOL(em86xx_gpio_setdirection);

int em86xx_uart0_get_gpio_mode(void)
{
	return gbus_readl(REG_BASE_cpu_block + CPU_uart0_gpio_mode) & 0x7f;
}

int em86xx_uart0_set_gpio_mode(int mode)
{
	int old_mode = em86xx_uart0_get_gpio_mode();
	gbus_writel(REG_BASE_cpu_block + CPU_uart0_gpio_mode, 0x7f00 | (mode & 0x7f));
	return(old_mode);
}

int em86xx_uart0_gpio_read(int gpio)
{
	return (gbus_readl(REG_BASE_cpu_block + CPU_uart0_gpio_data) >> gpio) & 1;
}

void em86xx_uart0_gpio_write(int gpio, int data)
{
	gbus_writel(REG_BASE_cpu_block + CPU_uart0_gpio_data,
			data ? UART_GPIO_DATA_SET(gpio) : UART_GPIO_DATA_CLEAR(gpio));
}

void em86xx_uart0_gpio_setdirection(int gpio, int dir)
{
	gbus_writel(REG_BASE_cpu_block + CPU_uart0_gpio_dir,
			dir ? UART_GPIO_DIR_OUTPUT(gpio) : UART_GPIO_DIR_INPUT(gpio));
}

int em86xx_uart1_get_gpio_mode(void)
{
	return gbus_readl(REG_BASE_cpu_block + CPU_uart1_gpio_mode) & 0x7f;
}

int em86xx_uart1_set_gpio_mode(int mode)
{
	int old_mode = em86xx_uart1_get_gpio_mode();
	gbus_writel(REG_BASE_cpu_block + CPU_uart1_gpio_mode, 0x7f00 | (mode & 0x7f));
	return(old_mode);
}

int em86xx_uart1_gpio_read(int gpio)
{
	return (gbus_readl(REG_BASE_cpu_block + CPU_uart1_gpio_data) >> gpio) & 1;
}

void em86xx_uart1_gpio_write(int gpio, int data)
{
	gbus_writel(REG_BASE_cpu_block + CPU_uart1_gpio_data,
			data ? UART_GPIO_DATA_SET(gpio) : UART_GPIO_DATA_CLEAR(gpio));
}

void em86xx_uart1_gpio_setdirection(int gpio, int dir)
{
	gbus_writel(REG_BASE_cpu_block + CPU_uart1_gpio_dir,
			dir ? UART_GPIO_DIR_OUTPUT(gpio) : UART_GPIO_DIR_INPUT(gpio));
}

EXPORT_SYMBOL(em86xx_uart0_gpio_read);
EXPORT_SYMBOL(em86xx_uart0_gpio_write);
EXPORT_SYMBOL(em86xx_uart0_gpio_setdirection);
EXPORT_SYMBOL(em86xx_uart1_gpio_read);
EXPORT_SYMBOL(em86xx_uart1_gpio_write);
EXPORT_SYMBOL(em86xx_uart1_gpio_setdirection);

