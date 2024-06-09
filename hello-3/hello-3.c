/*
 * hello-3.c
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int hello3_data __initdata = 3;
static int hello3_data2 __exitdata = 3;

static int __init hello_3_init(void)
{
	pr_info("hi %d\n", hello3_data);
	return 0;
}

static void __exit hello_3_exit(void)
{
	pr_info("bye %d\n", hello3_data2);
}

module_init(hello_3_init);
module_exit(hello_3_exit);

MODULE_LICENSE("GPL");
