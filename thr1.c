#include <pthread.h> 
#include <stdio.h> 
#include <stdlib.h>

struct character
{
	char my_char;
	int count;
};

void* thread_routine(void* args)
{
	struct character *ch = (struct character*) args;
	int i;
	static int x=20;
	for(i=0;i<ch->count;i++)
		fputc(ch->my_char,stderr);

	return &x;
}

int main()
{
	int *a;
	pthread_t tid1,tid2;
	struct character t1args,t2args;
	t1args.my_char='x';
	t2args.my_char='y';
	t1args.count=3000;
	t2args.count=2000;
	pthread_create(&tid1,NULL,&thread_routine,(void*)&t1args);
	pthread_create(&tid2,NULL,&thread_routine,(void*)&t2args);
	pthread_join(&tid1,NULL);
	pthread_join(&tid2,NULL);
	//intf("The return value=%d",*a);
	return 0;
}
