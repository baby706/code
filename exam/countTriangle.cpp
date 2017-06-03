/*************************************************************************
    > File Name:  countTriangle.cpp
    > File Path:  /Users/liangbo/exam/countTriangle.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int f(int n)
{
	if(n == 1)
		return 1;
	else
	{
		return f(n-1)+3*(n-1);
	}
}

int main(int argc, char const *argv[])
{
	int n = 100;
	cout<<f(n)<<endl;
	
	return 0;
}







