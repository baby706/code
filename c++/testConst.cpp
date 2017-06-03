/*************************************************************************
    > File Name: testConst.cpp
    > File Path: /Users/liangbo/Code/testConst.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 2016-11-21 15:37:53
 ************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

class C
{
public:
	C(int i):m_Count(i){}
	int incr() const
	{
		return ++m_Count;
	}

	int decr() const
	{
		return --m_Count;
	}
private:
	mutable int m_Count;

};


int main(int argc, char const *argv[])
{
	C c1(0),c2(10);
	for(int tmp,i = 0;i<10;i++)
	{
		tmp = c1.incr();
		cout<<setw(tmp)<<setfill(' ')<<tmp<<endl;
		tmp = c2.decr();
		cout<<setw(tmp)<<setfill(' ')<<tmp<<endl;
	}
	return 0;
}
