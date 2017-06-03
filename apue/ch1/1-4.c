#include "../apue.h"
#include <string.h>

#define BUFFSIZE 4096

int main(int argc, char const *argv[])
{
	int n;
	char buf[BUFFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
	{
		//输入exit，退出程序
		if(!strcmp(buf, "exit\n"))
			return 0;

		if(write(STDOUT_FILENO, buf, n) != n)
		{
			printf("write error\n");
			exit(0);
		}
	}
		if(n < 0)
			printf("read error\n");

	return 0;
}