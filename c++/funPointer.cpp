/*************************************************************************
    > File Name:  funPointer.cpp
    > File Path:  /Users/liangbo/Code/funPointer.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int fun(int a)
{
	a++;
	cout<<a<<endl;
	return a;
}

void fun2(int (*fp)(int))
{
	int a = 3;
	fp(3);
	cout<<"callback fun"<<endl;
}

int main(int argc, char const *argv[])
{
	int a = 2;
	int (*p) (int) = fun;
	p(a);
	fun2(p);
	return 0;
}







