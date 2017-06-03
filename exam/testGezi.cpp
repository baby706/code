/*************************************************************************
    > File Name:  testGezi.cpp
    > File Path:  /Users/liangbo/exam/testGezi.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:    计算从A到B最短路径有多少种走法 
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int f(int m,int n)
{
	if(m == 0 || n == 0)	return 0;
	else
		if( m == 1 && n == 1)	return 1;
		else
			return f(m-1,n) + f(m,n-1);
}

int main(int argc, char const *argv[])
{
	int count;
	count = f(3,3);
	cout<<count<<endl;
	return 0;
}







