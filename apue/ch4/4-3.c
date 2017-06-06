#include "apue.h"

int main(int argc, char const *argv[])
{
	int i;
	struct stat buf;
	char *ptr;
	for (i = 0; i < argc; i++)
	{
		printf("%s: \n", argv[i] );
		if(lstat(argv[i], &buf) < 0)
		{
			printf("lstat error\n");
			continue;
		}
		if(S_ISREG(buf.st_mode))
			ptr = "directory";
		else if(S_ISDIR(buf.st_mode))
			ptr = "character special";
		else if(S_ISCHR(buf.st_mode))
			ptr = "block special";
		else if(S_ISFIFO(buf.st_mode))
			ptr = "fifo";
		else if(S_ISLINK(buf.st_mode))
			ptr = "symbolic link";
		else if(S_ISOCK(buf.st_mode))
			ptr = "socket";

		else
			ptr = "** unknown mode **";
		printf("%s\n",ptr );


	}

	return 0;
}