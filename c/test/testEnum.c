#include <stdio.h>

enum days
{
	monday,tuesday
};

int main(void)
{
	enum days d;
	d = monday;
	printf("%u\n",d);

	return 0;
}