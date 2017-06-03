/*************************************************************************
    > File Name:  testEX5.cpp
    > File Path:  /Users/liangbo/Code/testEX5.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class B
{
private:
	int data;
public:
	B()
	{
		cout<<"default constructor"<<endl;
	}
	~B()
	{
		cout<<"destructed "<<endl;
	}
	B(int i):data(i)
	{
		cout<<"constructor by parameter "<<data<<endl;
	}
};
B play(B b)
{
	return b;
}

int main(int argc, char const *argv[])
{
	B temp = play(5);
	
	return 0;
}







