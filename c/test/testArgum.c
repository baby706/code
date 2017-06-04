#include <stdio.h>

void test(int);
int main(int argc, char const *argv[])
{
	int a = 2;
	test(a);
	
	return 0;
}

void test(int a)
{
	//a = 1;
	printf("%d\n",a );
}