#include <stdlib.h>
#include <stdio.h>
#define LOOP 1000
int main(int argc, char const *argv[])
{
	int rgnC = 0,i;

	for(i = 0;i<LOOP;i++)
	{
		int x = rand();
		int y = rand();
		if(x*x+y*y < RAND_MAX*RAND_MAX)
			rgnC++;
	}
	printf("%d ",rgnC);
	return 0;
}