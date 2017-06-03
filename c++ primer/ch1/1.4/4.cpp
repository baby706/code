#include <iostream>
using namespace std;
int main(void)
{
	int value, sum;
	while(cin >> value)  //如果读入数据则返回1，否则返回0
	{
		sum += value;
	}   
	cout<<sum<<endl;

	return 0;
}