/*************************************************************************
    > File Name:  testDynamic.cpp
    > File Path:  /Users/liangbo/Code/testDynamic.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;
class A
{
	int a;
};

class B
{
	int b;
};

class C:public A,public B
{
	int c;
};


int main(int argc, char const *argv[])
{
	C* pC = new C;
	B* pB = dynamic_cast<B*>(pC);
	A* pA = dynamic_cast<A*>(pC);

	cout<<pC<<" "<<pB<<endl; 
	if(pB == pC)
	{ 
		cout<<"equals"<<endl;
	}
	return 0;
}







