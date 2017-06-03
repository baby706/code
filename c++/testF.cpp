/*************************************************************************
    > File Name:  testF.cpp
    > File Path:  /Users/liangbo/Code/testF.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class base
{
private:
	int i,j;
public:
	base(int a):i(j),j(a){}
	int getI(){return i;}
	int getJ(){return j;}
};

int main(int argc, char const *argv[])
{
	base obj(98);
	cout<<obj.getI()<<" "<<obj.getJ()<<endl;
	cout<<"hello world!"<<endl;
	return 0;
}







