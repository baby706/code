/*************************************************************************
    > File Name:  testInterface.cpp
    > File Path:  /Users/liangbo/Code/testInterface.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
using namespace std;

class A
{
protected:
	int m_data;
public:
	A(int data = 0)
	{
		m_data = data;
	}
	int GetData()
	{
		return doGetData();
	}
	virtual int doGetData()
	{
		return m_data;
	}
};

class B:public A
{
protected:
	int m_data;
public:
	B(int data = 1)
	{
		m_data = data;
	}
	int doGetData()
	{
		return m_data;
	}
};

class C:public B
{
protected:
	int m_data;
public:
	C(int data = 2)
	{
		m_data = data;
	}
};

int main(int argc, char const *argv[])
{
	C c(10);
	cout<<c.GetData()<<" ";
	cout<<c.A::GetData()<<" ";
	cout<<c.B::GetData()<<" ";
	cout<<c.C::GetData()<<" ";

	cout<<c.doGetData()<<" ";
	cout<<c.A::doGetData()<<" ";
	cout<<c.B::doGetData()<<" ";
	cout<<c.C::doGetData()<<endl;

	return 0;
}







