/*************************************************************************
    > File Name:  testStrcpy.cpp
    > File Path:  /Users/liangbo/Code/testStrcpy.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/


#include <stdio.h>
#include <string.h>
#include <assert.h>

char* strCpy(char* str_des,const char* str_src)
{
	char* add = str_des;
	assert((str_des!=NULL)&&(str_src!=NULL));
	while((* str_des++ = * str_src++) != '\0');
	
	return add;
}

int main(int argc, char const *argv[])
{
	char a[] = "hi";
	char b[] = "hello world  ";
	strCpy(a,b);
	printf("%s %lu\n",a,strlen(a) );
	
	return 0;
}