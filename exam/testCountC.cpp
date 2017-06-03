/*************************************************************************
    > File Name:  testCountC.cpp
    > File Path:  /Users/liangbo/exam/testCountC.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;
void countC(char* src)
{
	int i;
	char his[256] = "\0";
	while(*src != '\0')
	{
		his[*src++]++;
	}
	for(i = 0;i < 256;i++)
	{
		if(his[i])
			printf("%c:%d ",i,his[i] );
	}
	printf("\n");

}

int main(int argc, char const *argv[])
{
	char ch[] = "dfjdsjsdf234dffjelds";
	countC(ch);

	return 0;
}







