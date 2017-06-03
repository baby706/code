#include <iostream>
using namespace std;

#define max(x) x*x

int main(int argc, char const *argv[])
{
	cout<<max(3+3)<<endl;      //将x替换成了3+3，所以max(3+3) = 3+3*3+3
	return 0;
}