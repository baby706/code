/*
 *    中文测试
 *            */

#include <stdio.h>

int main(void)
{
	int count = 101;
	int x,y,z;
	for (x = 1; x < count; ++x)
		for(y = 1;y<count;y++)
			for( z = 1;z<count;z++)
			
				if((x + y + z == 100) && (5*x + 3*y + z/3) == 100 && (z%3 == 0))
					printf("%d %d %d\n",x,y,z );

	return 0;

}