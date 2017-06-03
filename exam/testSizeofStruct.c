/*************************************************************************
    > File Name:  testSizeofStruct.c
    > File Path:  /Users/liangbo/exam/testSizeofStruct.c
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;
struct
{
	char b;
	int a;
	short a1;
	short a2;
	short a3;
}A;

struct 
{
	long b1;
	int b2;
}B;

int main(int argc, char const *argv[])
{
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	
	return 0;
}