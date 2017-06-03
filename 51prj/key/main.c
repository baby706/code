#include "reg52.h"
#include "intrins.h"

sbit led = P2^0	;
sbit key = P3^1	;


typedef unsigned char u8;
typedef unsigned int u16;


void delay(u16 i)
{
	while(i--);	
}

void keypros()
{
	if(key == 0)
	{
		delay(1000);
		if(key == 0)
		{
			
		}
		while(!key);  led =~ led;
	}
}

void main()
{	while(1)
		keypros();
}