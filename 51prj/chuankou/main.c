#include "reg52.h"
#include "intrins.h"
typedef unsigned char u8;
typedef unsigned int u16;

void delay(u16 i)
{
	u16 j = i;
	while(i--);
	
}

void UsartInit()
{
	TMOD = 0x20;
	TH1=0XF3;
	TL1=0XF3;
	PCON=0x80;
	TR1=1;
	SCON=0x50;
	ES=1;
	EA=1;
}

void main(void)
{
	UsartInit();
	while(1);
}

void Usart() interrupt 4
{
	u8 receiveData;
	receiveData = SBUF;
	RI = 0;
	SBUF = receiveData;
	while(!TI);
	TI=0;

}