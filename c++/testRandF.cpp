/*************************************************************************
    > File Name:  testRand.cpp
    > File Path:  /testRand.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int i;
	for(i = 0;i < 1000;i++ )
	{
		int x = rand();
		int y = rand();
		if( x*x+y*y < RAND_MAX*RAND_MAX)
			count++;
	}
	cout<<count<<endl;
	return 0;
}







