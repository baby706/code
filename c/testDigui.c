#include <stdio.h>

int cal(int x)
{
	if(x == 0)
		return x;
	else
		return x = x + cal(x-1);
}

int main(int argc, char const *argv[])
{
	int x = 5;
	printf("%d\n",cal(x) );
	return 0;
}