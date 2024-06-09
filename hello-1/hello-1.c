/*
 * hello-1.c- yeah yeah whatever
 */

#include <linux/module.h>
#include <linux/printk.h>

int init_module(void)
{
	pr_info("hi hi\n");
	return 0;
}

void cleanup_module(void)
{
	pr_info("bye bye\n");
}

MODULE_LICENSE("GPL");
