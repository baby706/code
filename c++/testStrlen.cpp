/*************************************************************************
    > File Name:  testStrlen.cpp
    > File Path:  /Users/liangbo/Code/testStrlen.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <assert.h>
using namespace std;

int strLen(const char* str)
{
	int len = 0;
	assert(str != NULL);
	while(*str!='\0')
	{
		str++;
		len++;
	}
	return len;
}

int main(int argc, char const *argv[])
{
	char a[12] ="hello world";
	cout<<strLen(a)<<endl;	
	return 0;
}