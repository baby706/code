/*************************************************************************
    > File Name:  tetS.cpp
    > File Path:  /Users/liangbo/exam/tetS.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const char* const * keyword;      //keyword is a second pointer
	const char* p = "hello world";	  
	keyword = &p;
	cout<<p<<endl<<*keyword<<endl;
	return 0;
}







