#include <stdio.h>
#include <assert.h>
char *strCat(char* str1,const char* str2)
{
	assert(NULL != str1 && NULL != str2);
	char *ret = str1;
	while(*str1 != '\0') str1++;
	while(*str2 != '\0') *str1++ = *str2++;
	*str1 = '\0';
	return ret;

}

int main(void)
{
	char a[] = "hello";
	char b[] = "world";
	printf("%s\n",strCat(a,b));
	return 0;
}