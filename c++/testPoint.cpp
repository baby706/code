/*************************************************************************
    > File Name: testPoint.cpp
    > File Path: /Users/liangbo/Code/testPoint.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const float intValue = 2.2;
	float *j = (float *) &intValue;
	*j = 1.1;

	printf("%p\n",j);
	printf("%p\n",&intValue);
	printf("%f\n",(double)*j);
	printf("%f\n",(double)intValue);
	//printf("%s\n", );
	return 0;
}