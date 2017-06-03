/*************************************************************************
    > File Name:  testAss.cpp
    > File Path:  /Users/liangbo/exam/testAss.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <sys/malloc.h>
#include <string.h>
using namespace std;

void GetMemory(char* p, int num)
{
	p = (char*)malloc(sizeof(char) * num);
}

int main(int argc, char const *argv[])
{
	char *str = NULL;
	GetMemory(str,100);
	strcpy(str,"hello");

	return 0;
}