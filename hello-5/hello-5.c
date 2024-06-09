/*
 * hello-5.c
 */

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("superpozycja");
MODULE_DESCRIPTION("moduleparam demonstration");

static short int myshort = 1;
static int myint = 420;
static long int mylong = 2137;
static char *mystring = "hejka naklejka";

static int myintarray[2] = {420, 69};
static int arr_argc = 2;

module_param(myshort, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myshort, "short integer");

module_param(myint, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(myint, "an int");

module_param(mylong, long, S_IRUSR);
MODULE_PARM_DESC(mylong, "some long integer");

module_param(mystring, charp, 0000);
MODULE_PARM_DESC(mystring, "some char string");

module_param_array(myintarray, int, &arr_argc, 0000);
MODULE_PARM_DESC(myintarray, "int array !!");

static int __init hello_5_init(void)
{
	int i;
	
	pr_info("hi hi hi hi !!\n--------------\n");
	pr_info("myshort is a short: %hd\n", myshort);
	pr_info("myint is an int: %d\n", myint);
	pr_info("mylong is, well, a long: %ld\n", mylong);
	pr_info("you wouldn't believe what mystring is: %s\n", mystring);

	for(i = 0; i < ARRAY_SIZE(myintarray); i++) {
		pr_info("myintarray[%d] = %d\n", i, myintarray[i]);
	}

	pr_info("myintarray has %d ints\n", arr_argc);
	return 0;
}

static void __exit hello_5_exit(void)
{
	pr_info("bye.....................\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);
