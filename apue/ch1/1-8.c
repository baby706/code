#include "../apue.h"
#include <errno.h>

int main(int argc, char const *argv[])
{
	//strerror函数返回出错消息字符串
	fprintf(stderr, "EACCES: %s\n",strerror(EACCES));
	errno = ENOENT;
	//perror函数基于当前errno值，在标准错误上产生一条出错信息
	perror(argv[0]);

	return 0;
}