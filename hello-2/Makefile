obj-m += hello-2.o

PWD := $(CURDIR)
KVERSION := $(uname -ar)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
