obj-m += mymodule.o

all:
	$(MAKE) -C ${KERNEL_SRC} M=$(PWD) modules

clean:
	$(MAKE) -C ${KERNEL_SRC} M=$(PWD) clean
