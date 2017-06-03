#include <stdio.h>


void fun()
{
	int a = 0;
	unsigned int b = -15;
	if(a+b>0)
		printf(">");
	else
		printf("<");	
}

int main()
{
	fun();
	return 0;
}
