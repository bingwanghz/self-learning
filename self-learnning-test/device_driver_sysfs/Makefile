obj-m += device_driver_sysfs.o
KDIR = /lib/modules/$(shell uname -r)/build

all:
	@echo "KDIR="$(KDIR)
	make -C $(KDIR)  M=$(shell pwd) modules	     
clean:
	make -C $(KDIR)  M=$(shell pwd) clean
