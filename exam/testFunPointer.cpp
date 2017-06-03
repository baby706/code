/*************************************************************************
    > File Name:  testFunPointer.cpp
    > File Path:  /Users/liangbo/exam/testFunPointer.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int test(int a,int b)
{
	return a+b;
}

int main(int argc, char const *argv[])
{
	int (*p)(int, int) = &test;
	cout<<p(1,2);
	return 0;
}







