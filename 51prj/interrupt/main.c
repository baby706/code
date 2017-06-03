#include "reg52.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

sbit led = P2^2;
sbit k3 = P3^2;

void Int0Init()
{
	IT0 = 1;
	EX0 = 1;
	EA = 1;
}

VOID Int0() interrupt 0
{
	delay(1000);
	if(k3==0)
	{
		led =~ led;
	}
}
void delay(u16 i)
{
	u16 j = i;
	while(i--);
	
}


void main(void)
{
	Int0Init();
	while(1);
}

