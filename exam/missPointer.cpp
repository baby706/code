/*************************************************************************
    > File Name:  missPointer.cpp
    > File Path:  /Users/liangbo/exam/missPointer.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
typedef unsigned short int UNSHORT;

using namespace std;

int main(int argc, char const *argv[])
{
	UNSHORT* pInt = new UNSHORT;
	*pInt = 20;
	delete pInt;

	//pInt = 0;
	long* pLong = new long;
	*pLong = 90000;
	*pInt = 20;

	cout<<"*pInt:"<<*pInt<<endl;
	cout<<"*pLong:"<<*pLong<<endl;
	cout<<sizeof(long)<<endl;
	cout<<sizeof(UNSHORT);

	return 0;
}







