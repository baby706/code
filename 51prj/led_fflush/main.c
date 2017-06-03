#include "reg52.h"
#include "intrins.h"

#define led P2

typedef unsigned char u8;
typedef unsigned int u16;


void delay(u16 i)
{
	u16 j = i;
	while(i--);
	
}
 int TIME = 60000;
void main(void)
{	 	while(1)
{
	u8 i;
	led = 0xfe;			 // 11111110

	for(i = 0;i < 7;i++)
	{	
	
		delay(TIME);
		led = _crol_(led,1);	
	}
		if(TIME > 3000)
	  		TIME -= 1000;
	for(i = 0;i < 7;i++)
	{	
		
		delay(TIME);
		led = _cror_(led,1);	
	}		 

	}
}