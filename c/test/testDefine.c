#include <iostream>
#define MIN(a,b) （a<b?a:b）
#define ADD(a,b) (a++;b++;)
#define SWAP(a,b) (a = a + b; b = a - b; a = a - b;)

using namespace std;

int main(int argc, char const *argv[])
{
	printf("%d\n",MIN(1,2) );
	return 0;
}
