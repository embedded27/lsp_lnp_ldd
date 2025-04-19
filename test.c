#include <stdio.h>
int a=20;
int b=40;
int c=60;

int func3(){
	return c;
}

int func2(){
	func3();
}

int func1(){
	func2();
}

int main()
{
	int x=20;

	printf("Hello World=%d %d\n",x,func1());
	while(x==20){
		sleep(1);
	}
	return 0;
}
