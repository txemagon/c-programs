#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("txema.gonz@gmail.com");

static int short my_short = 1;
static int my_int = 420;
static long int my_long = 9999;
static char *my_string = "blah";
static int my_int_array[2] = {-1, -1};
static int arr_argc = 0;

module_param(my_short, short, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP );
MODULE_PARM_DESC(my_short, "A short integer");
module_param(my_int, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH );
MODULE_PARM_DESC(my_int, "An integer");
module_param(my_long, long, S_IRUSR);
MODULE_PARM_DESC(my_long, "A long integer");
module_param(my_string, charp, 0000);
MODULE_PARM_DESC(my_string, " A character string");

module_param_array(my_int_array, int, &arr_argc, 0000);
MODULE_PARM_DESC(my_int_array, "An array of integers.");

static int __init hello_5_init(void) {
    int i;
    printk( KERN_INFO 
            "Hello, world\n"
            "============\n"
          );
    printk( KERN_INFO "my_short is a short integer: %hd\n", my_short );
    printk( KERN_INFO "my_int is an integer: %d\n", my_int );
    printk( KERN_INFO "my_long is a long integer: %ld\n", my_long );
    printk( KERN_INFO "my_string is a string: %s\n", my_string );

    for (i=0; i<(sizeof my_int_array / sizeof(int)); i++)
        printk( KERN_INFO "my_int_array[%d] = %d\n", i, my_int_array[i] );

    return 0;
}


void __exit hello_5_exit(void) {
    printk( KERN_INFO "Goodbye world 5\n" );
}

module_init(hello_5_init);
module_exit(hello_5_exit);

/* Try:
 * insmod hello-5.ko my_string="supercalifragilisticexpialidocious" my_byte=255 my_int_array=-1
 * insmod hello-5.ko my_string="supercalifragilisticexpialidocious" my_byte=255 my_int_array=-1,1
 */
