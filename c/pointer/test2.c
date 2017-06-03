#include <stdio.h>

int main(void)
{
	long **p = NULL;
	long a[2][3] = {1, 2, 3, 4};
	p = (long **)a;
	printf("指针的长度为：%d\n",sizeof(p));
	printf("值为：%d\n",（long）(*p));

	p++;
	printf("值为：%d\n",（long）(*p));
	

	return 0;
}
