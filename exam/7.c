#include <stdio.h>

int main(void)
{
	char word[] = "hello world";
	FILE* fp = fopen("a.bin","wb+");
	fwrite(&word,sizeof(word),1,fp);


	return 0;
}