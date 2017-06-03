/*************************************************************************
    > File Name: testFun.c
    > File Path: /Users/liangbo/Code/testFun.c
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

/*************************************************************************
    > Name: add
    > Function: 求两个数的和
    > Input: 
    > Output:  
 ************************************************************************/

int add(int a,int b)
{
	return a + b;
}

int main(int argc, char const *argv[])
{
	int a = 1,b = 2;
	int res = add(1,2);
	cout<<res;
	return 0;
}