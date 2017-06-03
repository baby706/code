/*************************************************************************
    > File Name:  testXy.cpp
    > File Path:  /Users/liangbo/exam/testXy.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int f(int m,int n)
{
	int a[100][100];
	int i,j;
	for(i = 0;i < m;i++)
	{
		a[i][0] = i + 1;
	}
	for(i = 0;i < n;i++)
	{
		a[0][i] = i + 1;
	}
	for(i = 1;i < m;i++)
		for(j = 1;j < n;j++)
		{
			a[i][j] = a[i][j-1] + a[i-1][j];
		}
	return a[m-1][n-1];
}

int main(int argc, char const *argv[])
{
	cout<<f(3,4)<<endl;
	return 0;
}







