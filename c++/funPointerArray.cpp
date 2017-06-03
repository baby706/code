/*************************************************************************
    > File Name: funPointerArray.c
    > File Path: /Users/liangbo/Code/funPointerArray.c
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int add1(int a,int b)
{
	return a+b;
}

int add2(int a,int b)
{
	return a+b;
}

int main(int argc, char const *argv[])
{
	int (*f[2])(int a,int b);
	f[0] = add1;
	f[1] = add2;
	cout<<f[0](1,2)<<" "<<f[1](2,3)<<endl;
	return 0;
}