#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("a.bin","rb");
	char word[12] = "";

	while(fread(&word,sizeof(word),1,fp))
		printf("%s\n",word );

	return 0;
}