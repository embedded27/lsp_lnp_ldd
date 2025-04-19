#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
	int a=20;
	printf("Before fork\n");
	if(0 == vfork())
	{	
		a=30;
		printf("In Child A=%d\n",a);
		
		exit(0);
	}else{
		printf("In Parent A=%d\n",a);
	}
}
