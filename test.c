#include<stdio.h>


int i = 0;

int fib(int a)
{
	if ( a <= 1)
		return a;
	else 
	return fib(a-1) + fib(a-2);
	
	
}

int main()
{
	//printf("i = %d",i);
				//0 1 2 3 4
	for ( int i = 0; i <= 5; i++)
		printf("%d ",fib(i));
	
}
