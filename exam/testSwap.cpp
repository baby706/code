/*************************************************************************
    > File Name:  testSwap.cpp
    > File Path:  /Users/liangbo/exam/testSwap.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

void swap1(int* a, int* b)
{
	*a ^= *b ^= *a ^= *b;
}


int main(int argc, char const *argv[])
{
	int a = 4,b = 2;
	cout<<a<<" "<<b<<endl;

	return 0;
}







