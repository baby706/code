/*************************************************************************
    > File Name:  testZhengchu.cpp
    > File Path:  /Users/liangbo/Code/testZhengchu.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
bool used[10];
vector<long long> v;
void fun(int k,long long a)
{	
	static int j = 0;
	cout<<"k = "<<k<<"     a = "<<a<<"     i = "<<j++<<endl;

	if(k && a%k!=0)
		return;
	if(k == 9)
	{
		v.push_back(a);
		return;
	}

	for (int i = 0; i <= 9; ++i)
	{
		if(!used[i])
		{
			used[i] = 1;
			fun(k+1,a*10+i);
			used[i] = 0;
		}
	}
}

int main(int argc, char const *argv[])
{
	fun(0,0);
	for (int i = 0; i < v.size() ; i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<v.size()<<endl;
	return 0;
}







