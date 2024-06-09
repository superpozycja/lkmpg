/*
 * stop.c
 */

#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module(void)
{
	pr_info("bye bye...\n");
}
