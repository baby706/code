/*************************************************************************
    > File Name:  countC.cpp
    > File Path:  /Users/liangbo/exam/countC.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

void f(char* a,int len)
{
	int i = 0,j = 0,flag = 0;
	int b[10] = {0};
	for(i = 0;i < len;i++)
	{
		if(a[i] <= '9' && a[i] >= '0')
		{
			//cout<<a[i];
			b[j] = b[j]*10+a[i] - '0';
			flag = 1;
			//cout<<b[j]<<" ";
		}
		else
			if( flag == 1)
			{
				flag = 0;
				j++;
			}
	}cout<<"共有"<<j<<"个数：";
	for(i = 0;i < j;i++)
	{

		cout<<b[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	char a[]= "123he213u1u23u1i3h2j378jh676hiu";
	int len = sizeof(a);
	f(a,len);
	return 0;
}







