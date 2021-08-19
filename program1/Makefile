obj-m:=program1.o
KDIR=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
all:
	make -C $(KDIR) M=$(PWD) modules
	gcc -o write write.c
	gcc -o read read.c
	
        
clean:
	make -C $(KDIR) M=$(PWD) clean
	
	rm -rf read
	rm -rf write
       

