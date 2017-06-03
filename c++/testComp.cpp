/*************************************************************************
    > File Name:  testComp.cpp
    > File Path:  /Users/liangbo/Code/testComp.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
using namespace std;
bool com(int a,int b)
{
	if(a > 10 && b < 10)
		return 1;

}
int main(int argc, char const *argv[])
{
	int i,len;
	int a[] = {1,3,2,5,23,4,53,23,56,234,3,6,53,444};
	len = sizeof(a)/sizeof(int);
	sort(a,a+len,com);
	for(i=0;i<len;i++)
		cout<<a[i]<<" ";
	return 0;
}







