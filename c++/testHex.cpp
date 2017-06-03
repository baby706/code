/*************************************************************************
    > File Name:  testHex.cpp
    > File Path:  /Users/liangbo/Code/testHex.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
using namespace std;

union
{
	unsigned char a;
	unsigned int i;
}u;

int main(int argc, char const *argv[])
{
	u.i = 0xf0f1f2f3;
	cout<<hex<<u.i<<endl;
	cout<<hex<<(int)u.a<<endl;

	return 0;
}







