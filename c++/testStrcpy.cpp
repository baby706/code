/*************************************************************************
    > File Name:  testStrcpy.cpp
    > File Path:  /Users/liangbo/Code/testStrcpy.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

//char* strCpy(char* str)

int main(int argc, char const *argv[])
{
	char a[] = "hi";
	cout<<sizeof(a)<<endl;
	char b[] = "hello world";
	strcpy(a,b);
	cout<<sizeof(b)<<endl;
	cout<<a<<endl;
	return 0;
}