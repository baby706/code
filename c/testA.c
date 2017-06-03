#include <stdio.h>

int main(void)
{

	int a[] = {1,2,3,4,5};
	int b[] = {1,2,3,4,6};
	int i = 0;
	while(1)
	{
		printf("%d\n",a[i++] = b[i++] );
	}

	return 0;
}