#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int FileDesc;
	
	char Kbuff[50];
	FileDesc = read("/dev/MyCharDevice", O_RDWR, 0777);
	if(FileDesc < 0)
	{
		printf("\nError Opennning Device\n");
		exit(1);
	}
	
	read(FileDesc, Kbuff, 50);
	printf("\nThe Data read from the Kernel is %s\n", Kbuff);
	close(FileDesc);
}
