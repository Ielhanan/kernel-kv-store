#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Elhanan");
MODULE_DESCRIPTION("A Simple In-Memory Key-Value Store Driver");
MODULE_VERSION("0.1");

static int __init kv_store_init(void) {
    printk(KERN_INFO "Kernel-KV: Module loaded successfully. Hello Nvidia!\n");
    return 0;
}

static void __exit kv_store_exit(void) {
    printk(KERN_INFO "Kernel-KV: Module unloaded. Goodbye.\n");
}

module_init(kv_store_init);
module_exit(kv_store_exit);
