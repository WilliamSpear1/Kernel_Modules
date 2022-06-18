/*
 * hello-4.c -> Demonstrates module documentation
 */

#include <linux/init.h>   /* Needed for the macros */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO  */
#define DRIVER_AUTHOR "William Spearman <williamspearman12@gmail.com>" 
#define DRIVER_DESC   "A sample driver" 
#define DRIVER_DEVICE "DEVICE"

static int __init init_hello_4(void) {
    printk(KERN_INFO "Hello, World 4\n");
    return 0;
}

static void __exit cleanup_hello_4(void) {
    printk(KERN_INFO "Goodbye world 4\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/*
 *  You can use strings, like this
 */

/*
 *  Get rid of taint message by declaring code ad GPL.
 */

MODULE_LICENSE("GPL");

/*
 *  Or with defines, like this:
 */

MODULE_AUTHOR(DRIVER_AUTHOR);    /*Who wrote this module? */
MODULE_DESCRIPTION(DRIVER_DESC); /*What does this module do */

/*
 *  This module uses /dev/testdevice. The MODULE_SUPPORTED_DEVICE macro might
 *  be used in the future to help automatic configuration of modules, but is
 *  currently unused other than for documentation purposes.
 */
