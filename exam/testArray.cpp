/*************************************************************************
    > File Name:  testArray.cpp
    > File Path:  /Users/liangbo/exam/testArray.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[3] = {0,1,2};
	int *p, *q;
	p = a;
	q = &a[2];
	printf("%p\n",p );
	printf("%p\n",q );
	printf("%p\n",q-p );
	return 0;
}