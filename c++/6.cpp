/*************************************************************************
    > File Name: 6.cpp
    > File Path: /Users/liangbo/Code/6.cpp
    > Author: Liang Bo
    > Mail: cs-b@163.com 
    > Funtion:
    > Created Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	if(!(x&(x-1)))
	{
		cout<<x<<" 是2的次方。"<<endl;
	}
	return 0;
}