/*
 *  start.c - Illustration of multiple filed modules
 */

#include <linux/kernel.h> /*We're doing kernel work */
#include <linux/module.h> /* Specifically, a module */

MODULE_LICENSE("GPL");

int init_mdoule(void) {
    printk(KERN_INFO "Hello, World -> this is the kernel speaking\n");
    return 0;
}
