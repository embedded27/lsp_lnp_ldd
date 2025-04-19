#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int a=20;
    pid_t pid;


    pid=fork();
    if (pid < 0) {
        printf("failed to fork..\n");
    } else if (pid == 0) {
        printf("child process ..=%d A=%d\n",getpid(),a);
	*((char*)0)=0;
        exit(0);
    } else if (pid > 0) {
	int i=0;
	while(i<20){
        	printf("parent process..=%d A=%d\n ",getpid(),a);
		sleep(1);
		i++;
	}
    }

    return 0;
}
