#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init bw_hello_driver_init(void)
{
	printk("hello bing wang fuc = %s , line = %d\n", __func__, __LINE__);
	printk("This is my first driver\n");
	return 0;
}

static void __exit bw_hello_driver_exit(void)
{
	printk("bw_hello_driver_exit exit\n");
}

module_init(bw_hello_driver_init);
module_exit(bw_hello_driver_exit);
