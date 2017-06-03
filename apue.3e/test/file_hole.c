#include "myfile.h"
#include "apue.h"

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void)
{
	int fd;
	if((fd = creat("file.hole", FILE_MODE)) < 0)
		printf("creat error\n");
	if((write(fd, buf1, 10)) != 10)
		printf("buf1 wirte error\n");
	//now offset is 10
	if((lseek(fd, 40, SEEK_SET)) == -1)
		printf("lseek error\n");
	//now offset is 40
	if((write(fd, buf2, 10)) != 10)
		printf("buf2 wirte error\n");

	return 0;
}