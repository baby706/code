#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "color.h"

struct tm lifetime;

void heart()
{
	RED;
	printf("\n\n         ❤❤❤            ");
	END;
}

int main(int argc, char const *argv[])
{
	int i;

	time_t start, end, day;
	lifetime.tm_year = (2070 - 1900);
	lifetime.tm_mon = 7;
	lifetime.tm_mday = 25;
		
		
	while(1)
	{
		time(&start);

		//lifetime.tm_hour = localtime(&start)->tm_hour;
		//lifetime.tm_min = localtime(&start)->tm_min;
		//lifetime.tm_sec = localtime(&start)->tm_sec;
		end = mktime(&lifetime);
		double cost;
		
		cost = difftime(end, start);
		day = cost/24/60/60;

		system("clear");
		YELLOW;
		printf("   **************************************  生命日历  ****************************************\n");
		END;
		

		heart();
		GREEN;
		printf("    现在时间是：");
		fflush(stdout);
		system("date");
		END;


		heart();
		PURPLE
		printf("               你的生命还剩下%ld%%\n", 100*day/80/365);
		END


		heart();
		PURPLE
		printf("               你的生命还剩下%ld年\n", day/365);
		END


		heart();
		PURPLE
		printf("               你的生命还剩下%ld月\n", day/30);
		END


		heart();
		PURPLE
		printf("               你的生命还剩下%ld周\n", day/7);
		END

		heart();
		PURPLE
		printf("               你的生命还剩下%ld天\n", day);
		END


		heart();
		PURPLE
		printf("               你的生命还剩下%ld小时\n", time(&start)/3600);
		END

		heart();
		PURPLE
		printf("               你的生命还剩下%ld分\n", time(&start)/60);
		END

		heart();
		PURPLE
		printf("               你的生命还剩下%.0f秒\n\n\n", cost);
		END


		YELLOW;
		printf("   ******************************  ");
		fflush(stdout);
		END;
		RED;
		printf("不要让你的光阴，白白虚度！");
		END;
		YELLOW;
		printf("  ******************************  ");
		fflush(stdout);
		END;

		sleep(1);


	}
	return 0;
}