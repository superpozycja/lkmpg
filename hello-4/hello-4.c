/*
 * hello-4.c
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("superpozycja");
MODULE_DESCRIPTION("sample module from da book");

static int __init init_hello_4(void)
{
	pr_info("hi....\n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	pr_info("bye.....\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);
