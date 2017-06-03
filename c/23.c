#include <stdio.h>

int main(void)
{
	int i;
	printf("%d\n",i );
	printf("%p\n",&i );
	printf("%lu\n",sizeof(&i) );
	return 0;
}