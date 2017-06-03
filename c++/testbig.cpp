/*************************************************************************
    > File Name:  testbig.cpp
    > File Path:  /Users/liangbo/Code/testbig.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int a = 0x12345678;
	unsigned char *p = (unsigned char*)&a;
	printf("%x\n",*(p+1));
	return 0;
}








