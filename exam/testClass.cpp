/*************************************************************************
    > File Name:  testClass.cpp
    > File Path:  /Users/liangbo/exam/testClass.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

class A
{
public:
	A(){a = 1;}
	int a;
	void print(){printf("%d\n", a);}
};

class B :public A
{
public:
	int a;
	B(){a = 2;}
	//void print(){printf("%d\n", a);}
};

int main(int argc, char const *argv[])
{
	B b;
	b.print();
	return 0;
}









