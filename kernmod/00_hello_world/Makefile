obj-m += hello-1.o
obj-m += hello-2.o
obj-m += hello-3.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
