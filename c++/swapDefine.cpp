#include <iostream>
using namespace std;

#define SWAP(A,B) (A = A+B;B = A-B;A = A-B)

int main(int argc, char const *argv[])
{
	int a = 1,b = 2;
	swap(a,b);
	cout<<"a:"<<a<<"b:"<<b<<endl;
	
	return 0;
}