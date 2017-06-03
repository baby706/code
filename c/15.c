#include <stdio.h>

int main(void)
{
	printf("请输入两个数:\n");
	int a = 1;
	int b = 2;
	scanf("%d",&a);
	scanf("%d",&b);
	int c;
	c = a + b;
	printf("c = %d\n",c);

	return 0;
}