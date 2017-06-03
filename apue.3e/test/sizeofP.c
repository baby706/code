#include <stdio.h>

int main(void)
{
	int *p;
	printf("%ld\n",sizeof(&p));

	printf("%ld\n",sizeof(int));
	printf("%ld\n",sizeof(p));
	return 0;


}
