/*************************************************************************
    > File Name:  muiltiINher.cpp
    > File Path:  /Users/liangbo/Code/muiltiINher.cpp
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
	void foo(){cout<<"A"<<endl;}
};
class B
{
public:
	void foo(){cout<<"B"<<endl;}
};
class C:public A,public B
{

};
int main(int argc, char const *argv[])
{
	C c;
	c.A::foo();
	c.B::foo();
	return 0;
}







