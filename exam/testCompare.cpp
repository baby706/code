/*************************************************************************
    > File Name:  testCompare.cpp
    > File Path:  /Users/liangbo/exam/testCompare.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

void mactcing(int a[],int b[],int k)
{
	int i = 0;
	while(i < k)
	{
		int j = 0;
		while(j < k)
		{
			if(a[i] == b[j])
			{
				cout<<"a["<<i+1<<"]"<<" match "<<"b["<<j+1<<"]"<<" = "<<a[i]<<endl;
				break;
			}
			j++;
		}
		i++;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int a[10] = {1,2,3,4,6,5,4};
	int b[10] = {2,4,5,4,6,7};
	int k = sizeof(a)/sizeof(int);
	mactcing(a,b,k);
	return 0;
}







