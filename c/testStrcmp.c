#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
bool strCmp(const char* str1,const char* str2)
{
	assert((NULL != str1) && (NULL != str2));  
	while(*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main(int argc, char const *argv[])
{
	char a[20] = "  ";
	char b[4] = " ";
	printf("%d\n",strCmp(a,b));
	return 0;
}