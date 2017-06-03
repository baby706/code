/*************************************************************************
    > File Name: 11.cpp
    > File Path: /Users/liangbo/Code/11.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>
#include <unistd.h>

using namespace std;

double func(double n)
{
	cout<<n<<" ";
	usleep(10);
    if(n < -120000 )
        return 1;
	return n*func(n-1);
}

int main(int argc, char const *argv[])
{
	cout<<func(6.1)<<endl;
	return 0;
}