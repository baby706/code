#include "apue.h"
#include <fcntl.h>

void set_fl(int fd, int flags)     //flags are file status to turn on
{
	int val;
	if((val = fcntl(fd, F_GETFL, 0)) < 0)
		err_sys("fcntl F_GETFL error");

	val |= flags;      //turn on flags
	
	if(fcntl(fd, F_SETFL, val ) < 0)
	{
		printf("fcntl F_SETFL error\n");
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}