/*************************************************************************
    > File Name: 14.cpp
    > File Path: /Users/liangbo/Code/14.cpp
    > Author:    Liang Bo
    > Mail:      cs-b@163.com 
    > Funtion:   
    > Time:      2016-11-21 14:05:49
 ************************************************************************/

#include <iostream>

using namespace std;

bool fun(int a,int b)
{
	return a>b;
}

int max(int a,int b)
{
	bool flag = fun(a,b);
	return a*flag + (1 - flag)*b;
}

int main(int argc, char const *argv[])
{
	cout<<max(2,5)<<endl;
	return 0;
}