/*************************************************************************
    > File Name:  sortCha.cpp
    > File Path:  /Users/liangbo/Downloads/sortCha.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool comp(char a,char b)
{
	if(a >= 'A'&& a <= 'Z')
	{
		if(!(b >= 'A'&&b<='Z'))
			return 1;	
	}
	/*else
		if(a>='a'&&b<='z')
		{
			if(b >= '0'&&b<='9')
				return 1;
		}
		else
		{
			if(a >='0'&&a<='9')
			{
				if(!((b>57&&b<65)||b<'0'))
					return 1;
			}
			else
			{
				if((b>57&&b<65)||b<'0')
					return 0;
				else
					return b < a;
			}
		}*/

}

int main(int argc, char const *argv[])
{
	char ch[] = "ASD5656fDRvg";
	int len = strlen(ch);
	sort(ch,ch+len,comp);
	printf("%s\n",ch);	
	return 0;
}







