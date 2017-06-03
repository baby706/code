/*************************************************************************
    > File Name: testFunPointer.cpp
    > File Path: /Users/liangbo/Code/testFunPointer.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 2016-11-21 19:01:18
 ************************************************************************/

#include <iostream>

using namespace std;

int add(int a,int b)
{
	return a+b;
}

int main(int argc, char const *argv[])
{
	int (*fp) (int a,int b);
	fp = add;
	return 0;
}