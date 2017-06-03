#include <iostream>
using namespace std;

int func(int n)
{
	static int m = 0;
	m = m + n;
	cout<<"m = "<<m<<endl; 
	return m;
}

int main(int argc, char const *argv[])
{
	int i,a;
	for(i = 1;i <= 4;i++)
	{
		a += func(i);
	}
	cout<<a<<endl;
	return 0;
}