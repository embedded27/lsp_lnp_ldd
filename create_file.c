#include<fcntl.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/stats.h>
#include<errno.h>
int main()
{
	int fd=open("hello.txt", O_CREAT | O_WRONLY, S_IRUSR);
	if(fd==-1)
	{
		printf("error in opening file:%d\n",errno);
		perror("ERROR:");
		return errno;
	}
	else{
		printf("\ncreated file\n");
	}
	return 0;
}
