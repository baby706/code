#include <stdio.h>
#include <malloc.h>

int main(int argc, char* argv[]) 
{ 
	char *p,*q;
	p = (char *)malloc(10);
	q = p;
	p = (char *)realloc(p,10);
	printf("p=0x%x/n",p);
	printf("q=0x%x/n",q);
					
	return 0; 
} 
       /*
				
       例2:
                #include <stdio.h>
				#include <malloc.h>

				int main(int argc, char* argv[]) 
				{ 
					char *p,*q;
					p = (char *)malloc(10);
					q = p;
					p = (char *)realloc(p,1000);
					printf("p=0x%x/n",p);
					printf("q=0x%x/n",q);
					
					return 0; 
				} 
       输出结果:realloc后，内存地址发生了变化
                p=0x351c0
                q=0x431a70*/