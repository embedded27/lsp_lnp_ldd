#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
 
void waitexample()
{
    int stat;
    pid_t pid1;
 
    if (fork() == 0){
	 printf("Child pid=%d\n",getpid());
        exit(100);
	printf("I am in child\n");
    }
    else
        pid1=wait(&stat);
    if (WIFEXITED(stat))
        printf("Exit status: %d PID=%d\n", WEXITSTATUS(stat),pid1);
    else if (WIFSIGNALED(stat))
        psignal(WTERMSIG(stat), "Exit signal");
}
 
int main()
{
    waitexample();
    return 0;
}
