#include <iostream>
#define MIN(a,b) (a<b?a:b)
#define SWAP(a,b) {a = a + b; b = a - b; a = a - b;}    //如果出现分号，必须加中括号
#define ADD(a,b) {a++;b++;}

using namespace std;

int main(int argc, char const *argv[])
{
	int a = 1,b = 2;
	SWAP(a,b);
	printf("a = %d,b = %d\n",a,b);
	ADD(a,b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
