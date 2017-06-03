/*************************************************************************
    > File Name:  testPointer.cpp
    > File Path:  /Users/liangbo/exam/testPointer.cpp
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
	int a[] = {1,2,3,4,5};
	printf("%p\n",a );
	printf("%p\n",&a );
	printf("%d\n",sizeof(a) );
	printf("%d\n",sizeof(*(&a)) );
	return 0;
}








