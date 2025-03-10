#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xn/Linux");
MODULE_DESCRIPTION("A hello world LKM");

static int __init my_init(void) {
    	printk("Hello, Kernel!\n");
    	return 0;
}

static void __exit my_exit(void) {
    	printk("Goodbye, Kernel\n");
}

module_init(my_init);
module_exit(my_exit);
