/*************************************************************************
    > File Name:  testXigou.cpp
    > File Path:  /Users/liangbo/Code/testXigou.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string.h>
using namespace std;

class CDemo
{
public:
	CDemo():str(NULL){};
	CDemo(const CDemo& cd)
	{
		this->str = new char[strlen(cd.str)+1];
		strcpy(str,cd.str);
	}
	~CDemo()
	{
		if(str) 
		{
			static int i = 0;
			cout<<"&CDemo"<<i++<<"="<<(int*)this<<",     str="<<(int*)str<<endl;
			delete[] str;
		}
	};
	char* str;
};

int main(int argc, char const *argv[])
{
	CDemo d1;
	d1.str = new char[32];
	strcpy(d1.str,"trend micro");
	vector<CDemo>* a1 = new vector<CDemo>();
	cout<<"a1     ="<<a1<<endl;
	a1->push_back(d1);      //当类对象是函数的形参时，会调用拷贝构造函数
	delete a1;

	return 0;
}







