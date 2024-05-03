#define MODULE
#define LINUX

#include <linux/module.h>
#include <linux/kernel.h>

static int helloWorld(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;
}

static void goodbyeWorld(void)
{
    printk(KERN_INFO "Goodbye world!\n");
}

module_init(helloWorld);
module_exit(goodbyeWorld);
MODULE_LICENSE("GPL");
