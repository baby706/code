#include <stdio.h>
#include <sys/malloc.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	while(1)
	{
		int *p = (int*)malloc(i++*1000);
		printf("%d %x\n",i,p );
		
	}
	return 0;
}