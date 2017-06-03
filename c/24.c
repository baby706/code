#include <stdio.h>

int main(int argc, char const *argv[])
{
	long int a;
	float b;
	while(1)
	{
		b = b * b++;
		printf("%f\n",b );
	}
	printf("%lu\n",sizeof(a) );
	return 0;
}