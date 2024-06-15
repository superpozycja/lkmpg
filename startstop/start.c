/*
 * start.c
 */

/* notice the lack of init macros is this an oversight? may 2024 edition? */

#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

int init_module(void)
{
	pr_info("hi?\n");
	return 0;
}
