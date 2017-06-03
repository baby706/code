/*************************************************************************
    > File Name:  testStac.cpp
    > File Path:  /Users/liangbo/exam/testStac.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

char* fun()
{
	char* str = "hello world";
	printf("%p\n",str );
	return str;
	
}

int main(int argc, char const *argv[])
{
	printf("%p\n",fun() );
	char* p = "hello world";
	char* q = "hello world";
	printf("%p\n",p );
	printf("%p\n",q );
	return 0;
}