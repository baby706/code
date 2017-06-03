#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[6] = "hello";
	a[5] = 'w';
	printf("%s\n",a );
	return 0;
}