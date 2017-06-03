/*************************************************************************
    > File Name:  testCount.cpp
    > File Path:  /Users/liangbo/exam/testCount.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

static int x(int n)
{
	if(n<=3)
		return 1;
	else
		return x(n-4)+x(n-2)+1;
}
int main(int argc, char const *argv[])
{
	cout<<x(8)<<endl;
	return 0;
}







