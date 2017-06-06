#include "apue.h"
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	if(argc != 2)
		err_sys("need anoter parameter\n");
	if(access(argv[1], R_OK) < 0)
		err_sys("access error");
	else
		printf("read access OK\n");
	if(open(argv[1], O_RDONLY) < 0)
		err_sys("open error");
	else
		printf("open for reading OK\n");
	return 0;
}