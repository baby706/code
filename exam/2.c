#include <stdio.h>
#include <string.h>

int foo(int x,int n)
{
	int val;
	val = 1;
	if(n>0)
	{
		if(n%2 == 1)
		{
			val = val * x;
		}
		val = val * foo(x*x,n/2);
	}
	return val;
}

int main(void)
{	
	printf("%d\n",foo(3,4) );

	return 0;
}