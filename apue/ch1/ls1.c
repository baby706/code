#include "../apue.h"
#include <dirent.h>

int main(int argc, char const *argv[])
{
	DIR *dp;
	struct dirent *dirp;

	if(argc != 2)
	{
		printf("ls directory_name\n");
		exit(0);
	}

	if((dp = opendir(argv[1])) == NULL)
	{
		printf("can't open %s\n", argv[1]);
		exit(0);
	}

	while((dirp = readdir(dp)) != NULL)
		printf("%s %u\n", dirp->d_name,dirp->d_type);

	closedir(dp);
	exit(0);

	return 0;
}