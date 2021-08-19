#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include"ioctl.h"

int main()
{
	int fd, result;
	struct operator val;
	
	fd = open("/dev/MyIoctlCalDevice",O_RDWR,0777); 
	if(fd<0) 
	{
		printf("not able to open the device\n");
		return -1;
	}
	
	
	close(fd);
	return 0;
}
