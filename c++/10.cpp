/*************************************************************************
    > File Name: 10.cpp
    > File Path: /Users/liangbo/Code/10.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>
#define SWAP(a,b) {a = a ^ b;b = a ^ b;a = a ^ b;}
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 1,b = 2;
	SWAP(a,b);
	cout<<"a:"<<a<<" b:"<<b<<endl;
	return 0;
}