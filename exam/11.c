#include <stdio.h>
#define SIZE 512
int main(int argc, char const *argv[])
{
	char buffer[SIZE] = "";
	FILE* fp = fopen("a.txt","a+");
	fgets(buffer,sizeof(buffer),fp);
	printf("%s\n",buffer );

	return 0;
}