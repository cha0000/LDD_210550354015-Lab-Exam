#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int FileDesc;
	
	char Kbuff[100];
	FileDesc = read("/dev/MyCharDevice", O_RDWR, 0777);
	if(FileDesc < 0)
	{
		printf("\nError Opennning Device\n");
		exit(1);
	}
	
	close(FileDesc);
}
