#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char s[] = "123456789";    //改为123456789再试试
	char d[] = "1234";
	unsigned int p=0;
	p=(unsigned int)s;
	p=p+5;
	printf("%c\n",(char*)p);

	printf("%x %x %x\n",d,s,&p);
	printf("%d\n",sizeof(d));
	strcpy(d,s);
	printf("d=%s ,s=%s\n",d,s );
	printf("%x %x\n",d,s );
	
	return 0;
}