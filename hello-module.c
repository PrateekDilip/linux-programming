/*
 * This is the simplest kernel module for the demonstration
 * purpose
 */
#include <linux/module.h>
#include <linux/kernel.h>

int init_module (void) {
    printk(KERN_INFO, "Hello World\n");
    return 0; /* returning 0 is success */
}

void cleanup_module (void) {
    printk(KERN_INFO, "Goodbye world\n");
}
