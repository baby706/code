#include <iostream>

using namespace std;

void foo(int* a,int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main(int argc, char const *argv[])
{
	int a = 1,b = 2,c = 3;
	foo(&a,&b);
	foo(&b,&c);
	foo(&c,&a);
	printf("%d %d %d \n",a,b,c );
	return 0;
}