#include "temp.h"

void Delaylms(uint y)
{
	uint x;
	for(;y>0;y--)
	{
		for(x=110;x>0;x--);
	}
}

uchar Ds18b20Init()
{
	uchar i = 0;
	DSPORT = 0;
	i = 70;
	while(i--);
	DSPORT = 1;
	i = 0;
	while(DSPORT)
	{
		Delaylms(1);
		i++;
		if(i>5)
		{
			return 0;
		}
	}
	return 1;

}

void Ds18b20WriteByte(uchar dat)
{
	uchar i, j;
	for(j = 0;j<8;j++)
	{
		DSPORT = 0;
		i++;
		DSPORT = dat & 0x01;
		while(i--);
		DSPORT = 1;
		dat>>=1;
	}
}

uchar Ds18b20ReadByte()
{
	uint i, j;
	uchar bi, byte;
	for(j=8;j>0;j--)
	{
		DSPORT = 0;
		i++;
		DSPORT = 1;
		i++;
		i++;

	}
}