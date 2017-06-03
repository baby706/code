/*************************************************************************
    > File Name: testAddByBit.cpp
    > File Path: /Users/liangbo/Library/Application Support/Sublime Text 3/Packages/User/testAddByBit.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:2016-11-21 13:51:49
    > Created Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int add(int a,int b)
{
	if(b == 0)	return a;
	int sum,carry;
	sum = a ^ b;
	carry = (a & b) << 1;
	return add(sum,carry);
}

int main(int argc, char const *argv[])
{
	cout<<add(2,3)<<endl;

	return 0;
}