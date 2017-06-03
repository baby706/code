/*************************************************************************
    > File Name:  testPointer.cpp
    > File Path:  /Users/liangbo/Desktop/mianshi/testPointer.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>

using namespace std;

void f(int *ip) 
{ 
  static int dummy = 5; 
  ip = &dummy;
  cout<<&ip<<endl;
}
  

int main(int argc, char const *argv[])
{
  int a = 5;
	int *ip =&a ; 
  f(ip); 
  cout<<ip<<endl;
	return 0;
}
