/*************************************************************************
    > File Name: 12.cpp
    > File Path: /Users/liangbo/Code/12.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 2016-11-21 13:37:45
 ************************************************************************/

#include <iostream>

using namespace std;

int f(int x,int y)
{
	return (x&y)+((x^y)>>1);
}

int main(int argc, char const *argv[])
{
	cout<<f(3,7)<<endl;
	
	return 0;
}