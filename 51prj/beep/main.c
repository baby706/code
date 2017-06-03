#include "reg52.h"
#include "intrins.h"
#define TIME 60000

sbit beep = P1^5;
sbit led = P2;

typedef unsigned char u8;
typedef unsigned int u16;


void delay(u16 i)
{
	u16 j = i;
	while(i--);
	
}
    
void main(void)
{
	led = 0xfe;
	while(1)
	{

	 	beep = ~beep;
		led = _crol_(led,1);
		delay(TIME);

	}	 	
}