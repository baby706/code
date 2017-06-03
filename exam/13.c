#include <stdio.h>

int fun(int a,int b)
{
	if(b == 0)	return a;
	int sum,carry;
	sum = a ^ b;
	carry = (a & b) << 1;
	return fun(sum,carry);
}

int main(void)
{
	int a = 1,b = 2;
	printf("%d\n",fun(a,b) );
}