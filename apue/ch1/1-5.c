#include "../apue.h"
#include <string.h>

int main(int argc, char const *argv[])
{
	int c;
	while((c = getc(stdin)) != EOF)
		if(putc(c, stdout) == EOF)
		{
			printf("output error\n");
			exit(0);
		}

	if(ferror(stdin))
	{
		printf("input error\n");
		exit(0);
	}

	return 0;
}