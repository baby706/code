/*************************************************************************
    > File Name:  testStrlen,c
    > File Path:  /Users/liangbo/exam/testStrlen,c
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

int mystrlen(char* buf,int N)
{
	if(buf[0] == 0 || N == 0)	return 0;
	
	else
		if(N == 1)	return 1;
		
	int t = mystrlen(buf,N/2);
	cout<<"in func t is "<<t<<",N is "<<N<<endl;
	if(t < N/2)
	{
		return t;
	}
	else
	{
		return (t + mystrlen(buf+N/2,(N+1)/2));
	}
}

int main(int argc, char const *argv[])
{
	char buf[] = {'a','b','c','\0','e','f'};
	int k;
	k = mystrlen(buf,20);
	cout<<k<<endl;

	return 0;
}






