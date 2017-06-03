#include <stdio.h>
#include <string.h>
typedef struct 
{
	int id;
	char name[20];
}Stu;

int main(void)
{
	Stu stu[20];
	memset(stu,0,sizeof(stu));
	printf("%d\n",stu[0].id );

	return 0;
}