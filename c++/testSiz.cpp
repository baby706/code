/*************************************************************************
    > File Name:  testSiz.cpp
    > File Path:  /Users/liangbo/Code/testSiz.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char c[] = {0xab,0xbb,0xcc,0x00,0xdd};
	cout<<sizeof(c)<<endl;
	cout<<strlen(c)<<endl;
	return 0;
}







