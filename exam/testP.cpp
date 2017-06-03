/*************************************************************************
    > File Name:  testP.cpp
    > File Path:  /Users/liangbo/exam/testP.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

class Base
{
	Base();
	virtual void run();
};

int main(int argc, char const *argv[])
{
	cout<<sizeof(Base)<<endl;
	return 0;
}