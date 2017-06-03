#include "reg52.h"
#include "intrins.h"

typedef unsigned char u8;
typedef unsigned int u16;

sbit LSA = P2^2;
sbit LSB = P2^3;
sbit LSC = P2^4;

u8 code smgduan[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71, 0x00};
int j = 0;
int m = 10000;
void delay(int i)
{
	while(i--);
}

void DigDisplay()
{
	u8 j;
 	while(1)
	{	for(j = 0;j < 8;j++)
		{
			switch(j)
			{
				case 7:
					LSA = 0;
					LSB = 0;
					LSC = 0;
					break;
				case 6:
					LSA = 1;
					LSB = 0;
					LSC = 0;
					break;
				case 5:
					LSA = 0;
					LSB = 1;
					LSC = 0;
					break;
				case 4:
					LSA = 1;
					LSB = 1;
					LSC = 0;
					break;
				case 3:
					LSA = 0;
					LSB = 0;
					LSC = 1;
					break;
				case 2:
					LSA = 1;
					LSB = 0;
					LSC = 1;
					break;
				case 1:
					LSA = 0;
					LSB = 1;
					LSC = 1;
					break;
				case 0:
					LSA = 1;
					LSB = 1;
					LSC = 1;
				default:
					break;
			}
		P0 = smgduan[j];
		delay(m--);	
		P0 = 0X00;	
		}
	}	 
}
void main()
{	
	DigDisplay();
	
}