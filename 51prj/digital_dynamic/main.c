#include "reg52.h"
#include "intrins.h"

typedef unsigned char u8;
typedef unsigned int u16;

sbit LSA = P2^2;
sbit LSB = P2^3;
sbit LSC = P2^4;

u8 code smgduan[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 
					 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 
					 0x79, 0x71, 0x00};
void DigDisplay()
{
 	u8 i;
	for(i = 0;i < 9;i++)
	{
	 	switch(i)
		{
		 	case 

		}
	}
}

void main(void)
{
	while(1)
	{

	
}