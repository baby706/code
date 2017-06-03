#include <stdio.h>

int fun(int x,int y)
{
	return (x&y)+((x^y)>>1);
}


int main(int argc, char const *argv[])
{
	printf("%d\n",fun(7,9) );
	return 0;
}