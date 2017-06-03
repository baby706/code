/*************************************************************************
    > File Name:  testSpiral.cpp
    > File Path:  /Users/liangbo/exam/testSpiral.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <unistd.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define abs(a) ((a)>0?(a):(-a))

using namespace std;

int foo(int x,int y)
{
	int t = max(abs(x),abs(y));
	int u = t + t;
	int v = u - 1;
	v = v * v + u;
	if(x == -t)
		v += u + t - y;
	else if(y == -t)
		v += 3 * u + x - t;
	else if( y == t)
		v += t - x;
	else
		v += y - t;
	return v;

}

int main(int argc, char const *argv[])
{
	int x, y;
	for(y=-4;y<=4;y++)
	{
		for(x=-4;x<=4;x++,sleep(1))
		{
			printf("%5d",foo(x,y));
			fflush(stdout);
		}
		printf("\n");
	}
	while(scanf("%d%d",&x,&y) == 2)
		printf("%d\n",foo(x,y) );
	return 0;
}







