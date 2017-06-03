#include <stdio.h>

#define SWAP(a,b) a = a + b; b = a - b; a = a - b;
#define MAX(a,b) a>b?a:b


int main(int argc, char const *argv[])
{
	int a = 1,b = 2;
	SWAP(a,b);
	int s = MAX(a,b);

	printf("a = %d,b = %d\n",a,b ); 
	printf("s = %d\n",s );

	return 0;
}