#include <iostream>
using namespace std;

int recursion(int n)
{
	if(n == 1)
		return n;
	else
		return n*recursion(n-1);
}

int main(int argc, char const *argv[])
{
	int a;
	cin>>a;
	cout<<recursion(a)<<endl;
	return 0;
}