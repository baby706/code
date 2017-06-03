/*************************************************************************
    > File Name:  testSort.cpp
    > File Path:  /Users/liangbo/Downloads/testSort.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;
bool com(int a,int b)
{
	return a > b;
}

int main(int argc, char const *argv[])
{
	int i = 0;
	int a[20] = {1,3,4,3,43,43,2,43,24,6,5,456,4};
	sort(a,a+20,com);
	while(i < 20)
		cout<<a[i++]<<" ";
	return 0;
}







